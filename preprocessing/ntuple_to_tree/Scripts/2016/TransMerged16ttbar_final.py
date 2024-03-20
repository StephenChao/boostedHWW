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
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2016")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="test")
(options, args) = parser.parse_args()


path_tree ="/data/bond/zhaoyz/Tree/V8/" + options.year + "/Merged/ttbar_validation_final/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1="/data/bond/zhaoyz/Ntuple/V3/" + options.year + "/Merged/ttbar_validation_final/"           # Your dir for Tree file after TransferTree, waiting for changing.

# path_tree ="/data/bond/zhaoyz/Tree/V7/2018/Splitted/MC/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
# file_dir1='/data/bond/zhaoyz/Ntuple/V3/2018/Merged/MC/'           # Your dir for Tree file after TransferTree, waiting for changing.

process_dict = {
    # latest value:
    "TTToHadronic":380094,
    "TTToSemiLeptonic":364350.8,
} 
if options.year  == "2016" or options.year == "2016APV":
    if options.year == "2016":
        file_dir2='/data/bond/zhaoyz/Ntuple/V3/2016APV/Merged/ttbar_validation_final/'
        for process in process_dict:
            for sample in os.listdir(file_dir1):
                if (process in sample) and (sample.endswith("root")):
                    nEvents_all=0; 
                    test_file=ROOT.TFile(file_dir1+sample,"READ")
                    test_hist=test_file.Get("nEvents")
                    nEvents_i=test_hist.GetBinContent(1)
                    nEvents_all=nEvents_all+nEvents_i
                    print("nEvents_all in ",file_dir1+sample," is ",nEvents_all)
                    
                    for sample2 in  os.listdir(file_dir2):
                        if (process in sample2) and (sample2.endswith("root")):
                            test_file=ROOT.TFile(file_dir2+sample2,"READ")
                            test_hist=test_file.Get("nEvents")
                            nEvents_i=test_hist.GetBinContent(1)
                            nEvents_all=nEvents_all+nEvents_i
                            print("nEvents_all  plus",file_dir2+sample2," is ",nEvents_all)
                    

                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year 2016postVFP --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],nEvents_all))
                    if options.test == "notest": os.system("python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year \"2016postVFP\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],nEvents_all))
                    print("TransferTree for ",file_dir1 + sample,"done")
                    print("\n")
                    
    if options.year == "2016APV":
        file_dir2='/data/bond/zhaoyz/Ntuple/V3/2016/Merged/ttbar_validation_final/'
        for process in process_dict:
            for sample in os.listdir(file_dir1):
                if (process in sample) and (sample.endswith("root")):
                    nEvents_all=0; 
                    test_file=ROOT.TFile(file_dir1+sample,"READ")
                    test_hist=test_file.Get("nEvents")
                    nEvents_i=test_hist.GetBinContent(1)
                    nEvents_all=nEvents_all+nEvents_i
                    print("nEvents_all in ",file_dir1+sample," is ",nEvents_all)
                    
                    for sample2 in  os.listdir(file_dir2):
                        if (process in sample2) and (sample2.endswith("root")):
                            test_file=ROOT.TFile(file_dir2+sample2,"READ")
                            test_hist=test_file.Get("nEvents")
                            nEvents_i=test_hist.GetBinContent(1)
                            nEvents_all=nEvents_all+nEvents_i
                            print("nEvents_all  plus",file_dir2+sample2," is ",nEvents_all)
                    

                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year 2016preVFP --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],nEvents_all))
                    if options.test == "notest": os.system("python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year \"2016preVFP\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],nEvents_all))
                    print("TransferTree for ",file_dir1 + sample,"done")
                    print("\n")
                    
else : print("Year not correct!")
