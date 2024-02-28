import os
# from tkinter import W
import ROOT
TreeSplitted = "/data/pubfs/zhaoyz/Tree/V5/Splitted/2017/"
TreeMerged = "/data/pubfs/zhaoyz/Tree/V5/Merged/2017/"

ProcessDict = {
    "VBF"      :      350.18,
    "HWplus"   :      186,
    "HWminus"  :      116,
    "HZJ"      :      205,
    "ttH"      :      210,
    "GluGlu"   :      100.7,    
}
ProcessDict2 = {
    "QCD"   :      1,
    "ST"      :      1,
    "TT"     :      1,
    "WJets":      1,
}
ProcessDict3 = {
    "WW_TuneCP5"    :      1,
    "WZ_TuneCP5"    :      1,
    "ZZ_TuneCP5"    :      1,
    "ZJetsToQQ"     :      1,

}

HaddStr = ""
for FileTypes in os.listdir(TreeSplitted):
    if FileTypes == "Data":
        HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_Data.root "
        for Eras in os.listdir(TreeSplitted + FileTypes):
            HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
        print("Should print:",HaddStr)
        os.system(HaddStr)
    elif FileTypes == "MC" :
        for Process in ProcessDict2:                
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
        HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Rest.root "
        for Process in ProcessDict3:            
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
        print("Should print:",HaddStr)
        os.system(HaddStr)
    elif FileTypes == "Signal":
        for Process in ProcessDict:                
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
        HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
        for Process in ProcessDict:                
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
        print("Should print:",HaddStr)
        os.system(HaddStr)
    elif FileTypes == "Signal_Nomatching":
        for Process in ProcessDict:                
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
        HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
        for Process in ProcessDict:                
            for Das in os.listdir(TreeSplitted + FileTypes):
                if Process in Das:
                    HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
        print("Should print:",HaddStr)
        os.system(HaddStr)



    

