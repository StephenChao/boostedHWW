#!/usr/bin/python

"""
Splits toy generation into separate condor jobs and fits lowest order + 1 models for F-tests.

Author(s): Raghav Kansal, Yuzhe Zhao
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path

import ROOT
from utils import parse_common_args, setup

import run_utils
from run_utils import add_bool_arg

from JobManager import concurrent_jobs, submit, wait
import os
import subprocess

def _tolist(argset):
    return [x.GetName() for x in argset]

concurrent_jobs(100)

def getParameters():
    """Get nuisance parameters from workspace"""
    f = ROOT.TFile.Open("combined_withmasks.root", "READ")
    w = f.Get("w")
    ps = _tolist(w.allVars())
    pois = _tolist(w.set("ModelConfig_POI"))
    obs = _tolist(w.genobj("ModelConfig").GetObservables())

    ret_ps = []
    for p in ps:
        if not (
            # "mcstat" in p
            # "dataResidual_CR" in p
            "qcdparam" in p
            or p.endswith(("_In", "__norm"))
            or p.startswith(("n_exp_", "mask_"))
            or p in pois
            or p in obs
        ):

            ret_ps.append(p)

    return ret_ps


def main(args):
    ps = getParameters()
    print(f"Running impacts on {len(ps)} parameters:")
    print(*ps, sep="\n")


    commands =  [
        f"/home/pku/zhaoyz/Higgs/boostedHWW/combine/combination/scripts/run_combined_unblind.sh --impactsf {p}" for p in ps
    ]

    if args.impacts:
        for cmd in commands:
            submit(cmd)
        wait()

    # impactfiles = ["higgsCombine_initialFit_impacts.MultiDimFit.mH125.root"] + [
    #     f"higgsCombine_paramFit_impacts_{p}.MultiDimFit.mH125.root" for p in ps
    # ]

 
    collect_command = f"/home/pku/zhaoyz/Higgs/boostedHWW/combine/combination/scripts/run_combined_unblind.sh  --impactsc {','.join(ps)}"

    if args.collect:
        os.system(f"{collect_command}")
    # if args.collect:
    #    for cmd_c in collect_command:
    #        submit(cmd_c)
    # wait()
    wait()

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parse_common_args(parser)
    add_bool_arg(parser, "impacts", help="run impacts", default=False)
    add_bool_arg(parser, "collect", help="collect impacts", default=False)
    args = parser.parse_args()
    main(args)
