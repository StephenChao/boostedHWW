#!/bin/bash
### https://github.com/rkansal47/HHbbVV/blob/main/src/HHbbVV/combine/run_blinded.sh

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
resonant=0 #always do non-resonant option
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
    ccargs+="${cr}=${cards_dir}/${cr}.txt ${cr}Blinded=${cards_dir}/${cr}Blinded.txt "
    ccargs+="${sra}=${cards_dir}/${sra}.txt ${sra}Blinded=${cards_dir}/${sra}Blinded.txt "
    ccargs+="${srb}=${cards_dir}/${srb}.txt ${srb}Blinded=${cards_dir}/${srb}Blinded.txt "
    maskunblindedargs+="mask_${sra}=1,mask_${srb}=1,mask_${cr}=1,"
    maskunblindedargs+="mask_${sra}Blinded=0,mask_${srb}Blinded=0,mask_${cr}Blinded=0,"
    maskblindedargs+="mask_${sra}=0,mask_${srb}=0,mask_${cr}=0,"
    maskblindedargs+="mask_${sra}Blinded=1,mask_${srb}Blinded=1,mask_${cr}Blinded=1,"
done 
maskblindedargs=${maskblindedargs%,}
maskunblindedargs=${maskunblindedargs%,}

echo "cards args=${ccargs}"
echo "maskblinded=${maskblindedargs}"
echo "maskunblinded=${maskunblindedargs}"
# blind 80 - 160 GeV mass bin, starts from 80 and ends with 160(the bin number will be 4-9)
# freeze qcd params in blinded bins
setparamsblinded=""
freezeparamsblinded=""
for bin in {4..9} 
do  
    for cr in CR1 CR2;
    # for cr in CR3;
    do
        setparamsblinded+="CMS_HWW_boosted_tf_dataResidual_${cr}_Bin${bin}=0,"
        freezeparamsblinded+="CMS_HWW_boosted_tf_dataResidual_${cr}_Bin${bin},"
    done
done
# remove last comma
setparamsblinded=${setparamsblinded%,}
freezeparamsblinded=${freezeparamsblinded%,}
# floating parameters using var{} floats a bunch of parameters which shouldn't be floated,
# so countering this inside --freezeParameters which takes priority.
# Although, practically even if those are set to "float", I didn't see them ever being fitted,
# so this is just to be extra safe.
unblindedparams="--freezeParameters var{.*_In},var{.*__norm},var{n_exp_.*} --setParameters $maskblindedargs"
# excludeimpactparams='rgx{.*tf_dataResidual_Bin.*}'


echo "mask args:"
echo $maskblindedargs

echo "set params:"
echo $setparamsblinded

echo "freeze params:"
echo $freezeparamsblinded

echo "unblinded params:"
echo $unblindedparams

echo "cards args for 0l: ${ccargs}"
echo "maskblinded=${maskblindedargs}"
echo "maskunblinded=${maskunblindedargs}"

echo "Start running 1l parameters:"

# ADD REGIONS
VBF="VBF"
ggFpt250to300="ggFpt250to300"
ggFpt300to450="ggFpt300to450"
ggFpt450toInf="ggFpt450toInf"
TopCR="TopCR"
WJetsCR="WJetsCR"

ccargs_1l="VBF=${cards_dir}/${VBF}.txt ggFpt250to300=${cards_dir}/${ggFpt250to300}.txt ggFpt300to450=${cards_dir}/${ggFpt300to450}.txt ggFpt450toInf=${cards_dir}/${ggFpt450toInf}.txt TopCR=${cards_dir}/${TopCR}.txt WJetsCR=${cards_dir}/${WJetsCR}.txt"
echo "cards args for 1l: ${ccargs_1l}"


echo "total parameters:"
ccargs+=" "
ccargs+=${ccargs_1l}

#first we have to mask 1l information, and run b-only fit for 0l, and un-mask 1l in post-fit
mask1l="mask_${VBF}=1,mask_${ggFpt250to300}=1,mask_${ggFpt300to450}=1,mask_${ggFpt450toInf}=1,mask_${TopCR}=1,mask_${WJetsCR}=1"
ubmask1l="mask_${VBF}=0,mask_${ggFpt250to300}=0,mask_${ggFpt300to450}=0,mask_${ggFpt450toInf}=0,mask_${TopCR}=0,mask_${WJetsCR}=0"

#un-mask 1l in the end
unblindedparams+=",${ubmask1l}"

echo "total cards args=${ccargs}"
echo "mask1l=${mask1l}"
echo "un-mask1l=${ubmask1l}"

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
    --setParameters "${maskunblindedargs},${setparamsblinded},${mask1l},r=0"  \
    --freezeParameters "r,${freezeparamsblinded}" \
    -n Snapshot 2>&1 | tee $outsdir/MultiDimFit.txt
else
    if [ ! -f "higgsCombineSnapshot.MultiDimFit.mH125.root" ]; then
        echo "Background-only fit snapshot doesn't exist! Use the -b|--bfit option to run fit first"
        exit 1
    fi
fi


if [ $limits = 1 ]; then
    echo "Expected limits"
    combine -M AsymptoticLimits -m 125 -n "" -d ${wsm_snapshot}.root --snapshotName MultiDimFit -v 9 \
    --saveWorkspace --saveToys --bypassFrequentistFit \
    ${unblindedparams},r=0 -s "$seed" \
    --floatParameters "${freezeparamsblinded},r" --toysFrequentist --run blind 2>&1 | tee $outsdir/AsymptoticLimits.txt
fi


if [ $significance = 1 ]; then
    echo "Expected significance(MC Unblinded)"
    combine -M Significance -d ${wsm_snapshot}.root -n "" --significance -m 125 --snapshotName MultiDimFit -v 9 \
    -t -1 --expectSignal=1 --saveWorkspace --saveToys --bypassFrequentistFit \
    ${unblindedparams},r=1 \
    --floatParameters ${freezeparamsblinded},r --toysFrequentist 2>&1 | tee $outsdir/Significance.txt
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

    combineTool.py -M Impacts --snapshotName MultiDimFit -m 125 -n "impacts" \
    -t -1 --bypassFrequentistFit --toysFrequentist --expectSignal 1 --rMin -40 --rMax 40\
    -d ${wsm_snapshot}.root --doInitialFit --robustFit 1 \
    ${unblindedparams} --floatParameters ${freezeparamsblinded} \
    --cminDefaultMinimizerStrategy 0 -v 1 2>&1 | tee $outsdir/Impacts_init.txt
fi

if [ $impactsf != 0 ]; then
    echo "Impact scan for $impactsf"
    # Impacts module cannot access parameters which were frozen in MultiDimFit, so running impacts
    # for each parameter directly using its internal command
    # (also need to do this for submitting to condor anywhere other than lxplus)
    combine -M MultiDimFit -n "_paramFit_impacts_$impactsf" --algo impact --redefineSignalPOIs r -P $impactsf \
    --floatOtherPOIs 1 --saveInactivePOI 1 --snapshotName MultiDimFit -d ${wsm_snapshot}.root \
    -t -1 --bypassFrequentistFit --toysFrequentist --expectSignal 1 --robustFit 1 \
    ${unblindedparams} --floatParameters ${freezeparamsblinded} \
    --rMin -40 --rMax 40 --cminDefaultMinimizerStrategy 0 -v 1 -m 125 | tee "$outsdir/Impacts_$impactsf.txt"
fi


if [ $impactsc != 0 ]; then

    echo "Collecting impacts"
    combineTool.py -M Impacts --snapshotName MultiDimFit \
    -m 125 -n "impacts" -d ${wsm_snapshot}.root \
    --setParameters ${maskblindedargs} --floatParameters ${freezeparamsblinded} \
    -t -1 --named $impactsc \
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