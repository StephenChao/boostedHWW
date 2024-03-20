import uproot as up
import awkward as ak
import coffea
from coffea.nanoevents import NanoEventsFactory, NanoAODSchema, BaseSchema, TreeMakerSchema
from coffea.nanoevents.methods import candidate
from coffea import lookup_tools
from coffea.lookup_tools import extractor
from coffea.lookup_tools.dense_lookup import dense_lookup
from coffea.jetmet_tools import FactorizedJetCorrector, JetCorrectionUncertainty
from coffea.jetmet_tools import JECStack, CorrectedJetsFactory, CorrectedMETFactory
from coffea.btag_tools.btagscalefactor import BTagScaleFactor
from coffea.lumi_tools import LumiMask
ak.behavior.update(candidate.behavior)
import numpy as np
import utils.common_helper as hcom
import numba as nb
import os
import data
import yaml

import logging
logger = logging.getLogger('analyze_helper')

def get_lumi_mask(events, year="2018"):
    if year == "2016" or year == "2016APV":
        golden_json_path = hcom.abs_path("data/goldenJSON/Cert_271036-284044_13TeV_Legacy2016_Collisions16_JSON.txt")
    elif year == "2017":
        golden_json_path = hcom.abs_path("data/goldenJSON/Cert_294927-306462_13TeV_UL2017_Collisions17_GoldenJSON.txt")
    elif year == "2018":
        golden_json_path = hcom.abs_path("data/goldenJSON/Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt")
    else:
        raise ValueError(f"Error: Unknown year \"{year}\".")
    lumi_mask = LumiMask(golden_json_path)(events.run,events.luminosityBlock)
    return lumi_mask

@nb.jit(nopython=True)
def nb_cut_duplication(old_events_number_array, new_events_number_array):
    
    temp_old = list(old_events_number_array)
    
    output = []
    for i,inumber in enumerate(new_events_number_array):
        if inumber not in temp_old:
            output.append(True)
            temp_old.append(inumber)
        else:
            output.append(False)
    
    return output

def cut_duplication(old_events_number_array, new_events_number_array):
    output = nb_cut_duplication(old_events_number_array, new_events_number_array)
    return ak.Array(output)

def Xbb_sf(year, fatjet_pt):
    pt_250to500 = {
        '2016APV' : (1.008,0.064,0.063),
        '2016'    : (1.044,0.052,0.04),
        '2017'    : (1.021,0.028,0.024),
        '2018'    : (1.000,0.024,0.024)
    }
    pt_500to700 = {
        '2016APV' : (1.027,0.07,0.055),
        '2016'    : (1.081,0.08,0.065),
        '2017'    : (1.018,0.031,0.022),
        '2018'    : (1.029,0.034,0.023)
    }
    pt_700toInf = {
        '2016APV' : (1.014,0.057,0.055),
        '2016'    : (0.996,0.035,0.039),
        '2017'    : (1.010,0.019,0.018),
        '2018'    : (1.026,0.025,0.016)
    }
    
    pt_bins = np.array([250,500,700,800])
    
    norms = np.array([pt_250to500[year][0],pt_500to700[year][0],pt_700toInf[year][0]])
    delta_ups = np.array([pt_250to500[year][1],pt_500to700[year][1],pt_700toInf[year][1]])
    delta_downs = np.array([pt_250to500[year][2],pt_500to700[year][2],pt_700toInf[year][2]])
    
    sf_norm_lookup = dense_lookup(norms, pt_bins)
    sf_up_lookup = dense_lookup(norms+delta_ups, pt_bins)
    sf_down_lookup = dense_lookup(norms-delta_downs, pt_bins)
    
    sf_norm = sf_norm_lookup(fatjet_pt)
    sf_up = sf_up_lookup(fatjet_pt)
    sf_down = sf_down_lookup(fatjet_pt)
    
    return sf_norm, sf_up, sf_down

def Btag_event_SF(year, AK_type, jets, WP_type='DeepJet'):
    jet_flavour = jets.hadronFlavour
    jet_abseta = abs(jets.eta)
    jet_pt = jets.pt
    
    btag_deepcsv_loose = {'2016APV' : 0.2027, '2016' : 0.1918, '2017' : 0.1355, '2018' : 0.1208}
    btag_deepcsv_medium = {'2016APV' : 0.6001, '2016' : 0.5847, '2017' : 0.4506, '2018' : 0.4168}
    btag_deepcsv_tight = {'2016APV' : 0.8819, '2016' : 0.8767, '2017' : 0.7738, '2018' : 0.7665}

    btag_deepjet_loose = {'2016APV' : 0.0508, '2016' : 0.0480, '2017' : 0.0532, '2018' : 0.0490}
    btag_deepjet_medium = {'2016APV' : 0.2598, '2016' : 0.2489, '2017' : 0.3040, '2018' : 0.2783}
    btag_deepjet_tight = {'2016APV' : 0.6502, '2016' : 0.6377, '2017' : 0.7476, '2018' : 0.7100}
    
    
    if WP_type=='DeepJet':
        jet_btagDeepB = jets.btagDeepFlavB
        medium_WP = btag_deepjet_medium[year]
    elif WP_type=='DeepCSV':
        jet_btagDeepB = jets.btagDeepB
        medium_WP = btag_deepcsv_medium[year]
    else:
        raise Exception(f"Error: Unknown Btagging method \"{WP_type}\", should be \"DeepCSV\" or \"DeepJet\".")
    jet_SF = jets[f'btagSF_{WP_type}']
    jet_SF_up = jets[f'btagSF_{WP_type}_up']
    jet_SF_down = jets[f'btagSF_{WP_type}_down']
    
#     tight_eff,tight_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_tight.npy")
    medium_eff,medium_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_{WP_type}_medium.npy")
    
    hist_ptbins=np.array([30, 100, 200, 300])
    hist_etabins=np.array([0,1,1.5,2.5])
    hist_flavourbins=np.array([0,4,5])
    
    edges = (hist_flavourbins,hist_etabins,hist_ptbins)

#     tight_eff_lookup = dense_lookup(tight_eff, edges)
#     tight_eff_err_lookup = dense_lookup(tight_eff_err, edges)
    
    medium_eff_lookup = dense_lookup(medium_eff, edges)
    medium_eff_err_lookup = dense_lookup(medium_eff_err, edges)
    
    
    
    eff = medium_eff_lookup(jet_flavour, jet_abseta, jet_pt)
#     eff_err = medium_eff_err_lookup(jet_flavour, jet_abseta, jet_pt)
#     eff_up = eff+eff_err
#     eff_down = eff-eff_err
    
    passbtag = jet_btagDeepB>medium_WP
    
    tagged_sf = ak.prod(jet_SF[passbtag], axis=-1)
    tagged_sf_up = ak.prod(jet_SF_up[passbtag], axis=-1)
    tagged_sf_down = ak.prod(jet_SF_down[passbtag], axis=-1)
    
    untagged_sf = ak.prod((((1 - jet_SF*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    untagged_sf_up = ak.prod((((1 - jet_SF_up*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    untagged_sf_down = ak.prod((((1 - jet_SF_down*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    
    event_sf = tagged_sf * untagged_sf
    event_sf_up = tagged_sf_up * untagged_sf_up
    event_sf_down = tagged_sf_down * untagged_sf_down
    
    return event_sf, event_sf_up, event_sf_down

def Btag_event_split_SF(year, AK_type, jets, WP_type='DeepJet'):
    jet_flavour = jets.hadronFlavour
    jet_abseta = abs(jets.eta)
    jet_pt = jets.pt
    
    btag_deepcsv_loose = {'2016APV' : 0.2027, '2016' : 0.1918, '2017' : 0.1355, '2018' : 0.1208}
    btag_deepcsv_medium = {'2016APV' : 0.6001, '2016' : 0.5847, '2017' : 0.4506, '2018' : 0.4168}
    btag_deepcsv_tight = {'2016APV' : 0.8819, '2016' : 0.8767, '2017' : 0.7738, '2018' : 0.7665}

    btag_deepjet_loose = {'2016APV' : 0.0508, '2016' : 0.0480, '2017' : 0.0532, '2018' : 0.0490}
    btag_deepjet_medium = {'2016APV' : 0.2598, '2016' : 0.2489, '2017' : 0.3040, '2018' : 0.2783}
    btag_deepjet_tight = {'2016APV' : 0.6502, '2016' : 0.6377, '2017' : 0.7476, '2018' : 0.7100}
    
    
    if WP_type=='DeepJet':
        jet_btagDeepB = jets.btagDeepFlavB
        medium_WP = btag_deepjet_medium[year]
    elif WP_type=='DeepCSV':
        jet_btagDeepB = jets.btagDeepB
        medium_WP = btag_deepcsv_medium[year]
    else:
        raise Exception(f"Error: Unknown Btagging method \"{WP_type}\", should be \"DeepCSV\" or \"DeepJet\".")
        
    flavour_bc_sel = (jet_flavour!=0)

    jet_SF = jets[f'btagSF_{WP_type}']
    
    jet_SF_bc_up = jets[f'btagSF_{WP_type}_up']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)
    jet_SF_bc_down = jets[f'btagSF_{WP_type}_down']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)
    
    jet_SF_light_up = jets[f'btagSF_{WP_type}_up']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
    jet_SF_light_down = jets[f'btagSF_{WP_type}_down']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
    
#     tight_eff,tight_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_tight.npy")
    medium_eff,medium_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_{WP_type}_medium.npy")
    
    hist_ptbins=np.array([30, 100, 200, 300])
    hist_etabins=np.array([0,1,1.5,2.5])
    hist_flavourbins=np.array([0,4,5])
    
    edges = (hist_flavourbins,hist_etabins,hist_ptbins)

#     tight_eff_lookup = dense_lookup(tight_eff, edges)
#     tight_eff_err_lookup = dense_lookup(tight_eff_err, edges)
    
    medium_eff_lookup = dense_lookup(medium_eff, edges)
    medium_eff_err_lookup = dense_lookup(medium_eff_err, edges)
    
    eff = medium_eff_lookup(jet_flavour, jet_abseta, jet_pt)
#     eff_err = medium_eff_err_lookup(jet_flavour, jet_abseta, jet_pt)
#     eff_up = eff+eff_err
#     eff_down = eff-eff_err
    
    passbtag = jet_btagDeepB>medium_WP
    
    tagged_sf = ak.prod(jet_SF[passbtag], axis=-1)
    
    tagged_sf_bc_up = ak.prod(jet_SF_bc_up[passbtag], axis=-1)
    tagged_sf_bc_down = ak.prod(jet_SF_bc_down[passbtag], axis=-1)
    
    tagged_sf_light_up = ak.prod(jet_SF_light_up[passbtag], axis=-1)
    tagged_sf_light_down = ak.prod(jet_SF_light_down[passbtag], axis=-1)
    
    untagged_sf = ak.prod((((1 - jet_SF*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    
    untagged_sf_bc_up = ak.prod((((1 - jet_SF_bc_up*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    untagged_sf_bc_down = ak.prod((((1 - jet_SF_bc_down*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    
    untagged_sf_light_up = ak.prod((((1 - jet_SF_light_up*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    untagged_sf_light_down = ak.prod((((1 - jet_SF_light_down*eff)[~passbtag]) / ((1 - eff)[~passbtag])), axis=-1)
    
    event_sf = tagged_sf * untagged_sf
    
    event_sf_bc_up = tagged_sf_bc_up * untagged_sf_bc_up
    event_sf_bc_down = tagged_sf_bc_down * untagged_sf_bc_down
    
    event_sf_light_up = tagged_sf_light_up * untagged_sf_light_up
    event_sf_light_down = tagged_sf_light_down * untagged_sf_light_down
    
    return event_sf, event_sf_bc_up, event_sf_bc_down, event_sf_light_up, event_sf_light_down

def Btag_event_split_SF_expand(year, AK_type, jets, WP_type='DeepJet'):
    jet_flavour = jets.hadronFlavour
    jet_abseta = abs(jets.eta)
    jet_pt = jets.pt
    
    btag_deepcsv_loose = {'2016APV' : 0.2027, '2016' : 0.1918, '2017' : 0.1355, '2018' : 0.1208}
    btag_deepcsv_medium = {'2016APV' : 0.6001, '2016' : 0.5847, '2017' : 0.4506, '2018' : 0.4168}
    btag_deepcsv_tight = {'2016APV' : 0.8819, '2016' : 0.8767, '2017' : 0.7738, '2018' : 0.7665}

    btag_deepjet_loose = {'2016APV' : 0.0508, '2016' : 0.0480, '2017' : 0.0532, '2018' : 0.0490}
    btag_deepjet_medium = {'2016APV' : 0.2598, '2016' : 0.2489, '2017' : 0.3040, '2018' : 0.2783}
    btag_deepjet_tight = {'2016APV' : 0.6502, '2016' : 0.6377, '2017' : 0.7476, '2018' : 0.7100}
    
    
    if WP_type=='DeepJet':
        jet_btagDeepB = jets.btagDeepFlavB
        medium_WP = btag_deepjet_medium[year]
        tight_WP = btag_deepjet_tight[year]
    elif WP_type=='DeepCSV':
        jet_btagDeepB = jets.btagDeepB
        medium_WP = btag_deepcsv_medium[year]
        tight_WP = btag_deepcsv_tight[year]
    else:
        raise Exception(f"Error: Unknown Btagging method \"{WP_type}\", should be \"DeepCSV\" or \"DeepJet\".")
        
    flavour_bc_sel = (jet_flavour!=0)
    
    tight_eff,tight_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_{WP_type}_tight.npy")
    medium_eff,medium_eff_err = np.load(f"Btag_eff/{AK_type}_{year}_{WP_type}_medium.npy")

    hist_ptbins=np.array([30, 100, 200, 300])
    hist_etabins=np.array([0,1,1.5,2.5])
    hist_flavourbins=np.array([0,4,5])

    edges = (hist_flavourbins,hist_etabins,hist_ptbins)

    tight_eff_lookup = dense_lookup(tight_eff, edges)
    tight_eff_err_lookup = dense_lookup(tight_eff_err, edges)

    medium_eff_lookup = dense_lookup(medium_eff, edges)
    medium_eff_err_lookup = dense_lookup(medium_eff_err, edges)

    medium_eff = medium_eff_lookup(jet_flavour, jet_abseta, jet_pt)
    tight_eff = tight_eff_lookup(jet_flavour, jet_abseta, jet_pt)
    
    if AK_type=='AK8':
    
        jet_SF = jets[f'btagSF_{WP_type}']

        jet_SF_bc_up = jets[f'btagSF_{WP_type}_up']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)
        jet_SF_bc_down = jets[f'btagSF_{WP_type}_down']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)

        jet_SF_light_up = jets[f'btagSF_{WP_type}_up']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
        jet_SF_light_down = jets[f'btagSF_{WP_type}_down']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
    #     eff_err = medium_eff_err_lookup(jet_flavour, jet_abseta, jet_pt)
    #     eff_up = eff+eff_err
    #     eff_down = eff-eff_err

        passbtag = jet_btagDeepB>medium_WP

        tagged_sf = ak.prod(jet_SF[passbtag], axis=-1)

        tagged_sf_bc_up = ak.prod(jet_SF_bc_up[passbtag], axis=-1)
        tagged_sf_bc_down = ak.prod(jet_SF_bc_down[passbtag], axis=-1)

        tagged_sf_light_up = ak.prod(jet_SF_light_up[passbtag], axis=-1)
        tagged_sf_light_down = ak.prod(jet_SF_light_down[passbtag], axis=-1)

        untagged_sf = ak.prod((((1 - jet_SF*medium_eff)[~passbtag]) / ((1 - medium_eff)[~passbtag])), axis=-1)

        untagged_sf_bc_up = ak.prod((((1 - jet_SF_bc_up*medium_eff)[~passbtag]) / ((1 - medium_eff)[~passbtag])), axis=-1)
        untagged_sf_bc_down = ak.prod((((1 - jet_SF_bc_down*medium_eff)[~passbtag]) / ((1 - medium_eff)[~passbtag])), axis=-1)

        untagged_sf_light_up = ak.prod((((1 - jet_SF_light_up*medium_eff)[~passbtag]) / ((1 - medium_eff)[~passbtag])), axis=-1)
        untagged_sf_light_down = ak.prod((((1 - jet_SF_light_down*medium_eff)[~passbtag]) / ((1 - medium_eff)[~passbtag])), axis=-1)

        event_sf = tagged_sf * untagged_sf

        event_sf_bc_up = tagged_sf_bc_up * untagged_sf_bc_up
        event_sf_bc_down = tagged_sf_bc_down * untagged_sf_bc_down

        event_sf_light_up = tagged_sf_light_up * untagged_sf_light_up
        event_sf_light_down = tagged_sf_light_down * untagged_sf_light_down
        
    else:
        
        jet_SF_M = jets[f'btagSF_{WP_type}']
        
#         print(jet_SF_M)
        
        jet_SF_M_bc_up = jets[f'btagSF_{WP_type}_up']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)
        jet_SF_M_bc_down = jets[f'btagSF_{WP_type}_down']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(~flavour_bc_sel)

        jet_SF_M_light_up = jets[f'btagSF_{WP_type}_up']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
        jet_SF_M_light_down = jets[f'btagSF_{WP_type}_down']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}']*(flavour_bc_sel)
        
        jet_SF_T = jets[f'btagSF_{WP_type}_T']
        
#         print(jet_SF_T)
        
        jet_SF_T_bc_up = jets[f'btagSF_{WP_type}_T_up']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}_T']*(~flavour_bc_sel)
        jet_SF_T_bc_down = jets[f'btagSF_{WP_type}_T_down']*(flavour_bc_sel) + jets[f'btagSF_{WP_type}_T']*(~flavour_bc_sel)

        jet_SF_T_light_up = jets[f'btagSF_{WP_type}_T_up']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}_T']*(flavour_bc_sel)
        jet_SF_T_light_down = jets[f'btagSF_{WP_type}_T_down']*(~flavour_bc_sel) + jets[f'btagSF_{WP_type}_T']*(flavour_bc_sel)
        
        jet_passT_sel = (jet_btagDeepB>tight_WP)
        jet_passM_failT_sel = (jet_btagDeepB>medium_WP) & (jet_btagDeepB<=tight_WP)
        jet_failM_sel = (jet_btagDeepB<=medium_WP)
        
#         print(np.sum(jet_passT_sel))
#         print(np.sum(jet_passM_failT_sel))
#         print(np.sum(jet_failM_sel))
        
        tagged_sf_T = ak.prod(jet_SF_T[jet_passT_sel], axis=-1)
        
        tagged_sf_T_bc_up = ak.prod(jet_SF_T_bc_up[jet_passT_sel], axis=-1)
        tagged_sf_T_bc_down = ak.prod(jet_SF_T_bc_down[jet_passT_sel], axis=-1)

        tagged_sf_T_light_up = ak.prod(jet_SF_T_light_up[jet_passT_sel], axis=-1)
        tagged_sf_T_light_down = ak.prod(jet_SF_T_light_down[jet_passT_sel], axis=-1)
        
        tagged_sf_M = ak.prod((jet_SF_M[jet_passM_failT_sel]*medium_eff[jet_passM_failT_sel] - jet_SF_T[jet_passM_failT_sel]*tight_eff[jet_passM_failT_sel])/(medium_eff[jet_passM_failT_sel] - tight_eff[jet_passM_failT_sel]), axis=-1)
        
        tagged_sf_M_bc_up = ak.prod((jet_SF_M_bc_up[jet_passM_failT_sel]*medium_eff[jet_passM_failT_sel] - jet_SF_T_bc_up[jet_passM_failT_sel]*tight_eff[jet_passM_failT_sel])/(medium_eff[jet_passM_failT_sel] - tight_eff[jet_passM_failT_sel]), axis=-1)
        tagged_sf_M_bc_down = ak.prod((jet_SF_M_bc_down[jet_passM_failT_sel]*medium_eff[jet_passM_failT_sel] - jet_SF_T_bc_down[jet_passM_failT_sel]*tight_eff[jet_passM_failT_sel])/(medium_eff[jet_passM_failT_sel] - tight_eff[jet_passM_failT_sel]), axis=-1)

        tagged_sf_M_light_up = ak.prod((jet_SF_M_light_up[jet_passM_failT_sel]*medium_eff[jet_passM_failT_sel] - jet_SF_T_light_up[jet_passM_failT_sel]*tight_eff[jet_passM_failT_sel])/(medium_eff[jet_passM_failT_sel] - tight_eff[jet_passM_failT_sel]), axis=-1)
        tagged_sf_M_light_down = ak.prod((jet_SF_M_light_down[jet_passM_failT_sel]*medium_eff[jet_passM_failT_sel] - jet_SF_T_light_down[jet_passM_failT_sel]*tight_eff[jet_passM_failT_sel])/(medium_eff[jet_passM_failT_sel] - tight_eff[jet_passM_failT_sel]), axis=-1)
        
        untagged_sf = ak.prod((((1 - jet_SF_M*medium_eff)[jet_failM_sel]) / ((1 - medium_eff)[jet_failM_sel])), axis=-1)

        untagged_sf_bc_up = ak.prod((((1 - jet_SF_M_bc_up*medium_eff)[jet_failM_sel]) / ((1 - medium_eff)[jet_failM_sel])), axis=-1)
        untagged_sf_bc_down = ak.prod((((1 - jet_SF_M_bc_down*medium_eff)[jet_failM_sel]) / ((1 - medium_eff)[jet_failM_sel])), axis=-1)

        untagged_sf_light_up = ak.prod((((1 - jet_SF_M_light_up*medium_eff)[jet_failM_sel]) / ((1 - medium_eff)[jet_failM_sel])), axis=-1)
        untagged_sf_light_down = ak.prod((((1 - jet_SF_M_light_down*medium_eff)[jet_failM_sel]) / ((1 - medium_eff)[jet_failM_sel])), axis=-1)
        
        event_sf = tagged_sf_T * tagged_sf_M * untagged_sf

        event_sf_bc_up = tagged_sf_T_bc_up * tagged_sf_M_bc_up * untagged_sf_bc_up
        event_sf_bc_down = tagged_sf_T_bc_down * tagged_sf_M_bc_down * untagged_sf_bc_down

        event_sf_light_up = tagged_sf_T_light_up * tagged_sf_M_light_up * untagged_sf_light_up
        event_sf_light_down = tagged_sf_T_light_down * tagged_sf_M_light_down * untagged_sf_light_down
        
#         print(tagged_sf_T)
#         print(tagged_sf_M)
#         print(untagged_sf)
    
    return event_sf, event_sf_bc_up, event_sf_bc_down, event_sf_light_up, event_sf_light_down

def calc_HLT_sf(year, electrons, muons, taus):
    n_leptons = ak.count(electrons.pt, axis=1)+ak.count(muons.pt, axis=1)+ak.count(taus.pt, axis=1)
    assert np.sum(n_leptons==2)==len(n_leptons)
    
    if year=='2016APV':
        ele_file = up.open(hcom.abs_path('data/HLT_SFs/electron_hlt_sfs_2016.root'))
        mu_file = up.open(hcom.abs_path('data/HLT_SFs/Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_SingleMuonTriggers.root'))
        
        ele_hist = ele_file['EGamma_SF2D;1']
        mu_hist = mu_file['NUM_IsoMu24_or_IsoTkMu24_DEN_CutBasedIdTight_and_PFIsoTight_eta_pt;1']
        
        LepLep_values, LepLep_errors = np.load(hcom.abs_path('HLT_eff/2016_SF_ntau==0.npy'))
    elif year=='2016':
        ele_file = up.open(hcom.abs_path('data/HLT_SFs/electron_hlt_sfs_2016.root'))
        mu_file = up.open(hcom.abs_path('data/HLT_SFs/Efficiencies_muon_generalTracks_Z_Run2016_UL_SingleMuonTriggers.root'))
        
        ele_hist = ele_file['EGamma_SF2D;1']
        mu_hist = mu_file['NUM_IsoMu24_or_IsoTkMu24_DEN_CutBasedIdTight_and_PFIsoTight_eta_pt;1']
        
        LepLep_values, LepLep_errors = np.load(hcom.abs_path('HLT_eff/2016_SF_ntau==0.npy'))
    elif year=='2017':
        ele_file = up.open(hcom.abs_path('data/HLT_SFs/electron_hlt_sfs_2017.root'))
        mu_file = up.open(hcom.abs_path('data/HLT_SFs/Efficiencies_muon_generalTracks_Z_Run2017_UL_SingleMuonTriggers.root'))
        
        ele_hist = ele_file['EGamma_SF2D;1']
        mu_hist = mu_file['NUM_IsoMu27_DEN_CutBasedIdTight_and_PFIsoTight_eta_pt;1']
        
        LepLep_values, LepLep_errors = np.load(hcom.abs_path('HLT_eff/2017_SF_ntau==0.npy'))
    elif year=='2018':
        ele_file = up.open(hcom.abs_path('data/HLT_SFs/electron_hlt_sfs_2018.root'))
        mu_file = up.open(hcom.abs_path('data/HLT_SFs/Efficiencies_muon_generalTracks_Z_Run2018_UL_SingleMuonTriggers.root'))
        
        ele_hist = ele_file['EGamma_SF2D;1']
        mu_hist = mu_file['NUM_IsoMu24_DEN_CutBasedIdTight_and_PFIsoTight_eta_pt;1']
        
        LepLep_values, LepLep_errors = np.load(hcom.abs_path('HLT_eff/2018_SF_ntau==0.npy'))
    else:
        exit(0)
        
    ele_values, ele_eta_bins, ele_pt_bins = ele_hist.to_numpy()
    ele_errors = ele_hist.errors()
    mu_values, mu_eta_bins, mu_pt_bins = mu_hist.to_numpy()
    mu_errors = mu_hist.errors()
    
    ele_lookup = dense_lookup(ele_values,(ele_eta_bins,ele_pt_bins))
    ele_err_lookup = dense_lookup(ele_errors,(ele_eta_bins,ele_pt_bins))
    mu_lookup = dense_lookup(mu_values,(mu_eta_bins,mu_pt_bins))
    mu_err_lookup = dense_lookup(mu_errors,(mu_eta_bins,mu_pt_bins))
    
    LepLep_hist_ptbins = np.array([0, 40, 80, 120, 200, 300])
    
    LepLep_lookup = dense_lookup(LepLep_values,(LepLep_hist_ptbins, LepLep_hist_ptbins))
    LepLep_err_lookup = dense_lookup(LepLep_errors,(LepLep_hist_ptbins, LepLep_hist_ptbins))
    
    n_emus = ak.count(electrons.pt, axis=1)+ak.count(muons.pt, axis=1)
    
#     print(len(n_leptons))
#     print(np.sum(n_leptons==2))
#     print(np.sum(n_leptons==1))
#     print(np.sum(n_leptons==0))
#     print(np.sum(n_leptons==1)+np.sum(n_leptons==0)+np.sum(n_leptons==2))
    
    muonhltsf = mu_lookup(muons.eta, muons.pt)
    muonhltsf_up = mu_lookup(muons.eta, muons.pt)+mu_err_lookup(muons.eta, muons.pt)
    muonhltsf_down = mu_lookup(muons.eta, muons.pt)-mu_err_lookup(muons.eta, muons.pt)
    
    electronhltsf = ele_lookup(electrons.eta, electrons.pt)
    electronhltsf_up = ele_lookup(electrons.eta, electrons.pt)+ele_err_lookup(electrons.eta, electrons.pt)
    electronhltsf_down = ele_lookup(electrons.eta, electrons.pt)-ele_err_lookup(electrons.eta, electrons.pt)
    
    LepTau_sf = np.prod(muonhltsf,axis=1)*np.prod(electronhltsf,axis=1)
    LepTau_sf_up = np.prod(muonhltsf_up,axis=1)*np.prod(electronhltsf_up,axis=1)
    LepTau_sf_down = np.prod(muonhltsf_down,axis=1)*np.prod(electronhltsf_down,axis=1)
    
    leptons = ak.concatenate([electrons,muons,taus],axis=1)
    lep1 = leptons[ak.argsort(leptons.pt,axis=1,ascending=False)][:,0]
    lep2 = leptons[ak.argsort(leptons.pt,axis=1,ascending=False)][:,1]
    
    LepLep_sf = LepLep_lookup(lep1.pt,lep2.pt)
    LepLep_sf_up = LepLep_lookup(lep1.pt,lep2.pt)+LepLep_err_lookup(lep1.pt,lep2.pt)
    LepLep_sf_down = LepLep_lookup(lep1.pt,lep2.pt)-LepLep_err_lookup(lep1.pt,lep2.pt)
    
    two_lep_sel = (n_emus==2)
    
    SF = LepTau_sf*(~two_lep_sel)+LepLep_sf*two_lep_sel
    SF_up = LepTau_sf_up*(~two_lep_sel)+LepLep_sf_up*two_lep_sel
    SF_down = LepTau_sf_down*(~two_lep_sel)+LepLep_sf_down*two_lep_sel
    
    return SF, SF_up, SF_down

# https://gitlab.cern.ch/akhukhun/roccor
# https://github.com/CoffeaTeam/coffea/blob/master/coffea/lookup_tools/rochester_lookup.py
# https://github.com/TopEFT/topcoffea/blob/master/topcoffea/modules/corrections.py#L359
def apply_rochester_correction(mu, data=False, year='2018'):
    if year=='2016': 
        rochester_data = lookup_tools.txt_converters.convert_rochester_file(hcom.abs_path("data/RoccoR/RoccoR2016bUL.txt"), loaduncs=True)
    elif year=='2016APV': 
        rochester_data = lookup_tools.txt_converters.convert_rochester_file(hcom.abs_path("data/RoccoR/RoccoR2016aUL.txt"), loaduncs=True)
    elif year=='2017': 
        rochester_data = lookup_tools.txt_converters.convert_rochester_file(hcom.abs_path("data/RoccoR/RoccoR2017UL.txt"), loaduncs=True)
    elif year=='2018': 
        rochester_data = lookup_tools.txt_converters.convert_rochester_file(hcom.abs_path("data/RoccoR/RoccoR2018UL.txt"), loaduncs=True)
    rochester = lookup_tools.rochester_lookup.rochester_lookup(rochester_data)
    if not data:
        hasgen = ~np.isnan(ak.fill_none(mu.matched_gen.pt, np.nan))
        mc_rand = np.random.rand(*ak.to_numpy(ak.flatten(mu.pt)).shape)
        mc_rand = ak.unflatten(mc_rand, ak.num(mu.pt, axis=1))
        corrections = np.array(ak.flatten(ak.ones_like(mu.pt)))
        errors = np.array(ak.flatten(ak.ones_like(mu.pt)))
        
        mc_kspread = rochester.kSpreadMC(mu.charge[hasgen],mu.pt[hasgen],mu.eta[hasgen],mu.phi[hasgen],mu.matched_gen.pt[hasgen])
        mc_ksmear = rochester.kSmearMC(mu.charge[~hasgen],mu.pt[~hasgen],mu.eta[~hasgen],mu.phi[~hasgen],mu.nTrackerLayers[~hasgen],mc_rand[~hasgen])
        errspread = rochester.kSpreadMCerror(mu.charge[hasgen],mu.pt[hasgen],mu.eta[hasgen],mu.phi[hasgen],mu.matched_gen.pt[hasgen])
        errsmear = rochester.kSmearMCerror(mu.charge[~hasgen],mu.pt[~hasgen],mu.eta[~hasgen],mu.phi[~hasgen],mu.nTrackerLayers[~hasgen],mc_rand[~hasgen])
        hasgen_flat = np.array(ak.flatten(hasgen))
        corrections[hasgen_flat] = np.array(ak.flatten(mc_kspread))
        corrections[~hasgen_flat] = np.array(ak.flatten(mc_ksmear))
        errors[hasgen_flat] = np.array(ak.flatten(errspread))
        errors[~hasgen_flat] = np.array(ak.flatten(errsmear))
        corrections = ak.unflatten(corrections, ak.num(mu.pt, axis=1))
        errors = ak.unflatten(errors, ak.num(mu.pt, axis=1))
    else:
        corrections = rochester.kScaleDT(mu.charge, mu.pt, mu.eta, mu.phi)
        errors = rochester.kScaleDTerror(mu.charge, mu.pt, mu.eta, mu.phi)
    
    pt_nom = mu.pt * corrections
    pt_err = mu.pt * errors
    return pt_nom, pt_nom + pt_err, pt_nom - pt_err


def is_clean(obj_A, obj_B, drmin=0.4):
    ## Method 1
    # pair_obj = ak.cartesian([obj_A, obj_B],nested=True)
    # obj1, obj2 = ak.unzip(pair_obj)
    # dr_jm = obj1.delta_r(obj2)
    # min_dr_jm = ak.min(dr_jm,axis=2)
    # mask = min_dr_jm > drmin
    
    ## Method 2
    objB_near, objB_dr = obj_A.nearest(obj_B, return_metric=True)
    mask = ak.fill_none(objB_dr > drmin, True) # I guess to use True is because if there are no objB, all the objA are clean
    return (mask)

def Delta_phi(phi1,phi2):
    a = abs(phi1-phi2)
    return np.array(1*(a<=pi)*a+1*(a>pi)*(2*pi-a))

def Delta_eta(eta1,eta2):
    return np.array(abs(eta1-eta2))

def Delta_r(eta1,phi1,eta2,phi2):
    de = Delta_eta(eta1,eta2)
    dp = Delta_phi(phi1,phi2)
    return np.sqrt(de**2+dp**2)

def get_btagsf(flavor, eta, pt, sys='nominal', year='2018', WP_type='DeepJet', WP='MEDIUM'):
    if not WP_type in ['DeepJet','DeepCSV']:
        raise Exception(f"Error: Unknown Btagging method \"{WP_type}\", should be \"DeepCSV\" or \"DeepJet\".")
    if  year == '2016APV': SFevaluatorBtag = BTagScaleFactor(hcom.abs_path(f"data/btagSF/{WP_type}_106XUL16preVFPSF_v1.btag.csv.gz"),WP)
    elif year == '2016':   SFevaluatorBtag = BTagScaleFactor(hcom.abs_path(f"data/btagSF/{WP_type}_106XUL16postVFPSF_v2.btag.csv.gz"),WP)
    elif year == '2017':   SFevaluatorBtag = BTagScaleFactor(hcom.abs_path(f"data/btagSF/{WP_type}_106XUL17SF_V2p1.btag.csv.gz"),WP)
    elif year == '2018':   SFevaluatorBtag = BTagScaleFactor(hcom.abs_path(f"data/btagSF/{WP_type}_106XUL18SF_V1p1.btag.csv.gz"),WP)
    else: raise Exception(f"Error: Unknown year \"{year}\".")

    return SFevaluatorBtag.eval("central",flavor,eta,pt), SFevaluatorBtag.eval("up",flavor,eta,pt), SFevaluatorBtag.eval("down",flavor,eta,pt)


### LEPTON SFs
def make_evaluator_lepton_SF(year):
    ext = extractor()
    if year=='2016':
        ext.add_weight_sets(
            [
                f"electronrecosf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL16.root')}",
                f"electronrecosfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL16.root')}",
                f"electrontightidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL16.root')}",
                f"electrontightidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL16.root')}",
                f"electronlooseidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL16.root')}",
                f"electronlooseidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL16.root')}",
                f"muonidsf NUM_TightID_DEN_TrackerMuons_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_ID.root')}",
                f"muonidsfunc NUM_TightID_DEN_TrackerMuons_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_ID.root')}",
                f"muonisosf NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_ISO.root')}",
                f"muonisosfunc NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_ISO.root')}"
            ]
        )
        
    elif year=='2016APV':
        ext.add_weight_sets(
            [
                f"electronrecosf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL16APV.root')}",
                f"electronrecosfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL16APV.root')}",
                f"electrontightidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL16APV.root')}",
                f"electrontightidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL16APV.root')}",
                f"electronlooseidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL16APV.root')}",
                f"electronlooseidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL16APV.root')}",
                f"muonidsf NUM_TightID_DEN_TrackerMuons_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_ID.root')}",
                f"muonidsfunc NUM_TightID_DEN_TrackerMuons_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_ID.root')}",
                f"muonisosf NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_ISO.root')}",
                f"muonisosfunc NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2016_UL_ISO.root')}"
            ]
        )
    elif year=='2017':
        ext.add_weight_sets(
            [
                f"electronrecosf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL17.root')}",
                f"electronrecosfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL17.root')}",
                f"electrontightidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL17.root')}",
                f"electrontightidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL17.root')}",
                f"electronlooseidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL17.root')}",
                f"electronlooseidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL17.root')}",
                f"muonidsf NUM_TightID_DEN_TrackerMuons_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2017_UL_ID.root')}",
                f"muonidsfunc NUM_TightID_DEN_TrackerMuons_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2017_UL_ID.root')}",
                f"muonisosf NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2017_UL_ISO.root')}",
                f"muonisosfunc NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2017_UL_ISO.root')}"
            ]
        )
    elif year=='2018':
        ext.add_weight_sets(
            [
                f"electronrecosf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL18.root')}",
                f"electronrecosfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_RecoSF_UL18.root')}",
                f"electrontightidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL18.root')}",
                f"electrontightidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Medium_UL18.root')}",
                f"electronlooseidsf EGamma_SF2D {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL18.root')}",
                f"electronlooseidsfunc EGamma_SF2D_error {hcom.abs_path('data/lepton_SFs/electron/EGM2D_Veto_UL18.root')}",
                f"muonidsf NUM_TightID_DEN_TrackerMuons_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2018_UL_ID.root')}",
                f"muonidsfunc NUM_TightID_DEN_TrackerMuons_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2018_UL_ID.root')}",
                f"muonisosf NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2018_UL_ISO.root')}",
                f"muonisosfunc NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt_error {hcom.abs_path('data/lepton_SFs/muon/Efficiencies_muon_generalTracks_Z_Run2018_UL_ISO.root')}"
            ]
        )
    else:
        exit(0)
        
    ext.finalize()
    evaluator = ext.make_evaluator()
    return evaluator
#tau ID sf
def calc_tau_SF(year,taus):
    tau_pt = taus.pt
    tau_dm = taus.decayMode
    tau_eta = abs(taus.eta)
    tau_genmatch = taus.genPartFlav
    #for genmatch==5
    file_realtau = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_dm_DeepTau2017v2p1VSjet_VSjetMedium_VSeleVVLoose_Mar07.root'))

    if year=='2016APV':
        hist_dm0 = file_realtau['DM0_2016_preVFP_hist;1']
        hist_dm1 = file_realtau['DM1_2016_preVFP_hist;1']
        hist_dm10 = file_realtau['DM10_2016_preVFP_hist;1']
        hist_dm11 = file_realtau['DM11_2016_preVFP_hist;1']

        file_eleFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSe_UL2016_preVFP.root'))
        file_muFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSmu_UL2016_preVFP.root'))
        
    elif year=='2016':
        hist_dm0 = file_realtau['DM0_2016_postVFP_hist;1']
        hist_dm1 = file_realtau['DM1_2016_postVFP_hist;1']
        hist_dm10 = file_realtau['DM10_2016_postVFP_hist;1']
        hist_dm11 = file_realtau['DM11_2016_postVFP_hist;1']
        
        file_eleFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSe_UL2016_postVFP.root'))
        file_muFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSmu_UL2016_postVFP.root'))
        
    elif year=='2017':
        hist_dm0 = file_realtau['DM0_2017_hist;1']
        hist_dm1 = file_realtau['DM1_2017_hist;1']
        hist_dm10 = file_realtau['DM10_2017_hist;1']
        hist_dm11 = file_realtau['DM11_2017_hist;1']
        
        file_eleFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSe_UL2017.root'))
        file_muFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSmu_UL2017.root'))
        
    elif year=='2018':
        hist_dm0 = file_realtau['DM0_2018_hist;1']
        hist_dm1 = file_realtau['DM1_2018_hist;1']
        hist_dm10 = file_realtau['DM10_2018_hist;1']
        hist_dm11 = file_realtau['DM11_2018_hist;1']
        
        file_eleFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSe_UL2018.root'))
        file_muFake = up.open(hcom.abs_path('data/lepton_SFs/tau/TauID_SF_eta_DeepTau2017v2p1VSmu_UL2018.root'))
        
    else:
        exit(0)
        
    hist_eleFake = file_eleFake['VVLoose;1']
    hist_muFake = file_muFake['Loose;1']

    _, eleFake_eta_bins = hist_eleFake.to_numpy()
    _, muFake_eta_bins = hist_muFake.to_numpy()
    _, pt_bins = hist_dm0.to_numpy()
    
    sf_lookup_eleFake = dense_lookup(hist_eleFake.to_numpy()[0],eleFake_eta_bins)
    sf_lookup_muFake = dense_lookup(hist_muFake.to_numpy()[0],muFake_eta_bins)
    
    sferr_lookup_eleFake = dense_lookup(hist_eleFake.errors(),eleFake_eta_bins)
    sferr_lookup_muFake = dense_lookup(hist_muFake.errors(),muFake_eta_bins)
    
#     print(hist_eleFake.to_numpy()[0])
#     print(hist_muFake.to_numpy()[0])
    
#     print(hist_eleFake.errors())
#     print(hist_muFake.errors())
    
    sf_lookup_dm0 = dense_lookup(hist_dm0.to_numpy()[0],pt_bins)
    sf_lookup_dm1 = dense_lookup(hist_dm1.to_numpy()[0],pt_bins)
    sf_lookup_dm10 = dense_lookup(hist_dm10.to_numpy()[0],pt_bins)
    sf_lookup_dm11 = dense_lookup(hist_dm11.to_numpy()[0],pt_bins)

    sferr_lookup_dm0 = dense_lookup(hist_dm0.errors(),pt_bins)
    sferr_lookup_dm1 = dense_lookup(hist_dm1.errors(),pt_bins)
    sferr_lookup_dm10 = dense_lookup(hist_dm10.errors(),pt_bins)
    sferr_lookup_dm11 = dense_lookup(hist_dm11.errors(),pt_bins)

    dm0_sel = (tau_dm==0)
    dm1_sel = (tau_dm==1)
    dm10_sel = (tau_dm==10)
    dm11_sel = (tau_dm==11)

    sf_dm0 = dm0_sel*sf_lookup_dm0(tau_pt)+ak.ones_like(tau_pt)*(~dm0_sel)
    sf_dm1 = dm1_sel*sf_lookup_dm1(tau_pt)+ak.ones_like(tau_pt)*(~dm1_sel)
    sf_dm10 = dm10_sel*sf_lookup_dm10(tau_pt)+ak.ones_like(tau_pt)*(~dm10_sel)
    sf_dm11 = dm11_sel*sf_lookup_dm11(tau_pt)+ak.ones_like(tau_pt)*(~dm11_sel)

    sferr_dm0 = dm0_sel*sferr_lookup_dm0(tau_pt)+ak.zeros_like(tau_pt)*(~dm0_sel)
    sferr_dm1 = dm1_sel*sferr_lookup_dm1(tau_pt)+ak.zeros_like(tau_pt)*(~dm1_sel)
    sferr_dm10 = dm10_sel*sferr_lookup_dm10(tau_pt)+ak.zeros_like(tau_pt)*(~dm10_sel)
    sferr_dm11 = dm11_sel*sferr_lookup_dm11(tau_pt)+ak.zeros_like(tau_pt)*(~dm11_sel)

    sf_dm0_up = sf_dm0+sferr_dm0
    sf_dm0_down = sf_dm0-sferr_dm0

    sf_dm1_up = sf_dm1+sferr_dm1
    sf_dm1_down = sf_dm1-sferr_dm1

    sf_dm10_up = sf_dm10+sferr_dm10
    sf_dm10_down = sf_dm10-sferr_dm10

    sf_dm11_up = sf_dm11+sferr_dm11
    sf_dm11_down = sf_dm11-sferr_dm11

    #SF without genmatching
    real_sf_norm = sf_dm0*sf_dm1*sf_dm10*sf_dm11
    real_sf_up = sf_dm0_up*sf_dm1_up*sf_dm10_up*sf_dm11_up
    real_sf_down = sf_dm0_down*sf_dm1_down*sf_dm10_down*sf_dm11_down
    
    eleFake_sf_norm = sf_lookup_eleFake(tau_eta)
    eleFake_sf_up = sf_lookup_eleFake(tau_eta)+sferr_lookup_eleFake(tau_eta)
    eleFake_sf_down = sf_lookup_eleFake(tau_eta)-sferr_lookup_eleFake(tau_eta)
    
    muFake_sf_norm = sf_lookup_muFake(tau_eta)
    muFake_sf_up = sf_lookup_muFake(tau_eta)+sferr_lookup_muFake(tau_eta)
    muFake_sf_down = sf_lookup_muFake(tau_eta)-sferr_lookup_muFake(tau_eta)
    
    #genmatching
    realtau_sel = (tau_genmatch==5)
    eleFake_sel = ((tau_genmatch==1) | (tau_genmatch==3))
    muFake_sel = ((tau_genmatch==2) | (tau_genmatch==4))
    
    sf_norm = real_sf_norm*realtau_sel + eleFake_sf_norm*eleFake_sel + muFake_sf_norm*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    sf_up = real_sf_up*realtau_sel + eleFake_sf_up*eleFake_sel + muFake_sf_up*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    sf_down = real_sf_down*realtau_sel + eleFake_sf_down*eleFake_sel + muFake_sf_down*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    
    sf_norm = sf_norm*(sf_norm>0)
    sf_up = sf_up*(sf_up>0)
    sf_down = sf_down*(sf_down>0)
    
    return sf_norm, sf_up, sf_down
# Tau Energy Scale
def calc_tau_ES(year,taus):
    tau_pt = taus.pt
    tau_dm = taus.decayMode
    tau_eta = abs(taus.eta)
    tau_genmatch = taus.genPartFlav
    
    if year=='2016APV':
        ES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauES_dm_DeepTau2017v2p1VSjet_UL2016_preVFP.root'))
        FES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauFES_eta-dm_DeepTau2017v2p1VSe_2016Legacy.root'))
    elif year=='2016':
        ES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauES_dm_DeepTau2017v2p1VSjet_UL2016_postVFP.root'))
        FES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauFES_eta-dm_DeepTau2017v2p1VSe_2016Legacy.root'))
    elif year=='2017':
        ES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauES_dm_DeepTau2017v2p1VSjet_UL2017.root'))
        FES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauFES_eta-dm_DeepTau2017v2p1VSe_2017ReReco.root'))
    elif year=='2018':
        ES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauES_dm_DeepTau2017v2p1VSjet_UL2018.root'))
        FES_file = up.open(hcom.abs_path('data/lepton_SFs/tau/TauFES_eta-dm_DeepTau2017v2p1VSe_2018ReReco.root'))
    else:
        exit(0)
        
    ES_hist = ES_file['tes;1']
    FES_func = FES_file['fes;1']
    
    ES_lookup = dense_lookup(ES_hist.to_numpy()[0],ES_hist.to_numpy()[1])
    ESerr_lookup = dense_lookup(ES_hist.errors(),ES_hist.to_numpy()[1])
    
    FES_lookup = dense_lookup(FES_func.all_members['fY'],np.array([0,1,2,3]))
    FESerrup_lookup = dense_lookup(FES_func.all_members['fEYhigh'],np.array([0,1,2,3]))
    FESerrdown_lookup = dense_lookup(FES_func.all_members['fEYlow'],np.array([0,1,2,3]))
    
    dm0_sel = (tau_dm==0)
    dm1_sel = (tau_dm==1)
                              
    barrel_sel = (tau_eta<1.5)
    endcap_sel = (tau_eta>=1.5)
    
    real_ES_norm = ES_lookup(tau_dm)
    real_ES_up = ES_lookup(tau_dm)+ESerr_lookup(tau_dm)
    real_ES_down = ES_lookup(tau_dm)-ESerr_lookup(tau_dm)
    
    FES_idx = 2*endcap_sel + dm1_sel
    FES_norm = FES_lookup(FES_idx)*(dm0_sel|dm1_sel) + ak.ones_like(tau_pt)*(~(dm0_sel|dm1_sel))
    FES_up = (FES_norm+FESerrup_lookup(FES_idx))*(dm0_sel|dm1_sel) + ak.ones_like(tau_pt)*(~(dm0_sel|dm1_sel))
    FES_down = (FES_norm-FESerrdown_lookup(FES_idx))*(dm0_sel|dm1_sel) + ak.ones_like(tau_pt)*(~(dm0_sel|dm1_sel))
    
    #genmatching
    realtau_sel = (tau_genmatch==5)
    eleFake_sel = ((tau_genmatch==1) | (tau_genmatch==3))
    muFake_sel = ((tau_genmatch==2) | (tau_genmatch==4))
    
    ES_scale_norm = real_ES_norm*realtau_sel + FES_norm*eleFake_sel + ak.ones_like(tau_pt)*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    ES_scale_up = real_ES_up*realtau_sel + FES_up*eleFake_sel + 1.01*ak.ones_like(tau_pt)*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    ES_scale_down = real_ES_down*realtau_sel + FES_down*eleFake_sel + 0.99*ak.ones_like(tau_pt)*muFake_sel + ak.ones_like(tau_pt)*(~(realtau_sel | eleFake_sel | muFake_sel))
    
    return ES_scale_norm, ES_scale_up, ES_scale_down

### JES JER
def apply_jet_corrections(year):
    extract = extractor()
    if year=='2016':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L1FastJet_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L2Relative_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L3Absolute_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L2L3Residual_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer20UL16_JRV3_MC_PtResolution_AK4PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2016/RegroupedV2_Summer19UL16_V7_MC_UncertaintySources_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_Uncertainty_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer20UL16_JRV3_MC_SF_AK4PFchs.jersf.txt')}",
            ]
        )
    elif year=='2016APV':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L1FastJet_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L2Relative_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L3Absolute_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L2L3Residual_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer20UL16APV_JRV3_MC_PtResolution_AK4PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2016APV/RegroupedV2_Summer19UL16APV_V7_MC_UncertaintySources_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_Uncertainty_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer20UL16APV_JRV3_MC_SF_AK4PFchs.jersf.txt')}",
            ]
        )
    elif year=='2017':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L1FastJet_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L2Relative_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L3Absolute_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L2L3Residual_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_JRV3_MC_PtResolution_AK4PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2017/RegroupedV2_Summer19UL17_V5_MC_UncertaintySources_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_Uncertainty_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_JRV3_MC_SF_AK4PFchs.jersf.txt')}",
            ]
        )
    elif year=='2018':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L1FastJet_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L2Relative_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L3Absolute_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L2L3Residual_AK4PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_JRV2_MC_PtResolution_AK4PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2018/RegroupedV2_Summer19UL18_V5_MC_UncertaintySources_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_Uncertainty_AK4PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_JRV2_MC_SF_AK4PFchs.jersf.txt')}",
            ]
        )
    else:
        exit(0)

    extract.finalize()
    evaluator = extract.make_evaluator()

    jec_names = dir(evaluator)
#     print(jec_names)
    jec_inputs = {name: evaluator[name] for name in jec_names}
    jec_stack = JECStack(jec_inputs)
    name_map = jec_stack.blank_name_map
    name_map['JetPt'] = 'pt'
    name_map['JetMass'] = 'mass'
    name_map['JetEta'] = 'eta'
    name_map['JetPhi'] = 'phi'
    name_map['JetA'] = 'area'
    name_map['ptGenJet'] = 'pt_gen'
    name_map['ptRaw'] = 'pt_raw'
    name_map['massRaw'] = 'mass_raw'
    name_map['Rho'] = 'rho'
    return CorrectedJetsFactory(name_map, jec_stack)

def apply_fatjet_corrections(year):
    extract = extractor()
    if year=='2016':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L1FastJet_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L2Relative_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L3Absolute_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_L2L3Residual_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer20UL16_JRV3_MC_PtResolution_AK8PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer19UL16_V7_MC_Uncertainty_AK8PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016/Summer20UL16_JRV3_MC_SF_AK8PFchs.jersf.txt')}",
            ]
        )
    elif year=='2016APV':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L1FastJet_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L2Relative_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L3Absolute_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_L2L3Residual_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer20UL16APV_JRV3_MC_PtResolution_AK8PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer19UL16APV_V7_MC_Uncertainty_AK8PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2016APV/Summer20UL16APV_JRV3_MC_SF_AK8PFchs.jersf.txt')}",
            ]
        )
    elif year=='2017':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L1FastJet_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L2Relative_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L3Absolute_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_L2L3Residual_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_JRV3_MC_PtResolution_AK8PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_V5_MC_Uncertainty_AK8PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2017/Summer19UL17_JRV3_MC_SF_AK8PFchs.jersf.txt')}",
            ]
        )
    elif year=='2018':
        extract.add_weight_sets(
            [
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L1FastJet_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L2Relative_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L3Absolute_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_L2L3Residual_AK8PFchs.jec.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_JRV2_MC_PtResolution_AK8PFchs.jr.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_V5_MC_Uncertainty_AK8PFchs.junc.txt')}",
                f"* * {hcom.abs_path('data/2018/Summer19UL18_JRV2_MC_SF_AK8PFchs.jersf.txt')}",
            ]
        )
    else:
        exit(0)

    extract.finalize()
    evaluator = extract.make_evaluator()

    jec_names = dir(evaluator)
    # print(jec_names)
    jec_inputs = {name: evaluator[name] for name in jec_names}
    jec_stack = JECStack(jec_inputs)
    name_map = jec_stack.blank_name_map
    name_map['JetPt'] = 'pt'
    name_map['JetMass'] = 'mass'
    name_map['JetEta'] = 'eta'
    name_map['JetPhi'] = 'phi'
    name_map['JetA'] = 'area'
    name_map['ptGenJet'] = 'pt_gen'
    name_map['ptRaw'] = 'pt_raw'
    name_map['massRaw'] = 'mass_raw'
    name_map['Rho'] = 'rho'
    return CorrectedJetsFactory(name_map, jec_stack)

# follow: https://github.com/CoffeaTeam/coffea/blob/master/coffea/jetmet_tools/CorrectedMETFactory.py
def corrected_polar_met(met_pt, met_phi, obj_pt, obj_phi, obj_pt_orig, deltas=None):
    sj, cj = np.sin(obj_phi), np.cos(obj_phi)
    x = met_pt * np.cos(met_phi) + ak.sum(
        obj_pt * cj - obj_pt_orig * cj, axis=1
    )
    y = met_pt * np.sin(met_phi) + ak.sum(
        obj_pt * sj - obj_pt_orig * sj, axis=1
    )
    if deltas:
        positive, dx, dy = deltas
        x = x + dx if positive else x - dx
        y = y + dy if positive else y - dy
    
    # return ak.zip({"pt": np.hypot(x, y), "phi": np.arctan2(y, x)})
    return np.hypot(x, y), np.arctan2(y, x)


def get_metFilter(events, year='2018'):
    # 2018: goodVertices globalSuperTightHalo2016Filter HBHENoiseFilter HBHENoiseIsoFilter EcalDeadCellTriggerPrimitiveFilter BadPFMuonFilter ecalBadCalibFilterV2
    if year == '2016':
        metFilter = (
            events.Flag.goodVertices & \
            events.Flag.globalSuperTightHalo2016Filter & \
            events.Flag.HBHENoiseFilter & \
            events.Flag.HBHENoiseIsoFilter & \
            events.Flag.EcalDeadCellTriggerPrimitiveFilter & \
            events.Flag.BadPFMuonFilter & \
            events.Flag.BadPFMuonDzFilter & \
            events.Flag.eeBadScFilter
        )
    elif year == '2016APV':
        metFilter = (
            events.Flag.goodVertices & \
            events.Flag.globalSuperTightHalo2016Filter & \
            events.Flag.HBHENoiseFilter & \
            events.Flag.HBHENoiseIsoFilter & \
            events.Flag.EcalDeadCellTriggerPrimitiveFilter & \
            events.Flag.BadPFMuonFilter & \
            events.Flag.BadPFMuonDzFilter & \
            events.Flag.eeBadScFilter
        )
    elif year == '2017':
        metFilter = (
            events.Flag.goodVertices & \
            events.Flag.globalSuperTightHalo2016Filter & \
            events.Flag.HBHENoiseFilter & \
            events.Flag.HBHENoiseIsoFilter & \
            events.Flag.EcalDeadCellTriggerPrimitiveFilter & \
            events.Flag.BadPFMuonFilter & \
            events.Flag.BadPFMuonDzFilter & \
            events.Flag.eeBadScFilter & \
            events.Flag.ecalBadCalibFilter
        )
    else:
        metFilter = (
            events.Flag.goodVertices & \
            events.Flag.globalSuperTightHalo2016Filter & \
            events.Flag.HBHENoiseFilter & \
            events.Flag.HBHENoiseIsoFilter & \
            events.Flag.EcalDeadCellTriggerPrimitiveFilter & \
            events.Flag.BadPFMuonFilter & \
            events.Flag.BadPFMuonDzFilter & \
            events.Flag.eeBadScFilter & \
            events.Flag.ecalBadCalibFilter
        )
    return metFilter


def get_pusf(nTrueInt, year):
    ###### Pileup reweighing
    ## 
    ####################################################
    ## Places to find UL files:
    ## NanoAOD tools: https://github.com/cms-nanoAOD/nanoAOD-tools/tree/master/python/postprocessing/data/pileup
    ## Get central PU data and MC profiles and calculate reweighting
    ## Using the current UL recommendations in:
    ##   https://twiki.cern.ch/twiki/bin/viewauth/CMS/PileupJSONFileforData
    ##   - 2018: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions18/13TeV/PileUp/UltraLegacy/
    ##   - 2017: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions17/13TeV/PileUp/UltraLegacy/
    ##   - 2016: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions16/13TeV/PileUp/UltraLegacy/
    ##
    ## MC histograms from:
    ##    https://github.com/CMS-LUMI-POG/PileupTools/

    mc_file_dict = {
        '2016APV': hcom.abs_path('data/pileup/UL13TeV/pileup_2016BF.root'),
        '2016': hcom.abs_path('data/pileup/UL13TeV/pileup_2016GH.root'),
        '2017': hcom.abs_path('data/pileup/UL13TeV/pileup_2017_shifts.root'),
        '2018': hcom.abs_path('data/pileup/UL13TeV/pileup_2018_shifts.root'),
    }
    data_file_dict = {
        '2016': {
            'down':     hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-66000ub-99bins.root'),      
            'nominal':  hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-69200ub-99bins.root'),
            'up':       hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-72400ub-99bins.root'),      
        },
        '2016APV': {
            'down':     hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-66000ub-99bins.root'),      
            'nominal':  hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-69200ub-99bins.root'),
            'up':       hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2016-72400ub-99bins.root'),      
        },
        '2017': {
            'down':     hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2017-66000ub-99bins.root'),      
            'nominal':  hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2017-69200ub-99bins.root'),
            'up':       hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2017-72400ub-99bins.root'),      
        },
        '2018': {
            'down':     hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2018-66000ub-99bins.root'),      
            'nominal':  hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2018-69200ub-99bins.root'),
            'up':       hcom.abs_path('data/pileup/UL13TeV/PileupHistogram-goldenJSON-13tev-2018-72400ub-99bins.root'),      
        },
    }
    PUfunc = {}
    with up.open(mc_file_dict[year]) as fMC:
        hMC = fMC['pileup']
        PUfunc['MC'] = lookup_tools.dense_lookup.dense_lookup(hMC .values(), hMC.axis(0).edges())
    with up.open(data_file_dict[year]['nominal']) as fData:
        hD   = fData  ['pileup']
        PUfunc['Data'  ] = lookup_tools.dense_lookup.dense_lookup(hD  .values(), hD.axis(0).edges())
    with up.open(data_file_dict[year]['up']) as fDataUp:
        hDUp = fDataUp['pileup']
        PUfunc['DataUp'] = lookup_tools.dense_lookup.dense_lookup(hDUp.values(), hD.axis(0).edges())
    with up.open(data_file_dict[year]['down']) as fDataDo:
        hDDo = fDataDo['pileup']
        PUfunc['DataDo'] = lookup_tools.dense_lookup.dense_lookup(hDDo.values(), hD.axis(0).edges())

    if year not in ['2016','2016APV','2017','2018']: raise Exception(f"Error: Unknown year \"{year}\".")
    nMC  =PUfunc['MC'](nTrueInt+1)
    nData =PUfunc['Data'](nTrueInt)
    nData_up = PUfunc['DataUp'](nTrueInt)
    nData_down = PUfunc['DataDo'](nTrueInt)
    return np.divide(nData,nMC), np.divide(nData_up,nMC), np.divide(nData_down,nMC)
