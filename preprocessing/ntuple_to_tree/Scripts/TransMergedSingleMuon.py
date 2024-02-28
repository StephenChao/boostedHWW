import os
# import random
# import sys
# import ctypes
# import time
# from datetime import datetime
import ROOT
from optparse import OptionParser
import subprocess

parser = OptionParser()
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2017")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="notest")

(options, args) = parser.parse_args()


path_tree ="/data/pubfs/zhaoyz/Tree/V8/" + options.year + "/Splitted/SingleMuon/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1="/data/pubfs/zhaoyz/Ntuple/V3/" + options.year + "/Merged/SingleMuon/"           # Your dir for Tree file after TransferTree, waiting for changing.
if options.year == "2017" or options.year == "2018":
    for das in os.listdir(file_dir1):
        if das not in os.listdir(path_tree): os.mkdir("%s%s"%(path_tree,das))
        for file in os.listdir(file_dir1+das):
            if file.endswith('.root'):
                print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year %s --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file,options.year))
                if options.test == "notest" : os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year %s --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file,options.year))
        print("TransferTree for ",das,"done")
        print("\n")
elif options.year  == "2016" or options.year == "2016APV":
    if options.year == "2016APV":   
        for das in os.listdir(file_dir1):
            if das not in os.listdir(path_tree): os.mkdir("%s%s"%(path_tree,das))
            for file in os.listdir(file_dir1+das):
                if file.endswith('.root'):
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016preVFP --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
                    if options.test == "notest" : os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016preVFP --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
            print("TransferTree for ",das,"done")
            print("\n")
    if options.year == "2016":
        for das in os.listdir(file_dir1):
            if das not in os.listdir(path_tree): os.mkdir("%s%s"%(path_tree,das))
            for file in os.listdir(file_dir1+das):
                if file.endswith('.root'):
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016postVFP --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
                    if options.test == "notest" :os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016postVFP --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
            print("TransferTree for ",das,"done")
            print("\n")
else : print("Year not correct!")
