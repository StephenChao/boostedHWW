#!/bin/bash
# shellcheck disable=SC2154,SC1091,SC2046,SC2086

####################################################################################################
# Script for running impacts plots
#
# Author: Raghav Kansal, Yuzhe Zhao
####################################################################################################

echo "running impacts"

####################################################################################################
# Get my tarred CMSSW with combine already compiled
####################################################################################################

source /cvmfs/cms.cern.ch/cmsset_default.sh
xrdcp -s root://cmseos.fnal.gov//store/user/rkansal/CMSSW_11_3_4.tgz .

echo "extracting tar"
tar -xf CMSSW_11_3_4.tgz
rm CMSSW_11_3_4.tgz
cd CMSSW_11_3_4/src/ || exit
scramv1 b ProjectRename  # this handles linking the already compiled code - do NOT recompile
eval "$(scramv1 runtime -sh)"  # cmsenv is an alias not on the workers
echo "$CMSSW_BASE" "is the CMSSW we have on the local worker node"
cd ../..

ls -lh

ulimit -s unlimited
./run_blinded.sh  -i
