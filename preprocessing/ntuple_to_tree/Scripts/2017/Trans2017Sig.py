import os
#from tkinter import W
import ROOT

TreeMERGED = "/data/pubfs/zhaoyz/Tree/V4/Splitted/2017/Signal_Nomatching/"
NtupleMERGED = "/data/pubfs/zhaoyz/Ntuple/V2/2017_MERGED/Signal/"

ProcessDict = {
    "VBF"      :      350.18,
    "HWplus"   :      186,
    "HWminus"  :      116,
    "HZJ"      :      205,
    "ttH"      :      210,
    "GluGlu"   :      100.7,
}

for Samples in os.listdir(NtupleMERGED):
    if Samples not  in os.listdir(TreeMERGED):
        os.mkdir("%s"%(TreeMERGED + Samples))


for Process in ProcessDict :
    for Samples in os.listdir(NtupleMERGED) :
        if Process in Samples :
            nEvents_all = 0
            for Files in os.listdir(NtupleMERGED + Samples):
                if Files.endswith('.root') :
                    print("file name is ",Files)
                    TestFile=ROOT.TFile(NtupleMERGED + Samples + "/" + Files, "READ")
                    TestHist=TestFile.Get("nEvents")
                    nEvents_i=TestHist.GetBinContent(1)
                nEvents_all=nEvents_all+nEvents_i
            print("nEvents_all is ",nEvents_all)

            for Files in os.listdir(NtupleMERGED + Samples):
                if Files.endswith('.root'):
                    print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2017 --sampleXS %s --Nevents %f --channel \"HWW\" --IsData 100"%(NtupleMERGED + Samples, Files, TreeMERGED + Samples,Files,ProcessDict[Process],nEvents_all))
                    os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2017\" --sampleXS %s --Nevents %ld --channel \"HWW\" --IsData 100"%(NtupleMERGED + Samples, Files, TreeMERGED + Samples, Files,ProcessDict[Process],nEvents_all))
            print("TransferTree for 2017  ",Samples,"done")


