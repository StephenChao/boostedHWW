import os
# from tkinter import W
import ROOT
TreeSplitted = "/data/pubfs/zhaoyz/Tree/V5/Splitted/2016/"
TreeSplittedAPV = "/data/pubfs/zhaoyz/Tree/V5/Splitted/2016APV/"
TreeMerged = "/data/pubfs/zhaoyz/Tree/V5/Merged/2016/"

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
    for FileTypesAPV in os.listdir(TreeSplittedAPV):
        if FileTypes!= FileTypesAPV: continue
        if FileTypes == "Data":        
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_Data.root "
            for Eras in os.listdir(TreeSplitted + FileTypes):
                HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
            for Eras in os.listdir(TreeSplittedAPV + FileTypes):
                HaddStr += TreeSplittedAPV + FileTypes + '/' + Eras + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
            print("*************** Data Done ***************")

        elif FileTypes == "MC" :
            for Process in ProcessDict2:                
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                os.system(HaddStr)
                print("*************** MC nonRest Done ***************")


            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Rest.root "
            for Process in ProcessDict3:            
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
            print("*************** MC rest ***************")


        elif FileTypes == "Signal":
            for Process in ProcessDict:                
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                os.system(HaddStr)
                print("*************** Signal individual Done ***************")

            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
            for Process in ProcessDict:                
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
            print("*************** Signal Done ***************")

        elif FileTypes == "Signal_Nomatching":
            for Process in ProcessDict:                
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                os.system(HaddStr)
                print("*************** Signal no-matching individual Done ***************")

            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
            for Process in ProcessDict:                
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                for Das in os.listdir(TreeSplittedAPV + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            os.system(HaddStr)
            print("*************** Signal no-matching individual Done ***************")


    

