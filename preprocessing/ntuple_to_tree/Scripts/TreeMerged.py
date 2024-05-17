import os
# import random
# import sys
# import ctypes
# import time
# from datetime import datetime
import ROOT
from optparse import OptionParser
import subprocess

parser = OptionParser()
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2017")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="notest")
parser.add_option('--filetype',  action="store",type="string",dest="type"      ,default="MC")
(options, args) = parser.parse_args()


TreeSplitted = "/data/bond/zhaoyz/Tree/V10/" + options.year + "/Splitted/"
TreeMerged = "/data/bond/zhaoyz/Tree/V10/" + options.year + "/Merged/"

ProcessDict = {
    "VBF"      :      350.18,
    "HWplus"   :      186,
    "HWminus"  :      116,
    "HZJ"      :      205,
    "ttH"      :      210,
    "GluGlu"   :      100.7,    
} 
ProcessDict2 = {
    # "QCD"   :      1,
    "ST"      :      1,
    "TT"     :      1,
    "WJets":      1,
}
ProcessDict3 = {
    "WW_TuneCP5"    :      1,
    "WZ_TuneCP5"    :      1,
    "ZZ_TuneCP5"    :      1,
    "ZJetsToQQ"     :      1,
    "DYJets"        :      1,
}
ProcessDict4 = {
    "HWplus"   :      186,
    "HWminus"  :      116,
}

# filetype = options.filetype
if options.year == "2018" or options.year == "2017" or options.year == "2016" or options.year == "2016APV":
    HaddStr = ""
    for FileTypes in os.listdir(TreeSplitted):
        if FileTypes == "Data":
            continue
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_Data.root "
            for Eras in os.listdir(TreeSplitted + FileTypes):
                HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
            print("Should print:",HaddStr)
            if options.test == "notest": os.system(HaddStr)
            print("\n")
            print("*************** Data Done ***************")
        if FileTypes == "SingleMuon":
            continue
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_SingleMuon.root "
            for Eras in os.listdir(TreeSplitted + FileTypes):
                HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
            print("Should print:",HaddStr)
            if options.test == "notest": os.system(HaddStr)
            print("\n")
            print("*************** SingleMuon Done ***************")
        elif FileTypes == "MC" :
            # continue
            for Process in ProcessDict2:                
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** MC nonRest Done ***************")
                
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Rest.root "
            
            for Process in ProcessDict3:            
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            if options.test == "notest":os.system(HaddStr)
            print("\n")
            print("*************** MC rest ***************")
            

        elif FileTypes == "Signal":
            # continue
            for Process in ProcessDict:                
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** Signal individual Done ***************")
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
            for Process in ProcessDict:                
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            if options.test == "notest":os.system(HaddStr)
            print("\n")
            HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "WH.root "
            for Process in ProcessDict4:            
                for Das in os.listdir(TreeSplitted + FileTypes):
                    if Process in Das:
                        HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            print("Should print:",HaddStr)
            print("rm " + TreeMerged + FileTypes + "/Tree_HWplus.root")
            print("rm " + TreeMerged + FileTypes + "/Tree_HWminus.root")
            if options.test == "notest":
                os.system(HaddStr)
                os.system("rm " + TreeMerged + FileTypes + "/Tree_HWplus.root")
                os.system("rm " + TreeMerged + FileTypes + "/Tree_HWminus.root")            
            print("*************** Signal Done ***************")

# not used anymore, since we split the eras
if "2016all" in options.year:
    TreeSplitted = "/data/bond/zhaoyz/Tree/V8/2016/Splitted/"
    TreeSplittedAPV = "/data/bond/zhaoyz/Tree/V8/2016APV/Splitted/"
    HaddStr = ""
    for FileTypes in os.listdir(TreeSplitted):
        for FileTypesAPV in os.listdir(TreeSplittedAPV):
            if FileTypes!= FileTypesAPV: continue
            if FileTypes == "Data":
                continue        
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_Data.root "
                for Eras in os.listdir(TreeSplitted + FileTypes):
                    HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
                for Eras in os.listdir(TreeSplittedAPV + FileTypes):
                    HaddStr += TreeSplittedAPV + FileTypes + '/' + Eras + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** Data Done ***************")
            
            if FileTypes == "SingleMuon":
                # continue        
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_SingleMuon.root "
                for Eras in os.listdir(TreeSplitted + FileTypes):
                    HaddStr += TreeSplitted + FileTypes + '/' + Eras + "/*.root "
                for Eras in os.listdir(TreeSplittedAPV + FileTypes):
                    HaddStr += TreeSplittedAPV + FileTypes + '/' + Eras + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** SingleMuon Done ***************")


            elif FileTypes == "MC" :
                continue
                for Process in ProcessDict2:                
                    HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                    for Das in os.listdir(TreeSplitted + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                    for Das in os.listdir(TreeSplittedAPV + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                    print("Should print:",HaddStr)
                    if options.test == "notest":os.system(HaddStr)
                    print("\n")
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
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** MC rest ***************")

            elif FileTypes == "MET" :
                continue
                for Process in ProcessDict5:                
                    HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                    for Das in os.listdir(TreeSplitted + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                    for Das in os.listdir(TreeSplittedAPV + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                    print("Should print:",HaddStr)
                    if options.test == "notest":os.system(HaddStr)
                    print("\n")
                    print("*************** MC nonRest Done ***************")


                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Rest.root "
                for Process in ProcessDict6:            
                    for Das in os.listdir(TreeSplitted + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                    for Das in os.listdir(TreeSplittedAPV + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** MC rest ***************")


            elif FileTypes == "Signal":
                continue
                for Process in ProcessDict:                
                    HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
                    for Das in os.listdir(TreeSplitted + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                    for Das in os.listdir(TreeSplittedAPV + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                    print("Should print:",HaddStr)
                    if options.test == "notest":os.system(HaddStr)
                    print("\n")
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
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "VH.root "
                for Process in ProcessDict4:            
                    for Das in os.listdir(TreeSplitted + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
                    for Das in os.listdir(TreeSplittedAPV + FileTypes):
                        if Process in Das:
                            HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
                print("Should print:",HaddStr)
                if options.test == "notest":os.system(HaddStr)
                print("\n")
                print("*************** Signal Done ***************")


            # elif FileTypes == "Signal_Nomatching":
            #     for Process in ProcessDict:                
            #         HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
            #         for Das in os.listdir(TreeSplitted + FileTypes):
            #             if Process in Das:
            #                 HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            #         for Das in os.listdir(TreeSplittedAPV + FileTypes):
            #             if Process in Das:
            #                 HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
            #         print("Should print:",HaddStr)
            #         os.system(HaddStr)
            #         print("*************** Signal no-matching individual Done ***************")

            #     HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
            #     for Process in ProcessDict:                
            #         for Das in os.listdir(TreeSplitted + FileTypes):
            #             if Process in Das:
            #                 HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
            #         for Das in os.listdir(TreeSplittedAPV + FileTypes):
            #             if Process in Das:
            #                 HaddStr += TreeSplittedAPV + FileTypes + '/' + Das + "/*.root "
            #     print("Should print:",HaddStr)
            #     os.system(HaddStr)
            #     print("*************** Signal no-matching individual Done ***************")


    


    # elif FileTypes == "Signal_Nomatching":
    #     for Process in ProcessDict:                
    #         HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + Process + ".root "
    #         for Das in os.listdir(TreeSplitted + FileTypes):
    #             if Process in Das:
    #                 HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
    #         print("Should print:",HaddStr)
    #         os.system(HaddStr)
    #     HaddStr = "hadd " + TreeMerged + FileTypes + "/Tree_" + "Total.root "
    #     for Process in ProcessDict:                
    #         for Das in os.listdir(TreeSplitted + FileTypes):
    #             if Process in Das:
    #                 HaddStr += TreeSplitted + FileTypes + '/' + Das + "/*.root "
    #     print("Should print:",HaddStr)
    #     os.system(HaddStr)



    

