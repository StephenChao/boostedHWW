source /cvmfs/cms.cern.ch/cmsset_default.sh
xrdcp -s root://cmseos.fnal.gov//store/user/rkansal/CMSSW_11_3_4.tgz .
# if this doesn't work,
# consider to download it from other site and then install it

echo "extracting tar"
tar -xf CMSSW_11_3_4.tgz
rm CMSSW_11_3_4.tgz
cd CMSSW_11_3_4/src/
scramv1 b ProjectRename # this handles linking the already compiled code - do NOT recompile
eval `scramv1 runtime -sh` # cmsenv is an alias not on the workers
echo $CMSSW_BASE "is the CMSSW we have on the local worker node"
cd ../..

echo "testing combine"
combine

echo "Installing hist"
pip3 install --user hist==2.7.2
git clone git@github.com:rkansal47/rhalphalib.git
cd rhalphalib
echo "Installing rhalphalib"
pip3 install --user .
cd ..

echo "testing installed libraries"
echo "import hist; import rhalphalib; print('Import successful! hist version:', hist.__version__)" > lib_test.py
python3 lib_test.py