#!/bin/bash
### adapted from https://github.com/rkansal47/HHbbVV/blob/main/src/HHbbVV/combine/run_blinded.sh
### Author: Raghav Kansal, Yuzhe Zhao, Farouk Mokhtar

####################################################################################################
# Script for fits
#
# 1) Combines cards and makes a workspace (--workspace / -w)
# 2) Background-only fit (--bfit / -b)
# 3) Expected asymptotic limits (--limits / -l)
# 4) Expected significance (--significance / -s)
# 5) Fit diagnostics (--dfit / -d)
# 6) GoF on data (--gofdata / -g)
# 7) GoF on toys (--goftoys / -t),
# 8) Impacts: initial fit (--impactsi / -i), per-nuisance fits (--impactsf $nuisance), collect (--impactsc $nuisances)
# 9) Bias test: run a bias test on toys (using post-fit nuisances) with expected signal strength
#    given by --bias X.
#
# Specify seed with --seed (default 42) and number of toys with --numtoys (default 100)
#
# Usage ./run_1l.sh [-wblsdgt] [--numtoys 100] [--seed 42]

#TO BE NOTICED: should only be run in the datacards directory
####################################################################################################


####################################################################################################
# Read options
####################################################################################################


workspace=0
bfit=0
limits=0
significance=0
dfit=0
dfit_asimov=0
gofdata=0
goftoys=0
impactsi=0
impactsf=0
impactsc=0
seed=444
numtoys=100
bias=-1
mintol=0.5 # --cminDefaultMinimizerTolerance
# maxcalls=1000000000  # --X-rtd MINIMIZER_MaxCalls

options=$(getopt -o "wblsdrgti" --long "workspace,bfit,limits,significance,dfit,dfitasimov,resonant,gofdata,goftoys,impactsi,impactsf:,impactsc:,bias:,seed:,numtoys:,mintol:" -- "$@")
eval set -- "$options"

while true; do
    case "$1" in
        -w|--workspace)
            workspace=1
            ;;
        -b|--bfit)
            bfit=1
            ;;
        -l|--limits)
            limits=1
            ;;
        -s|--significance)
            significance=1
            ;;
        -d|--dfit)
            dfit=1
            ;;
        --dfitasimov)
            dfit_asimov=1
            ;;
        -g|--gofdata)
            gofdata=1
            ;;
        -t|--goftoys)
            goftoys=1
            ;;
        -i|--impactsi)
            impactsi=1
            ;;
        --impactsf)
            shift
            impactsf=$1
            ;;
        --impactsc)
            shift
            impactsc=$1
            ;;
        --seed)
            shift
            seed=$1
            ;;
        --numtoys)
            shift
            numtoys=$1
            ;;
        --mintol)
            shift
            mintol=$1
            ;;
        --bias)
            shift
            bias=$1
            ;;
        --)
            shift
            break;;
        \?)
            echo "Invalid option: -$OPTARG" >&2
            exit 1
            ;;
        :)
            echo "Option -$OPTARG requires an argument." >&2
            exit 1
            ;;
    esac
    shift
done

echo "Arguments: workspace=$workspace bfit=$bfit limits=$limits \
significance=$significance dfit=$dfit gofdata=$gofdata goftoys=$goftoys \
seed=$seed numtoys=$numtoys"



####################################################################################################
# Set up fit arguments
#
# We use channel masking to "mask" the blinded and "unblinded" regions in the same workspace.
# (mask = 1 means the channel is turned off)
####################################################################################################

dataset=data_obs
cards_dir="."
ws=${cards_dir}/combined
wsm=${ws}_withmasks
wsm_snapshot=higgsCombineSnapshot.MultiDimFit.mH125

CMS_PARAMS_LABEL="CMS_HWW_boosted"

outsdir=${cards_dir}/outs
mkdir -p $outsdir

# ####################################################################################################
# # Combine cards, text2workspace, fit, limits, significances, fitdiagnositcs, GoFs
# ####################################################################################################
# # # need to run this for large # of nuisances
# # # https://cms-talk.web.cern.ch/t/segmentation-fault-in-combine/20735

# ADD REGIONS

# SR1fail2016="SR1fail2016"
# SR1fail2016APV="SR1fail2016APV"
# SR1fail2017="SR1fail2017"
# SR1fail2018="SR1fail2018"

# SR1pass2016="SR1pass2016"
# SR1pass2016APV="SR1pass2016APV"
# SR1pass2017="SR1pass2017"
# SR1pass2018="SR1pass2018"

# TopCRfail2016="TopCRfail2016"
# TopCRfail2016APV="TopCRfail2016APV"
# TopCRfail2017="TopCRfail2017"
# TopCRfail2018="TopCRfail2018"

# TopCRpass2016="TopCRpass2016"
# TopCRpass2016APV="TopCRpass2016APV"
# TopCRpass2017="TopCRpass2017"
# TopCRpass2018="TopCRpass2018"

########################### define SR/CR with datacards

ccargs_VH="SR1fail=${cards_dir}/VH_HWW_Vww_RunII_SR1fail.txt \
SR1pass=${cards_dir}/VH_HWW_Vww_RunII_SR1pass.txt \
TopCRpass=${cards_dir}/VH_HWW_Vww_RunII_TopCRpass.txt "


echo "ccargs_VH:${ccargs_VH}"

if [ $workspace = 1 ]; then
    echo "Combining cards:"
    for file in $ccargs_VH; do
    echo "  ${file##*/}"
    done
    echo "-------------------------"
    combineCards.py $ccargs_VH > $ws.txt
    echo "Running text2workspace"
    text2workspace.py $ws.txt -o $wsm.root 2>&1 | tee $outsdir/text2workspace.txt
else
    if [ ! -f "$wsm.root" ]; then
        echo "Workspace doesn't exist! Use the -w|--workspace option to make workspace first"
        exit 1
    fi
fi


if [ $significance = 1 ]; then
    echo "Expected significance"

    # combine -M Significance -d workspace.root -t -1 --expectSignal 1 -v 9  2>&1 | tee $outsdir/Significance.txt
    combine -M Significance -d ${wsm}.root --rMin -40 --rMax 40 -t -1 --expectSignal 1  2>&1 | tee $outsdir/ExpectedSignificance.txt
    echo "Observed significance"
    combine -M Significance -d ${wsm}.root --rMin -40 --rMax 40  2>&1 | tee $outsdir/ObservedSignificance.txt

fi

if [ $dfit_asimov = 1 ]; then

    echo "Fit Diagnostics"
    combine -M FitDiagnostics -m 125 -d $wsm.root \
    -t -1 --expectSignal=1 --saveWorkspace --saveToys -n Asimov --ignoreCovWarning \
    --saveShapes --saveNormalizations --saveWithUncertainties --saveOverallShapes 2>&1 | tee $outsdir/FitDiagnostics.txt

    # python diffNuisances.py fitDiagnostfitDiagnosticsAsimov.root --abs
    combineTool.py -M ModifyDataSet ${wsm}.root:w ${wsm}_asimov.root:w:toy_asimov -d higgsCombineAsimov.FitDiagnostics.mH125.123456.root:toys/toy_asimov

    echo "Fit Shapes"
    PostFitShapesFromWorkspace --dataset toy_asimov -w ${wsm}_asimov.root --output FitShapesAsimov.root \
    -m 125 -f fitDiagnosticsAsimov.root:fit_b --postfit --print 2>&1 | tee $outsdir/FitShapesAsimov.txt
fi


if [ $limits = 1 ]; then
    # echo "Expected limits"
    # combine -M AsymptoticLimits -m 125 -n "" -d ${wsm_snapshot}.root --snapshotName MultiDimFit -v 1 \
    # --saveWorkspace --saveToys --bypassFrequentistFit -s $seed \
    # --floatParameters r --toysFrequentist --run blind 2>&1 | tee $logsdir/AsymptoticLimits.txt

    combine -M AsymptoticLimits --run expected -d $wsm.root -t -1  -v 1 --expectSignal 1 2>&1 | tee $outsdir/AsymptoticLimits.txt
fi


if [ $impactsi = 1 ]; then

    echo "Initial fit for impacts"
    combineTool.py -M Impacts -d $wsm.root -t -1 --rMin -5 --rMax 5 -m 125 --robustFit 1 --doInitialFit --expectSignal 1 2>&1 | tee $outsdir/Initialfit.txt
    combineTool.py -M Impacts -d $wsm.root -t -1 --rMin -5 --rMax 5 -m 125 --robustFit 1 --doFits --expectSignal 1 --parallel 50
    combineTool.py -M Impacts -d $wsm.root -t -1 --rMin -5 --rMax 5 -m 125 --robustFit 1 --output impacts.json --expectSignal 1
    plotImpacts.py -i impacts.json -o impacts

fi

