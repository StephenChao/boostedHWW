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
# Specify resonant with --resonant / -r, otherwise does nonresonant
# Specify seed with --seed (default 42) and number of toys with --numtoys (default 100)
#
# Usage ./run_blinded.sh [-wblsdgt] [--numtoys 100] [--seed 42] 
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
gofdata=0
goftoys=0
impactsi=0
impactsf=0
impactsc=0
seed=44
numtoys=40
bias=-1
mintol=0.1 # --cminDefaultMinimizerTolerance
maxcalls=1000000000  # --X-rtd MINIMIZER_MaxCalls

options=$(getopt -o "wblsdrgti" --long "workspace,bfit,limits,significance,dfit,dfitasimov,gofdata,goftoys,impactsi,impactsf:,impactsc:,bias:,seed:,numtoys:,mintol:" -- "$@")
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

echo "Arguments: resonant=$resonant workspace=$workspace bfit=$bfit limits=$limits \
significance=$significance dfit=$dfit gofdata=$gofdata goftoys=$goftoys \
seed=$seed numtoys=$numtoys"


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

echo "Start running 0l parameters:"
ccargs=""
maskunblindedargs=""
maskblindedargs=""

for region in 1 2;
do 
    cr="CR${region}"
    sra="SR${region}a"
    srb="SR${region}b"
    ccargs+="${cr}=${cards_dir}/${cr}.txt "
    ccargs+="${sra}=${cards_dir}/${sra}.txt "
    ccargs+="${srb}=${cards_dir}/${srb}.txt "
done 

echo "cards args for 0l: ${ccargs}"

echo "Start running 1l parameters:"

# ADD REGIONS with 1l datacards

VBF="VBF"
ggFpt250to350="ggFpt250to350"
ggFpt350to500="ggFpt350to500"
ggFpt500toInf="ggFpt500toInf"
TopCR="TopCR"
WJetsCR="WJetsCR"

########################### define SR/CR with 1l datacards

ccargs_1l="VBF=${cards_dir}/${VBF}.txt ggFpt250to350=${cards_dir}/${ggFpt250to350}.txt ggFpt350to500=${cards_dir}/${ggFpt350to500}.txt ggFpt500toInf=${cards_dir}/${ggFpt500toInf}.txt TopCR=${cards_dir}/${TopCR}.txt WJetsCR=${cards_dir}/${WJetsCR}.txt"

echo "cards args for 1l: ${ccargs_1l}"

########################### define SR/CR with datacards



echo "added 1l parameters:"
ccargs+=" "
ccargs+=${ccargs_1l}

###########################

# ADD REGIONS

SR1fail2016="SR1fail2016"
SR1fail2016APV="SR1fail2016APV"
SR1fail2017="SR1fail2017"
SR1fail2018="SR1fail2018"

SR1pass2016="SR1pass2016"
SR1pass2016APV="SR1pass2016APV"
SR1pass2017="SR1pass2017"
SR1pass2018="SR1pass2018"

# TopCRfail2016="TopCRfail2016"
# TopCRfail2016APV="TopCRfail2016APV"
# TopCRfail2017="TopCRfail2017"
# TopCRfail2018="TopCRfail2018"

TopCRpass2016="TopCRpass2016"
TopCRpass2016APV="TopCRpass2016APV"
TopCRpass2017="TopCRpass2017"
TopCRpass2018="TopCRpass2018"

########################### define SR/CR with datacards

ccargs_VH="SR1fail2016=${cards_dir}/${SR1fail2016}.txt \
SR1fail2016APV=${cards_dir}/${SR1fail2016APV}.txt \
SR1fail2017=${cards_dir}/${SR1fail2017}.txt \
SR1fail2018=${cards_dir}/${SR1fail2018}.txt \
SR1pass2016=${cards_dir}/${SR1pass2016}.txt \
SR1pass2016APV=${cards_dir}/${SR1pass2016APV}.txt \
SR1pass2017=${cards_dir}/${SR1pass2017}.txt \
SR1pass2018=${cards_dir}/${SR1pass2018}.txt \
TopCRpass2016=${cards_dir}/${TopCRpass2016}.txt \
TopCRpass2016APV=${cards_dir}/${TopCRpass2016APV}.txt \
TopCRpass2017=${cards_dir}/${TopCRpass2017}.txt \
TopCRpass2018=${cards_dir}/${TopCRpass2018}.txt"

# TopCRfail2016=${cards_dir}/${TopCRfail2016}.txt \
# TopCRfail2016APV=${cards_dir}/${TopCRfail2016APV}.txt \
# TopCRfail2017=${cards_dir}/${TopCRfail2017}.txt \
# TopCRfail2018=${cards_dir}/${TopCRfail2018}.txt \


echo "ccargs_VH:${ccargs_VH}"

ccargs+=" "
ccargs+=${ccargs_VH}


echo "total cards args=${ccargs}"


echo "total unblinded para=${unblindedparams}"

####################################################################################################
# Combine cards, text2workspace, fit, limits, significances, fitdiagnositcs, GoFs
####################################################################################################

# need to run this for large # of nuisances 
# https://cms-talk.web.cern.ch/t/segmentation-fault-in-combine/20735
ulimit -s unlimited

if [ $workspace = 1 ]; then
    echo "Combining cards:"
    for file in $ccargs; do
    echo "  ${file##*/}"
    done
    echo "-------------------------"
    combineCards.py $ccargs > $ws.txt
    echo "Running text2workspace"
    # use --channel-masks options to mask the channels
    text2workspace.py $ws.txt --channel-masks -o $wsm.root 2>&1 | tee $outsdir/text2workspace.txt
else
    if [ ! -f "$wsm.root" ]; then
        echo "Workspace doesn't exist! Use the -w|--workspace option to make workspace first"
        exit 1
    fi
fi


if [ $bfit = 1 ]; then
    echo "Blinded background-only fit (MC Blinded)"
    combine -D $dataset -M MultiDimFit --saveWorkspace -m 125 -d ${wsm}.root -v 9 \
    --cminDefaultMinimizerStrategy 1 --cminDefaultMinimizerTolerance $mintol --X-rtd MINIMIZER_MaxCalls=400000 \
    --setParameters "${maskunblindedargs},${setparamsblinded},${mask1l},${maskVH},r=0"  \
    --freezeParameters "r,${freezeparamsblinded}" \
    -n Snapshot 2>&1 | tee $outsdir/MultiDimFit.txt
fi

if [ $limits = 1 ]; then
    echo "Limits"
    combine -M AsymptoticLimits -m 125 -n "" -d $wsm.root --rMax 20 --rMin -20 \
    --saveWorkspace --saveToys -s "$seed" --toysFrequentist 2>&1 | tee $outsdir/ObservedAsymptoticLimits.txt

    combineTool.py -M Impacts -m 125 -n "expected_impacts" \
    -t -1 --bypassFrequentistFit --toysFrequentist --expectSignal 1 --rMin -40 --rMax 40 \
    -d $wsm.root --doInitialFit --robustFit 1 \
    --cminDefaultMinimizerStrategy 0  2>&1 | tee $outsdir/Expected_Impacts_init.txt
fi


if [ $significance = 1 ]; then
    echo "Significance"
    combine -M Significance -m 125 -n "" -d $wsm.root --rMin -40 --rMax 40 \
    --saveWorkspace --saveToys -s "$seed" --toysFrequentist 2>&1 | tee $outsdir/ObservedSignificance.txt

    echo "Significance"
    combine -M Significance -m 125 -n "" -d $wsm.root --rMin -40 --rMax 40 \
    -t -1 --expectSignal 1 2>&1 | tee $outsdir/ExpectedSignificance.txt
fi


if [ $dfit = 1 ]; then
    echo "Fit Diagnostics(MC Blinded)"
    combine -M FitDiagnostics -m 125 -d ${wsm}.root \
    --setParameters "${maskunblindedargs},${setparamsblinded},${unmask1l}" \
    --freezeParameters ${freezeparamsblinded} \
    --cminDefaultMinimizerStrategy 0 \
    --cminDefaultMinimizerTolerance $mintol --X-rtd MINIMIZER_MaxCalls=5000000 \
    --saveShapes --saveNormalizations --saveWithUncertainties --saveOverallShapes \
    -n Blinded --ignoreCovWarning -v 9 2>&1 | tee $outsdir/FitDiagnostics.txt

    # --saveShapes --saveNormalizations --saveWithUncertainties --saveOverallShapes \ - to save uncertainties

    echo "Fit Shapes"
    PostFitShapesFromWorkspace --dataset "$dataset" -w ${wsm}.root --output FitShapes.root \
    -m 125 -f fitDiagnosticsBlinded.root:fit_b --postfit --print 2>&1 | tee $outsdir/FitShapes.txt
fi


if [ $dfit_asimov = 1 ]; then
    echo "Fit Diagnostics on Asimov dataset(MC unblinded)"
    combine -M FitDiagnostics -m 125 -d ${wsm_snapshot}.root --snapshotName MultiDimFit \
    -t -1 --expectSignal=1 --toysFrequentist --bypassFrequentistFit --saveWorkspace --saveToys --ignoreCovWarning --cminDefaultMinimizerStrategy 0 \
    ${unblindedparams} --floatParameters ${freezeparamsblinded},r \
    --saveShapes --saveNormalizations --saveWithUncertainties --saveOverallShapes --cminDefaultMinimizerTolerance $mintol --X-rtd MINIMIZER_MaxCalls=5000000 \
    -n Asimov -v 9 2>&1 | tee $outsdir/FitDiagnosticsAsimov.txt

    # use  --saveOverallShapes --saveWithUncertainties --saveShapes --saveNormalizations  to save uncertainties

    combineTool.py -M ModifyDataSet ${wsm}.root:w ${wsm}_asimov.root:w:toy_asimov -d higgsCombineAsimov.FitDiagnostics.mH125.123456.root:toys/toy_asimov

    echo "Fit Shapes"
    PostFitShapesFromWorkspace --dataset toy_asimov -w ${wsm}_asimov.root --output FitShapesAsimov.root \
    -m 125 -f fitDiagnosticsAsimov.root:fit_b --postfit --print 2>&1 | tee $outsdir/FitShapesAsimov.txt
fi

if [ $gofdata = 1 ]; then
    echo "GoF on data"
    combine -M GoodnessOfFit -d ${wsm_snapshot}.root --algo saturated -m 125 \
    --snapshotName MultiDimFit --bypassFrequentistFit \
    --setParameters ${maskunblindedargs},${setparamsblinded},r=0 \
    --freezeParameters ${freezeparams},r \
    -n Data -v 9 2>&1 | tee $outsdir/GoF_data.txt
fi



if [ $goftoys = 1 ]; then
    echo "GoF on toys"
    combine -M GoodnessOfFit -d ${wsm_snapshot}.root --algo saturated -m 125 \
    --snapshotName MultiDimFit --bypassFrequentistFit \
    --setParameters "${maskunblindedargs},${setparamsblinded},r=0" \
    --freezeParameters "${freezeparamsblinded},r" --saveToys \
    -n Toys -v 9 -s "$seed" -t "$numtoys" --toysFrequentist 2>&1 | tee $outsdir/GoF_toys.txt
fi



if [ $impactsi = 1 ]; then
    echo "Initial fit for impacts"

    combineTool.py -M Impacts -m 125 -n "impacts" \
    --expectSignal 1 --rMin -40 --rMax 40 \
    -d $wsm.root --doInitialFit --robustFit 1 \
    --cminDefaultMinimizerStrategy 0 --cminDefaultMinimizerTolerance 5 2>&1 | tee $outsdir/Impacts_init.txt
fi

if [ $impactsf != 0 ]; then
    echo "Impact scan for $impactsf"
    # Impacts module cannot access parameters which were frozen in MultiDimFit, so running impacts
    # for each parameter directly using its internal command
    # (also need to do this for submitting to condor anywhere other than lxplus)
    combine -M MultiDimFit -n "_paramFit_impacts_$impactsf" --algo impact --redefineSignalPOIs r -P "$impactsf" \
    --floatOtherPOIs 1 --saveInactivePOI 1 -d $wsm.root \
    --expectSignal 1 --robustFit 1 \
    --rMin -40 --rMax 40 --cminDefaultMinimizerStrategy 0  --cminDefaultMinimizerTolerance 5 -m 125 | tee "$outsdir/Impacts_$impactsf.txt"
fi


if [ $impactsc != 0 ]; then

    echo "Collecting impacts"
    combineTool.py -M Impacts \
    -m 125 -n "impacts" -d $wsm.root \
    --expectSignal 1 --named "$impactsc" \
    --rMin -40 --rMax 40 -v 1 -o impacts.json 2>&1 | tee $outsdir/Impacts_collect.txt

    plotImpacts.py -i impacts.json -o impacts 
fi


if [ $bias != -1 ]; then
    echo "Bias test with bias $bias"
    # setting verbose > 0 here can lead to crazy large output files (~10-100GB!) because of getting
    # stuck in negative yield areas
    combine -M FitDiagnostics --trackParameters r --trackErrors r --justFit \
    -m 125 -n "bias${bias}" -d ${wsm_snapshot}.root --rMin "-40" --rMax 40 \
    --snapshotName MultiDimFit --bypassFrequentistFit --toysFrequentist --expectSignal $bias \
    ${unblindedparams},r=$bias --floatParameters ${freezeparamsblinded} \
    --robustFit=1 -t $numtoys -s $seed \
    --cminDefaultMinimizerStrategy=0 \
    --X-rtd MINIMIZER_MaxCalls=1000000 --cminDefaultMinimizerTolerance $mintol 2>&1 | tee $outsdir/bias${bias}seed${seed}.txt
fi