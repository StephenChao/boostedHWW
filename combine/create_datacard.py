"""
Creates "combine datacards" using hist.Hist templates, and
sets up data-driven QCD background estimate ('rhalphabet' method)

Adapted from
    https://github.com/rkansal47/HHbbVV/blob/main/src/HHbbVV/postprocessing/CreateDatacard.py
    https://github.com/jennetd/vbf-hbb-fits/blob/master/hbb-unblind-ewkz/make_cards.py
    https://github.com/LPC-HH/combine-hh/blob/master/create_datacard.py
    https://github.com/nsmith-/rhalphalib/blob/master/tests/test_rhalphalib.py
    https://github.com/farakiko/boostedhiggs/blob/main/combine/create_datacard.py

Author: Yuzhe Zhao
"""

from __future__ import division, print_function

import argparse
import json
import logging
import math
import pickle as pkl
import warnings

import numpy as np
import pandas as pd
import os, sys
# sys.path.append("/ospool/cms-user/yuzhe/BoostedHWW/rhaphabetlib/CMSSW_11_3_4/src/rhalphalib")
import rhalphalib as rl
# import hist
from hist import Hist

from typing import Dict, List, Tuple, Union
from dataclasses import dataclass, field

from collections import OrderedDict
from utils import blindBins, get_template, labels, samples, shape_to_num, sigs 

rl.ParametericSample.PreferRooParametricHist = False
logging.basicConfig(level=logging.INFO)
import argparse

warnings.filterwarnings("ignore", message="Found duplicate branch ")
pd.set_option("mode.chained_assignment", None)


CMS_PARAMS_LABEL = "CMS_HWW_boosted"
years = ["2016APV", "2016", "2017", "2018"]

LUMI = {  # in pb^-1
    "2016": 16830.0,
    "2016APV": 19500.0,
    "2017": 41480.0,
    "2018": 59830.0,
}
parser = argparse.ArgumentParser()

def add_bool_arg(parser, name, help, default=False, no_name=None):
    """Add a boolean command line argument for argparse"""
    varname = "_".join(name.split("-"))  # change hyphens to underscores
    group = parser.add_mutually_exclusive_group(required=False)
    group.add_argument("--" + name, dest=varname, action="store_true", help=help)
    if no_name is None:
        no_name = "no-" + name
        no_help = "don't " + help
    else:
        no_help = help
    group.add_argument("--" + no_name, dest=varname, action="store_false", help=no_help)
    parser.set_defaults(**{varname: default})
parser.add_argument(
    "--nTF",
    default=None,
    nargs="*",
    type=int,
    help="order of polynomial for TF in [dim 1, dim 2] = [mH(bb), -] for nonresonant or [mY, mX] for resonant."
    "Default is 0 for nonresonant and (1, 2) for resonant.",
)
parser.add_argument("--cards-dir", default="/ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/cards/", type=str, help="output card directory")
parser.add_argument("--model-name", default="HWWfhModel", type=str, help="output model name")
parser.add_argument("--mcstats-threshold", default=100, type=float, help="mcstats threshold n_eff")
parser.add_argument("--epsilon", default=1e-3, type=float, help="epsilon to avoid numerical errs")
parser.add_argument(
    "--scale-templates", default=None, type=float, help="scale all templates for bias tests"
)
parser.add_argument(
    "--min-qcd-val", default=1e-3, type=float, help="clip the pass QCD to above a minimum value"
)
parser.add_argument(
    "--year",
    help="year",
    type=str,
    default="all",
    choices=["2016APV", "2016", "2017", "2018", "all"],
)
add_bool_arg(parser, "mcstats", "add mc stats nuisances", default=True)
add_bool_arg(parser, "bblite", "use barlow-beeston-lite method", default=True)

args = parser.parse_args()
if args.year != "all":
    years = [args.year]
    full_lumi = LUMI[args.year]
else:
    full_lumi = np.sum(list(LUMI.values()))
    
if args.nTF is None:
    args.nTF = [0] # TODO: order to be decided
     
mc_samples = OrderedDict(
    [
        ("Top", "ttbar_st"),
        ("WJets", "wjets"),
        # ("Diboson", "diboson"),
        ("Rest", "rest"),
    ]
)
bg_keys = list(mc_samples.keys())
sig_keys = [
    "ggF",
    "VBF",
    "VH",
    "ttH",
]
for key in sig_keys:
    mc_samples[key] = key
        
all_mc = list(mc_samples.keys())
logging.info("all MC = %s" % all_mc)
 


@dataclass
class ShapeVar:
    """For storing and calculating info about variables used in fit"""

    name:str = None
    bins:np.ndarray = None  # bin edges
    order:int = None  # TF order, to be decided

    def __post_init__(self):
        # use bin centers for polynomial fit
        self.pts = self.bins[:-1] + 0.5 * np.diff(self.bins)
        # scale to be between [0, 1]
        self.scaled = (self.pts - self.bins[0]) / (self.bins[-1] - self.bins[0])

@dataclass
class Syst:
    """For storing info about systematics"""

    name: str = None
    prior: str = None  # e.g. "lnN", "shape", etc.

    # float if same value in all regions/samples, dictionary of values per region/sample if not
    # if both, region should be the higher level of the dictionary
    value: Union[float, Dict[str, float]] = None
    value_down: Union[float, Dict[str, float]] = None  # if None assumes symmetric effect
    # if the value is different for different regions or samples
    diff_regions: bool = False
    diff_samples: bool = False

    samples: List[str] = None  # samples affected by it
    # in case of uncorrelated unc., which years to split into
    uncorr_years: List[str] = field(default_factory=lambda: years)
    pass_only: bool = False  # is it applied only in the pass regions

    def __post_init__(self):
        if isinstance(self.value, dict) and not (self.diff_regions or self.diff_samples):
            raise RuntimeError(
                f"Value for systematic is a dictionary but neither ``diff_regions`` nor ``diff_samples`` is set."
            )
       

# dictionary of nuisance params -> (modifier, samples affected by it, value)
nuisance_params = {
    # https://gitlab.cern.ch/hh/naming-conventions#experimental-uncertainties
    # "lumi_13TeV_2016": Syst(prior="lnN", samples=all_mc, value=1.01 ** ((LUMI["2016"] + LUMI["2016APV"]) / full_lumi)),
    # "lumi_13TeV_2017": Syst(prior="lnN", samples=all_mc, value=1.02 ** (LUMI["2017"] / full_lumi)),
    # "lumi_13TeV_2018": Syst(prior="lnN", samples=all_mc, value=1.015 ** (LUMI["2018"] / full_lumi)),
    "lumi_13TeV_correlated": Syst(
        prior="lnN",
        samples=all_mc,
        value=(
            (1.006 ** ((LUMI["2016"] + LUMI["2016APV"]) / full_lumi))
            * (1.009 ** (LUMI["2017"] / full_lumi))
            * (1.02 ** (LUMI["2018"] / full_lumi))
        ),
    ),
    # "lumi_13TeV_1718": Syst(
    #     prior="lnN",
    #     samples=all_mc,
    #     value=((1.006 ** (LUMI["2017"] / full_lumi)) * (1.002 ** (LUMI["2018"] / full_lumi))),
    # ),
    # https://gitlab.cern.ch/hh/naming-conventions#theory-uncertainties
    "BR_hww": Syst(prior="lnN", samples=sig_keys, value=1.0153, value_down=0.9848),
    "pdf_gg": Syst(prior="lnN", samples=["TT"], value=1.042),
    "pdf_qqbar": Syst(prior="lnN", samples=["ST"], value=1.027),
    "pdf_Higgs_ggF": Syst(prior="lnN", samples=sig_keys, value=1.030),
    # TODO: add these for other Higgs production channel
    "QCDscale_ttbar": Syst(
        prior="lnN",
        samples=["ST", "TT"],
        value={"ST": 1.03, "TT": 1.024},
        value_down={"ST": 0.978, "TT": 0.965},
        diff_samples=True,
    ),
    "QCDscale_qqHH": Syst(
        prior="lnN", samples=sig_keys, value=1.0003, value_down=0.9996
    ),
    # "alpha_s": for single Higgs backgrounds
    # value will be added in from the systematics JSON
    # f"{CMS_PARAMS_LABEL}_triggerEffSF_uncorrelated": Syst(
    #     prior="lnN", samples=all_mc, diff_regions=False
    # ),
}

# for sig_key in sig_keys:
#     # values will be added in from the systematics JSON
#     nuisance_params[f"{CMS_PARAMS_LABEL}_lp_sf_{mc_samples[sig_key]}"] = Syst(
#         prior="lnN", samples=[sig_key]
#     )

if args.year != "all":
    # remove other years' keys
    for key in [
        "lumi_13TeV_2016",
        "lumi_13TeV_2017",
        "lumi_13TeV_2018",
        "lumi_13TeV_correlated",
        "lumi_13TeV_1718",
    ]:
        if key != f"lumi_13TeV_{args.year}":
            del nuisance_params[key]

nuisance_params_dict = {
    param: rl.NuisanceParameter(param, syst.prior) for param, syst in nuisance_params.items()
}

# dictionary of correlated shape systematics: name in templates -> name in cards, etc.
corr_year_shape_systs = {
    "FSRPartonShower": Syst(name="ps_fsr", prior="shape", samples=sig_keys),
    "ISRPartonShower": Syst(name="ps_isr", prior="shape", samples=sig_keys),
    # TODO: should we be applying QCDscale for "others" process?
    # https://github.com/LPC-HH/HHLooper/blob/master/python/prepare_card_SR_final.py#L290
    # "QCDscale": Syst(
    #     name=f"{CMS_PARAMS_LABEL}_ggHHQCDacc", prior="shape", samples=nonres_sig_keys_ggf
    # ),
    # "PDFalphaS": Syst(
    #     name=f"{CMS_PARAMS_LABEL}_ggHHPDFacc", prior="shape", samples=nonres_sig_keys_ggf
    # ),
    # TODO: separate into individual
    "JES": Syst(name="CMS_scale_j", prior="shape", samples=all_mc),
    "txbb": Syst(
        name=f"{CMS_PARAMS_LABEL}_PNetHbbScaleFactors_correlated",
        prior="shape",
        samples=sig_keys,
        pass_only=True,
    ),
    # "top_pt": Syst(name="CMS_top_pT_reweighting", prior="shape", samples=["TT"])  # TODO
}

uncorr_year_shape_systs = {
    "pileup": Syst(name="CMS_pileup", prior="shape", samples=all_mc),
    # TODO: add 2016APV template into this
    # "L1EcalPrefiring": Syst(
    #     name="CMS_l1_ecal_prefiring", prior="shape", samples=all_mc, uncorr_years=["2016", "2017"]
    # ),
    "JER": Syst(name="CMS_res_j", prior="shape", samples=all_mc),
    "JMS": Syst(name=f"{CMS_PARAMS_LABEL}_jms", prior="shape", samples=all_mc),
    "JMR": Syst(name=f"{CMS_PARAMS_LABEL}_jmr", prior="shape", samples=all_mc),
}

shape_systs_dict = {}
for skey, syst in corr_year_shape_systs.items():
    shape_systs_dict[skey] = rl.NuisanceParameter(syst.name, "shape")
for skey, syst in uncorr_year_shape_systs.items():
    for year in years:
        if year in syst.uncorr_years:
            shape_systs_dict[f"{skey}_{year}"] = rl.NuisanceParameter(
                f"{syst.name}_{year}", "shape"
            )


def main(args):
    regions : List[str] = ["SR1a","CR1"] #for test
    # regions : List[str] = ["SR1a","SR1b","CR1","SR2a","SR2b","CR2","SR3a","SR3b","CR3"]
    regions_blinded = [region + "_blinded" for region in regions]
    regions = regions +  regions_blinded #only use blinded results now
    with open(f"/ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/templates/hists_templates_blinded.pkl", "rb") as f:
        hists_templates = pkl.load(f) #in Raghav's code, it's templates_summed and templates_dict
    
    model = rl.Model("HWWfullhad")
    # TODO: add uncertainties
    sample_templates: Hist = hists_templates[regions[0]]
    
    #MH_Reco for full-hadronic boosted HWW
    shape_vars = [
        ShapeVar(name=axis.name, bins=axis.edges, order=args.nTF[i])
        for i, axis in enumerate(sample_templates.axes[1:]) #should be [1:] for boosted HWW analysis, because the 1st axes is mass
    ]
    # logging.info("shape_var = ",shape_vars)
    print("shape_var[0] info",shape_vars[0].name,shape_vars[0].scaled,shape_vars[0].bins)
    fill_args = [
        model,
        regions,
        hists_templates,
        mc_samples,
        nuisance_params,
        nuisance_params_dict,
        #TODO: shape uncertainties to be added: JES, JER, JMS, JMR
        args.bblite,
    ]
    fit_args = [model, shape_vars, hists_templates, args.scale_templates, args.min_qcd_val]
    print("now order is",args.nTF[0])
    fill_regions(*fill_args)
    alphabet_fit(*fit_args)
    
    logging.info("rendering combine model")

    os.system(f"mkdir -p {args.cards_dir}")

    out_dir = (
        os.path.join(str(args.cards_dir), args.model_name)
        if args.model_name is not None
        else args.cards_dir
    )
    model.renderCombine(out_dir)

    with open(f"{out_dir}/model.pkl", "wb") as fout:
        pkl.dump(model, fout, 2)  # use python 2 compatible protocol
    
    

def fill_regions(
    model: rl.Model,
    regions: List[str],
    templates: Dict,
    mc_samples: Dict[str, str],
    nuisance_params: Dict[str, Syst],
    nuisance_params_dict: Dict[str, rl.NuisanceParameter],
    bblite:bool = True,
    #TODO: shape unc.
):
    """Fill samples per region including given rate, shape and mcstats systematics.
    Ties "blinded" and "nonblinded" mc stats parameters together.

    Args:
        model (rl.Model): rhalphalib model
        regions (List[str]): list of regions to fill
        templates_dict (Dict): dictionary of all templates
        templates_summed (Dict): dictionary of templates summed across years
        templates: the combination the above two options
        mc_samples (Dict[str, str]): dict of mc samples and their names in the given templates -> card names
        nuisance_params (Dict[str, Tuple]): dict of nuisance parameter names and tuple of their
          (modifier, samples affected by it, value)
        nuisance_params_dict (Dict[str, rl.NuisanceParameter]): dict of nuisance parameter names
          and NuisanceParameter object
        corr_year_shape_systs (Dict[str, Tuple]): dict of shape systs (correlated across years)
          and tuple of their (name in cards, samples affected by it)
        uncorr_year_shape_systs (Dict[str, Tuple]): dict of shape systs (unccorrelated across years)
          and tuple of their (name in cards, samples affected by it)
        shape_systs_dict (Dict[str, rl.NuisanceParameter]): dict of shape syst names and
          NuisanceParameter object
        pass_only (List[str]): list of systematics which are only applied in the pass region(s)
        bblite (bool): use Barlow-Beeston-lite method or not (single mcstats param across MC samples)
        mX_bin (int): if doing 2D fit (for resonant), which mX bin to be filled
    """

    for region in regions:
        region_templates = templates[region]

        # pass_region = region.startswith("pass")
        pass_region = (region.endswith("a") or region.endswith("b") or "a_" in region or "b_" in region)

        logging.info("starting region: %s" % region)
        # binstr = "" if mX_bin is None else f"mXbin{mX_bin}"
        # binstr = "MH_Reco"
        ch = rl.Channel(region.replace("_", "")) 
        print(region.replace("_", ""))
        # can't have '_'s in name
        # "MH_RecoSR1a"
        model.addChannel(ch)

        for sample_name, card_name in mc_samples.items():
            # don't add signals in fail regions
            # also skip resonant signals in pass blinded - they are ignored in the validation fits anyway
            if sample_name in sig_keys:
                # if not pass_region or (mX_bin is not None and region == "passBlinded"):
                if not pass_region:
                    #don't need to enter CR signal anyway
                    logging.info(f"\nSkipping {sample_name} in {region} region\n")
                    continue

            logging.info("get templates for: %s" % sample_name)

            sample_template = region_templates[sample_name,:]
            # sample_template = get_template(region_templates,sample_name)

            stype = rl.Sample.SIGNAL if sample_name in sig_keys else rl.Sample.BACKGROUND
            sample = rl.TemplateSample(ch.name + "_" + card_name, stype, sample_template)

            # # rate params per signal to freeze them for individual limits
            # if stype == rl.Sample.SIGNAL and len(sig_keys) > 1:
            #     srate = rate_params[sample_name]
            #     sample.setParamEffect(srate, 1 * srate)

            # nominal values, errors
            values_nominal = np.maximum(sample_template.values(), 0.0) #select value >= 0

            mask = values_nominal > 0
            errors_nominal = np.ones_like(values_nominal)
            errors_nominal[mask] = (
                1.0 + np.sqrt(sample_template.variances()[mask]) / values_nominal[mask]
            )

            logging.debug("nominal   : {nominal}".format(nominal=values_nominal))
            logging.debug("error     : {errors}".format(errors=errors_nominal))

            if not bblite and args.mcstats:
                # pass
                # set mc stat uncs
                logging.info("setting autoMCStats for %s in %s" % (sample_name, region))
                # tie MC stats parameters together in blinded and "unblinded" region in nonresonant
                region_name = region 
                stats_sample_name = f"{CMS_PARAMS_LABEL}_{region_name}_{card_name}"
                sample.autoMCStats(
                    sample_name=stats_sample_name,
                    # this function uses a different threshold convention from combine
                    threshold=np.sqrt(1 / args.mcstats_threshold),
                    epsilon=args.epsilon,
                )

            # rate systematics
            for skey, syst in nuisance_params.items():
                pass
                # continue #TODO: to be fixed
                # if sample_name not in syst.samples or (not pass_region and syst.pass_only):
                #     continue

                # logging.info(f"Getting {skey} rate")

                # param = nuisance_params_dict[skey] #rl.NuisanceParameter object

                # val, val_down = syst.value, syst.value_down
                # if syst.diff_regions:
                #     region_name = region 
                #     val = val[region_name]
                #     val_down = val_down[region_name] if val_down is not None else val_down
                # if syst.diff_samples:
                #     val = val[sample_name]
                #     val_down = val_down[sample_name] if val_down is not None else val_down

                # sample.setParamEffect(param, val, effect_down=val_down)

            ch.addSample(sample)

        if bblite and args.mcstats:
            pass
            # tie MC stats parameters together in blinded and "unblinded" region in nonresonant
            # channel_name = region 
            # ch.autoMCStats(
            #     channel_name=f"{CMS_PARAMS_LABEL}_{channel_name}",
            #     threshold=args.mcstats_threshold,
            #     epsilon=args.epsilon,
            # )

        # data observed
        ch.setObservation(region_templates["data", :])

def alphabet_fit(
    model: rl.Model,
    shape_vars: List[ShapeVar],
    templates_summed: Dict,
    scale: float = None,
    min_qcd_val: float = None,
):
    # shape_var = shape_vars[0]
    # m_obs = rl.Observable(shape_var.name, shape_var.bins)
    

    # # try doing multi-tfs for boosted HWW fh case, 6 tfs.
    # regions = {
    #     "CR1" :{"SRa": "SR1a"}, #for test
    #     # "CR1" :{"SRa": "SR1a","SRb":"SR1b"},
    #     # "CR2" :{"SRa": "SR2a","SRb":"SR2b"},
    #     # "CR3" :{"SRa": "SR3a","SRb":"SR3b"},
    #     }
    # # regions_blinded = { key_fail + "_blinded": {key_pass + "_blinded" : key_pass_ab + "_blinded" for key_pass , key_pass_ab in key_pass_dict.items()}  for key_fail , key_pass_dict in regions.items()}

    # for blind_str in [""]:
    #     # regions_blinded = regions
    # # for blind_str in ["","_blinded"]:
    #     for fail_region in regions:
    #     # for fail_region in regions_blinded:
    #         fail_region_name = fail_region + blind_str
    #         failChName = fail_region_name.replace("_","")
    #         # logging.info(
    #         # "setting transfer factor for pass region %s, fail region %s" % (passChName, failChName)
    #         # )
    #         failCh = model[failChName]
    #         logging.info("fail channel name is %s",failChName)
    #         # sideband fail
    #         # was integer, and numpy complained about subtracting float from it
    #         initial_qcd = failCh.getObservation().astype(float)
    #         for sample in failCh:
    #             if sample.sampletype == rl.Sample.SIGNAL:
    #                 continue
    #             logging.info("subtracting %s from qcd" % sample._name)
    #             initial_qcd -= sample.getExpectation(nominal=True)
    #         print("initial_qcd",initial_qcd) #for test
    #         if np.any(initial_qcd < 0.0):
    #             logging.warning(f"initial_qcd negative for some bins... {initial_qcd}")
    #             initial_qcd[initial_qcd < 0] = 0
    #             raise ValueError("initial_qcd negative for some bins..", initial_qcd)
    #         qcd_params = np.array(
    #                 [
    #                     rl.IndependentParameter(f"{CMS_PARAMS_LABEL}_tf_dataResidual_{fail_region_name}Bin{i}", 0)
    #                     for i in range(m_obs.nbins)
    #                 ]
    #             ) 
    #         # print("m_obs.nbins",m_obs.nbins)
    #         # idea here is that the error should be 1/sqrt(N), so parametrizing it as (1 + 1/sqrt(N))^qcdparams
    #         # will result in qcdparams errors ~±1
    #         # but because qcd is poorly modelled we're scaling sigma scale
            
    #         sigmascale = 10  # to scale the deviation from initial
    #         # if scale is not None:
    #         #     sigmascale *= scale
    #         scaled_params = (
    #             initial_qcd * (1 + sigmascale / np.maximum(1.0, np.sqrt(initial_qcd))) ** qcd_params
    #         )
    #         # add samples
    #         fail_qcd = rl.ParametericSample(
    #             f"{failChName}_{CMS_PARAMS_LABEL}_qcd_datadriven",
    #             rl.Sample.BACKGROUND,
    #             m_obs,
    #             scaled_params,
    #         )
    #         # print("scaled_params",scaled_params)
    #         failCh.addSample(fail_qcd) #won't influence the pass region
            
    #         for pass_region_ab in regions[fail_region]:
    #             pass_region_name = regions[fail_region][pass_region_ab] + blind_str
    #             # .replace("_blinded","")
    #             # fail_region_str = fail_region.replace("_blinded","")
    #             logging.info("now processing pass:%s fail:%s ",pass_region_name,fail_region_name)
    #             # QCD overall pass / fail efficiency
                
                
                
    #             qcd_eff = (templates_summed[fail_region_name]["QCD", :].sum().value 
    #                        / templates_summed[fail_region_name]["QCD", :].sum().value
    #                        )
                
                
    #             # print("qcd-eff is ",qcd_eff)
    #             tf_dataResidual = rl.BasisPoly(
    #             f"{CMS_PARAMS_LABEL}_tf_dataResidual_{pass_region_name}",
    #             (shape_var.order,),
    #             [shape_var.name],
    #             basis="Bernstein",
    #             limits=(-20, 20),
    #             # square_params=True,#unknown argument "square_params"
    #             )
                
    #             tf_dataResidual_params = tf_dataResidual(shape_var.scaled)
    #             tf_params_pass = qcd_eff * tf_dataResidual_params  # scale params initially by qcd eff
                
    #             passChName = pass_region_name.replace("_","")
    #             logging.info(
    #             "setting transfer factor for pass region %s, fail region %s" % (passChName, failChName)
    #             )
    #             passCh = model[passChName] #filled
    #             pass_qcd = rl.TransferFactorSample(
    #                 f"{passChName}_{CMS_PARAMS_LABEL}_qcd_datadriven",
    #                 rl.Sample.BACKGROUND,
    #                 tf_params_pass,
    #                 fail_qcd,
    #                 min_val=min_qcd_val,
    #             )
    #             passCh.addSample(pass_qcd)
    
    shape_var = shape_vars[0]
    m_obs = rl.Observable(shape_var.name, shape_var.bins)
    qcd_eff = (
        templates_summed[f"SR1a"]["QCD", :].sum().value
        / templates_summed[f"CR1"]["QCD", :].sum().value
    )
    # transfer factor
    tf_dataResidual = rl.BasisPoly(
        f"{CMS_PARAMS_LABEL}_tf_dataResidual",
        (shape_var.order,),
        [shape_var.name],
        basis="Bernstein",
        limits=(-20, 20),
        # square_params=True, 
    )
    tf_dataResidual_params = tf_dataResidual(shape_var.scaled)
    tf_params_pass = qcd_eff * tf_dataResidual_params  # scale params initially by qcd eff
    qcd_params = np.array(
        [
            rl.IndependentParameter(f"{CMS_PARAMS_LABEL}_tf_dataResidual_Bin{i}", 0)
            for i in range(m_obs.nbins)
        ]
    )
    for blind_str in ["", "blinded"]:
        # for blind_str in ["Blinded"]:
        passChName = f"SR1a{blind_str}".replace("_", "")
        failChName = f"CR1{blind_str}".replace("_", "")
        print("failChName",failChName)
        logging.info(
            "setting transfer factor for pass region %s, fail region %s" % (passChName, failChName)
        )
        failCh = model[failChName]
        passCh = model[passChName]

        # sideband fail
        # was integer, and numpy complained about subtracting float from it
        initial_qcd = failCh.getObservation().astype(float)
        for sample in failCh:
            if sample.sampletype == rl.Sample.SIGNAL:
                continue
            logging.debug("subtracting %s from qcd" % sample._name)
            initial_qcd -= sample.getExpectation(nominal=True)

        if np.any(initial_qcd < 0.0):
            raise ValueError("initial_qcd negative for some bins..", initial_qcd)

        # idea here is that the error should be 1/sqrt(N), so parametrizing it as (1 + 1/sqrt(N))^qcdparams
        # will result in qcdparams errors ~±1
        # but because qcd is poorly modelled we're scaling sigma scale

        sigmascale = 10  # to scale the deviation from initial
        if scale is not None:
            sigmascale *= scale

        scaled_params = (
            initial_qcd * (1 + sigmascale / np.maximum(1.0, np.sqrt(initial_qcd))) ** qcd_params
        )

        # add samples
        fail_qcd = rl.ParametericSample(
            f"{failChName}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            m_obs,
            scaled_params,
        )
        failCh.addSample(fail_qcd)

        pass_qcd = rl.TransferFactorSample(
            f"{passChName}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            tf_params_pass,
            fail_qcd,
            min_val=min_qcd_val,
        )
        passCh.addSample(pass_qcd)
        
main(args)
