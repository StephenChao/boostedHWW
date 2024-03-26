#!/bin/bash

####################################################################################################
# 1) Makes datacards and workspaces for different orders of polynomials
# 2) Runs background-only fit in validation region for lowest order polynomial and GoF test (saturated model) on data
# 3) Runs fit diagnostics and saves shapes (-d|--dfit)
# 4) Generates toys and gets test statistics for each (-t|--goftoys)
# 5) Fits +1 order models to all 100 toys and gets test statistics (-f|--ffits)
#
# Author: Raghav Kansal
####################################################################################################

run_f=0
goftoys=0
ffits=0
dfit=0
limits=0
seed=66
numtoys=40
templates_tag="24Mar2024_JEC_fixed" 

options=$(getopt -o "tfd" --long "cardstag:,templatestag:,sigsample:,goftoys,ffits,dfit,numtoys:,seed:" -- "$@")
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
        --cardstag)
            shift
            cards_tag=$1
            ;;
        --templatestag)
            shift
            templates_tag=$1
            ;;
        --sigsample)
            shift
            sig_sample=$1
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
templates_dir="../../postprocessing/templates/${templates_tag}"

cd ..
combine_dir=$(pwd)
cd -

cards_dir=${combine_dir}/f_test/cards

mkdir -p ${cards_dir}
echo "Saving datacards to ${cards_dir}"

# these are for inside the different cards directories
dataset=data_obs
ws="./combined"
wsm=${ws}_withmasks
wsm_snapshot=higgsCombineSnapshot.MultiDimFit.mH125


outsdir="./outs"

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

# echo "cards args=${ccargs}"
# echo "maskblinded=${maskblindedargs}"
# echo "maskunblinded=${maskunblindedargs}"

# freeze qcd params in blinded bins
setparamsblinded=""
freezeparamsblinded=""

# blind 90 - 150 GeV mass bin, starts from 90 and ends with 150

for bin in {4..9} 
do  
    for cr in CR1 CR2;
    do
        setparamsblinded+="CMS_HWW_boosted_tf_dataResidual_${cr}_Bin${bin}=0,"
        freezeparamsblinded+="CMS_HWW_boosted_tf_dataResidual_${cr}_Bin${bin},"
    done
done

# remove last comma
setparamsblinded=${setparamsblinded%,}
freezeparamsblinded=${freezeparamsblinded%,}

####################################################################################################
# Making cards and workspaces for each order polynomial
####################################################################################################

for orda in {3..5}
do
    for ordb in {5..7}
    do
        model_name="nTFa_${orda}_nTFb_${ordb}"
        if [ ! -f "${cards_dir}/${model_name}/higgsCombineData.GoodnessOfFit.mH125.root" ]; then
            echo "Making Datacard for $model_name"
            python3 -u ${combine_dir}/create_datacard.py \
            --model-name ${model_name}  --templates-dir "${templates_dir}"\
            --nTFa ${orda} --nTFb ${ordb} --cards-dir ${cards_dir}
        fi
        pwd
        echo "Cards dir is ${cards_dir}"
        cd "${cards_dir}/${model_name}/"
        echo "now it's in: ${cards_dir}/${model_name}"

        if [ ! -f "./higgsCombineData.GoodnessOfFit.mH125.root" ]; then
            echo "Making workspace, doing b-only fit and gof on data"
            source ${combine_dir}/scripts/run_blinded.sh -wbg 
        fi

        if [ $dfit = 1 ]; then
            source ${combine_dir}/scripts/run_blinded.sh -d 
        fi

        if [ $goftoys = 1 ]; then
            toys_name="${orda}${ordb}"
            toys_file="$(pwd)/higgsCombineToys${toys_name}.GenerateOnly.mH125.$seed.root"
            ulimit -s unlimited
            echo "Toys for (${orda}, ${ordb}) order fit"
            combine -M GenerateOnly -m 125 -d ${wsm_snapshot}.root \
            --snapshotName MultiDimFit --bypassFrequentistFit \
            --setParameters ${maskunblindedargs},${setparams},r=0 \
            --freezeParameters ${freezeparams},r \
            -n "Toys${toys_name}" -t $numtoys --saveToys -s $seed -v 9 2>&1 | tee $outsdir/gentoys.txt
        fi

        if [ $ffits = 1 ]; then
            model_name="nTFa_${orda}_nTFb_${ordb}"
            toys_name="${orda}${ordb}"
            toys_file="$(pwd)/higgsCombineToys${toys_name}.GenerateOnly.mH125.$seed.root"
            echo "Fits for $model_name"
            ulimit -s unlimited
            combine -M GoodnessOfFit -d ${wsm_snapshot}.root --algo saturated -m 125 \
            --setParameters ${maskunblindedargs},${setparams},r=0 \
            --freezeParameters ${freezeparams},r \
            -n Toys${toys_name} -v 9 -s $seed -t $numtoys --toysFile ${toys_file} 2>&1 | tee $outsdir/GoF_toys${toys_name}.txt
        fi

        cards_dir=${combine_dir}/f_test/cards
        cd ${combine_dir}/scripts
    done
done


####################################################################################################
# Run GoF for each order on generated toys
####################################################################################################
if [$run_f = 1]; then
    low1=3
    low2=6

    model_name="nTFa_${low1}_nTFb_${low2}"
    toys_name="${low1}${low2}"
    cards_dir=${combine_dir}/f_test/cards
    cd ${cards_dir}/${model_name}/
    mkdir -p $outsdir
    toys_file="$(pwd)/higgsCombineToys${toys_name}.GenerateOnly.mH125.$seed.root"
    echo "Toys for ($low1, $low2) order fit is $toys_file"

    cd ${combine_dir}/scripts
    for (( ord1=$low1; ord1<=$((low1 + 1)); ord1++ ))
    do
        for (( ord2=$low2; ord2<=$((low2 + 1)); ord2++ ))
        do
            if [ $ord1 -gt $low1 ] && [ $ord2 -gt $low2 ]
            then
                break
            fi

            if [ $ord1 = $low1 ] && [ $ord2 = $low2 ]; then
                continue
            fi

            if [ $ord1 = $((low1 + 1)) ] && [ $ord2 = $low2 ]; then
                continue
            fi

            model_name="nTFa_${ord1}_nTFb_${ord2}"
            echo "GoF for $model_name"

            cd ${cards_dir}/${model_name}/
            mkdir -p $outsdir

            ulimit -s unlimited

            combine -M GoodnessOfFit -d ${wsm_snapshot}.root --algo saturated -m 125 \
            --setParameters ${maskunblindedargs},${setparams},r=0 \
            --freezeParameters ${freezeparams},r \
            -n Toys${toys_name}Seed$seed -v 9 -s $seed -t $numtoys \
            --toysFile ${toys_file} 2>&1 | tee $outsdir/GoF_toys${toys_name}$seed.txt

            echo "in the end, now it's in: $(pwd)"
            cd ${combine_dir}/scripts
        done
    done
fi