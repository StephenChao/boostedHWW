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


def _tolist(argset):
    return [x.GetName() for x in argset]


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
    t2_local_prefix, t2_prefix, proxy, username, submitdir = setup(args)

    prefix = "impacts"
    local_dir = Path(f"condor/impacts/{args.tag}/")

    # make local directory
    logdir = local_dir / "logs"
    logdir.mkdir(parents=True, exist_ok=True)

    jdl_templ = f"{submitdir}/submit_impacts.templ.jdl"
    sh_templ = f"{submitdir}/submit_impacts.templ.sh"

    ps = getParameters()
    print(f"Running impacts on {len(ps)} parameters:")
    print(*ps, sep="\n")

    res_str = "-r" if args.resonant else ""
    
    #when running combination
    commands = [f"run_combined.sh {res_str} -i"] + [
        f"run_combined.sh {res_str} --impactsf {p}" for p in ps
    ]

    #when running individually
    # commands = [f"run_blinded.sh {res_str} -i"] + [
    #     f"run_blinded.sh {res_str} --impactsf {p}" for p in ps
    # ]
    
    impactfiles = ["higgsCombine_initialFit_impacts.MultiDimFit.mH125.root"] + [
        f"higgsCombine_paramFit_impacts_{p}.MultiDimFit.mH125.root" for p in ps
    ]

    # collect_command = f"/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/combine/scripts/run_blinded.sh {res_str} --impactsc {','.join(ps)}"
    collect_command = f"/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/combine/combination/scripts/run_combined.sh {res_str} --impactsc {','.join(ps)}"
    # collect_command = f"run_blinded.sh {res_str} --impactsc {','.join(ps)}"

    if args.local:
        print("Running locally")
        for command in commands:
            os.system(command)
        os.system(collect_command)
        return

    collect_sh = Path(f"{local_dir}/collect.sh")
    with collect_sh.open("w") as f:
        f.write(collect_command)

    os.system(f"chmod u+x {collect_sh}")
    print(f"To collect impacts afterwards, run: {collect_sh}")

    # submit jobs
    if args.submit:
        print("Submitting jobs")

    for p, command, impactfile in zip(["init"] + ps, commands, impactfiles):
        local_jdl = Path(f"{local_dir}/{prefix}_{p}.jdl")
        local_log = Path(f"{local_dir}/{prefix}_{p}.log")
        jdl_args = {
            "dir": local_dir,
            "prefix": prefix,
            "jobid": p,
            "proxy": proxy,
            "impactfile": impactfile,
        }
        run_utils.write_template(jdl_templ, local_jdl, jdl_args)

        localsh = f"{local_dir}/{prefix}_{p}.sh"
        sh_args = {"command": "./" + command}
        run_utils.write_template(sh_templ, localsh, sh_args)
        os.system(f"chmod u+x {localsh}")

        if local_log.exists():
            local_log.unlink()

        if args.submit:
            os.system(f"condor_submit {local_jdl}")
        else:
            print("To submit ", local_jdl)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parse_common_args(parser)
    add_bool_arg(parser, "local", help="run locally", default=False)
    args = parser.parse_args()
    main(args)
