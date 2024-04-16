'''
ROOT::RDF::RResultPtr<ROOT::RDF::RInterface<ROOT::Detail::RDF::RLoopManager,void> > ROOT::RDF::RInterface<ROOT::Detail::RDF::RLoopManager,void>::Snapshot(basic_string_view<char,char_traits<char> > treename, basic_string_view<char,char_traits<char> > filename, initializer_list<string> columnList, const ROOT::RDF::RSnapshotOptions& options = ROOT::RDF::RSnapshotOptions()) =>
    TypeError: could not convert argument 3

this is because there are unknown branches, check the error information more carefully
'''

'''
it seems that the bool branches can not be transfered correctly
'''

#env: slim
import sys
import os
os.environ['OPENBLAS_NUM_THREADS'] = '1'
import argparse
import copy
from scipy.interpolate import griddata

import json

parser = argparse.ArgumentParser(description="Save score")
parser.add_argument('-i' , '--infile'    , dest='infile'  , help='infile'     , type=str,                default=None                         )
parser.add_argument('-y' , '--year'      , dest='year'   ,  help='year'     ,  type=str,                default=None                         )
parser.add_argument('-o' , '--outfile'   , dest='outfile' , help='outfile'    , type=str,                default=None                         )
parser.add_argument('-op', '--outpath'   , dest='outpath' , help='outpath'    , type=str,                default=None                         )
parser.add_argument('-l' , '--Log'       , dest='Log'     , help='Log'        , type=str,                default=None                         )
parser.add_argument('-B' , '--Branches'  , dest='Branches', help='Branches'        , type=str,                default=None                         )
parser.add_argument('-s' , '--signal'    , dest='signal'  , help='signal'     , action='store_true',     default=False                         )
parser.add_argument('-u' , '--unc'       , dest='uncert'  , help='uncert'     , action='store_true',     default=False                         )
parser.add_argument('-d' , '--data'      , dest='data'    , help='data'     , action='store_true',     default=False                         )
parser.add_argument('-re', '--rerun'     , dest='rerun'   , help='rerun'      , action='store_true',     default=False                         )
parser.add_argument('-se', '--cluster'   , dest='cluster' , help='cluster'      , type=str,     default=False                         )
args = parser.parse_args()

print(sys.executable)
print(sys.path)

if os.getenv("HOSTNAME") :
    print("HOSTNAME is",os.getenv("HOSTNAME"))
    if "lxplus" in os.getenv("HOSTNAME"):
        BDT_modelpath = "/eos/user/y/yusong/qilong/ROOTFILE/PlotTree/BDT/model/BDT_model/"
    if "pku.edu.cn" in os.getenv("HOSTNAME"):
        # BDT_modelpath = "/home/pku/zhaoyz/Higgs/2Taggers/HighMET/"
        # Input128_2_Output1_HighMET_HLTRequired.h5
        sys.path.append("/home/pku/zhaoyz/anaconda3/lib/python3.8/site-packages")

else :
    if not args.cluster :
        sys.exit("echo need to know which cluster it is")
    else :
        if "lxplus" in args.cluster :
            BDT_modelpath = "/eos/user/y/yusong/qilong/ROOTFILE/PlotTree/BDT/model/"
        if "farm" in args.cluster :
            # BDT_modelpath = "/home/pku/zhaoyz/Higgs/2Taggers/HighMET/"
         # Input128_2_Output1_HighMET_HLTRequired.h5
            sys.path.append("/home/pku/zhaoyz/anaconda3/lib/python3.8/site-packages")
import pandas as pd
import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt

import glob

# Machine Leanring libraires 
from sklearn.model_selection import KFold, StratifiedKFold, train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC, LinearSVC
from sklearn.neighbors import KNeighborsClassifier

# Import useful Evaluation Metrics
from sklearn import metrics
from sklearn.metrics import recall_score, roc_auc_score, accuracy_score, confusion_matrix, make_scorer, classification_report, roc_curve, auc, f1_score
from sklearn.ensemble import RandomForestRegressor, RandomForestClassifier 

import ROOT

from datetime import datetime

# import catboost
# from catboost import *
# from catboost import datasets

from multiprocessing import Process
import multiprocessing 

# import tensorflow as tf
# from tensorflow import keras
# from sklearn.model_selection import train_test_split
# from tensorflow.keras.layers import Embedding, Input, Flatten
# from tensorflow.keras.models import Model
# from tensorflow.keras.models import load_model

# from sklearn.metrics import classification_report, roc_auc_score
# from scipy import interpolate
# from sklearn.metrics import roc_curve, auc
# from cycler import cycler
import awkward as ak

import uproot ## means uproot4
# import sklearn.metrics as m
# from keras.layers import Input, Dense
# from tensorflow.keras.models import Sequential
# from tensorflow.keras.layers import Dense


def F_CheckExistFile(FileName):
    if not os.path.isfile(FileName):
        return False
    foundBad = False
    try:
        f1 = ROOT.TFile(FileName)
        t = f1.Get("PKUTree")
        for i in range(0,t.GetEntries(),1):
            if t.GetEntry(i) < 0:
                foundBad = True
                print("[RSR] found bad event %i" % i)
                break
    except: 
        foundBad = True
    if foundBad:
        print("[RSR] removing output file because it does not deserve to live")
        return False
    else: 
        print("[RSR] passed the rigorous sweeproot")
        return True
# Check if the file exist.

def Store_BDT_Score(infile_name,outfile_name,Outcolumn,loadcolumns = None,BDT ={},drop=None,definecolumn =None,return_dict={},cut = None, MCOutcolumn = None, SFjson = None, SF_unc_json = None, Data= False):
    if loadcolumns :
        print("load columns\n",loadcolumns)
        rdf = ROOT.RDataFrame("PKUTree", infile_name)

        if definecolumn:
            for icolumn in definecolumn:
                name = icolumn["Name"]
                expr = icolumn["Expr"]
                rdf = rdf.Define(name,expr)
        if len(MCOutcolumn) > 0:
            if MCOutcolumn[0] in [str(i) for i in rdf.GetColumnNames()] :
                loadcolumns += MCOutcolumn
                Outcolumn   += MCOutcolumn
            else: 
                print("You are running data")
        Outcolumn   = list(set(Outcolumn))
        loadcolumns = list(set(loadcolumns))

        outfile_name_tmp = os.path.normpath(outfile_name).replace(".root","_slimmedtmp.root")
        snapshotOptions = ROOT.ROOT.RDF.RSnapshotOptions()
        snapshotOptions.fOverwriteIfExists = True
        rdf.Snapshot('PKUTree', outfile_name_tmp, loadcolumns, snapshotOptions)
        # name of output tree, name of output TFile, columlist, options.
        rdf = ROOT.RDataFrame("PKUTree", outfile_name_tmp )
    else :
        rdf = ROOT.RDataFrame("PKUTree", infile_name )
        if MCOutcolumn[0] in [str(i) for i in rdf.GetColumnNames()] :
            Outcolumn   += MCOutcolumn
        Outcolumn = list(set(Outcolumn))

    print([str(i) for i in rdf.GetColumnNames()])

    if cut :
        rdf = rdf.Filter(cut)
    # Cut the events.

    df = pd.DataFrame(rdf.AsNumpy()) # there will be memory issue if the rootfile is larger than 2 GB
    
    if drop:
        for idrop in drop:
            if idrop not in df.columns: continue
            df = df.drop(idrop,axis=1)
            # Drop the branches if you want.
    
    if Data != True:
        # Start to implement the SFs:
        # Load the mesh data from the JSON file
        with open(SFjson, 'r') as json_file:
            mesh_data = json.load(json_file)
        # Convert the mesh data into NumPy arrays
        x_values = np.array([data_point['mass'] for data_point in mesh_data])[::20]
        y_values = np.array([data_point['pT'] for data_point in mesh_data])[:20]
        scale_factors = np.array([data_point['SF'] for data_point in mesh_data]).reshape(20,20)
        input_x = df["Mj_V2_a"]
        input_y = df["PTj_V2_a"]
        x_bin_indices = np.searchsorted(x_values, input_x, side='right') - 1
        y_bin_indices = np.searchsorted(y_values, input_y, side='right') - 1
        scale_factor_output = scale_factors[x_bin_indices,y_bin_indices]
        # test if the SF output is correct.
        # for i in range(10):
        #     print("mass = ", input_x[i])
        #     print("pT = ",input_y[i])
        #     print("SF output = ",scale_factor_output[i])
        df["SF"] = scale_factor_output
        #then we also have to add the uncertainty of SFs
        with open(SF_unc_json, 'r') as json_file:
            mesh_data = json.load(json_file)
        # Convert the mesh data into NumPy arrays
        x_values = np.array([data_point['mass'] for data_point in mesh_data])[::20]
        y_values = np.array([data_point['pT'] for data_point in mesh_data])[:20]
        scale_factors_unc = np.array([data_point['SF'] for data_point in mesh_data]).reshape(20,20)
        input_x = df["Mj_V2_a"]
        input_y = df["PTj_V2_a"]
        x_bin_indices = np.searchsorted(x_values, input_x, side='right') - 1
        y_bin_indices = np.searchsorted(y_values, input_y, side='right') - 1
        scale_factor_unc_output = scale_factors_unc[x_bin_indices,y_bin_indices]
        df["SF_unc"] = scale_factor_unc_output        
        
    else : 
        df["SF"] = np.zeros_like(df["Mj_V2_a"]) + 1.0
        df["SF_unc"] = np.zeros_like(df["Mj_V2_a"])
    # for i in range(10):
    #     print("Original weight = ",df["weight"][i])
    #     print("SF = ",df["SF"][i])
    df["weight"] = df["weight"] * df["SF"]
    # print("*****")
    # for i in range(10):
    #     print("Now weight = ",df["weight"][i])
    Outcolumn = Outcolumn + ["SF"]
    Outcolumn = Outcolumn + ["SF_unc"]

    # The scale_factor_output will be a numpy array containing the scale factors corresponding to the input x and y variables

    

    # Don't need the below part.
    data = {key: df[key].values for key in df.columns}
    # rdf = ROOT.RDF.MakeNumpyDataFrame(data)
    rdf = ROOT.RDF.FromNumpy(data)

    snapshotOptions = ROOT.ROOT.RDF.RSnapshotOptions()
    snapshotOptions.fOverwriteIfExists = True
    Outcolumn = list(set(Outcolumn))
    print("Outcolumns are:",Outcolumn)
    rdf.Snapshot('PKUTree', outfile_name, Outcolumn, snapshotOptions )
    print(infile_name," : done ")
    print(outfile_name," : done ")
    return_dict[infile_name] = True
    # We don't need the temp file.
    os.remove(outfile_name_tmp)

Beginning = datetime.now()
print('----------------[begin ',str(Beginning),']--------')

def F_FlatVector(variable,length):
    Variables = {}
    for i in range(length):
        Variables[variable+"_"+str(i)] = '''
return %s[%s];
        '''%(variable,str(i))
    return Variables


if args.Branches in ["Tree","SF"] :
    Outcolumn = [

    # "TriggerSF",
    # "HEM_Filter",
    "a_HWqqWqq0c",
    "a_HWqqWqq1c",
    "a_HWqqWqq2c",
    "a_HWqqWq0c",
    "a_HWqqWq1c",
    "a_HWqqWq2c",
    "a_HWqqWev0c",
    "a_HWqqWev1c",
    "a_HWqqWmv0c",
    "a_HWqqWmv1c",
    "a_HWqqWtauev0c",
    "a_HWqqWtauev1c",
    "a_HWqqWtaumv0c",
    "a_HWqqWtaumv1c",
    "a_HWqqWtauhv0c",
    "a_HWqqWtauhv1c",
    "a_Hbb",
    "a_Hcc",
    "a_Hss",
    "a_Hqq",
    "a_Htauhtaue",
    "a_Htauhtaum",
    "a_Htauhtauh",
    "a_QCDbb",
    "a_QCDcc",
    "a_QCDb",
    "a_QCDc",
    "a_QCDothers",
    "a_TopbWqq0c",
    "a_TopbWqq1c",
    "a_TopbWq0c",
    "a_TopbWq1c",
    "a_TopbWev",
    "a_TopbWmv",
    "a_TopbWtauhv",
    "a_TopbWtauev",
    "a_TopbWtaumv",
    "a_HWW_V2",
    "b_HWW_V2",
    "c_HWW_V2",
    "a_HWWvsQCD_V2",
    "b_HWWvsQCD_V2",
    "c_HWWvsQCD_V2",
    #kenematic information
    "Mj_V2_a",
    "Mj_V2_b",
    "Mj_V2_c",
    "PTj_V2_a",
    "PTj_V2_b",
    "PTj_V2_c",
    "Etaj_V2_a",
    "Etaj_V2_b",
    "Etaj_V2_c",
    "Phij_V2_a",
    "Phij_V2_b",
    "Phij_V2_c",
    "HT",
    "ST",
    "Nj8",
    "MJJ","MJJJ",
    "MET_et","MET_phi",
    "weight",
    "PTj","PTj_2","PTj_3","Etaj","Etaj_2","Etaj_3","Phij","Phij_2","Phij_3","Mj","Mj_2","Mj_3",
    "PTj_max","PTj_mid","PTj_min","Etaj_max","Etaj_mid","Etaj_min","Phij_max","Phij_mid","Phij_min","Mj_max","Mj_mid","Mj_min",
    #AK4 information
    "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in","Nj4_ex","Nj4_in",
    # "goodRun",
    # "Flag",
    # "MET_T1Smear_pt_XYcorr","MET_T1Smear_phi_XYcorr",
    # "Mj_corr","Mj_corr_2","Mj_corr_3",
    # "Mj_corr_a","Mj_corr_b","Mj_corr_c",
    # "MET_phi_NoXYCorr","MET_et_NoXYCorr",    
    ]
if args.uncert :
    Outcolumn += [
    # JES, JER part
    "Mj_jesTotalUp_a",
    "Mj_jesTotalUp_b",
    "Mj_jesTotalUp_c",
    "Mj_jesTotalDown_a",
    "Mj_jesTotalDown_b",
    "Mj_jesTotalDown_c",
    "Mj_jerUp_a",
    "Mj_jerUp_b",
    "Mj_jerUp_c",
    "Mj_jerDown_a",
    "Mj_jerDown_b",
    "Mj_jerDown_c",
    "Mj_corr_V2_a",
    "Mj_corr_V2_b",
    "Mj_corr_V2_c",

    "puWeight",
    "puWeightDown",
    "puWeightUp",
    #prefire weight
    "PrefireWeight",
    "PrefireWeightDown",
    "PrefireWeightUp",
    #split JES
    "Mj_jesAbsoluteUp_a",
"Mj_jesAbsoluteDown_a",
"Mj_jesAbsolute_yearUp_a",
"Mj_jesAbsolute_yearDown_a",
"Mj_jesBBEC1Down_a",
"Mj_jesBBEC1Up_a",
"Mj_jesBBEC1_yearUp_a",
"Mj_jesBBEC1_yearDown_a",
"Mj_jesEC2Up_a",
"Mj_jesEC2Down_a",
"Mj_jesEC2_yearUp_a",
"Mj_jesEC2_yearDown_a",
"Mj_jesFlavorQCDUp_a",
"Mj_jesFlavorQCDDown_a",
"Mj_jesHFDown_a",
"Mj_jesHFUp_a",
"Mj_jesHF_yearUp_a",
"Mj_jesHF_yearDown_a",
"Mj_jesRelativeBalUp_a",
"Mj_jesRelativeBalDown_a",
"Mj_jesRelativeSample_yearUp_a",
"Mj_jesRelativeSample_yearDown_a",

"Mj_jesAbsoluteUp_b",
"Mj_jesAbsoluteDown_b",
"Mj_jesAbsolute_yearUp_b",
"Mj_jesAbsolute_yearDown_b",
"Mj_jesBBEC1Down_b",
"Mj_jesBBEC1Up_b",
"Mj_jesBBEC1_yearUp_b",
"Mj_jesBBEC1_yearDown_b",
"Mj_jesEC2Up_b",
"Mj_jesEC2Down_b",
"Mj_jesEC2_yearUp_b",
"Mj_jesEC2_yearDown_b",
"Mj_jesFlavorQCDUp_b",
"Mj_jesFlavorQCDDown_b",
"Mj_jesHFDown_b",
"Mj_jesHFUp_b",
"Mj_jesHF_yearUp_b",
"Mj_jesHF_yearDown_b",
"Mj_jesRelativeBalUp_b",
"Mj_jesRelativeBalDown_b",
"Mj_jesRelativeSample_yearUp_b",
"Mj_jesRelativeSample_yearDown_b",


"Mj_jesAbsoluteUp_c",
"Mj_jesAbsoluteDown_c",
"Mj_jesAbsolute_yearUp_c",
"Mj_jesAbsolute_yearDown_c",
"Mj_jesBBEC1Down_c",
"Mj_jesBBEC1Up_c",
"Mj_jesBBEC1_yearUp_c",
"Mj_jesBBEC1_yearDown_c",
"Mj_jesEC2Up_c",
"Mj_jesEC2Down_c",
"Mj_jesEC2_yearUp_c",
"Mj_jesEC2_yearDown_c",
"Mj_jesFlavorQCDUp_c",
"Mj_jesFlavorQCDDown_c",
"Mj_jesHFDown_c",
"Mj_jesHFUp_c",
"Mj_jesHF_yearUp_c",
"Mj_jesHF_yearDown_c",
"Mj_jesRelativeBalUp_c",
"Mj_jesRelativeBalDown_c",
"Mj_jesRelativeSample_yearUp_c",
"Mj_jesRelativeSample_yearDown_c",


    #done split
    # "LHEScaleWeight",
    #JMS, JMR
    "Mj_jmsUp_a" ,
    "Mj_jmsDown_a" ,
    "Mj_jmrUp_a" ,
    "Mj_jmrDown_a" ,
    "Mj_jmsUp_b" ,
    "Mj_jmsDown_b" ,
    "Mj_jmrUp_b" ,
    "Mj_jmrDown_b" ,
    "Mj_jmsUp_c" ,
    "Mj_jmsDown_c" ,
    "Mj_jmrUp_c" ,
    "Mj_jmrDown_c" ,
    # MET UE up/down var
    "MET_et_UEup",
    "MET_et_UEdown",
    "MET_phi_UEup",
    "MET_phi_UEdown",
    # PS weight
    # "PSWeight",
    "LHEScaleWeight_0",
    "LHEScaleWeight_1",
    "LHEScaleWeight_2",
    "LHEScaleWeight_3",
    "LHEScaleWeight_4",
    "LHEScaleWeight_5",
    "LHEScaleWeight_6",
    "LHEScaleWeight_7",
    "LHEScaleWeight_8",
    "PSWeight_0",
    "PSWeight_1",
    "PSWeight_2",
    "PSWeight_3",        
    ]
if args.Branches == "Slimmed" :
    Outcolumn = [
        "HT","Nj8","MJJ","MJJJ",
        "MET_et","MET_phi","MET_phi_NoXYCorr","MET_et_NoXYCorr",
        "weight",
        "weight_noBtagSF",
        "PTj","PTj_2",
        "PTj_max","PTj_mid","PTj_min","Etaj_max","Etaj_mid","Etaj_min","Phij_max","Phij_mid","Phij_min","Mj_max","Mj_mid","Mj_min",
        "PTj_a","PTj_b","PTj_c","Etaj_a","Etaj_b","Etaj_c","Phij_a","Phij_b","Phij_c","Mj_a","Mj_b","Mj_c",
        "PTj_Pneta","PTj_Pnetb","PTj_Pnetc","Etaj_Pneta","Etaj_Pnetb","Etaj_Pnetc","Phij_Pneta","Phij_Pnetb","Phij_Pnetc","Mj_Pneta","Mj_Pnetb","Mj_Pnetc",
        "PartNet_MD_W_Pneta","PartNet_MD_W_Pnetb","PartNet_MD_W_Pnetc",
        "PartNet_MD_W_a","PartNet_MD_W_b","PartNet_MD_W_c",
        "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in","Nj4_ex","Nj4_in",
    ]

MCOutcolumn = [
]
if args.Branches in ["Tree"]:
    MCOutcolumn += [
        # "weight_Prefire_Up","weight_Prefire_Down","weight_pu_Down","weight_pu_Up",
        # "weight_Btag_m","weight_Btag_l",
        # "matchingW_Pneta","matchingW_Pnetb","matchingW_Pnetc",
        # "HEM_Filter",
    ]
if args.Branches in ["SF"] :
    MCOutcolumn += [
        # "matchingt_a","matchingW_a","matchingg_a","matchingZ_a","matchingu_a","matchingd_a","matchings_a","matchingc_a","matchingg_first_a","matchingu_first_a","matchingd_first_a","matchings_first_a", "matchingc_first_a","matchingqg_first_a","matchingt_first_a",
        # "matchingt_b","matchingW_b","matchingg_b","matchingZ_b","matchingu_b","matchingd_b","matchings_b","matchingc_b","matchingg_first_b","matchingu_first_b","matchingd_first_b","matchings_first_b", "matchingc_first_b","matchingqg_first_b","matchingt_first_b",
        # "matchingt_c","matchingW_c","matchingg_c","matchingZ_c","matchingu_c","matchingd_c","matchings_c","matchingc_c","matchingg_first_c","matchingu_first_c","matchingd_first_c","matchings_first_c", "matchingc_first_c","matchingqg_first_c","matchingt_first_c",
    ]

if args.data:
    MCOutcolumn = []

signal = args.signal
if signal :
    Outcolumn += [

    'R4q_a','R4q_b','R4q_c','R3q_a','R3q_b','R3q_c','R2q_a','R2q_b','R2q_c','w_a','w_b','w_c','t_a','t_b','t_c','tlqq_a','tlqq_b','tlqq_c','z_a','z_b','z_c','Rlqq_a','Rlqq_b','Rlqq_c','Rlq_a','Rlq_b','Rlq_c','gKK_g_a','gKK_g_b','gKK_g_c','u_a','u_b','u_c','R3q_taudecay_a','R3q_taudecay_b','R3q_taudecay_c'
           ]
    #NOTE:here we added tlqq_* for ttbar validation task, 2024/01/02

print(Outcolumn)

loadcolumns = copy.deepcopy(Outcolumn)

if args.year == "2018":
    SFjson = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2018.json"
    SF_unc_json = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2018_unc.json"
    loadcolumns += [ 
        "HEM_Filter",
        "HLT_AK8PFJet500",
        "HLT_PFHT1050",
        "HLT_AK8PFJet400_TrimMass30",
        "HLT_AK8PFJet420_TrimMass30",
        "HLT_AK8PFHT800_TrimMass50",
        "HLT_AK8PFHT850_TrimMass50",
        "HLT_AK8PFHT900_TrimMass50",
    ]
    drop = [
        "HEM_Filter",
        "HLT_AK8PFJet500",
        "HLT_PFHT1050",
        "HLT_AK8PFJet400_TrimMass30",
        "HLT_AK8PFJet420_TrimMass30",
        "HLT_AK8PFHT800_TrimMass50",
        "HLT_AK8PFHT850_TrimMass50",
        "HLT_AK8PFHT900_TrimMass50",
]

elif args.year == "2017":
    SFjson = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2017.json"
    SF_unc_json = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2017_unc.json"
    loadcolumns += [
        "HEM_Filter",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_PFHT1050",
        "HLT_AK8PFJet380_TrimMass30",
        "HLT_AK8PFJet400_TrimMass30",
        "HLT_AK8PFJet420_TrimMass30",
        "HLT_AK8PFHT750_TrimMass50",
        "HLT_AK8PFHT800_TrimMass50",
        "HLT_AK8PFHT850_TrimMass50",
        "HLT_AK8PFHT900_TrimMass50",
    ]
    drop = [
        "HEM_Filter",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_PFHT1050",
        "HLT_AK8PFJet380_TrimMass30",
        "HLT_AK8PFJet400_TrimMass30",
        "HLT_AK8PFJet420_TrimMass30",
        "HLT_AK8PFHT750_TrimMass50",
        "HLT_AK8PFHT800_TrimMass50",
        "HLT_AK8PFHT850_TrimMass50",
        "HLT_AK8PFHT900_TrimMass50",
    ]

elif args.year == "2016":
    SFjson = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2016.json"
    SF_unc_json = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2016_unc.json"
    loadcolumns += [
        "HEM_Filter",
        "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",
        "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",
        "HLT_PFHT800",
        "HLT_PFHT900",
        "HLT_PFJet450",
        "HLT_AK8PFJet450",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",
    ]
    drop = [
        "HEM_Filter",
        "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",
        "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",
        "HLT_PFHT800",
        "HLT_PFHT900",
        "HLT_PFJet450",
        "HLT_AK8PFJet450",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",
    ]
    
elif args.year == "2016APV":
    SFjson = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2016.json"
    SF_unc_json = "/home/pku/zhaoyz/Higgs/boostedHWW/scale_factors/trigger/mesh_data_2016_unc.json"
    loadcolumns += [
        "HEM_Filter",
        "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",
        "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",
        "HLT_PFHT800",
        "HLT_PFHT900",
        "HLT_PFJet450",
        "HLT_AK8PFJet450",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",
    ]
    drop = [
        "HEM_Filter",
        "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",
        "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",
        "HLT_PFHT800",
        "HLT_PFHT900",
        "HLT_PFJet450",
        "HLT_AK8PFJet450",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",
    ]
    

if signal :
    loadcolumns += [
    ]
loadcolumns = list(set(loadcolumns))
    
definecolumn = [
]

if args.outfile:
    # cut = " HT > 1100 && PTj_2 > 200 && (dnnDecorr_probTbcq_a+dnnDecorr_probTbqq_a+dnnDecorr_probTbc_a+dnnDecorr_probTbq_a+dnnDecorr_probWcq_a+dnnDecorr_probWqq_a+dnnDecorr_probZbb_a+dnnDecorr_probZcc_a+dnnDecorr_probZqq_a+dnnDecorr_probHbb_a+dnnDecorr_probHcc_a+dnnDecorr_probHqqqq_a+dnnDecorr_probQCDbb_a+dnnDecorr_probQCDcc_a+dnnDecorr_probQCDb_a+dnnDecorr_probQCDc_a+dnnDecorr_probQCDothers_a) > 0.001 && (dnnDecorr_probTbcq_c+dnnDecorr_probTbqq_c+dnnDecorr_probTbc_c+dnnDecorr_probTbq_c+dnnDecorr_probWcq_c+dnnDecorr_probWqq_c+dnnDecorr_probZbb_c+dnnDecorr_probZcc_c+dnnDecorr_probZqq_c+dnnDecorr_probHbb_c+dnnDecorr_probHcc_c+dnnDecorr_probHqqqq_c+dnnDecorr_probQCDbb_c+dnnDecorr_probQCDcc_c+dnnDecorr_probQCDb_c+dnnDecorr_probQCDc_c+dnnDecorr_probQCDothers_c) > 0.001 && ((Nj8 == 2 && Mj_a > 50) ||(Nj8==3 && Mj_Pneta > 50&& Mj_Pnetb>50&& (dnnDecorr_probTbcq_b+dnnDecorr_probTbqq_b+dnnDecorr_probTbc_b+dnnDecorr_probTbq_b+dnnDecorr_probWcq_b+dnnDecorr_probWqq_b+dnnDecorr_probZbb_b+dnnDecorr_probZcc_b+dnnDecorr_probZqq_b+dnnDecorr_probHbb_b+dnnDecorr_probHcc_b+dnnDecorr_probHqqqq_b+dnnDecorr_probQCDbb_b+dnnDecorr_probQCDcc_b+dnnDecorr_probQCDb_b+dnnDecorr_probQCDc_b+dnnDecorr_probQCDothers_b) > 0.001)) && HEM_Filter == 1 && goodRun == 1"
    if args.year == "2018":   cut = " (HEM_Filter == 1) && ((HLT_AK8PFJet500 == 1) || (HLT_PFHT1050 == 1)   || (HLT_AK8PFJet400_TrimMass30 == 1) || (HLT_AK8PFJet420_TrimMass30 == 1) || (HLT_AK8PFHT800_TrimMass50 == 1) || (HLT_AK8PFHT850_TrimMass50== 1) || (HLT_AK8PFHT900_TrimMass50== 1))"
    if args.year == "2017":   cut = " (HEM_Filter == 1) && ((HLT_AK8PFJet500 == 1) || (HLT_PFJet500 == 1)   || (HLT_AK8PFJet360_TrimMass30 == 1) || (HLT_PFHT1050 == 1) || (HLT_AK8PFJet380_TrimMass30 == 1) || (HLT_AK8PFJet400_TrimMass30== 1) || (HLT_AK8PFJet420_TrimMass30== 1) || (HLT_AK8PFHT750_TrimMass50 == 1) || (HLT_AK8PFHT800_TrimMass50 == 1) || (HLT_AK8PFHT850_TrimMass50 == 1) || (HLT_AK8PFHT900_TrimMass50))"
    if args.year == "2016":   cut = " (HEM_Filter == 1) && ((HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 == 1) || (HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 == 1)   || (HLT_PFHT800 == 1) || (HLT_PFHT900 == 1) || (HLT_PFJet450 == 1) || (HLT_AK8PFJet450== 1) || (HLT_AK8PFJet500 == 1) || (HLT_PFJet500 == 1) || (HLT_AK8PFJet360_TrimMass30 == 1) || (HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 == 1))"
    if args.year == "2016APV":cut = " (HEM_Filter == 1) && ((HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 == 1) || (HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 == 1)   || (HLT_PFHT800 == 1) || (HLT_PFHT900 == 1) || (HLT_PFJet450 == 1) || (HLT_AK8PFJet450== 1) || (HLT_AK8PFJet500 == 1) || (HLT_PFJet500 == 1) || (HLT_AK8PFJet360_TrimMass30 == 1) || (HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 == 1))"

    # cut = "(HLT_PFHT1050 == 1)"

    print("loadcolumns")

    if F_CheckExistFile(args.outfile) :
        sys.exit("File already exists")

    print("starting generate new file")
    newcolumn = Store_BDT_Score(args.infile, args.outfile, Outcolumn, loadcolumns = loadcolumns, BDT = None, drop = drop,definecolumn = definecolumn, cut = cut, MCOutcolumn = MCOutcolumn, SFjson = SFjson,SF_unc_json = SF_unc_json, Data = args.data)


if args.outpath:
    args.outpath = os.path.normpath(args.outpath)
    if not os.path.isdir(args.outpath) : os.makedirs(args.outpath)
    if not args.Log : sys.exit( "log file's name is not given" )
    rerun = None
    if args.rerun : 
        with open(args.Log) as f: rerun = eval(f.read())
        if len(rerun) == 0 : rerun = ["empty"]

    infile  = args.infile.split(",")
    infiles = []
    for ifile in infile: infiles += [ i for i in glob.glob(ifile) if i.endswith(".root") ]

    manager = multiprocessing.Manager()
    return_dict = manager.dict() # in order to check if the ifile is run successfully
    pool  = multiprocessing.Pool(processes = 8)
    for ifile in infiles:
        infile  = ifile
        outfile = os.path.normpath("%s/%s"%( args.outpath, os.path.normpath(ifile).split("/")[-1]))
        if rerun :
            if ifile not in rerun : 
                return_dict[ifile] = True
                continue
        cut = " HT > 1100 "
        pool.apply_async(Store_BDT_Score,(infile,outfile,Outcolumn,BDT,drop,definecolumn,return_dict,cut))
    pool.close()
    pool.join()
    
    failed = []
    for ifile in infiles:
        if not return_dict.get(ifile,None):
            failed.append(ifile)
    with open(args.Log,"w") as f:
        f.write(str(failed))

Finishing = datetime.now()
duration = (Finishing - Beginning).seconds
print('----END-----------------------------------------------[time:',Finishing,', duration:',duration,'sec]---------\n')