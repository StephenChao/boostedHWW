import os
# from tkinter import W
import ROOT

path_tree ="/data/pubfs/zhaoyz/Tree/V7/2018/Splitted/MC/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1='/data/pubfs/zhaoyz/Ntuple/V3/2018/Merged/MC/'           # Your dir for Tree file after TransferTree, waiting for changing.

process_dict = {
    "QCD_HT500to700":32100000,
    "QCD_HT700to1000":6831000,
    "QCD_HT1000to1500":1207000,
    "QCD_HT1500to2000":119900,
    "QCD_HT2000toInf":25240,
    "ST_s-channel":11240, #From xs bd.
    "ST_t-channel_antitop":80950,
    "ST_t-channel_top":136020,
    "ST_tW_antitop":35600,
    "ST_tW_top":35600,
    "TTToHadronic":380094,
    "TTToSemiLeptonic":364350.8,
    "WJetsToQQ_HT-400to600":276500,
    "WJetsToQQ_HT-600to800":59250,
    "WJetsToQQ_HT-800toInf":33700,
    "WW_TuneCP5":64300,
    "WZ_TuneCP5":47130,
    "ZZ_TuneCP5_13TeV-pythia8":16523,
    "ZJetsToQQ_HT-400to600":114200,
    "ZJetsToQQ_HT-600to800":25340,
    "ZJetsToQQ_HT-800toInf":14600,
} # Dict for x-sec with each dataset.
# year = "2016postVFP"    # Your year for Ntuple file waiting for TransferTree, waiting for changing.
# IsData = 100            # Your IsData value for Ntuple file waiting for TransferTree, waiting for changing.

# for Samples in os.listdir(file_dir1):
#     if Samples not  in os.listdir(path_tree):
#         os.mkdir("%s"%(path_tree + Samples))


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
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2018 --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100"%(file_dir1+das,file,path_tree+das,file,process_dict[process],count_process))
                    os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2018\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100"%(file_dir1+das,file,path_tree+das,file,process_dict[process],count_process))
            print("TransferTree for ",das,"done")

