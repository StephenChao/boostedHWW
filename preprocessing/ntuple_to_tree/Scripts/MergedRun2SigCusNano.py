import os
# from tkinter import W
import ROOT
CustNanoDir = "/data/pubfs/zhaoyz/CustNano/"
ProcessList = ["GluGlu",  "HWminus",  "HWplus" , "HZJ",  "ttH"  , "VBFHToWWToAny"]
for Era in os.listdir(CustNanoDir):
    if Era in ["2016","2017","2016APV"]:
        for ProcessNano in os.listdir(CustNanoDir + Era + "/Signal/"):
            for Process in ProcessList:
                if Process in ProcessNano:
                    if Process not in os.listdir(CustNanoDir + Era + "/Signal_MERGED/"):
                        os.mkdir(CustNanoDir + Era + "/Signal_MERGED/" + Process)
                    os.system("python andrew_haddnano.py "+ CustNanoDir + Era + "/Signal_MERGED/" + Process + "/MERGED.root " + CustNanoDir + Era + "/Signal/" + ProcessNano + "/* ")
    

