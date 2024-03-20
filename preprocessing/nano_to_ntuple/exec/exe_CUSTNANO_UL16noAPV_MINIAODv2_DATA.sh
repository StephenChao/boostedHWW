#!/bin/bash -e

OPTIND=1

while getopts "h?f:i:o:s:e:x:cy:" opt; do
    case "$opt" in
    h|\?)
        echo 'parameters'
        exit 0
        ;;
    f)  INPUTFILENAMES=$OPTARG
        # e.g. 2016, 2017, 2018
        ;;
    i)  IFILE=$OPTARG
        # e.g. WWW_dim8, WZZ_dim8, WWZ_dim8 or ZZZ_dim8
        ;;
    y)  YEAR=$OPTARG
        ;;
    e)  EOSPATH=$OPTARG
        ;;
    x)  X509_USER_PROXYTMP=$OPTARG
        ;;
    c)  CopyToEos=1 # to copy the outfile to cmslpc eos space
        ;;
    esac
done

BASEPATH=`pwd`
pwd
ls -lth

export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
if [ -r CMSSW_10_6_26/src ] ; then
  echo release CMSSW_10_6_26 already exists
else
  scram p CMSSW CMSSW_10_6_26
fi

cd CMSSW_10_6_26/src
cmsenv
ls -lth
eval `scram runtime -sh`
git clone https://github.com/gqlcms/Customized_NanoAOD.git .
./PhysicsTools/NanoTuples/scripts/install_onnxruntime.sh
scram b -j 16
echo "after scram"
ls -lth

mv $BASEPATH/fetchFiles.py .
python fetchFiles.py $BASEPATH $INPUTFILENAMES
if [ ! -f "$BASEPATH/Localfile.txt" ]; then
echo "$BASEPATH/Localfile.txt not found"
exit 11
fi
LOCALInputFile=`cat $BASEPATH/Localfile.txt`
echo $LOCALInputFile

cmsDriver.py data2016noapv \
--step NANO \
--nThreads 1 \
--data \
--era Run2_2016,run2_nanoAOD_106Xv2 \
--conditions 106X_dataRun2_v35 \
--eventcontent NANOAOD \
--datatier NANOAOD \
--filein file:$LOCALInputFile \
--fileout file:out_1.root \
-n -1 \
--customise PhysicsTools/NanoTuples/nanoTuples_cff.nanoTuples_customizeData \
--no_exec
cmsRun data2016noapv_NANO.py

pwd
ls -lth

# Rigorous sweeproot which checks ALL branches for ALL events.
# If GetEntry() returns -1, then there was an I/O problem, so we will delete it
python << EOL
import ROOT as r
import os
foundBad = False
try:
    f1 = r.TFile("out_1.root")
    t = f1.Get("Events")
    nevts = t.GetEntries()
    for i in range(0,t.GetEntries(),1):
        if t.GetEntry(i) < 0:
            foundBad = True
            print "[RSR] found bad event %i" % i
            break
except: foundBad = True
if foundBad:
    print "[RSR] removing output file because it does not deserve to live"
    os.system("rm out_1.root")
else: print "[RSR] passed the rigorous sweeproot"
EOL

mv out_1.root $BASEPATH
echo $BASEPATH
ls -lth $BASEPATH

