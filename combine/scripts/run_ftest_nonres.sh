#!/bin/bash

####################################################################################################
# 1) Makes datacards and workspaces for different orders of polynomials
# 2) Runs background-only fit (Higgs mass window blinded) for lowest order polynomial and GoF test (saturated model) on data
# 3) Runs fit diagnostics and saves shapes (-d|--dfit)
# 4) Generates toys and gets test statistics for each (-t|--goftoys)
# 5) Fits +1 order models to all 100 toys and gets test statistics (-f|--ffits)
#
# Author: Raghav Kansal
####################################################################################################

goftoys=0
ffits=0
dfit=0
seed=44
numtoys=100
order=17
limits=0

options=$(getopt -o "tfdlo:" --long "cardstag:,templatestag:,goftoys,ffits,dfit,limits,order:,numtoys:,seed:" -- "$@")
eval set -- "$options"

while true; do
    case "$1" in
        -t|--goftoys)
            goftoys=1
            ;;
        -f|--ffits)
            ffits=1
            ;;
        -d|--dfit)
            dfit=1
            ;;
        -l|--limits)
            limits=1
            ;;
        --cardstag)
            shift
            cards_tag=$1
            ;;
        --templatestag)
            shift
            templates_tag=$1
            ;;
        --o,order)
            shift
            order=$1
            ;;
        --seed)
            shift
            seed=$1
            ;;
        --numtoys)
            shift
            numtoys=$1
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

echo "Arguments: cardstag=$cards_tag templatestag=$templates_tag sigsample=$sig_sample dfit=$dfit \
goftoys=$goftoys ffits=$ffits seed=$seed numtoys=$numtoys"


####################################################################################################
# Set up fit args
####################################################################################################

# templates_dir="/eos/uscms/store/user/rkansal/bbVV/templates/${templates_tag}"
cards_dir="/ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/scripts/f_test/cards"
mkdir -p ${cards_dir}
echo "Saving datacards to ${cards_dir}"

# these are for inside the different cards directories
dataset=data_obs
ws="./combined"
wsm=${ws}_withmasks
wsm_snapshot=higgsCombineSnapshot.MultiDimFit.mH125

outsdir="./outs"

# nonresonant args
ccargs="CR1=${cards_dir}/CR1.txt CR1blinded=${cards_dir}/CR1blinded.txt SR1a=${cards_dir}/SR1a.txt SR1ablinded=${cards_dir}/SR1ablinded.txt"
maskunblindedargs="mask_SR1a=1,mask_CR1=1,mask_SR1ablinded=0,mask_CR1blinded=0"
maskblindedargs="mask_SR1a=0,mask_CR1=0,mask_SR1alinded=1,mask_CR1blinded=1"

# ccargs="CR1=${cards_dir}/CR1.txt SR1a=${cards_dir}/SR1a.txt"

# maskunblindedargs="mask_SR1a=1,mask_CR1=1,mask_SR1ablinded=0,mask_CR1blinded=0"
# maskblindedargs="mask_SR1a=0,mask_CR1=0,mask_SR1alinded=1,mask_CR1blinded=1"


# freeze qcd params in blinded bins
setparamsblinded=""
freezeparamsblinded=""

# blind 80 - 160 GeV mass bin, starts from 80 and ends with 160
for bin in {4..11} 
do
    setparamsblinded+="CMS_HWW_boosted_tf_dataResidual_Bin${bin}=0,"
    freezeparamsblinded+="CMS_HWW_boosted_tf_dataResidual_Bin${bin},"
done

# remove last comma
setparamsblinded=${setparamsblinded%,}
freezeparamsblinded=${freezeparamsblinded%,}


####################################################################################################
# Making cards and workspaces for each order polynomial
####################################################################################################

for ord1 in {15..17}
do
    model_name="nTF_${ord1}"
    
    # create datacards if they don't already exist
    if [ ! -f "${cards_dir}/${model_name}/SR1a.txt" ]; then
        echo "Making Datacard for $model_name"
        python3 -u /ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/create_datacard.py \
        --nTF ${ord1} --model-name ${model_name} --cards-dir ${cards_dir}
    fi

    cd ${cards_dir}/${model_name}/
    echo "now it's in: "
    echo ${cards_dir}/${model_name}/


    # make workspace, background-only fit, GoF on data if they don't already exist
    if [ ! -f "./higgsCombineData.GoodnessOfFit.mH125.root" ]; then
        echo "Making workspace, doing b-only fit and gof on data"
        /ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/scripts/run_blinded.sh -wbg 
    fi

    if [ $dfit = 1 ]; then
        /ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/scripts/run_blinded.sh -d 
    fi

    if [ $limits = 1 ]; then
        /ospool/cms-user/yuzhe/BoostedHWW/prediction/boostedHWW/combine/scripts/run_blinded.sh -l 
    fi

    cd -
done


####################################################################################################
# Generate toys for (0, 0) order, this is toys file
####################################################################################################

echo "now generate toys"

model_name="nTF_$order"
toys_name=$order
cd ${cards_dir}/${model_name}/
echo "now" ${cards_dir}/${model_name}/
toys_file="$(pwd)/higgsCombineToys${toys_name}.GenerateOnly.mH125.$seed.root"
echo ${toys_file} "should be created"
cd -

if [ $goftoys = 1 ]; then 
    cd ${cards_dir}/${model_name}/
    
    # ulimit -s unlimited

    echo "Toys for $order order fit"
    combine -M GenerateOnly -m 125 -d ${wsm_snapshot}.root \
    --snapshotName MultiDimFit --bypassFrequentistFit \
    --setParameters ${maskunblindedargs},${setparams},r=0 \
    --freezeParameters ${freezeparams},r \
    -n "Toys${toys_name}" -t $numtoys --saveToys -s $seed -v 9 2>&1 | tee $outsdir/gentoys.txt

    cd -
fi


####################################################################################################
# GoFs on generated toys for next order polynomials, and this is GOF
####################################################################################################

if [ $ffits = 1 ]; then # -f
    for ord1 in 17 
    do
        model_name="nTF_${ord1}"
        echo "Fits for $model_name"

        cd ${cards_dir}/${model_name}/

        ulimit -s unlimited

        combine -M GoodnessOfFit -d ${wsm_snapshot}.root --algo saturated -m 125 \
        --setParameters ${maskunblindedargs},${setparams},r=0 \
        --freezeParameters ${freezeparams},r \
        -n Toys${toys_name} -v 9 -s $seed -t $numtoys --toysFile ${toys_file} 2>&1 | tee $outsdir/GoF_toys${toys_name}.txt

        cd -
    done
fi