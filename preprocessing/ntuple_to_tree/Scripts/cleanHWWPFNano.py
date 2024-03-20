import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser

# parser = OptionParser()
# parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2018")
# (options, args) = parser.parse_args()

# print("Now clean ntuple files in year:",options.year)
# NtupleDir = '/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Splitted/"
# if "Merged" not in os.listdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year):
#     print("No merged dir so far")
#     os.mkdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Merged")
# else : print("merged dir exist")
# if "Data" not in os.listdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Merged"):
#     print("No types in merged dir so far")
#     os.mkdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Merged/Data")
#     os.mkdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Merged/MC")
#     os.mkdir('/data/pubfs/zhaoyz/Ntuple/V3/' + options.year + "/Merged/Signal")
# else : print("type dir exist")
NtupleDir = "/data/bond/zhaoyz/CustNano/HWWPFNano/2016APV/Signal"
# for FileType in os.listdir(NtupleDir):  
for Samples in os.listdir(NtupleDir):
    for Files in os.listdir(NtupleDir  + '/' + Samples):
        if os.path.getsize(NtupleDir  + '/' + Samples + '/' + Files) == 0:
            print(NtupleDir + '/' + Samples + '/' + Files, " is empty.")
            os.system("rm %s"%(NtupleDir  + '/' + Samples + '/' + Files))
print("Now all the empty files in 2017 signal has been deleted.")

NtupleDir = "/data/bond/zhaoyz/CustNano/HWWPFNano/2016APV/Signal/"
Ntuple_MERGED="/data/bond/zhaoyz/CustNano/HWWPFNano/2016APV/Signal_MERGED/" 
for process in os.listdir(NtupleDir):
    os.mkdir(Ntuple_MERGED + process)
    os.system("python andrew_haddnano.py " + Ntuple_MERGED + process + "/MERGED.root " + NtupleDir + process + "/*")
