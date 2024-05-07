
import numpy as np
import os
# import pandas as pd
import random
import awkward as ak
import matplotlib as mpl
import matplotlib.pyplot as plt
import mplhep as hep
import boost_histogram as bh
# from scipy import interpolate
# from sklearn.metrics import roc_curve, auc
from cycler import cycler
import uproot
# means uproot4
# import ROOT
import argparse
import glob
import json
import logging
import os
import pickle as pkl
import warnings

import hist as hist2
import pyarrow
# import utils #local file: utils.py
import yaml
from typing import Dict, List, Union
from dataclasses import dataclass, field
from copy import deepcopy

# from coffea import hist
from coffea.nanoevents import NanoEventsFactory, NanoAODSchema
from coffea.nanoevents.methods import vector
# from coffea.nanoevents.methods.vector import PtEtaPhiMLorentzVector

YEAR = "2017"

#load the slimmedtree files using uproot

#different year available here.
# year = "2016APV"
# year = "2016"
# year = "2017"
# year = "2018"
# year = "Full-Run2"
year = YEAR

#if run on CMSconnect, use this:
CustNanoData = {
    # 'data'        : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Data/SlimmedTree_Data.root"%(year),
    # 'QCD'         : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/MC/SlimmedTree_QCD.root"%(year),
    'TT'          : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/MC/SlimmedTree_TT.root"%(year),
    'ST'          : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/MC/SlimmedTree_ST.root"%(year),
    'WJets'       : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/MC/SlimmedTree_WJets.root"%(year),
    'Rest'        : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/MC/SlimmedTree_Rest.root"%(year),
    'TotalSignal' : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_Total.root"%(year),
    'ggF'         : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_GluGlu.root"%(year),
    'ZH'          : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_WH.root"%(year),
    'WH'          : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_HZJ.root"%(year),
    'ttH'         : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_ttH.root"%(year),
    'VBF'         : "/ospool/cms-user/yuzhe/SlimmedTree/V7/%s/Signal/SlimmedTree_VBF.root"%(year),
}        

files = {typefile : {} for typefile in CustNanoData}
for typefile in CustNanoData:
    files[typefile] = uproot.lazy({CustNanoData[typefile]: "PKUTree" })
    
def get_dphi(events):
    pT_higgs   = events["PTj_V2_a"]
    eta_higgs  = events["Etaj_V2_a"]
    phi_higgs  = events["Phij_V2_a"]
    mass_higgs = events["Mj_V2_a"]
    pT_MET = events["MET_et"]
    eta_MET = events["Etaj_V2_a"]
    phi_MET = events["MET_phi"]
    mass_MET = ak.zeros_like(events["MET_phi"])
    vec_higgs = ak.zip({
        "pt"   : pT_higgs   ,
        "eta"  : eta_higgs  ,
        "phi"  : phi_higgs  ,
        "mass" : mass_higgs ,
    },
    with_name="PtEtaPhiMLorentzVector",
    behavior=vector.behavior,
    )
    vec_MET = ak.zip({
        "pt"   :   pT_MET   ,
        "eta"  :  eta_MET  ,
        "phi"  :  phi_MET  ,
        "mass" : mass_MET ,
    },
    with_name="PtEtaPhiMLorentzVector",
    behavior=vector.behavior,
    )
    delta_phi = np.subtract(vec_MET.phi, vec_higgs.phi)
    delta_phi = np.where(delta_phi > np.pi, delta_phi - 2*np.pi, delta_phi)
    delta_phi = np.where(delta_phi < -np.pi, delta_phi + 2*np.pi, delta_phi)
    delta_phi = np.abs(delta_phi)
    print(delta_phi)
    events["DPhi"] = delta_phi

for k in files:
    print("Add dphi of:",k)
    get_dphi(events=files[k])


def get_reco(events,mass = "Mj_corr_V2_a", MET_UE = None):
    pT_higgs   = events["PTj_V2_a"]
    eta_higgs  = events["Etaj_V2_a"]
    phi_higgs  = events["Phij_V2_a"]
    mass_higgs = events[mass]
    if not MET_UE:
        pT_MET = events["MET_et"]
        phi_MET = events["MET_phi"]
    elif MET_UE == "up":
        pT_MET = events["MET_et_UEup"]
        phi_MET = events["MET_phi_UEup"]
    elif MET_UE == "down":
        pT_MET = events["MET_et_UEdown"]
        phi_MET = events["MET_phi_UEdown"]
    eta_MET = events["Etaj_V2_a"]
    mass_MET = ak.zeros_like(events["MET_phi"])
    vec_higgs = ak.zip({
        "pt"   : pT_higgs   ,
        "eta"  : eta_higgs  ,
        "phi"  : phi_higgs  ,
        "mass" : mass_higgs ,
    },
    with_name="PtEtaPhiMLorentzVector",
    behavior=vector.behavior,
    )

    vec_MET = ak.zip({
        "pt"   :   pT_MET   ,
        "eta"  :  eta_MET  ,
        "phi"  :  phi_MET  ,
        "mass" : mass_MET ,
    },
    with_name="PtEtaPhiMLorentzVector",
    behavior=vector.behavior,
    )

    vec_sum = vec_MET + vec_higgs
    mH_reco = vec_sum.mass
    if not MET_UE: mass_str = "MH_Reco" if mass == "Mj_corr_V2_a" or mass == "Mj_V2_a" else mass
    else : mass_str = "MH_Reco" + "_UE_" + MET_UE
    
    if not MET_UE: 
        events[mass_str] = ak.where(( (events["DPhi"] < 0.8) & (events["MET_et"]/events["PTj_V2_a"] > 0.1)), mH_reco, events[mass])
    elif MET_UE == "up" : 
        events[mass_str] = ak.where(( (events["DPhi"] < 0.8) & (events["MET_et_UEup"]/events["PTj_V2_a"] > 0.1)), mH_reco, events[mass])
    elif MET_UE == "down" : 
        events[mass_str] = ak.where(( (events["DPhi"] < 0.8) & (events["MET_et_UEdown"]/events["PTj_V2_a"] > 0.1)), mH_reco, events[mass])

for k in files:
    # note that QCD and Data don't have such variation
    if k == "data" or k == "QCD": continue
    print("Add reco of:",k)
    get_reco(events=files[k])
    


CUT = {        
    "SR1a" : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] <= 0.25) & (files[k]["a_HWW_V2"] >= 0.99) for k in files}, 
    "SR1b" : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] <= 0.25) & (files[k]["a_HWW_V2"] >= 0.92) & (files[k]["a_HWW_V2"] < 0.99) for k in files},   
    "SR2a" : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] > 0.25) & (files[k]["a_HWW_V2"] >= 0.99) & (files[k]["DPhi"] < 0.8)for k in files}, 
    "SR2b" : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] > 0.25) & (files[k]["a_HWW_V2"] >= 0.92) & (files[k]["a_HWW_V2"] < 0.99) & (files[k]["DPhi"] < 0.8)for k in files},   
    "CR1"  : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] <= 0.25) & (files[k]["a_HWW_V2"] < 0.92) for k in files},
    "CR2"  : {k: (files[k]["MH_Reco"] >= 50) & (files[k]["MET_et"]/files[k]["PTj_V2_a"] > 0.25)  & (files[k]["a_HWW_V2"] < 0.92) & (files[k]["DPhi"] < 0.8) for k in files},   
    }

# CR: tagger < 0.92
files_cut = {typefile : {region : {} for region in CUT.keys()} for typefile in CustNanoData if (typefile != "QCD" and typefile != "data")}
for typefile in files_cut:
    # if typefile == "TT":continue
    print("file",typefile)
    for region in CUT.keys():
        print("region",region)
        # files[typefile] = uproot.lazy({CustNanoData[typefile]: "PKUTree" })
        files_cut[typefile] = files[typefile][CUT[region][typefile]]
        keep_keys = {
            "MH_Reco" : files_cut[typefile]["MH_Reco"][:1000000],
            "weight"  : files_cut[typefile]["weight"][:1000000],
            "LHEPdfWeight" : files_cut[typefile]["LHEPdfWeight"][:1000000],
        }
        # array_dict = {name : files_cut[typefile].array(library="ak") for name in keep_keys}
        tmp_file_name = os.path.normpath(f"./root/{YEAR}_{typefile}_{region}.root")
        with uproot.recreate(tmp_file_name) as newfile:
            newfile["PKUTree"] = keep_keys
