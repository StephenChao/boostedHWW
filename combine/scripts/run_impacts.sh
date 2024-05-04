#!/bin/bash
# shellcheck disable=SC2086

cards_dir="./"
wsm_snapshot=higgsCombineSnapshot.MultiDimFit.mH125

outsdir=${cards_dir}/outs
mkdir -p $outsdir


echo "Initial Fit"
combineTool.py -M Impacts -t -1 --snapshotName MultiDimFit --bypassFrequentistFit --toysFrequentist \
-m 125 -n ".impacts" -d ${wsm_snapshot}.root --doInitialFit --robustFit 1 \
--setParameters mask_SR1a=1,mask_SR1b=1,mask_CR1=1,mask_SR1aBlinded=0,mask_SR1bBlinded=0,mask_CR1Blinded=0,mask_SR2a=1,mask_SR2b=1,mask_CR2=1,mask_SR2aBlinded=0,mask_SR2bBlinded=0,mask_CR2Blinded=0 \
--freezeParameters CMS_HWW_boosted_tf_dataResidual_CR1_Bin4,CMS_HWW_boosted_tf_dataResidual_CR2_Bin4,CMS_HWW_boosted_tf_dataResidual_CR1_Bin5,CMS_HWW_boosted_tf_dataResidual_CR2_Bin5,CMS_HWW_boosted_tf_dataResidual_CR1_Bin6,CMS_HWW_boosted_tf_dataResidual_CR2_Bin6,CMS_HWW_boosted_tf_dataResidual_CR1_Bin7,CMS_HWW_boosted_tf_dataResidual_CR2_Bin7,CMS_HWW_boosted_tf_dataResidual_CR1_Bin8,CMS_HWW_boosted_tf_dataResidual_CR2_Bin8,CMS_HWW_boosted_tf_dataResidual_CR1_Bin9,CMS_HWW_boosted_tf_dataResidual_CR2_Bin9 \
--setParameterRanges r=-20,20 --cminDefaultMinimizerStrategy=0 --saveWorkspace -v 9 2>&1 | tee $outsdir/Impacts_initial.txt


echo "Impacts"
combineTool.py -M Impacts -t -1 --snapshotName MultiDimFit --bypassFrequentistFit --toysFrequentist \
-m 125 -n ".impacts" -d ${wsm_snapshot}.root --doFits --robustFit 1 \
--setParameters mask_SR1a=1,mask_SR1b=1,mask_CR1=1,mask_SR1aBlinded=0,mask_SR1bBlinded=0,mask_CR1Blinded=0,mask_SR2a=1,mask_SR2b=1,mask_CR2=1,mask_SR2aBlinded=0,mask_SR2bBlinded=0,mask_CR2Blinded=0 \
--freezeParameters CMS_HWW_boosted_tf_dataResidual_CR1_Bin4,CMS_HWW_boosted_tf_dataResidual_CR2_Bin4,CMS_HWW_boosted_tf_dataResidual_CR1_Bin5,CMS_HWW_boosted_tf_dataResidual_CR2_Bin5,CMS_HWW_boosted_tf_dataResidual_CR1_Bin6,CMS_HWW_boosted_tf_dataResidual_CR2_Bin6,CMS_HWW_boosted_tf_dataResidual_CR1_Bin7,CMS_HWW_boosted_tf_dataResidual_CR2_Bin7,CMS_HWW_boosted_tf_dataResidual_CR1_Bin8,CMS_HWW_boosted_tf_dataResidual_CR2_Bin8,CMS_HWW_boosted_tf_dataResidual_CR1_Bin9,CMS_HWW_boosted_tf_dataResidual_CR2_Bin9 \
--setParameterRanges r=-15,15 -v 9 2>&1 | tee $outsdir/Impacts.txt


echo "Collect impacts"
combineTool.py -M Impacts -d ${wsm_snapshot}.root -m 125 -n ".impacts" \
--setParameters mask_SR1a=1,mask_SR1b=1,mask_CR1=1,mask_SR1aBlinded=0,mask_SR1bBlinded=0,mask_CR1Blinded=0,mask_SR2a=1,mask_SR2b=1,mask_CR2=1,mask_SR2aBlinded=0,mask_SR2bBlinded=0,mask_CR2Blinded=0 \
--freezeParameters CMS_HWW_boosted_tf_dataResidual_CR1_Bin4,CMS_HWW_boosted_tf_dataResidual_CR2_Bin4,CMS_HWW_boosted_tf_dataResidual_CR1_Bin5,CMS_HWW_boosted_tf_dataResidual_CR2_Bin5,CMS_HWW_boosted_tf_dataResidual_CR1_Bin6,CMS_HWW_boosted_tf_dataResidual_CR2_Bin6,CMS_HWW_boosted_tf_dataResidual_CR1_Bin7,CMS_HWW_boosted_tf_dataResidual_CR2_Bin7,CMS_HWW_boosted_tf_dataResidual_CR1_Bin8,CMS_HWW_boosted_tf_dataResidual_CR2_Bin8,CMS_HWW_boosted_tf_dataResidual_CR1_Bin9,CMS_HWW_boosted_tf_dataResidual_CR2_Bin9 \
--setParameterRanges r=-20,20 -o impacts.json


echo "Plot impacts"
plotImpacts.py -i impacts.json -o impacts