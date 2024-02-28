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
parser.add_option('--type',      action="store",type="string",dest="type"      ,default="MC")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="notest")
(options, args) = parser.parse_args()


root_dir_Splitted="/data/bond/zhaoyz/Ntuple/V3/" + options.year + "/Splitted/" + options.type + "/"           # Your dir for Tree file after TransferTree, waiting for changing.         # Your dir for Tree file after TransferTree, waiting for changing.
Ntuple_MERGED="/data/bond/zhaoyz/Ntuple/V3/" + options.year + "/Merged/" + options.type + "/"
for samples in os.listdir(root_dir_Splitted):
    if "TTJets_TuneCP5" in samples: continue
    root_dir = root_dir_Splitted + samples
    if samples not in os.listdir(Ntuple_MERGED):
        print("No samples in the merged ntuple")
        os.mkdir(Ntuple_MERGED + samples)
    else : 
        print("Merged ntuple existed.")
        continue
    root_dir_MERGED = root_dir.replace("Splitted","Merged")
    num_files = len(os.listdir(root_dir))
    print("splitted file numbers = ",num_files)
    num_files_merged = len(os.listdir(root_dir_MERGED))
    print("merged file numbers = ",num_files_merged)
    if num_files_merged != 0: continue
    for i in range(1, (num_files // 500) + 2):
        print("Now i=",i)
        start_file = (i-1)*500
        end_file = i*500 - 1
        if end_file > num_files:
            end_file = num_files
        input_files = []
        for j in range(start_file, end_file+1):
            file_path = os.path.join(root_dir, "out_" + str(j) + ".root")
            if os.path.exists(file_path):
                input_files.append(file_path)
        # print("now,input_files = ",input_files)    
        if len(input_files) > 0:
            print("Should add",len(input_files))
            output_file = os.path.join(root_dir_MERGED, "out_" + str(start_file) + "-" + str(end_file) + ".root")
            print("Outfile should be",output_file)
            # print("python andrew_haddnano.py " + output_file + " " + " ".join(input_files))
            # print("**************")
            # print("**************")
            # print("**************")
            # print("should print python andrew_haddnano.py " + output_file + " " + " ".join(input_files))
        if options.test != "notest": continue
        print("Check1")
        # print("The current directory is:",os.getcwd())
        input_files_str = " ".join(input_files)
        command = "python andrew_haddnano.py {0} {1}".format(output_file, input_files_str)
        subprocess.Popen(command, shell=True)        

        # os.system("python2 ./andrew_haddnano.py " + output_file + " " + " ".join(input_files))
        print("Check2")
