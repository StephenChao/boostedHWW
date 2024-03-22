import os
# from tkinter import W
import ROOT
# TreeSplitted = "/data/bond/zhaoyz/Tree/V2/2018_QCDvsHWW_Short/"

TreeMerged16APV = "/data/bond/zhaoyz/SlimmedTree/V6/2016APV/"
TreeMerged16 = "/data/bond/zhaoyz/SlimmedTree/V6/2016/"
TreeMerged17 = "/data/bond/zhaoyz/SlimmedTree/V6/2017/"
TreeMerged18 = "/data/bond/zhaoyz/SlimmedTree/V6/2018/"
TreeYear = [TreeMerged16APV, TreeMerged16,TreeMerged17,TreeMerged18]
TreeMergedRun2 = "/data/bond/zhaoyz/SlimmedTree/V6/Full-Run2/"
FileTypeList = ["Data",  "MC",  "Signal"]
# FileTypeList = ["MC","Signal"]
for FileType in FileTypeList:
    for FileName in os.listdir(TreeYear[0] + FileType):
        HaddStr = "hadd " + TreeMergedRun2 + FileType + "/" + FileName
        for TreeYeari in TreeYear:
            HaddStr += " " +TreeYeari + FileType + '/' + FileName
        print("Should print:",HaddStr)
        os.system(HaddStr)