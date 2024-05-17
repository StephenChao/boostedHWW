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

path_tree ="/data/bond/zhaoyz/Tree/V10/" + options.year + "/Splitted/Signal/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1="/data/bond/zhaoyz/Ntuple/V5/Merged/" + options.year + "/Signal/"           # Your dir for Tree file after TransferTree, waiting for changing.


# TreeMERGED =   "/data/bond/zhaoyz/Tree/V7/2018/Splitted/Signal/"
# NtupleMERGED = "/data/bond/zhaoyz/Ntuple/V5/2018/Merged/Signal/"

process_dict = {
    "HWplus"   :      186,
    "HWminus"  :      116,
    "HZJ"      :      205,
    "GluGlu"   :      100.7,
    "VBFHToWWToAny" : 812.7,
    "ttH"      :      210,
    }

if options.year == "2017" or options.year == "2018":
    for process in process_dict:
        count_process = 0
        #First count all the events number of a dataset.
        for das in os.listdir(file_dir1):
            if process in das:
                count_das = 0
                for file in os.listdir(file_dir1+das+'/'):
                    if (file.endswith('.root')) and (os.path.getsize(file_dir1+das+'/'+file)>0):
                        print("file name is",file)
                        test_file=ROOT.TFile(file_dir1+das+'/'+file,"READ")
                        test_hist=test_file.Get("nEvents")
                        nEvents_i=test_hist.GetBinContent(1)
                    count_das=count_das+nEvents_i
                print("nEvents in",file_dir1+das," is ",count_das)
                count_process = count_process + count_das
        print("The whole count of",process,"is",count_process) 

        #Then use the whole events number to do the TransferTree.
        for das in os.listdir(file_dir1):
            if process in das:
                if das not in os.listdir(path_tree) : os.mkdir("%s%s"%(path_tree,das))
                for file in os.listdir(file_dir1+das):
                    if file.endswith('.root'):
                        print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year %s --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,options.year , process_dict[process],count_process))
                        if options.test == "notest": os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year %s --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,        options.year   ,process_dict[process],count_process))
                print("TransferTree for ",das,"done")
                print("\n")

elif options.year  == "2016" or options.year == "2016APV":
    if options.year == "2016":
        file_dir2='/data/bond/zhaoyz/Ntuple/V5/Merged/2016APV/Signal/'
        for process in process_dict:
            for das in os.listdir(file_dir1):
                if process in das:
                    nEvents_all=0; 
                    for file in os.listdir(file_dir1+das+'/'):
                        if (file.endswith('.root')) and (os.path.getsize(file_dir1+das+'/'+file)>0):
                            print("file name is",file)
                            test_file=ROOT.TFile(file_dir1+das+'/'+file,"READ")
                            test_hist=test_file.Get("nEvents")
                            nEvents_i=test_hist.GetBinContent(1)
                        nEvents_all=nEvents_all+nEvents_i
                    print("nEvents_all in ",file_dir1+das," is ",nEvents_all)
                    for das2 in  os.listdir(file_dir2):
                        if process in das2:
                            for file in os.listdir(file_dir2+das2+'/'):
                                if (file.endswith('.root')) and (os.path.getsize(file_dir2+das2+'/'+file)>0):
                                    print("file name is",file)
                                    test_file=ROOT.TFile(file_dir2+das2+'/'+file,"READ")
                                    test_hist=test_file.Get("nEvents")
                                    nEvents_i=test_hist.GetBinContent(1)
                                nEvents_all=nEvents_all+nEvents_i
                            print("nEvents_all  plus",file_dir2+das2," is ",nEvents_all)
                    if das not in os.listdir(path_tree): os.mkdir("%s%s"%(path_tree,das))
                    for file in os.listdir(file_dir1+das):
                        if file.endswith('.root'):
                            print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016postVFP --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
                            if options.test == "notest": os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2016postVFP\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
                    print("TransferTree for ",das,"done")
                    print("\n")
    if options.year == "2016APV":
        for process in process_dict:
            file_dir2='/data/bond/zhaoyz/Ntuple/V5/Merged/2016/Signal/'
            for das in os.listdir(file_dir1):
                if process in das:
                    nEvents_all=0; 
                    for file in os.listdir(file_dir1+das+'/'):
                        if (file.endswith('.root')) and (os.path.getsize(file_dir1+das+'/'+file)>0):
                            print("file name is",file)
                            test_file=ROOT.TFile(file_dir1+das+'/'+file,"READ")
                            test_hist=test_file.Get("nEvents")
                            nEvents_i=test_hist.GetBinContent(1)
                        nEvents_all=nEvents_all+nEvents_i
                    print("nEvents_all in ",file_dir1+das," is ",nEvents_all)
                    for das2 in  os.listdir(file_dir2):
                        if process in das2:
                            for file in os.listdir(file_dir2+das2+'/'):
                                if (file.endswith('.root')) and (os.path.getsize(file_dir2+das2+'/'+file)>0):
                                    print("file name is",file)
                                    test_file=ROOT.TFile(file_dir2+das2+'/'+file,"READ")
                                    test_hist=test_file.Get("nEvents")
                                    nEvents_i=test_hist.GetBinContent(1)
                                nEvents_all=nEvents_all+nEvents_i
                            print("nEvents_all  plus",file_dir2+das2," is ",nEvents_all)
                    if das not in os.listdir(path_tree) : os.mkdir("%s%s"%(path_tree,das))
                    for file in os.listdir(file_dir1+das):
                        if file.endswith('.root'):
                            print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016preVFP --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
                            if options.test == "notest": os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2016preVFP\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
                    print("TransferTree for ",das,"done")
                    print("\n")
else : print("Year not correct!")

