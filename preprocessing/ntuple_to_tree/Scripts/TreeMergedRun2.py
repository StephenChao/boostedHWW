import os
# from tkinter import W
import ROOT
TreeSplitted = "/data/pubfs/zhaoyz/Tree/V2/2018_QCDvsHWW_Short/"

TreeMerged16 = "/data/pubfs/zhaoyz/Tree/V3/Merged/2016/"
TreeMerged17 = "/data/pubfs/zhaoyz/Tree/V3/Merged/2017/"
TreeMerged18 = "/data/pubfs/zhaoyz/Tree/V3/Merged/2018/"
TreeYear = [TreeMerged16,TreeMerged17,TreeMerged18]
TreeMergedRun2 = "/data/pubfs/zhaoyz/Tree/V3/Merged/Run2/"
FileTypeList = ["Data",  "MC",  "Signal",  "Signal_Nomatching"]
for FileType in FileTypeList:
    for FileName in os.listdir(TreeYear[0] + FileType):
        HaddStr = "hadd " + TreeMergedRun2 + FileType + "/" + FileName
        for TreeYeari in TreeYear:
            HaddStr += " " +TreeYeari + FileType + '/' + FileName
        print("Should print:",HaddStr)
        os.system(HaddStr)