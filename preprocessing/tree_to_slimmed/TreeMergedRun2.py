import os
# from tkinter import W
import ROOT
# TreeSplitted = "/data/pubfs/zhaoyz/Tree/V2/2018_QCDvsHWW_Short/"

TreeMerged16 = "/data/pubfs/zhaoyz/SlimmedTree/V5/2016/"
TreeMerged17 = "/data/pubfs/zhaoyz/SlimmedTree/V5/2017/"
TreeMerged18 = "/data/pubfs/zhaoyz/SlimmedTree/V5/2018/"
TreeYear = [TreeMerged16,TreeMerged17,TreeMerged18]
TreeMergedRun2 = "/data/pubfs/zhaoyz/SlimmedTree/V5/Full-Run2/"
# FileTypeList = ["Data",  "MC",  "Signal"]
FileTypeList = ["MC","Signal"]
for FileType in FileTypeList:
    for FileName in os.listdir(TreeYear[0] + FileType):
        HaddStr = "hadd " + TreeMergedRun2 + FileType + "/" + FileName
        for TreeYeari in TreeYear:
            HaddStr += " " +TreeYeari + FileType + '/' + FileName
        print("Should print:",HaddStr)
        os.system(HaddStr)