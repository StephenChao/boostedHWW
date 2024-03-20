import os
from tkinter import W
import ROOT

path_tree = "/data/pubfs/zhaoyz/Tree/V5/Splitted/2016/MC/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1='/data/pubfs/zhaoyz/Ntuple/V2/2016_MERGED/MC/'           # Your dir for Tree file after TransferTree, waiting for changing.
file_dir2='/data/pubfs/zhaoyz/Ntuple/V2/2016APV_MERGED/MC/'

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
 

            os.mkdir("%s%s"%(path_tree,das))
            for file in os.listdir(file_dir1+das):
                if file.endswith('.root'):
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016postVFP --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
                    os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2016postVFP\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100"%(file_dir1+das,file,path_tree+das,file,process_dict[process],nEvents_all))
            print("TransferTree for ",das,"done")

 
 
 
