import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser


NtupleDir = "/data/bond/zhaoyz/CustNano/HWWPFNano/2018/ttbar"
# for FileType in os.listdir(NtupleDir):  
for Samples in os.listdir(NtupleDir):
    if Samples != "Semileptonic_Split" : continue
    for Files in os.listdir(NtupleDir  + '/' + Samples):
        if os.path.getsize(NtupleDir  + '/' + Samples + '/' + Files) == 0:
            print(NtupleDir + '/' + Samples + '/' + Files, " is empty.")
            os.system("rm %s"%(NtupleDir  + '/' + Samples + '/' + Files))
print("Now all the empty files in 2018 ttbar has been deleted.")

# NtupleDir = "/data/bond/zhaoyz/CustNano/HWWPFNano/2018/ttbar/"
Ntuple_MERGED="/data/bond/zhaoyz/CustNano/HWWPFNano/2018/ttbar/Semileptonic_MERGED" 
# Ntuple_MERGED="/data/bond/zhaoyz/Ntuple/V3/2018/Merged/ttbar_validation_2/"
for process in os.listdir(NtupleDir):
    if process != "Semileptonic_Split":
        continue
    # os.mkdir(Ntuple_MERGED + process)
    os.system("python andrew_haddnano.py " + Ntuple_MERGED + "/MERGED.root " + NtupleDir + "/" + process + "/*")
