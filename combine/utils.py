#!/usr/bin/python
import json
import pickle as pkl
import warnings
from typing import Dict, List, Tuple, Union
from collections import OrderedDict
import matplotlib.pyplot as plt
# import mplhep as hep
import numpy as np
from hist import Hist


# plt.style.use(hep.style.CMS)

warnings.filterwarnings("ignore", message="Found duplicate branch ")

# (name of sample, name in templates)
combine_samples = {
    # data
    "data" : "Data",
    # signal
    "TotalSignal":"TotalSignal",
    "ggF": "ggF",
    "VH" : "VH",
    "VBF": "VBF",
    "ttH": "ttH",
    # bkg
    "QCD": "QCD",
    "WJets": "WJets",
    "Top": "Top",
    "Rest" : "Rest"
}

# (name in templates, name in cards)
labels = {
    # data
    "data" : "data",
    # signal
    "TotalSignal":"TotalSignal",
    "ggF": "ggF",
    "VH" : "VH",
    "VBF": "VBF",
    "ttH": "ttH",
    # bkg
    "QCD": "QCD",
    "WJets": "WJets",
    "Top": "Top",
    "Rest" : "Rest"
}
data = ["data"]

bkgs = ['QCD','Top','WJets','Rest']

sigs = ['TotalSignal','ggF','VH','ttH','VBF']
samples = sigs + bkgs + data


def get_sum_sumgenweight(pkl_files, year, sample):
    sum_sumgenweight = 0
    for ifile in pkl_files:
        # load and sum the sumgenweight of each
        with open(ifile, "rb") as f:
            metadata = pkl.load(f)
        sum_sumgenweight = sum_sumgenweight + metadata[sample][year]["sumgenweight"]
    return sum_sumgenweight

def shape_to_num(var, nom, clip=1.5):
    """
    Estimates the normalized rate from a shape systematic by integrating and dividing by the nominal integrated value.
    """
    nom_rate = np.sum(nom)
    var_rate = np.sum(var)

    # print("nom", nom_rate, "var", var_rate, "ratio", var_rate / nom_rate)
    # print(var)

    if var_rate == nom_rate:  # in cases when both are zero
        return 1

    if abs(var_rate / nom_rate) > clip:
        var_rate = clip * nom_rate

    if var_rate < 0:
        var_rate = 0

    return var_rate / nom_rate


# def get_template(h, sample):
#     ''' 
#     histogram h Hist, with axes:["samples","systematic","MH_Reco"]
#     sample is sample name in ["QCD",...,"data"]
#     '''
#     mass_axis = 2 #axis index
#     massbins = h.axes[mass_axis].edges
#     return (h[{"samples": sample, "systematic": "nominal"}].values(), massbins, "MH_Reco")

def get_template(h, sample):
    ''' 
    histogram h Hist, with axes:["samples","systematic","MH_Reco"]
    sample is sample name in ["QCD",...,"data"]
    '''
    mass_axis = 1 #axis index
    massbins = h.axes[mass_axis].edges
    return (h[sample, :].values(), massbins, "MH_Reco")



def blindBins(h: Hist, blind_region: List, blind_samples: List[str] = []):
    """
    Blind (i.e. zero) bins in histogram ``h``.
    If ``blind_samples`` specified, only blind those samples, else blinds all.
    blind_region: List = [left_bin,right_bin]
    blind_samples: List[str] = ["QCD",...]
    CAREFUL: assumes axis=0 is samples, axis=2 is mass_axis
    """
    h = h.copy()
    mass_axis = 2
    massbins = h.axes[mass_axis].edges
    left_end = int(np.searchsorted(massbins, blind_region[0], "right"))
    right_end = int(np.searchsorted(massbins, blind_region[1], "left") + 1)
    if blind_samples:
        for blind_sample in blind_samples:
            sample_index = np.argmax(np.array(list(h.axes[0])) == blind_sample)
            h.view(flow=True)[sample_index, :, left_end:right_end] = 0
    else:
        h.view(flow=True)[:, :, left_end:right_end] = 0
    return h