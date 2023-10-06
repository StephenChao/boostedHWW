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
import rhalphalib as rl
from hist import Hist
import os, sys
from typing import Dict, List, Tuple, Union
from dataclasses import dataclass, field

from collections import OrderedDict
from utils import blindBins, get_template, labels, samples, shape_to_num, sigs, get_templates

rl.ParametericSample.PreferRooParametricHist = False
logging.basicConfig(level=logging.INFO)

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
args = parser.parse_args()
parser.add_argument(
    "--nTF",
    default=None,
    nargs="*",
    type=int,
    help="order of polynomial for TF in [dim 1, dim 2] = [mH(bb), -] for nonresonant or [mY, mX] for resonant."
    "Default is 0 for nonresonant and (1, 2) for resonant.",
)
parser.add_argument(
    "--scale-templates", default=None, type=float, help="scale all templates for bias tests"
)
parser.add_argument(
    "--min-qcd-val", default=1e-3, type=float, help="clip the pass QCD to above a minimum value"
)


if args.year != "all":
    years = [args.year]
    full_lumi = LUMI[args.year]
else:
    full_lumi = np.sum(list(LUMI.values()))
    
if args.nTF is None:
    args.nTF = [1, 2] if args.resonant else [0] # TODO: order to be decided
     
mc_samples = OrderedDict(
    [
        ("TT", "ttbar"),
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
 

@dataclass
class ShapeVar:
    """For storing and calculating info about variables used in fit"""

    name:  str = None
    bins:  np.ndarray = None  # bin edges
    order: int = None  # TF order, to be decided

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
    "lumi_13TeV_2016": Syst(prior="lnN", samples=all_mc, value=1.01 ** ((LUMI["2016"] + LUMI["2016APV"]) / full_lumi)),
    "lumi_13TeV_2017": Syst(prior="lnN", samples=all_mc, value=1.02 ** (LUMI["2017"] / full_lumi)),
    "lumi_13TeV_2018": Syst(prior="lnN", samples=all_mc, value=1.015 ** (LUMI["2018"] / full_lumi)),
    "lumi_13TeV_correlated": Syst(
        prior="lnN",
        samples=all_mc,
        value=(
            (1.006 ** ((LUMI["2016"] + LUMI["2016APV"]) / full_lumi))
            * (1.009 ** (LUMI["2017"] / full_lumi))
            * (1.02 ** (LUMI["2018"] / full_lumi))
        ),
    ),
    "lumi_13TeV_1718": Syst(
        prior="lnN",
        samples=all_mc,
        value=((1.006 ** (LUMI["2017"] / full_lumi)) * (1.002 ** (LUMI["2018"] / full_lumi))),
    ),
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
    f"{CMS_PARAMS_LABEL}_triggerEffSF_uncorrelated": Syst(
        prior="lnN", samples=all_mc, diff_regions=True
    ),
}

for sig_key in sig_keys:
    # values will be added in from the systematics JSON
    nuisance_params[f"{CMS_PARAMS_LABEL}_lp_sf_{mc_samples[sig_key]}"] = Syst(
        prior="lnN", samples=[sig_key]
    )

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
    "FSRPartonShower": Syst(name="ps_fsr", prior="shape", samples=nonres_sig_keys_ggf + ["V+Jets"]),
    "ISRPartonShower": Syst(name="ps_isr", prior="shape", samples=nonres_sig_keys_ggf + ["V+Jets"]),
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
    years = args.years.split(",")
    channels = args.channels.split(",")
    regions : List[str] = ["SR1a","SR1b","CR1","SR2a","SR2b","CR2","SR3a","SR3b","CR3"]
    with open(f"./templates/hists_templates.pkl", "rb") as f:
        hists_templates = pkl.load(f) #in Raghav's code, it's templates_summed and templates_dict
    model = rl.Model("HWWModel")
    # TODO: add uncertainties
    sample_templates: Hist = hists_templates[regions[0]]
    
    #MH_Reco for full-hadronic boosted HWW
    shape_vars = [
        ShapeVar(name=axis.name, bins=axis.edges, order=args.nTF[i])
        for i, axis in enumerate(sample_templates.axes[2:]) #should be [2:] for boosted HWW analysis
    ]

    fill_args = [
        model,
        regions,
        hists_templates,
        mc_samples,
        nuisance_params,
        nuisance_params_dict,
        #TODO: shape uncertainties to be added: JES, JER, JMS, JMR
    ]
    fit_args = [model, shape_vars, hists_templates, args.scale_templates, args.min_qcd_val]
    
    fill_regions(*fill_args)
    nonres_alphabet_fit(*fit_args)
    
    
    for year in years:
        for lep_ch in channels:
            with open(f"templates/{args.tag}/hists_templates_{year}_{lep_ch}.pkl", "rb") as f:
                hists_templates = pkl.load(f)

            model = rhalphabet(
                hists_templates,
                year,
                lep_ch,
                blind=args.blind,
                blind_samples=args.samples_to_blind.split(","),
                blind_region=[40, 200],
                qcd_estimation=True,
            )

            with open(f"templates/{args.tag}/model_{year}_{lep_ch}.pkl", "wb") as fout:
                pkl.dump(model, fout, protocol=2)


#Farouk's code:

def systs_not_from_parquets(year, LUMI, full_lumi):
    """
    Define systematics that are NOT stored in the parquets
    """

    systs_dict = {
        f"lumi_13TeV_{year}": rl.NuisanceParameter(f"CMS_lumi_13TeV_{year}", "lnN"),
        "BR_hww": rl.NuisanceParameter("BR_hww", "lnN"),
    }

    # tuple (value_up, value_down) and if (value_up, None) is given then value_down=value_up
    systs_dict_values = {
        f"lumi_13TeV_{year}": (1.02 ** (LUMI["2017"] / full_lumi), None),
        "BR_hww": (1.0153, 0.9848),
    }

    return systs_dict, systs_dict_values


def systs_from_parquets(year):
    """
    Specify systematics that ARE stored in the parquets
    """

    systs_from_parquets = {
        "SR1a": {
            "all_samples": {
                "weight_mu_pileup": rl.NuisanceParameter(f"{CMS_PARAMS_LABEL}_PU_{year}", "shape"),
                },
            # signal
            "ggF": {},
            "VBF": {},
            "VH": {},
            "ttH": {},
            # bkgs
            "TTbar": {},
            "WJetsLNu": {},
            "SingleTop": {},
            "DYJets": {},
        },
        "SR2a": {
            "all_samples": {},
            # signal
            "ggF": {},
            "VBF": {},
            "VH": {},
            "ttH": {},
            # bkgs
            "TTbar": {},
            "WJetsLNu": {},
            "SingleTop": {},
            "DYJets": {},
        },
    }

    return systs_from_parquets


def fill_regions(
    model: rl.Model,
    regions: List[str],
    templates: Dict,
    mc_samples: Dict[str, str],
    nuisance_params: Dict[str, Syst],
    nuisance_params_dict: Dict[str, rl.NuisanceParameter],
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

        pass_region = region.startswith("pass")
        region_noblinded = region.split("Blinded")[0]
        blind_str = "Blinded" if region.endswith("Blinded") else ""

        logging.info("starting region: %s" % region)
        binstr = "" if mX_bin is None else f"mXbin{mX_bin}"
        ch = rl.Channel(binstr + region.replace("_", ""))  # can't have '_'s in name
        model.addChannel(ch)

        for sample_name, card_name in mc_samples.items():
            # don't add signals in fail regions
            # also skip resonant signals in pass blinded - they are ignored in the validation fits anyway
            if sample_name in sig_keys:
                if not pass_region or (mX_bin is not None and region == "passBlinded"):
                    logging.info(f"\nSkipping {sample_name} in {region} region\n")
                    continue

            # single top only in fail regions
            if sample_name == "ST" and pass_region:
                logging.info(f"\nSkipping ST in {region} region\n")
                continue

            logging.info("get templates for: %s" % sample_name)

            sample_template = region_templates[sample_name, :]

            stype = rl.Sample.SIGNAL if sample_name in sig_keys else rl.Sample.BACKGROUND
            sample = rl.TemplateSample(ch.name + "_" + card_name, stype, sample_template)

            # # rate params per signal to freeze them for individual limits
            # if stype == rl.Sample.SIGNAL and len(sig_keys) > 1:
            #     srate = rate_params[sample_name]
            #     sample.setParamEffect(srate, 1 * srate)

            # nominal values, errors
            values_nominal = np.maximum(sample_template.values(), 0.0)

            mask = values_nominal > 0
            errors_nominal = np.ones_like(values_nominal)
            errors_nominal[mask] = (
                1.0 + np.sqrt(sample_template.variances()[mask]) / values_nominal[mask]
            )

            logging.debug("nominal   : {nominal}".format(nominal=values_nominal))
            logging.debug("error     : {errors}".format(errors=errors_nominal))

            if not bblite and args.mcstats:
                # set mc stat uncs
                logging.info("setting autoMCStats for %s in %s" % (sample_name, region))

                # tie MC stats parameters together in blinded and "unblinded" region in nonresonant
                region_name = region if args.resonant else region_noblinded
                stats_sample_name = f"{CMS_PARAMS_LABEL}_{region_name}_{card_name}"
                sample.autoMCStats(
                    sample_name=stats_sample_name,
                    # this function uses a different threshold convention from combine
                    threshold=np.sqrt(1 / args.mcstats_threshold),
                    epsilon=args.epsilon,
                )

            # rate systematics
            for skey, syst in nuisance_params.items():
                if sample_name not in syst.samples or (not pass_region and syst.pass_only):
                    continue

                logging.info(f"Getting {skey} rate")

                param = nuisance_params_dict[skey]

                val, val_down = syst.value, syst.value_down
                if syst.diff_regions:
                    region_name = region if args.resonant else region_noblinded
                    val = val[region_name]
                    val_down = val_down[region_name] if val_down is not None else val_down
                if syst.diff_samples:
                    val = val[sample_name]
                    val_down = val_down[sample_name] if val_down is not None else val_down

                sample.setParamEffect(param, val, effect_down=val_down)

            # correlated shape systematics
            for skey, syst in corr_year_shape_systs.items():
                if sample_name not in syst.samples or (not pass_region and syst.pass_only):
                    continue

                logging.info(f"Getting {skey} shapes")

                if skey in jecs or skey in jmsr:
                    # JEC/JMCs saved as different "region" in dict
                    if mX_bin is None:
                        up_hist = templates_summed[f"{region_noblinded}_{skey}_up{blind_str}"][
                            sample_name, :
                        ]
                        down_hist = templates_summed[f"{region_noblinded}_{skey}_down{blind_str}"][
                            sample_name, :
                        ]
                    else:
                        # regions names are different from different blinding strats
                        up_hist = templates_summed[f"{region}_{skey}_up"][sample_name, :, mX_bin]
                        down_hist = templates_summed[f"{region}_{skey}_down"][
                            sample_name, :, mX_bin
                        ]

                    values_up = up_hist.values()
                    values_down = down_hist.values()
                else:
                    # weight uncertainties saved as different "sample" in dict
                    values_up = region_templates[f"{sample_name}_{skey}_up", :].values()
                    values_down = region_templates[f"{sample_name}_{skey}_down", :].values()

                logger = logging.getLogger(
                    "validate_shapes_{}_{}_{}".format(region, sample_name, skey)
                )

                effect_up, effect_down = get_effect_updown(
                    values_nominal, values_up, values_down, mask, logger
                )
                sample.setParamEffect(shape_systs_dict[skey], effect_up, effect_down)

            # uncorrelated shape systematics
            for skey, syst in uncorr_year_shape_systs.items():
                if sample_name not in syst.samples or (not pass_region and syst.pass_only):
                    continue

                logging.info(f"Getting {skey} shapes")

                for year in years:
                    if year not in syst.uncorr_years:
                        continue

                    values_up, values_down = get_year_updown(
                        templates_dict,
                        sample_name,
                        region,
                        region_noblinded,
                        blind_str,
                        year,
                        skey,
                        mX_bin=mX_bin,
                    )
                    logger = logging.getLogger(
                        "validate_shapes_{}_{}_{}".format(region, sample_name, skey)
                    )

                    effect_up, effect_down = get_effect_updown(
                        values_nominal, values_up, values_down, mask, logger
                    )
                    sample.setParamEffect(
                        shape_systs_dict[f"{skey}_{year}"], effect_up, effect_down
                    )

            ch.addSample(sample)

        if bblite and args.mcstats:
            # tie MC stats parameters together in blinded and "unblinded" region in nonresonant
            channel_name = region if args.resonant else region_noblinded
            ch.autoMCStats(
                channel_name=f"{CMS_PARAMS_LABEL}_{channel_name}",
                threshold=args.mcstats_threshold,
                epsilon=args.epsilon,
            )

        # data observed
        ch.setObservation(region_templates[data_key, :])

def nonres_alphabet_fit(
    model: rl.Model,
    shape_vars: List[ShapeVar],
    templates_summed: Dict,
    scale: float = None,
    min_qcd_val: float = None,
    region_pass_fail: list[str] = ["SR1a","CR1"]
):
    shape_var = shape_vars[0]
    m_obs = rl.Observable(shape_var.name, shape_var.bins)

    # QCD overall pass / fail efficiency
    qcd_eff = (
        templates_summed[f"pass"][qcd_key, :].sum().value
        / templates_summed[f"fail"][qcd_key, :].sum().value
    )
    # can be derived directly
    qcd_eff = 

    # transfer factor
    tf_dataResidual = rl.BasisPoly(
        f"{CMS_PARAMS_LABEL}_tf_dataResidual",
        (shape_var.order,),
        [shape_var.name],
        basis="Bernstein",
        limits=(-20, 20),
        square_params=True,
    )
    tf_dataResidual_params = tf_dataResidual(shape_var.scaled)
    tf_params_pass = qcd_eff * tf_dataResidual_params  # scale params initially by qcd eff

    # qcd params
    qcd_params = np.array(
        [
            rl.IndependentParameter(f"{CMS_PARAMS_LABEL}_tf_dataResidual_Bin{i}", 0)
            for i in range(m_obs.nbins)
        ]
    )

    for blind_str in ["", "Blinded"]:
        # for blind_str in ["Blinded"]:
        passChName = f"pass{blind_str}".replace("_", "")
        failChName = f"fail{blind_str}".replace("_", "")
        logging.info(
            "setting transfer factor for pass region %s, fail region %s" % (passChName, failChName)
        )
        failCh = model[failChName]
        passCh = model[passChName]

        # sideband fail
        # was integer, and numpy complained about subtracting float from it
        initial_qcd = failCh.getObservation().astype(float)
        for sample in failCh:
            if args.resonant and sample.sampletype == rl.Sample.SIGNAL:
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

def rhalphabet(hists_templates, year :str , lep_ch : str, blind:bool, blind_samples, blind_region, qcd_estimation: bool):
    # get the LUMI
    with open("../fileset/luminosity.json") as f:
        LUMI = json.load(f)[lep_ch]
    full_lumi = LUMI[year]

    # define the systematics
    systs_dict, systs_dict_values = systs_not_from_parquets(year, LUMI, full_lumi)
    sys_from_parquets = systs_from_parquets(year)

    massbins = hists_templates["pass"].axes[2].edges
    mass = rl.Observable("MH_Reco", massbins)
    masses = (massbins[:-1] + 0.5 * np.diff(massbins))
    mass_scaled = (masses - masses[0]) / (masses[-1] - masses[0])
    # Raghav:
    # https://github.com/rkansal47/HHbbVV/blob/68dd5738ebe6950a6b5ea16049c4047b7de7892d/src/HHbbVV/postprocessing/CreateDatacard.py#L66-L77

    model = rl.Model("HWWfullhad")

    # fill datacard with systematics and rates
    for ptbin in range(npt):
        for region in ["pass", "fail"]:
            ch = rl.Channel("ptbin%d%s" % (ptbin, region))
            model.addChannel(ch)

            # isPass = region == "pass"
            # ptnorm = 1.0

            if blind:
                h = blindBins(hists_templates[region], blind_region, blind_samples)

            else:
                h = hists_templates[region]

            for sName in samples:
                templ = get_template(h, sName, ptbin)
                stype = rl.Sample.SIGNAL if sName in sigs else rl.Sample.BACKGROUND
                sample = rl.TemplateSample(ch.name + "_" + labels[sName], stype, templ)

                # SYSTEMATICS NOT FROM PARQUETS
                for sys_name, sys_value in systs_dict.items():
                    if systs_dict_values[sys_name][1] is None:  # if up and down are the same
                        sample.setParamEffect(sys_value, systs_dict_values[sys_name][0])
                    else:
                        sample.setParamEffect(sys_value, systs_dict_values[sys_name][0], systs_dict_values[sys_name][1])

                # SYSTEMATICS FROM PARQUETS
                for syst_on_sample in ["all_samples", sName]:  # apply common systs and per sample systs
                    for sys_name, sys_value in sys_from_parquets[lep_ch][syst_on_sample].items():
                        syst_up = h[{"samples": sName, "fj_pt": ptbin, "systematic": sys_name + "Up"}].values()
                        syst_do = h[{"samples": sName, "fj_pt": ptbin, "systematic": sys_name + "Down"}].values()
                        nominal = h[{"samples": sName, "fj_pt": ptbin, "systematic": "nominal"}].values()

                        if sys_value.combinePrior == "lnN":
                            eff_up = shape_to_num(syst_up, nominal)
                            eff_do = shape_to_num(syst_do, nominal)

                            # if (math.isclose(1, eff_up, rel_tol=1e-4)) & (
                            #     math.isclose(1, eff_do, rel_tol=1e-4)
                            # ):  # leave it as '-'
                            #     continue

                            if math.isclose(eff_up, eff_do, rel_tol=1e-2):  # if up and down are the same
                                sample.setParamEffect(
                                    sys_value, max(eff_up, eff_do)
                                )  # TODO: should not need max here so fix negative weights
                            else:
                                sample.setParamEffect(sys_value, eff_up, eff_do)

                        else:
                            sample.setParamEffect(sys_value, (syst_up / nominal), (syst_do / nominal))
                            # sample.setParamEffect(sys_value, syst_up, syst_do)

                ch.addSample(sample)

            # add data
            data_obs = get_template(h, "Data", ptbin)
            ch.setObservation(data_obs)

            # drop bins outside rho validity
            mask = validbins[ptbin]
            # blind bins 3:6
            #         mask[3:6] = False
            ch.mask = mask
    
    # full had started
    met_region = {
        "LowMET" : {"SRa": "SR1a","SRb":"SR1b","CR":"CR1"},
        "MidMET" : {"SRa": "SR2a","SRb":"SR2b","CR":"CR2"},
        "HighMET": {"SRa": "SR3a","SRb":"SR3b","CR":"CR3"},
    }
    for ptbin in ["LowMET","MidMET","HighMET"]:
        for region in ["SRa", "CR"]:
            ch = rl.Channel("%d%sbin" % (ptbin, region))
            model.addChannel(ch)
            # isPass = region == "pass"
            # ptnorm = 1.0
            if blind:
                h = blindBins(hists_templates[met_region[ptbin][region]], blind_region, blind_samples)
            else:
                h = hists_templates[region]
            for sName in samples:
                templ = get_template(h, sName, met_region[ptbin][region]) #template
                stype = rl.Sample.SIGNAL if sName in sigs else rl.Sample.BACKGROUND #sample type
                sample = rl.TemplateSample(ch.name + "_" + labels[sName], stype, templ)

                # SYSTEMATICS NOT FROM PARQUETS
                for sys_name, sys_value in systs_dict.items():
                    if systs_dict_values[sys_name][1] is None:  # if up and down are the same
                        sample.setParamEffect(sys_value, systs_dict_values[sys_name][0])
                    else:
                        sample.setParamEffect(sys_value, systs_dict_values[sys_name][0], systs_dict_values[sys_name][1])
                # SYSTEMATICS FROM PARQUETS
                for syst_on_sample in ["all_samples", sName]:  # apply common systs and per sample systs
                    pass #to do
                ch.addSample(sample)

            # add data
            data_obs = get_template(h, "data", met_region[ptbin][region])
            ch.setObservation(data_obs)
        
    if qcd_estimation:
        # qcd data-driven estimation
        if blind:
            h_pass = blindBins(hists_templates["pass"], blind_region, blind_samples)
            h_fail = blindBins(hists_templates["fail"], blind_region, blind_samples)

        else:
            h_pass = hists_templates["pass"]
            h_fail = hists_templates["fail"]

        # get the transfer factor
        qcd_eff = (
            h_pass[{"samples": "QCD", "systematic": "nominal"}].sum()
            / h_fail[{"samples": "QCD", "systematic": "nominal"}].sum()
        )

        tf_dataResidual = rl.BasisPoly(
            f"{CMS_PARAMS_LABEL}_tf_dataResidual", (0,), ["MH_Reco"], limits=(-20, 20), basis="Bernstein"
        )

        tf_dataResidual_params = tf_dataResidual(mass_scaled)
        tf_params_pass = qcd_eff * tf_dataResidual_params

        for ptbin in ["LowMET","MidMET","HighMET"]:
            failCh = model["ptbin%dfail" % ptbin]
            passCh = model["ptbin%dpass" % ptbin]

            qcdparams = np.array(
                [rl.IndependentParameter("qcdparam_ptbin%d_massbin%d" % (ptbin, i), 0) for i in range(mass.nbins)]
            )
            initial_qcd = failCh.getObservation().astype(
                float
            )  # was integer, and numpy complained about subtracting float from it

            for sample in failCh:
                initial_qcd -= sample.getExpectation(nominal=True)

            if np.any(initial_qcd < 0.0):
                initial_qcd[np.where(initial_qcd < 0)] = 0
            #         raise ValueError("initial_qcd negative for some bins..", initial_qcd)

            sigmascale = 10  # to scale the deviation from initial
            scaledparams = initial_qcd * (1 + sigmascale / np.maximum(1.0, np.sqrt(initial_qcd))) ** qcdparams
            fail_qcd = rl.ParametericSample("ptbin%dfail_qcd" % ptbin, rl.Sample.BACKGROUND, mass, scaledparams)
            failCh.addSample(fail_qcd)
            pass_qcd = rl.TransferFactorSample(
                "ptbin%dpass_qcd" % ptbin, rl.Sample.BACKGROUND, tf_params_pass[ptbin, :], fail_qcd
            )
            passCh.addSample(pass_qcd)

    return model



if __name__ == "__main__":
    # e.g.
    # python create_datacard.py --years 2017 --channels mu --tag v1

    parser = argparse.ArgumentParser()
    parser.add_argument("--years", dest="years", default="2017", help="years separated by commas")
    parser.add_argument("--channels", dest="channels", default="mu", help="channels separated by commas (e.g. mu,ele)")
    parser.add_argument("--tag", dest="tag", default="test", type=str, help="name of template directory")
    parser.add_argument("--blind", dest="blind", action="store_true")
    parser.add_argument(
        "--samples_to_blind", dest="samples_to_blind", default="", help="samples to blind separated by commas"
    )

    args = parser.parse_args()

    main(args)
