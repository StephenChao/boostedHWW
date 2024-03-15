from cmath import log
import uproot as up
import awkward as ak
import coffea
from coffea.nanoevents import NanoEventsFactory, NanoAODSchema, BaseSchema, TreeMakerSchema
from coffea import processor
from coffea.nanoevents.methods import candidate
from coffea import lookup_tools
from coffea.lookup_tools import extractor
from coffea.jetmet_tools import FactorizedJetCorrector, JetCorrectionUncertainty
from coffea.jetmet_tools import JECStack, CorrectedJetsFactory, CorrectedMETFactory
from coffea.btag_tools.btagscalefactor import BTagScaleFactor
ak.behavior.update(candidate.behavior)
import numpy as np
import argparse
import os
from utils import common_helper as com
from utils import analyze_helper as ana
from coffea import hist as chist

import argparse

parser = argparse.ArgumentParser(description='manual to this script')
parser.add_argument('-y', '--year', help='which year to run: 2016, 2017, 2018', default='2018')
parser.add_argument('-t', '--type', help='which type: data, mc', choices=('data', 'mc'), default='data')
parser.add_argument('-n', '--number', help='id of the rootfile, used for the name of output file')
parser.add_argument('-f', '--file', help='dir of the file')
parser.add_argument('-o', '--output_dir', help='output abs directory')
args = parser.parse_args()

print(args.number)
print(args.year)
print(args.type)
print(args.file)

filename = args.file

if args.type=='data':
    isdata=True
elif args.type=='mc':
    isdata=False
else:
    pass

events = NanoEventsFactory.from_root(filename, schemaclass=NanoAODSchema).events()
if isdata==True:
    events['nevents'] = len(events)
else:
    events['nevents'] = np.sum(events.Generator.weight)
print('ntotal: %d'%len(events.run))

year = args.year
if isdata==True:
    lumi_mask = ana.get_lumi_mask(events, year)
    events = events[lumi_mask]
muons = events.Muon
electrons = events.Electron
taus = events.Tau
jets = events.Jet
fatjets = events.FatJet
MET = events.MET
puppimet = events.PuppiMET

events['nmuons'] = np.sum(ak.ones_like(muons.pt),axis=1)
events['nelectrons'] = np.sum(ak.ones_like(electrons.pt),axis=1)
events['njets'] = np.sum(ak.ones_like(jets.pt),axis=1)
events['nleps'] = events.nmuons+events.nelectrons

muons['pt_orig'] = muons.pt
muons['pt'],muons['pt_roccor_up'],muons['pt_roccor_down'] = ana.apply_rochester_correction(muons,data=isdata,year=year)
# electrons['corrected_pt'] = electrons.pt

#muon definition
loose_muon_ip = (abs(muons.dz)<0.1) & (((muons.pt<20) & (abs(muons.dxy)<0.01)) | ((muons.pt>20) & (abs(muons.dxy)<0.02)))
veto_muon_sel = (muons.pt>10) & (abs(muons.eta)<2.4)
loose_muon_sel = loose_muon_ip & (abs(muons.eta)<2.4) & muons.tightId & (muons.pfRelIso04_all<0.4)
tight_muon_sel = loose_muon_sel & (muons.pfRelIso04_all<0.15)

if isdata==True:
    pass
else:
    muons['is_real'] = (~np.isnan(ak.fill_none(muons.matched_gen.pt, np.nan)))*1

muons['isveto'] = veto_muon_sel
muons['isloose'] = loose_muon_sel
muons['istight'] = tight_muon_sel
muons['istightcharge'] = (muons.tightCharge>1)
muons['iselectron'] = ak.zeros_like(muons.pt)
muons['ismuon'] = ak.ones_like(muons.pt)
events['nveto_muons'] = np.sum(veto_muon_sel,axis=1)
events['nloose_muons'] = np.sum(loose_muon_sel,axis=1)
events['ntight_muons'] = np.sum(tight_muon_sel,axis=1)

veto_muons = muons[muons.isveto]
good_muons = muons[muons.isloose]

#election definition: the same as latino
loose_elec_barrel = (abs(electrons.eta + electrons.deltaEtaSC) <= 1.479) & (abs(electrons.dz) < 0.1) & (abs(electrons.dxy) < 0.05)
loose_elec_endcap = (abs(electrons.eta + electrons.deltaEtaSC) > 1.479) & (abs(electrons.dz) < 0.2) & (abs(electrons.dxy) < 0.1)

loose_elec_sel_pdgmva = (loose_elec_barrel | loose_elec_endcap) & (abs(electrons.eta+electrons.deltaEtaSC) < 2.5) & (electrons.cutBased >= 1)
elec_sel_drmu = ana.is_clean(electrons,good_muons,0.4)
loose_elec_sel = loose_elec_sel_pdgmva & elec_sel_drmu & (electrons.pt > 10)

tight_elec_barrel = loose_elec_barrel
tight_elec_endcap = loose_elec_endcap
tight_elec_sel = loose_elec_sel & (electrons.cutBased >= 3)

veto_elec_sel = (electrons.cutBased >= 1) & (electrons.pt > 10)

electrons['isveto'] = veto_elec_sel
electrons['isloose'] = loose_elec_sel
electrons['istight'] = tight_elec_sel
electrons['istightcharge'] = (electrons.tightCharge>1)
electrons['iselectron'] = ak.ones_like(electrons.pt)
electrons['ismuon'] = ak.zeros_like(electrons.pt)
events['nveto_electrons'] = np.sum(veto_elec_sel,axis=1)
events['nloose_electrons'] = np.sum(loose_elec_sel,axis=1)
events['ntight_electrons'] = np.sum(tight_elec_sel,axis=1)

veto_electrons = electrons[electrons.isveto]
good_electrons = electrons[electrons.isloose]

#tau definition 
good_tau_sel1 = (taus.pt > 20) & (abs(taus.eta) < 2.3) & (abs(taus.dz) < 0.2) & ((taus.decayMode!=5) & (taus.decayMode!=6)) & (taus.idDeepTau2017v2p1VSjet>>2 & 1)
good_tau_sel2 = (taus.idDeepTau2017v2p1VSe >= 2) & (taus.idDeepTau2017v2p1VSjet >= 16) & (taus.idDeepTau2017v2p1VSmu >= 2) #DeepTau vs. jet: WP-medium; DeepTau vs. muons: WP-loose; DeepTau vs. electrons: WP-VVloose
good_tau_sel3 = ana.is_clean(taus,good_muons,0.4) & ana.is_clean(taus,good_electrons,0.4)
good_tau_sel = good_tau_sel1 & good_tau_sel2 & good_tau_sel3

good_taus = taus[good_tau_sel==1]

veto_tau_sel = (taus.pt > 20) & (abs(taus.eta) < 2.3) & (abs(taus.dz) < 0.2) & (taus.idDeepTau2017v2p1VSjet>>2 & 1) & good_tau_sel3

events['ngood_taus'] = np.sum(good_tau_sel,axis=1)
events['nveto_taus'] = np.sum(veto_tau_sel,axis=1)

#####  FATJET JEC  #####
fatjets['pt_orig'] = fatjets.pt
fatjets['mass_orig'] = fatjets.mass

if isdata==True:
    pass
else:
    fatjets['is_real'] = (~np.isnan(ak.fill_none(fatjets.matched_gen.pt, np.nan)))*1
    fatjets["pt_raw"] = (1 - fatjets.rawFactor)*fatjets.pt
    fatjets["mass_raw"] = (1 - fatjets.rawFactor)*fatjets.mass
    fatjets["pt_gen"] = ak.values_astype(ak.fill_none(fatjets.matched_gen.pt, 0), np.float32)
    fatjets["rho"] = ak.broadcast_arrays(events.fixedGridRhoFastjetAll, fatjets.pt)[0]
    corrected_fatjets = ana.apply_fatjet_corrections(year).build(fatjets, lazy_cache=events.caches[0])
    jesr_unc = [i for i in corrected_fatjets.fields if i.startswith("JES") or i.startswith("JER")]
    fatjets["pt"] = corrected_fatjets.pt
    fatjets["mass"] = corrected_fatjets.mass
    for ibr in jesr_unc:
        fatjets[f"pt_{ibr}_up"] = corrected_fatjets[ibr].up.pt
        fatjets[f"pt_{ibr}_down"] = corrected_fatjets[ibr].down.pt
        fatjets[f"mass_{ibr}_up"] = corrected_fatjets[ibr].up.mass
        fatjets[f"mass_{ibr}_down"] = corrected_fatjets[ibr].down.mass
    # ordered by new pt: high -> low
    index = ak.argsort(fatjets.pt, ascending=False)
    fatjets = fatjets[index]

fatjets_drclean_elec = ana.is_clean(fatjets,electrons[electrons.isloose],0.8)
fatjets_drclean_mu = ana.is_clean(fatjets,muons[muons.isloose],0.8)
fatjets_drclean_tau = ana.is_clean(fatjets,good_taus,0.8)
fatjets_drclean = fatjets_drclean_elec & fatjets_drclean_mu & fatjets_drclean_tau

fatjets_XbbvsQCD = fatjets.particleNetMD_Xbb/(fatjets.particleNetMD_Xbb+fatjets.particleNetMD_QCD)
fatjets['XbbvsQCD'] = fatjets_XbbvsQCD

max_XbbvsQCD_sel = ak.argsort(fatjets.XbbvsQCD,axis=1,ascending=False)==0

# good_fatjets_sel = (fatjets_drclean) & (fatjets.pt > 300) & (fatjets.mass > 50) & (fatjets.msoftdrop > 40) & (fatjets.XbbvsQCD > 0.3) & (max_XbbvsQCD_sel)
good_fatjets_sel = (fatjets_drclean) & (fatjets.pt > 300) & (fatjets.mass > 50) & (fatjets.msoftdrop > 40) 
good_fatjets_sel = good_fatjets_sel==1
fatjets['isgood'] = good_fatjets_sel

good_fatjets = fatjets[good_fatjets_sel]

events['ngood_fatjets'] = np.sum(good_fatjets_sel,axis=1)

#####   JEC   #####
jets['pt_orig'] = jets.pt
jets['mass_orig'] = jets.mass

if isdata==True:
    pass
else:
    jets['is_real'] = (~np.isnan(ak.fill_none(jets.matched_gen.pt, np.nan)))*1
    jets["pt_raw"] = (1 - jets.rawFactor)*jets.pt
    jets["mass_raw"] = (1 - jets.rawFactor)*jets.mass
    jets["pt_gen"] = ak.values_astype(ak.fill_none(jets.matched_gen.pt, 0), np.float32)
    jets["rho"] = ak.broadcast_arrays(events.fixedGridRhoFastjetAll, jets.pt)[0]
    corrected_jets = ana.apply_jet_corrections(year).build(jets, lazy_cache=events.caches[0])
    jesr_unc = [i for i in corrected_jets.fields if i.startswith("JES") or i.startswith("JER")]
    jets["pt"] = corrected_jets.pt
    jets["mass"] = corrected_jets.mass
    for ibr in jesr_unc:
        jets[f"pt_{ibr}_up"] = corrected_jets[ibr].up.pt
        jets[f"pt_{ibr}_down"] = corrected_jets[ibr].down.pt
        jets[f"mass_{ibr}_up"] = corrected_jets[ibr].up.mass
        jets[f"mass_{ibr}_down"] = corrected_jets[ibr].down.mass
    # ordered by new pt: high -> low
    index = ak.argsort(jets.pt, ascending=False)
    jets = jets[index]

jets_drclean_elec = ana.is_clean(jets,electrons[electrons.isloose],0.4)
jets_drclean_mu = ana.is_clean(jets,muons[muons.isloose],0.4)
jets_drclean_tau = ana.is_clean(jets,good_taus,0.4)
jets_drclean_leptons = jets_drclean_elec & jets_drclean_mu & jets_drclean_tau
jets_drclean_fatjets = ana.is_clean(jets,good_fatjets,0.8)
jets_drclean = jets_drclean_elec & jets_drclean_mu & jets_drclean_tau & jets_drclean_fatjets

good_jets_sel = (jets_drclean_leptons) & (jets.pt > 30) & (abs(jets.eta)<4.7) & (jets.jetId>>1 & 1)
good_jets_sel = good_jets_sel==1
good_jets_fatjetsClean_sel = good_jets_sel & (jets_drclean_fatjets==1)
jets['isgood'] = good_jets_sel
jets['isgood_clean_with_fatjets'] = good_jets_fatjetsClean_sel
good_jets = jets[good_jets_sel]

#####   btag   #####
if isdata==True:
    pass
else:
    flav = good_jets.hadronFlavour
    abseta = np.abs(good_jets.eta)
    pt = good_jets.pt
    good_jets['btagSF'], good_jets['btagSF_up'], good_jets['btagSF_down']  = ana.get_btagsf(flav, abseta, pt, year)
events['ngood_jets'] = np.sum(good_jets_sel,axis=1)

#####   MET   ####
MET['pt_orig'] = MET.pt
MET['phi_orig'] = MET.phi
MET['pt_roccor'], MET['phi_roccor'] = ana.corrected_polar_met(MET.pt,MET.phi,good_muons.pt,good_muons.phi,good_muons.pt_orig)
# consider the jer corr, please note: for jets, the pt_raw is the pt_orig, think about it
if isdata==True:
    pass
else:
    # the jer is applied after considering roccorr on Muon
    MET['pt'], MET['phi'] = ana.corrected_polar_met(MET['pt_roccor'],MET['phi_roccor'],good_jets["pt"],good_jets["phi"],good_jets["pt_orig"])
    # uncertainties
    MET['pt_roccor_up'], MET['phi_roccor_up'] = ana.corrected_polar_met(MET.pt,MET.phi,good_muons.pt_roccor_up,good_muons.phi,good_muons.pt)
    MET['pt_roccor_down'], MET['phi_roccor_down'] = ana.corrected_polar_met(MET.pt,MET.phi,good_muons.pt_roccor_down,good_muons.phi,good_muons.pt)
    MET['pt_UnclusteredEnergy_up'], MET['phi_UnclusteredEnergy_up'] = ana.corrected_polar_met(
        MET['pt'],
        MET['phi'],
        good_jets["pt"],
        good_jets["phi"],
        good_jets["pt"],
        (
            True,
            MET.MetUnclustEnUpDeltaX,
            MET.MetUnclustEnUpDeltaY,
        ),
    )
    MET['pt_UnclusteredEnergy_down'], MET['phi_UnclusteredEnergy_down'] = ana.corrected_polar_met(
        MET['pt'],
        MET['phi'],
        good_jets["pt"],
        good_jets["phi"],
        good_jets["pt"],
        (
            False,
            MET.MetUnclustEnUpDeltaX,
            MET.MetUnclustEnUpDeltaY,
        ),
    )
    for ibr in jesr_unc:
        MET[f"pt_{ibr}_up"], MET[f"phi_{ibr}_up"] = ana.corrected_polar_met(MET['pt'],MET['phi'],good_jets[f"pt_{ibr}_up"],good_jets["phi"],good_jets["pt"])
        MET[f"pt_{ibr}_down"], MET[f"phi_{ibr}_down"] = ana.corrected_polar_met(MET['pt'],MET['phi'],good_jets[f"pt_{ibr}_down"],good_jets["phi"],good_jets["pt"])

# nleps_sel = (((events.nloose_muons+events.nloose_electrons==2) & (events.nveto_muons+events.nveto_electrons==2) & (events.nveto_taus==0)) | ((events.nloose_muons+events.nloose_electrons==1) & (events.nveto_muons+events.nveto_electrons==1) & (events.nveto_taus==1) & (events.ngood_taus==1)))
nleps_sel = (((events.nloose_muons+events.nloose_electrons==2) & (events.nveto_muons+events.nveto_electrons==2) & (events.nveto_taus==0)) | ((events.nloose_muons+events.nloose_electrons==1) & (events.nveto_muons+events.nveto_electrons==1) & (events.nveto_taus==1) & (events.ngood_taus==1)))
njets_sel = (events.ngood_jets>=4)
nfatjets_sel = (events.ngood_fatjets==0)
total_sel = nleps_sel & njets_sel & nfatjets_sel & ak.fill_none(events.run!=None, False)

events = events[total_sel]
veto_muons = veto_muons[total_sel]
good_muons = good_muons[total_sel]
veto_electrons = veto_electrons[total_sel]
good_electrons = good_electrons[total_sel]
good_jets = good_jets[total_sel]
good_fatjets = good_fatjets[total_sel]
taus = taus[total_sel]
MET = MET[total_sel]
npassed = len(events.run)

print('npassed: %d'%npassed)

lepton_bool_list = ['is_real','isloose','istight','istightcharge','iselectron','ismuon']
HLT_list = ['Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ',
        'Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL',
        'Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ',
        'Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL',
        'Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ',
        'Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL',
        'Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8',
        'Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8',
        'Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8',
        'Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8',
        'Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ',
        'Ele23_Ele12_CaloIdL_TrackIdL_IsoVL',
        'DiEle27_WPTightCaloOnly_L1DoubleEG',
        'DoubleEle33_CaloIdL_MW',
        'DoubleEle25_CaloIdL_MW',
        'DoubleEle27_CaloIdL_MW',
        'DoublePhoton70',
        'IsoMu24','IsoMu27','IsoMu30','Mu50',
        'IsoTkMu24',
        'Ele115_CaloIdVT_GsfTrkIdT',
        'Ele27_WPTight_Gsf',
        'Ele28_WPTight_Gsf',
        'Ele32_WPTight_Gsf',
        'Ele35_WPTight_Gsf',
        'Ele38_WPTight_Gsf',
        'Ele40_WPTight_Gsf',
        'Ele32_WPTight_Gsf_L1DoubleEG',
        'Photon200']

if npassed > 0:
    eve_dict = {}
    # basic info
    eve_dict['run'] = events.run
    eve_dict['luminosityBlock'] = events.luminosityBlock
    eve_dict['event'] = events.event
    # hlt
#     for ihlt in events.HLT.fields:
    for ihlt in HLT_list:
        try:
            eve_dict[f"HLT_{ihlt}"] = events.HLT[ihlt]*1
        except:
            pass
    eve_dict['metFilter'] = ak.Array(ana.get_metFilter(events,year))*1       
    eve_dict['nveto_muons'] = events.nveto_muons
    eve_dict['nveto_electrons'] = events.nveto_electrons
    eve_dict['nevents'] = events.nevents
    eve_dict['ngood_taus'] = events.ngood_taus
    eve_dict['nveto_taus'] = events.nveto_taus
    # other info for MC
    if isdata==True:
        pass
    else:
        eve_dict['Generator_weight'] = events.Generator.weight
        try:
            eve_dict['nLHEPdfWeight'] = ak.count(events.LHEPdfWeight,axis=-1)
            eve_dict['LHEPdfWeight'] = events.LHEPdfWeight
        except:
            pass
        try:
            eve_dict['nLHEScaleWeight'] = ak.count(events.LHEScaleWeight,axis=-1)
            eve_dict['LHEScaleWeight'] = events.LHEScaleWeight
        except:
            pass
        try:
            eve_dict['nLHEReweightingWeight'] = ak.count(events.LHEReweightingWeight,axis=-1)
            eve_dict['LHEReweightingWeight'] = events.LHEReweightingWeight
        except:
            pass
        try:
            eve_dict['nPSWeight'] = ak.count(events.PSWeight,axis=-1)
            eve_dict['PSWeight'] = events.PSWeight
        except:
            pass

        # pu weights
        eve_dict['PUWeight_nominal'], eve_dict['PUWeight_up'], eve_dict['PUWeight_down'] = ana.get_pusf(events.Pileup.nTrueInt, year)
        # genpart
        try:
            eve_dict['nGenPart'] = ak.count(events.GenPart.pt,axis=-1)
        except:
            pass
        for ibr in events.GenPart.fields:
            if not ibr.endswith('IdxMotherG') and not ibr.endswith('IdxG'):
                eve_dict[f"GenPart_{ibr}"] = events.GenPart[ibr]
        # genjet
        eve_dict['nGenJet'] = ak.count(events.GenJet.pt,axis=-1)
        for ibr in events.GenJet.fields:
            if ibr=='hadronFlavour':
                eve_dict[f"GenJet_{ibr}"] = ak.values_astype(events.GenJet[ibr], np.int32)
            else:
                eve_dict[f"GenJet_{ibr}"] = events.GenJet[ibr]
        # genak8jet
        eve_dict['nGenJetAK8'] = ak.count(events.GenJetAK8.pt,axis=-1)
        for ibr in events.GenJetAK8.fields:
            if ibr=='hadronFlavour':
                eve_dict[f"GenJetAK8_{ibr}"] = ak.values_astype(events.GenJetAK8[ibr], np.int32)
            else:
                eve_dict[f"GenJetAK8_{ibr}"] = events.GenJetAK8[ibr]
        # GenDressedLepton
        eve_dict['nGenDressedLepton'] = ak.count(events.GenDressedLepton.pt,axis=-1)
        for ibr in events.GenDressedLepton.fields:
            if ibr == 'hasTauAnc':
                eve_dict[f"GenDressedLepton_{ibr}"] = events.GenDressedLepton[ibr]*1
            else:               
                eve_dict[f"GenDressedLepton_{ibr}"] = events.GenDressedLepton[ibr]
        for ibr in events.L1PreFiringWeight.fields:
            eve_dict[f"L1PreFiringWeight_{ibr}"] = events.L1PreFiringWeight[ibr]
    # muon info
#                     eve_dict['nMuon'] = ak.count(good_muons.pt,axis=-1)
    for ibr in veto_muons.fields:
        if ibr in lepton_bool_list:
            eve_dict[f'Muon_{ibr}'] = veto_muons[ibr]*1
        else:
            eve_dict[f'Muon_{ibr}'] = veto_muons[ibr]
    # electron info
#                     eve_dict['nElectron'] = ak.count(good_electrons.pt,axis=-1)
    for ibr in veto_electrons.fields:
        if ibr in lepton_bool_list:
            eve_dict[f'Electron_{ibr}'] = veto_electrons[ibr]*1
        else:
            eve_dict[f'Electron_{ibr}'] = veto_electrons[ibr]
    # jet info
    eve_dict['nJet'] = ak.count(good_jets.pt,axis=-1)
    for ibr in good_jets.fields:
        if not ibr in ['muonIdxG','electronIdxG']:
            if 'isgood' in ibr:
                eve_dict[f'Jet_{ibr}'] = good_jets[ibr]*1
            else:
                eve_dict[f'Jet_{ibr}'] = good_jets[ibr]
    # Ak8jet info
    eve_dict['nAK8Jet'] = ak.count(good_fatjets.pt,axis=-1)
    for ibr in good_fatjets.fields:
        if not ibr in ['muonIdxG','electronIdxG','subJetIdxG']:
            eve_dict[f'FatJet_{ibr}'] = good_fatjets[ibr]
            
    # tau info
    for ibr in taus.fields:
        eve_dict[f'Tau_{ibr}'] = taus[ibr]
    # met info
    for ibr in MET.fields:
        eve_dict[f'MET_{ibr}'] = MET[ibr]
    # puppimet info
    for ibr in events.PuppiMET.fields:
        eve_dict[f'PuppiMET_{ibr}'] = events.PuppiMET[ibr]
    for ibr in events.fields:
        if ibr.startswith('fixedGridRho'):
            eve_dict[f'{ibr}'] = events[ibr]
    eve_ak = ak.Array(eve_dict) # this will make the store step much faster
    ak.to_parquet(eve_ak,f"{args.output_dir}/{args.number}.parquet")
#                 ak.to_parquet(eve_ak,'/data/pubfs/tyyang99/jupyter_files/pkutree/ssww_events/'+'test'+f'_{com.get_randomstr()}'+".parquet")
else:
    reminder = open(f'{args.output_dir}/No_event_reminder!','w')
    reminder.close()