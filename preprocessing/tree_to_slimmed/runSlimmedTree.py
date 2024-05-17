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
parser.add_option('--type',      action="store",type="string",dest="type"      ,default="Signal")
parser.add_option('--test',      action="store",type="string",dest="test"      ,default="notest")
(options, args) = parser.parse_args()

TreeDir = "/data/bond/zhaoyz/Tree/V10/" + options.year + "/Merged/"
SlimmedTreeDir = "/data/bond/zhaoyz/SlimmedTree/V7/" + options.year + "/"
if options.type == "Signal":
    for Files in os.listdir(TreeDir + options.type):
        if not Files.endswith("root"):continue
        # if Files == "Tree_Total.root" : continue
        CommandStr = "python SlimmedTreeProducer.py -i %s/%s -o %s/Slimmed%s -B Tree -s -u -y %s"%(TreeDir + options.type, Files, SlimmedTreeDir + options.type, Files,options.year)
        print("Should ",CommandStr)
        if  options.test == "notest" : os.system(CommandStr)
elif options.type == "MC":
    for Files in os.listdir(TreeDir + options.type):
        # if Files == "Tree_BKG.root": continue
        # if Files == "Tree_TT.root": continue
        # if Files == "Tree_QCD.root": continue
        # if Files == "Tree_ST.root": continue
        # if Files == "Tree_WJets.root": continue
        # if Files == "Tree_Rest.root": continue
        CommandStr = "python SlimmedTreeProducer.py -i %s/%s -o %s/Slimmed%s -B Tree -u -y %s"%(TreeDir + options.type, Files, SlimmedTreeDir + options.type, Files,options.year)
        print("Should ",CommandStr)
        if  options.test == "notest" : os.system(CommandStr)
else:    
    for Files in os.listdir(TreeDir + options.type):
        CommandStr = "python SlimmedTreeProducer.py -i %s/%s -o %s/Slimmed%s -B Tree -y %s -d"%(TreeDir + options.type, Files, SlimmedTreeDir + options.type, Files,options.year)
        print("Should ",CommandStr)
        if  options.test == "notest" : os.system(CommandStr)
    