"""
Creates "combine datacards" using hist.Hist templates, and
sets up data-driven QCD background estimate ('rhalphabet' method)

Adapted from
    https://github.com/rkansal47/HHbbVV/blob/main/src/HHbbVV/postprocessing/CreateDatacard.py
    https://github.com/jennetd/vbf-hbb-fits/blob/master/hbb-unblind-ewkz/make_cards.py
    https://github.com/LPC-HH/combine-hh/blob/master/create_datacard.py
    https://github.com/nsmith-/rhalphalib/blob/master/tests/test_rhalphalib.py
    https://github.com/farakiko/boostedhiggs/blob/main/combine/create_datacard.py

Author: Raghav Kansal, Yuzhe Zhao
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
parser.add_argument("--cards-dir", default="/home/pku/zhaoyz/Higgs/boostedHWW/combine/cards/", type=str, help="output card directory")
parser.add_argument("--model-name", default="HWWfhModel", type=str, help="output model name")
parser.add_argument("--mcstats-threshold", default=100, type=float, help="mcstats threshold n_eff")
parser.add_argument("--epsilon", default=1e-3, type=float, help="epsilon to avoid numerical errs")
parser.add_argument(
    "--scale-templates", default=None, type=float, help="scale all templates for bias tests"
)
parser.add_argument(
    "--min-qcd-val", default=1e-4, type=float, help="clip the pass QCD to above a minimum value"
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
    # "pdf_gg": Syst(prior="lnN", samples=["Top"], value=1.042),
    # "pdf_qqbar": Syst(prior="lnN", samples=["Top"], value=1.027),
    # "pdf_Higgs_ggF": Syst(prior="lnN", samples=sig_keys, value=1.030),
    # # # TODO: add these for other Higgs production channel
    # "QCDscale_ttbar": Syst(
    #     prior="lnN",
    #     samples=["Top"],
    #     value=1.03,
    #     value_down=0.978
    #     # diff_samples=True,
    # ),
    # "QCDscale_qqHH": Syst(
    #     prior="lnN", samples=sig_keys, value=1.0003, value_down=0.9996
    # ),
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
    # all SRs and CRs
    regions : List[str] = ["SR1a","SR1b","CR1","SR2a","SR2b","CR2"]
    regions_blinded = [region + "Blinded" for region in regions]
    regions = regions +  regions_blinded #only use blinded results now
    cur_dir = os.getcwd()
    print("current dir = ",cur_dir)
    with open(f"../../postprocessing/templates/25Jan2024/hists_templates_run2.pkl", "rb") as f:
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

        # pass region = SR1a, SR1b, SR2a, SR2b, SR3a, SR3b, and same with "Blinded" suffix
        pass_region = (region.endswith("a") or region.endswith("b") or "aBlinded" in region or "bBlinded" in region)
        region_noblinded = region.split("Blinded")[0]
        logging.info("starting region: %s" % region)
        ch = rl.Channel(region.replace("_", "")) 
        print(region.replace("_", ""))
        model.addChannel(ch)

        for sample_name, card_name in mc_samples.items():
            # don't add signals in fail regions
            if sample_name in sig_keys:
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
                region_name = region_noblinded
                stats_sample_name = f"{CMS_PARAMS_LABEL}_{region_name}_{card_name}"
                sample.autoMCStats(
                    sample_name=stats_sample_name,
                    # this function uses a different threshold convention from combine
                    threshold=np.sqrt(1 / args.mcstats_threshold),
                    epsilon=args.epsilon,
                )

            # rate systematics
            for skey, syst in nuisance_params.items():
                # pass
                # continue #TODO: to be fixed
                if sample_name not in syst.samples or (not pass_region and syst.pass_only):
                    continue

                logging.info(f"Getting {skey} rate")

                param = nuisance_params_dict[skey] #rl.NuisanceParameter object

                val, val_down = syst.value, syst.value_down
                if syst.diff_regions:
                    region_name = region_noblinded 
                    val = val[region_name]
                    val_down = val_down[region_name] if val_down is not None else val_down
                if syst.diff_samples:
                    val = val[sample_name]
                    val_down = val_down[sample_name] if val_down is not None else val_down

                sample.setParamEffect(param, val, effect_down=val_down)

            ch.addSample(sample)

        if bblite and args.mcstats:
            # pass
            # tie MC stats parameters together in blinded and "unblinded" region in nonresonant
            channel_name = region_noblinded 
            ch.autoMCStats(
                channel_name=f"{CMS_PARAMS_LABEL}_{channel_name}",
                threshold=args.mcstats_threshold,
                epsilon=args.epsilon,
            )

        # data observed
        ch.setObservation(region_templates["data", :])

def alphabet_fit(
    model: rl.Model,
    shape_vars: List[ShapeVar],
    templates_summed: Dict,
    scale: float = None,
    min_qcd_val: float = None,
):   
    # using SR1a, SR1b, CR1, SR2a, SR2b, CR2, SR3a, SR3b, CR3 below:
    shape_var = shape_vars[0]
    m_obs = rl.Observable(shape_var.name, shape_var.bins)
    
    qcd_eff_1a = (
        templates_summed[f"SR1a"]["QCD", :].sum().value
        / templates_summed[f"CR1"]["QCD", :].sum().value
    )
    qcd_eff_1b = (
        templates_summed[f"SR1b"]["QCD", :].sum().value
        / templates_summed[f"CR1"]["QCD", :].sum().value
    )
    qcd_eff_2a = (
        templates_summed[f"SR2a"]["QCD", :].sum().value
        / templates_summed[f"CR2"]["QCD", :].sum().value
    )
    qcd_eff_2b = (
        templates_summed[f"SR2b"]["QCD", :].sum().value
        / templates_summed[f"CR2"]["QCD", :].sum().value
    )
    
    # initialize transfer factor, value here won't influence final results
    # each SR should use one polynomial
    
    # tf_dataResidual_1a = rl.BasisPoly(
    #     f"{CMS_PARAMS_LABEL}_tf_dataResidual_1a",
    #     (shape_var.order,),
    #     [shape_var.name],
    #     basis="Bernstein",
    #     limits=(-20, 20),
    #     square_params=True, 
    # ) 
    # tf_dataResidual_1b = rl.BasisPoly(
    #     f"{CMS_PARAMS_LABEL}_tf_dataResidual_1b",
    #     (shape_var.order,),
    #     [shape_var.name],
    #     basis="Bernstein",
    #     limits=(-20, 20),
    #     square_params=True, 
    # ) 
    # tf_dataResidual_2a = rl.BasisPoly(
    #     f"{CMS_PARAMS_LABEL}_tf_dataResidual_2a",
    #     (shape_var.order,),
    #     [shape_var.name],
    #     basis="Bernstein",
    #     limits=(-20, 20),
    #     square_params=True, 
    # ) 
    # tf_dataResidual_2b = rl.BasisPoly(
    #     f"{CMS_PARAMS_LABEL}_tf_dataResidual_2b",
    #     (shape_var.order,),
    #     [shape_var.name],
    #     basis="Bernstein",
    #     limits=(-20, 20),
    #     square_params=True, 
    # ) 
    
    tf_dataResidual_a = rl.BasisPoly(
        f"{CMS_PARAMS_LABEL}_tf_dataResidual_a",
        (shape_var.order,),
        [shape_var.name],
        basis="Bernstein",
        limits=(-20, 20),
        square_params=True, 
    )
    tf_dataResidual_b = rl.BasisPoly(
        f"{CMS_PARAMS_LABEL}_tf_dataResidual_b",
        (shape_var.order,),
        [shape_var.name],
        basis="Bernstein",
        limits=(-20, 20),
        square_params=True, 
    )  
    
    # set TF parameters for each pass region(6 SRs)
    # tf_dataResidual_params_1a = tf_dataResidual_1a(shape_var.scaled)
    # tf_dataResidual_params_1b = tf_dataResidual_1b(shape_var.scaled)
    # tf_dataResidual_params_2a = tf_dataResidual_2a(shape_var.scaled)
    # tf_dataResidual_params_2b = tf_dataResidual_2b(shape_var.scaled)
    
    tf_dataResidual_params_a = tf_dataResidual_a(shape_var.scaled)
    tf_dataResidual_params_b = tf_dataResidual_b(shape_var.scaled)

    tf_params_pass_1a = qcd_eff_1a * tf_dataResidual_params_a  # scale params initially by qcd eff
    tf_params_pass_1b = qcd_eff_1b * tf_dataResidual_params_b  # scale params initially by qcd eff
    tf_params_pass_2a = qcd_eff_2a * tf_dataResidual_params_a  # scale params initially by qcd eff
    tf_params_pass_2b = qcd_eff_2b * tf_dataResidual_params_b  # scale params initially by qcd eff
    
    # tf_params_pass_1a = qcd_eff_1a * tf_dataResidual_params_1a  # scale params initially by qcd eff
    # tf_params_pass_1b = qcd_eff_1b * tf_dataResidual_params_1b  # scale params initially by qcd eff
    
    # tf_params_pass_2a = qcd_eff_2a * tf_dataResidual_params_2a  # scale params initially by qcd eff
    # tf_params_pass_2b = qcd_eff_2b * tf_dataResidual_params_2b  # scale params initially by qcd eff
        
    #set QCD parameters for 3 CRs
    qcd_params1 = np.array(
        [
            rl.IndependentParameter(f"{CMS_PARAMS_LABEL}_tf_dataResidual_CR1_Bin{i}", 0)
            for i in range(m_obs.nbins)
        ]
    )
    qcd_params2 = np.array(
        [
            rl.IndependentParameter(f"{CMS_PARAMS_LABEL}_tf_dataResidual_CR2_Bin{i}", 0)
            for i in range(m_obs.nbins)
        ]
    )
    
    for blind_str in ["", "Blinded"]:
        # for blind_str in ["Blinded"]:
        passChName1a = f"SR1a{blind_str}".replace("_", "")
        passChName1b = f"SR1b{blind_str}".replace("_", "")
        failChName1 = f"CR1{blind_str}".replace("_", "")
        
        passChName2a = f"SR2a{blind_str}".replace("_", "")
        passChName2b = f"SR2b{blind_str}".replace("_", "")
        failChName2 = f"CR2{blind_str}".replace("_", "")
        
        #Get pass and fail channel information
        failCh1 = model[failChName1]
        passCh1a = model[passChName1a]
        passCh1b = model[passChName1b]
        
        failCh2 = model[failChName2]
        passCh2a = model[passChName2a]
        passCh2b = model[passChName2b]
        
        # sideband fail
        # was integer, and numpy complained about subtracting float from it
        initial_qcd1 = failCh1.getObservation().astype(float)
        initial_qcd2 = failCh2.getObservation().astype(float)
                
        for sample in failCh1:
            if sample.sampletype == rl.Sample.SIGNAL:
                continue
            logging.debug("subtracting %s from qcd" % sample._name)
            initial_qcd1 -= sample.getExpectation(nominal=True)
            
        for sample in failCh2:
            if sample.sampletype == rl.Sample.SIGNAL:
                continue
            logging.debug("subtracting %s from qcd" % sample._name)
            initial_qcd2 -= sample.getExpectation(nominal=True)
            
        if np.any(initial_qcd1 < 0.0):
            initial_qcd1[np.where(initial_qcd1 < 0)] = 0
        if np.any(initial_qcd2 < 0.0):
            initial_qcd2[np.where(initial_qcd2 < 0)] = 0
        
        # idea here is that the error should be 1/sqrt(N), so parametrizing it as (1 + 1/sqrt(N))^qcdparams
        # will result in qcdparams errors ~±1
        # but because qcd is poorly modelled we're scaling sigma scale

        sigmascale = 10  # to scale the deviation from initial, value >100 can make SR2a/SR2b/CR2 fit work
        if scale is not None:
            sigmascale *= scale

        scaled_params1 = (
            initial_qcd1 * (1 + sigmascale / np.maximum(1.0, np.sqrt(initial_qcd1))) ** qcd_params1
        )
        
        sigmascale = 500        
        scaled_params2 = (
            initial_qcd2 * (1 + sigmascale / np.maximum(1.0, np.sqrt(initial_qcd2))) ** qcd_params2
        )

        # add samples
        
        #Set fail region below
        fail_qcd1 = rl.ParametericSample(
            f"{failChName1}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            m_obs,
            scaled_params1,
        )
        failCh1.addSample(fail_qcd1)
        
        fail_qcd2 = rl.ParametericSample(
            f"{failChName2}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            m_obs,
            scaled_params2,
        )
        failCh2.addSample(fail_qcd2)
                
        #Set pass region below
        pass_qcd_1a = rl.TransferFactorSample(
            f"{passChName1a}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            tf_params_pass_1a,
            fail_qcd1,
            min_val=min_qcd_val,
        )
        
        passCh1a.addSample(pass_qcd_1a)      
          
        pass_qcd_1b = rl.TransferFactorSample(
            f"{passChName1b}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            tf_params_pass_1b,
            fail_qcd1,
            min_val=min_qcd_val,
        )        
        passCh1b.addSample(pass_qcd_1b)
        
        pass_qcd_2a = rl.TransferFactorSample(
            f"{passChName2a}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            tf_params_pass_2a,
            fail_qcd2,
            min_val=min_qcd_val,
        )
        
        passCh2a.addSample(pass_qcd_2a)      
          
        pass_qcd_2b = rl.TransferFactorSample(
            f"{passChName2b}_{CMS_PARAMS_LABEL}_qcd_datadriven",
            rl.Sample.BACKGROUND,
            tf_params_pass_2b,
            fail_qcd2,
            min_val=min_qcd_val,
        )        
        passCh2b.addSample(pass_qcd_2b)
main(args)
