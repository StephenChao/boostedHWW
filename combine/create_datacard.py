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
from utils import blindBins, get_template, labels, samples, shape_to_num, sigs

rl.ParametericSample.PreferRooParametricHist = False
logging.basicConfig(level=logging.INFO)

warnings.filterwarnings("ignore", message="Found duplicate branch ")
pd.set_option("mode.chained_assignment", None)

CMS_PARAMS_LABEL = "CMS_HWW_boosted"


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


def rhalphabet(hists_templates, year :str = "2018", lep_ch : str = "fullhad", blind:bool=True, blind_samples, blind_region, qcd_estimation):
    # get the LUMI
    with open("../fileset/luminosity.json") as f:
        LUMI = json.load(f)[lep_ch]
    full_lumi = LUMI[year]

    # define the systematics
    systs_dict, systs_dict_values = systs_not_from_parquets(year, LUMI, full_lumi)
    sys_from_parquets = systs_from_parquets(year)

    ptbins = hists_templates["pass"].axes[2].edges
    npt = len(ptbins) - 1

    massbins = hists_templates["pass"].axes[3].edges
    mass = rl.Observable("reco_higgs_m", massbins)

    # here we derive these all at once with 2D array
    ptpts, masspts = np.meshgrid(ptbins[:-1] + 0.3 * np.diff(ptbins), massbins[:-1] + 0.5 * np.diff(massbins), indexing="ij")

    rhopts = 2 * np.log(masspts / ptpts)
    pt_scaled = (ptpts - ptbins[0]) / (ptbins[-1] - ptbins[0])
    rho_scaled = (rhopts - (-6)) / ((-2.1) - (-6))  # TODO: understand why

    validbins = (rho_scaled >= 0) & (rho_scaled <= 1)
    rho_scaled[~validbins] = 1  # we will mask these out later

    # Raghav:
    # https://github.com/rkansal47/HHbbVV/blob/68dd5738ebe6950a6b5ea16049c4047b7de7892d/src/HHbbVV/postprocessing/CreateDatacard.py#L66-L77
    # bins = hists_templates["pass"][{"samples": sum, "rec_higgs_m": sum, "systematic": sum}].values()
    # pts = bins[:-1] + 0.5 * np.diff(bins)
    # ptscaled = (pts - ptbins[0]) / (ptbins[-1] - ptbins[0])

    # build actual fit model now
    model = rl.Model("testModel")

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
            f"{CMS_PARAMS_LABEL}_tf_dataResidual", (2, 2), ["pt", "rho"], limits=(-20, 20), basis="Bernstein"
        )

        tf_dataResidual_params = tf_dataResidual(pt_scaled, rho_scaled)
        tf_params_pass = qcd_eff * tf_dataResidual_params

        for ptbin in range(npt):
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


def main(args):
    years = args.years.split(",")
    channels = args.channels.split(",")

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
