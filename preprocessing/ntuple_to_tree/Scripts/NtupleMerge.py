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
parser.add_option('--type',      action="store",type="string",dest="type"      ,default="Data")

(options, args) = parser.parse_args()


root_dir_Splitted="/data/pubfs/zhaoyz/Ntuple/V3/" + options.year + "/Splitted/" + options.type + "/"           # Your dir for Tree file after TransferTree, waiting for changing.         # Your dir for Tree file after TransferTree, waiting for changing.
Ntuple_MERGED="/data/pubfs/zhaoyz/Ntuple/V3/" + options.year + "/Merged/" + options.type + "/"
for eras in os.listdir(root_dir_Splitted):
    root_dir = root_dir_Splitted + eras
    if eras not in os.listdir(Ntuple_MERGED):
        print("No eras in the merged ntuple")
        os.mkdir(Ntuple_MERGED + eras)
    else : print("Merged ntuple existed.")
    root_dir_MERGED = root_dir.replace("Splitted","Merged")
    num_files = len(os.listdir(root_dir))
    for i in range(1, (num_files // 1000) + 2):
        start_file = (i-1)*1000
        end_file = i*1000 - 1
        if end_file > num_files:
            end_file = num_files
        input_files = []
        for j in range(start_file, end_file+1):
            file_path = os.path.join(root_dir, "out_" + str(j) + ".root")
            if os.path.exists(file_path):
                input_files.append(file_path)
        if len(input_files) > 0:
            output_file = os.path.join(root_dir_MERGED, "out_" + str(start_file) + "-" + str(end_file) + ".root")
            # print("python andrew_haddnano.py " + output_file + " " + " ".join(input_files))
            print("\n")
            print("\n")
            print("\n")
            os.system("python andrew_haddnano.py " + output_file + " " + " ".join(input_files))

