import os
# from tkinter import W
import ROOT

file_dir1='/data/bond/zhaoyz/Ntuple/V3/2017/Merged/ttbar_validation_final/'                # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
path_tree ="/data/bond/zhaoyz/Tree/V8/2017/Merged/ttbar_validation_final/"    # Your dir for Tree file after TransferTree, waiting for changing.

process_dict = {
    "TTToHadronic":380094,
    "TTToSemiLeptonic":364350.8,
} 
# Dict for x-sec with each dataset.
# year = "2016postVFP"    # Your year for Ntuple file waiting for TransferTree, waiting for changing.
# IsData = 100            # Your IsData value for Ntuple file waiting for TransferTree, waiting for changing.

for process in process_dict:
    count_process = 0
    for sample in os.listdir(file_dir1): #sample: TTToHadronic.root & TTToSemiLeptonic.root
        if (process in sample) and (sample.endswith("root")):
            count_das = 0
            test_file=ROOT.TFile(file_dir1 + '/'+sample,"READ")
            test_hist=test_file.Get("nEvents")
            nEvents_i=test_hist.GetBinContent(1)
            count_das=count_das+nEvents_i
            print("nEvents in",file_dir1 + sample," is ",count_das)
            count_process = count_process + count_das
            print("The whole count of",process,"is",count_process) 
            print("Then, should print:python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year 2017 --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],count_process))
            os.system("python runEDBR2PKUTree.py --inputfile \"%s%s\" --outputfile \"%sTree_%s\" --year \"2017\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1,sample,path_tree,sample,process_dict[process],count_process))
            print("TransferTree for ",sample,"done")
            print("\n")
            print("\n")
            print("\n")
            

