import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser

parser = OptionParser()
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2018")
parser.add_option('--type',      action="store",type="string",dest="type"      ,default="MC")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="notest")

(options, args) = parser.parse_args()

print("Now clean ntuple files in year:",options.year)

NtupleDir = '/data/bond/zhaoyz/Ntuple/V5/Splitted/' + options.year + "/"
NtupleDir_merged = '/data/bond/zhaoyz/Ntuple/V5/Merged/' + options.year + "/"
_ = os.system("mkdir -p " + NtupleDir_merged)

if options.type not in os.listdir('/data/bond/zhaoyz/Ntuple/V5/Merged/' + options.year + "/"):
    print("No types in merged dir so far")
    os.mkdir('/data/bond/zhaoyz/Ntuple/V5/Merged/' + options.year + "/" + options.type)
else : 
    print("type dir exist")

for FileType in os.listdir(NtupleDir):
    if not FileType == options.type: continue
    for Samples in os.listdir(NtupleDir + FileType):
        for Files in os.listdir(NtupleDir + FileType + '/' + Samples):
            if os.path.getsize(NtupleDir + FileType + '/' + Samples + '/' + Files) == 0:
                print(NtupleDir + FileType + '/' + Samples + '/' + Files, " is empty.")
                if options.test == "notest": 
                    os.system("rm %s"%(NtupleDir + FileType + '/' + Samples + '/' + Files))
                    print("Now all the empty files in ",options.year,"has been deleted.")


 
