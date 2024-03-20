import os
# from tkinter import W
import ROOT

file_dir1='/data/bond/zhaoyz/Ntuple/V3/2018/Merged/ttbar_validation_final/'                # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
path_tree ="/data/bond/zhaoyz/Tree/V8/2018/Merged/ttbar_validation_final/"    # Your dir for Tree file after TransferTree, waiting for changing.

process_dict = {
    "TTToHadronic":380094,
    "TTToSemiLeptonic":364350.8,
} 
# Dict for x-sec with each dataset.
# year = "2016postVFP"    # Your year for Ntuple file waiting for TransferTree, waiting for changing.
# IsData = 100            # Your IsData value for Ntuple file waiting for TransferTree, waiting for changing.

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
            os.mkdir("%s%s"%(path_tree,das))
            for file in os.listdir(file_dir1+das):
                if file.endswith('.root'):
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2018 --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],count_process))
                    os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2018\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100 -S"%(file_dir1+das,file,path_tree+das,file,process_dict[process],count_process))
            print("TransferTree for ",das,"done")

