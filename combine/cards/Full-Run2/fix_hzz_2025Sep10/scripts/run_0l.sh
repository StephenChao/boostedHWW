#!/bin/bash
# shellcheck disable=SC2086,SC2034,SC2154


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
# Specify resonant with --resonant / -r, otherwise does nonresonant
# Specify seed with --seed (default 42) and number of toys with --numtoys (default 100)
#
# For nonresonant, will try to load all the regions automatically based on which text files exist
# Can use --noggf, --novbf to exclude ggF and VBF regions respectively
#
# Usage ./run_blinded.sh [-wblsdgt] [--numtoys 100] [--seed 42]
#
# Author: Raghav Kansal, Yuzhe Zhao
####################################################################################################


####################################################################################################
# Read options
####################################################################################################

workspace=0
bfit=0
limits=0
dfit_asimov=0
significance=0
dfit=0
dfit_asimov=0
resonant=0 #always do non-resonant option
gofdata=0
goftoys=0
impactsi=0
impactsf=0
impactsc=0
seed=44
numtoys=100
bias=-1
rmin=-40
rmax=40
mintol=0.1 # --cminDefaultMinimizerTolerance

# maxcalls=1000000000  # --X-rtd MINIMIZER_MaxCalls

options=$(getopt -o "wblsdrgti" --long "workspace,bfit,limits,significance,dfit,dfitasimov,resonant,gofdata,goftoys,impactsi,impactsf:,impactsc:,bias:,seed:,numtoys:,mintol:,sr:,rmax:,rmin:" -- "$@")
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
        -r|--resonant)
            resonant=0
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
        --sr)
            shift
            sr=$1
            ;;
        --mintol)
            shift
            mintol=$1
            ;;
        --rmax)
            shift
            rmax=$1
            ;;
        --rmin)
            shift
            rmin=$1
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

echo "Arguments: resonant=$resonant workspace=$workspace bfit=$bfit limits=$limits \
significance=$significance dfit=$dfit gofdata=$gofdata goftoys=$goftoys \
seed=$seed numtoys=$numtoys mintol=$mintol breakdown_sr=$sr rMin=$rmin rMax=$rmax"


####################################################################################################
# Set up fit arguments
#
# We use channel masking to "mask" the blinded and "unblinded" regions in the same workspace.
# (mask = 1 means the channel is masked off)
####################################################################################################

dataset=data_obs
cards_dir="."
ws=${cards_dir}/combined
wsm=${ws}_withmasks
wsm_snapshot=higgsCombineSnapshot.MultiDimFit.mH125

CMS_PARAMS_LABEL="CMS_HWW_boosted"

outsdir=${cards_dir}/outs
mkdir -p $outsdir

if [ $resonant = 0 ]; then #doing nonresonant fits
    if [ -f "mXbin0pass.txt" ]; then
        echo -e "\nWARNING: This is doing nonresonant fits - did you mean to pass -r|--resonant?\n"
    fi

    echo "actually run the following: "
    ccargs=""

    
    for region in 1 2;
    do 
        cr="CR${region}"
        sra="SR${region}a"
        srb="SR${region}b"
        ccargs+="${cr}=${cards_dir}/${cr}.txt "
        ccargs+="${sra}=${cards_dir}/${sra}.txt "
        ccargs+="${srb}=${cards_dir}/${srb}.txt "
        # No need to run the mask
    done
        
    echo "cards args=${ccargs}"


else
    # resonant args
    ccargs=""
    # the other statement deleted
fi

####################################################################################################
# Combine cards, text2workspace, fit, limits, significances, fitdiagnositcs, GoFs
####################################################################################################

# need to run this for large # of nuisances
# https://cms-talk.web.cern.ch/t/segmentation-fault-in-combine/20735
ulimit -s unlimited

if [ $workspace = 1 ]; then
    echo "Combining cards $ccargs"
    combineCards.py $ccargs > $ws.txt

    echo "Running text2workspace"
    
    text2workspace.py $ws.txt --channel-masks -o $wsm.root 2>&1 | tee $outsdir/text2workspace.txt
    
else
    if [ ! -f "$wsm.root" ]; then
        echo "Workspace doesn't exist! Use the -w|--workspace option to make workspace first"
        # exit 1
    fi
fi

if [ $bfit = 1 ]; then
    # echo "Expected NLL scan, split to stat. + syst."
    # ### Expected breakdown
    combine -M MultiDimFit -t -1 --expectSignal 1 -m 125 -d ${wsm}.root --rMax 10 --rMin -5 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 0.1  \
    -n SnapshotExpected --algo grid --points 100  2>&1 | tee $outsdir/ExpectedScanMultiDimFit.txt
    combine -M MultiDimFit -t -1 --expectSignal 1 -m 125 -d ${wsm}.root --rMax 10 --rMin -5 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 0.1  \
    -n BestfitSnapshotExpected --saveWorkspace 2>&1 | tee $outsdir/ExpectedBestfitMultiDimFit.txt
    combine -M MultiDimFit -t -1 --expectSignal 1 higgsCombineBestfitSnapshotExpected.MultiDimFit.mH125.root -n ExpectedfreezeAll \
    -m 125 --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 0.1 \
    --rMin -5 --rMax 10 --algo grid --points 100 \
    --freezeParameters allConstrainedNuisances --snapshotName MultiDimFit 2>&1 | tee $outsdir/ExpectedBreakdownMultiDimFit.txt
    
    plot1DScan.py higgsCombineSnapshotExpected.MultiDimFit.mH125.root --main-label "With systematics" --main-color 1 --others higgsCombineExpectedfreezeAll.MultiDimFit.mH125.root:"Stat-only":2 -o ExpectedBreakdown --breakdown Syst,Stat

    echo "Observed NLL scan, split to stat. + syst."
    ### Observed breakdown
    combine -M MultiDimFit  -m 125 -d ${wsm}.root --rMax 15 --rMin -15 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 1  \
    -n SnapshotObserved --algo grid --points 100  2>&1 | tee $outsdir/ObservedMultiDimFit.txt
    combine -M MultiDimFit  -m 125 -d ${wsm}.root --rMax 15 --rMin -15 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 1 \
    -n BestfitSnapshotObserved --saveWorkspace 2>&1 | tee $outsdir/ObservedBestfitMultiDimFit.txt

    combine -M MultiDimFit higgsCombineBestfitSnapshotObserved.MultiDimFit.mH125.root -n ObservedfreezeAll \
    -m 125 --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 1 \
    --rMin -15 --rMax 15 --algo grid --points 100 \
    --freezeParameters allConstrainedNuisances --snapshotName MultiDimFit 2>&1 | tee $outsdir/ObservedBreakdownMultiDimFit.txt
    
    plot1DScan.py higgsCombineSnapshotObserved.MultiDimFit.mH125.root --main-label "With systematics" --main-color 1 --others higgsCombineObservedfreezeAll.MultiDimFit.mH125.root:"Stat-only":2 -o ObservedBreakdown --breakdown Syst,Stat

    # Observed total scan, if don't split to stat. + syst.
    # combine -M MultiDimFit  -m 125 -d ${wsm}.root --rMax 15 --rMin -15 \
    # --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 0.01  \
    # -n SnapshotObserved --algo grid --points 100  2>&1 | tee $outsdir/SingleObservedMultiDimFit.txt
    # plot1DScan.py higgsCombineSnapshotObserved.MultiDimFit.mH125.root -o single_scan_observed --main-label "Observed"

fi


if [ $limits = 1 ]; then
    echo "Limits"
    combine -M AsymptoticLimits -m 125 -n "" -d $wsm.root --rMax 15 --rMin -15 \
    --saveWorkspace --saveToys -s "$seed" --toysFrequentist 2>&1 | tee $outsdir/AsymptoticLimits.txt
fi


if [ $significance = 1 ]; then
    echo "Significance"
    combine -M Significance -m 125 -n "" -d $wsm.root --rMin -15 --rMax 15 \
    --saveWorkspace -t -1 --expectSignal=1 --saveToys -s "$seed" --toysFrequentist 2>&1 | tee $outsdir/ExpectedSignificance.txt

    echo "Significance"
    combine -M Significance -m 125 -n "" -d $wsm.root --rMin -15 --rMax 15 \
     -s "$seed"  2>&1 | tee $outsdir/ObservedSignificance.txt
fi


if [ $dfit = 1 ]; then
    echo "Fit Diagnostics"
    combine -M FitDiagnostics -m 125 -d ${wsm}.root --rMin -20 --rMax 20 --ignoreCovWarning \
    --cminDefaultMinimizerStrategy 0 \
    --cminDefaultMinimizerTolerance 5 \
    --saveWithUncertainties --saveOverallShapes \
    --saveShapes --saveNormalizations \
    -n Unblinded 2>&1 | tee $outsdir/FitDiagnostics.txt

    echo "Fit Shapes"
    PostFitShapesFromWorkspace --dataset "$dataset" -w ${wsm}.root  --sampling  --output FitShapesB.root \
    -m 125 -f fitDiagnosticsUnblinded.root:fit_b --postfit --print 2>&1 | tee $outsdir/FitShapesB.txt

    echo "Fit Shapes"
    PostFitShapesFromWorkspace --dataset "$dataset" -w ${wsm}.root  --sampling  --output FitShapesS.root \
    -m 125 -f fitDiagnosticsUnblinded.root:fit_s --postfit --print 2>&1 | tee $outsdir/FitShapes.txt
fi


if [ $gofdata = 1 ]; then
    echo "GoF on data"
    combine -M GoodnessOfFit -d $wsm.root --algo saturated -m 125 \
    -n Data -v 9 2>&1 | tee $outsdir/GoF_data.txt
fi


if [ $goftoys = 1 ]; then
    echo "GoF on toys"
    combine -M GoodnessOfFit -d $wsm.root --algo saturated -m 125 \
    -n Toys -v 9 -s "$seed" -t "$numtoys" --toysFrequentist 2>&1 | tee $outsdir/GoF_toys.txt
    # --snapshotName MultiDimFit --bypassFrequentistFit \
fi


if [ $impactsi = 1 ]; then
    echo "Initial fit for impacts"

    combineTool.py -M Impacts -m 125 -n "impacts" \
    --expectSignal 1 --rMin -15 --rMax 15 \
    -d $wsm.root --doInitialFit --robustFit 1 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 1 2>&1 | tee $outsdir/Impacts_init.txt
fi


if [ "$impactsf" != 0 ]; then
    echo "Impact scan for $impactsf"

    combine -M MultiDimFit -n "_paramFit_impacts_$impactsf" --algo impact --redefineSignalPOIs r -P "$impactsf" \
    --floatOtherPOIs 1 --saveInactivePOI 1 -d $wsm.root \
    --expectSignal 1 --robustFit 1 \
    --rMin -15 --rMax 15 --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 1 -m 125 | tee "$outsdir/Impacts_$impactsf.txt"

fi


if [ "$impactsc" != 0 ]; then
    echo "Collecting impacts"
    combineTool.py -M Impacts \
    -m 125 -n "impacts" -d $wsm.root \
    --expectSignal 1 --named "$impactsc" \
    --rMin -20 --rMax 20 -v 1 -o impacts.json 2>&1 | tee $outsdir/Impacts_collect.txt

    plotImpacts.py -i impacts.json -o impacts 
fi


if [ "$bias" != -1 ]; then
    echo "Bias test with bias $bias"
fi
