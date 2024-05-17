import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser

parser = OptionParser()
parser.add_option('-S'          , action='store_true', dest='signal',   default=False )
parser.add_option('--outputfile', action="store",type="string",dest="outputfile" ,default=None)
parser.add_option('--inputfile',      action="store",type="string",dest="inputfile"      ,default=None)
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2016")
parser.add_option('--Nevents',      action="store",type="float",dest="Nevents"      ,default=None)
parser.add_option('--sampleXS',      action="store",type="float",dest="sampleXS"      ,default=None)
parser.add_option('--IsData',      action="store",type="int",dest="IsData"      ,default=None)
parser.add_option('--channel',      action="store",type="string",dest="channel"      ,default=None)
parser.add_option('--lxplus_path',      action="store",type="string",dest="lxplus_path"      ,default=None)
(options, args) = parser.parse_args()

ROOT.gSystem.Load("EDBR2PKUTree_C.so")
from ROOT import EDBR2PKUTree, TFile, TTree

if __name__ == '__main__': 
    outputfile = options.outputfile
    IsData     = options.IsData
    channel    = options.channel
    sampleXS   = options.sampleXS
    Nevents    = options.Nevents
    inputfiles = [ i.rstrip() for i in options.inputfile.split(",") if len(i.rstrip()) > 0 ]
    year  = options.year

    if not sampleXS : sampleXS = 1
    if not Nevents  : 
        Nevents = 1
        fn = ROOT.TFile.Open(inputfiles[0])
        if "nEventsGenWeighted" in [e.GetName() for e in fn.GetListOfKeys()] : 
            Nevents = fn.Get("nEventsGenWeighted").GetBinContent(1)

    # if "2016" in options.year : 
    #     LUMI = 36.8
    #     # "pre-VFP" (aka "HIPM" or "APV")
    #     ispreVFP = False
    #     if "APV"   in inputfiles[0] : ispreVFP = True
    #     if "_HIPM" in inputfiles[0] : ispreVFP = True
    #     if ispreVFP :
    #         year = "2016preVFP"
    #     else :
    #         year = "2016postVFP"
    if "2016" in options.year : LUMI = 36.47
    if options.year == "2017": LUMI = 41.54
    if options.year == "2018": LUMI = 59.96

    if options.signal : 
        IsData = 1000
        
    print "channel    :", channel
    print "inputfile  :", inputfiles
    print "outputfile :", outputfile
    print "Nevents    :", Nevents
    print "sampleXS   :", sampleXS
    print "IsData     :", IsData
    print "LUMI       :", LUMI
    print "year       :", year

    if len(inputfiles) > 1 : sys.exit("exit , currently only surport 1 inputfile")

    for inputfile in inputfiles:
        if os.path.normpath(inputfile) == os.path.normpath(outputfile):
            sys.exit("exit , inputfile can not be the same as outputfile")

    have_Events = True
    for inputfile in inputfiles:
        fn = ROOT.TFile.Open(inputfile)
        if "Events" not in [e.GetName() for e in fn.GetListOfKeys()] : have_Events = False
    if not have_Events:
        sys.exit("tree ('Events') is not found")
    filein = TFile( inputfiles[0] )
    tree   = filein.Get("Events")
   
    branches = [
"TriggerSF",
"HEM_Filter",

"c_HWqqWqq0c",           "b_HWqqWqq0c",           "a_HWqqWqq0c",
"c_HWqqWqq1c",           "b_HWqqWqq1c",           "a_HWqqWqq1c",
"c_HWqqWqq2c",           "b_HWqqWqq2c",           "a_HWqqWqq2c",
"c_HWqqWq0c",            "b_HWqqWq0c",           "a_HWqqWq0c",
"c_HWqqWq1c",            "b_HWqqWq1c",           "a_HWqqWq1c",
"c_HWqqWq2c",            "b_HWqqWq2c",           "a_HWqqWq2c",
"c_HWqqWev0c",           "b_HWqqWev0c",           "a_HWqqWev0c",
"c_HWqqWev1c",           "b_HWqqWev1c",           "a_HWqqWev1c",
"c_HWqqWmv0c",           "b_HWqqWmv0c",           "a_HWqqWmv0c",
"c_HWqqWmv1c",           "b_HWqqWmv1c",           "a_HWqqWmv1c",
"c_HWqqWtauev0c",        "b_HWqqWtauev0c",           "a_HWqqWtauev0c",
"c_HWqqWtauev1c",        "b_HWqqWtauev1c",           "a_HWqqWtauev1c",
"c_HWqqWtaumv0c",        "b_HWqqWtaumv0c",           "a_HWqqWtaumv0c",
"c_HWqqWtaumv1c",        "b_HWqqWtaumv1c",           "a_HWqqWtaumv1c",
"c_HWqqWtauhv0c",        "b_HWqqWtauhv0c",           "a_HWqqWtauhv0c",
"c_HWqqWtauhv1c",        "b_HWqqWtauhv1c",           "a_HWqqWtauhv1c",
"c_Hbb",                 "b_Hbb",                    "a_Hbb",
"c_Hcc",                 "b_Hcc",                    "a_Hcc",
"c_Hss",                 "b_Hss",                    "a_Hss",
"c_Hqq",                 "b_Hqq",                    "a_Hqq",
"c_Htauhtaue",           "b_Htauhtaue",              "a_Htauhtaue",
"c_Htauhtaum",           "b_Htauhtaum",              "a_Htauhtaum",
"c_Htauhtauh",           "b_Htauhtauh",              "a_Htauhtauh",
"c_QCDbb",               "b_QCDbb",           "a_QCDbb",
"c_QCDcc",               "b_QCDcc",           "a_QCDcc",
"c_QCDb",                "b_QCDb",            "a_QCDb",
"c_QCDc",                "b_QCDc",            "a_QCDc",
"c_QCDothers",           "b_QCDothers",           "a_QCDothers",
"c_TopbWqq0c",           "b_TopbWqq0c",           "a_TopbWqq0c",
"c_TopbWqq1c",           "b_TopbWqq1c",           "a_TopbWqq1c",
"c_TopbWq0c",            "b_TopbWq0c",           "a_TopbWq0c",
"c_TopbWq1c",            "b_TopbWq1c",           "a_TopbWq1c",
"c_TopbWev",             "b_TopbWev",           "a_TopbWev",
"c_TopbWmv",             "b_TopbWmv",           "a_TopbWmv",
"c_TopbWtauhv",          "b_TopbWtauhv",           "a_TopbWtauhv",
"c_TopbWtauev",          "b_TopbWtauev",           "a_TopbWtauev",
"c_TopbWtaumv",          "b_TopbWtaumv",           "a_TopbWtaumv",
# "FatJet_tau1_HWW_a",
# "FatJet_tau2_HWW_a",
# "FatJet_tau3_HWW_a",
# "FatJet_tau4_HWW_a",
# "FatJet_tau1_HWW_c",
# "FatJet_tau2_HWW_c",
# "FatJet_tau3_HWW_c",
# "FatJet_tau4_HWW_c",
# "FatJet_tau1_HWW_b",
# "FatJet_tau2_HWW_b",
# "FatJet_tau3_HWW_b",
# "FatJet_tau4_HWW_b",
"a_HWW_V2",
"b_HWW_V2",
"c_HWW_V2",

"a_HWWvsQCD_V2",
"b_HWWvsQCD_V2",
"c_HWWvsQCD_V2",

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
        # "FatJet_tau1_Pneta","FatJet_tau2_Pneta","FatJet_tau3_Pneta","FatJet_tau4_Pneta","FatJet_tau1_Pnetb","FatJet_tau2_Pnetb","FatJet_tau3_Pnetb","FatJet_tau4_Pnetb","FatJet_tau1_Pnetc","FatJet_tau2_Pnetc","FatJet_tau3_Pnetc","FatJet_tau4_Pnetc",
        # "dnnDecorr_probTbcq_Pnetc","dnnDecorr_probTbqq_Pnetc","dnnDecorr_probTbc_Pnetc","dnnDecorr_probTbq_Pnetc","dnnDecorr_probWcq_Pnetc","dnnDecorr_probWqq_Pnetc","dnnDecorr_probZbb_Pnetc","dnnDecorr_probZcc_Pnetc","dnnDecorr_probZqq_Pnetc","dnnDecorr_probHbb_Pnetc","dnnDecorr_probHcc_Pnetc","dnnDecorr_probHqqqq_Pnetc","dnnDecorr_probQCDbb_Pnetc","dnnDecorr_probQCDcc_Pnetc","dnnDecorr_probQCDb_Pnetc","dnnDecorr_probQCDc_Pnetc","dnnDecorr_probQCDothers_Pnetc",
        # "dnnDecorr_probTbcq_a","dnnDecorr_probTbqq_a","dnnDecorr_probTbc_a","dnnDecorr_probTbq_a","dnnDecorr_probWcq_a","dnnDecorr_probWqq_a","dnnDecorr_probZbb_a","dnnDecorr_probZcc_a","dnnDecorr_probZqq_a","dnnDecorr_probHbb_a","dnnDecorr_probHcc_a","dnnDecorr_probHqqqq_a","dnnDecorr_probQCDbb_a","dnnDecorr_probQCDcc_a","dnnDecorr_probQCDb_a","dnnDecorr_probQCDc_a","dnnDecorr_probQCDothers_a",
        # "dnnDecorr_probTbcq_b","dnnDecorr_probTbqq_b","dnnDecorr_probTbc_b","dnnDecorr_probTbq_b","dnnDecorr_probWcq_b","dnnDecorr_probWqq_b","dnnDecorr_probZbb_b","dnnDecorr_probZcc_b","dnnDecorr_probZqq_b","dnnDecorr_probHbb_b","dnnDecorr_probHcc_b","dnnDecorr_probHqqqq_b","dnnDecorr_probQCDbb_b","dnnDecorr_probQCDcc_b","dnnDecorr_probQCDb_b","dnnDecorr_probQCDc_b","dnnDecorr_probQCDothers_b",
        # "dnnDecorr_probTbcq_c","dnnDecorr_probTbqq_c","dnnDecorr_probTbc_c","dnnDecorr_probTbq_c","dnnDecorr_probWcq_c","dnnDecorr_probWqq_c","dnnDecorr_probZbb_c","dnnDecorr_probZcc_c","dnnDecorr_probZqq_c","dnnDecorr_probHbb_c","dnnDecorr_probHcc_c","dnnDecorr_probHqqqq_c","dnnDecorr_probQCDbb_c","dnnDecorr_probQCDcc_c","dnnDecorr_probQCDb_c","dnnDecorr_probQCDc_c","dnnDecorr_probQCDothers_c",
        
        "HT",
        "ST",
        "Nj8",
        "MJJ","MJJJ",
        "MET_et","MET_phi",
        "weight",
    
        
        "PTj","PTj_2","PTj_3","Etaj","Etaj_2","Etaj_3","Phij","Phij_2","Phij_3","Mj","Mj_2","Mj_3",
        "PTj_max","PTj_mid","PTj_min","Etaj_max","Etaj_mid","Etaj_min","Phij_max","Phij_mid","Phij_min","Mj_max","Mj_mid","Mj_min",

        # "PTj_a","PTj_b","PTj_c","Etaj_a","Etaj_b","Etaj_c","Phij_a","Phij_b","Phij_c","Mj_a","Mj_b","Mj_c",

        # "PTj_Pneta","PTj_Pnetb","PTj_Pnetc","Etaj_Pneta","Etaj_Pnetb","Etaj_Pnetc","Phij_Pneta","Phij_Pnetb","Phij_Pnetc","Mj_Pneta","Mj_Pnetb","Mj_Pnetc",
        # "PartNet_MD_W_Pneta","PartNet_MD_W_Pnetb","PartNet_MD_W_Pnetc",
        # "PartNet_MD_W_a","PartNet_MD_W_b","PartNet_MD_W_c",

        # "FatJet_tau1_a","FatJet_tau1_b","FatJet_tau1_c","FatJet_tau2_a","FatJet_tau2_b","FatJet_tau2_c","FatJet_tau3_a","FatJet_tau3_b","FatJet_tau3_c","FatJet_tau4_a","FatJet_tau4_b","FatJet_tau4_c",

        "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in","Nj4_ex","Nj4_in",
        "goodRun",
        "Flag",
        
        # "MET_T1Smear_pt_XYcorr","MET_T1Smear_phi_XYcorr",
        
        # "Mj_corr","Mj_corr_2","Mj_corr_3",
        # "Mj_corr_a","Mj_corr_b","Mj_corr_c",
        
        # "MET_phi_NoXYCorr","MET_et_NoXYCorr",

        "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",
        "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",
        "HLT_PFHT800",
        "HLT_PFHT900",
        "HLT_PFJet450",
        "HLT_AK8PFJet400",
        "HLT_AK8PFJet450",
        "HLT_AK8PFJet500",
        "HLT_PFJet500",
        "HLT_AK8PFJet360_TrimMass30",
        "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",
        "HLT_PFHT1050",
        "HLT_AK8PFJet380_TrimMass30",
        "HLT_AK8PFJet400_TrimMass30",
        "HLT_AK8PFJet420_TrimMass30",
        "HLT_AK8PFHT750_TrimMass50",
        "HLT_AK8PFHT800_TrimMass50",
        "HLT_AK8PFHT850_TrimMass50",
        "HLT_AK8PFHT900_TrimMass50",

# deleted since not used
    
# "HLT_PFMET110_PFMHT110_IDTight",
# "HLT_PFMET120_PFMHT120_IDTight",
# "HLT_PFMET130_PFMHT130_IDTight",
# "HLT_PFMET140_PFMHT140_IDTight",
# "HLT_Mu50",
# "HLT_Ele115_CaloIdVT_GsfTrkIdT",
# "HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165",

    # JES, JER part
    
    "Mj_corr_V2_a",
    "Mj_corr_V2_b",
    "Mj_corr_V2_c",


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

#split

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

#add pu
"puWeight",
"puWeightDown",
"puWeightUp",

#add prefire
"PrefireWeight",
"PrefireWeightDown",
"PrefireWeightUp",

#add PDF
"LHEPdfWeight",

#add LHE
"LHEScaleWeight",


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
"PSWeight",

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

    if IsData > 100 :
        branches += [
            "matchingt_a","matchingW_a","matchingg_a",
            "matchingt_a","matchingW_a","matchingg_a","matchingZ_a","matchingu_a","matchingd_a","matchings_a","matchingc_a","matchingg_first_a","matchingu_first_a","matchingd_first_a","matchings_first_a", "matchingc_first_a","matchingqg_first_a","matchingt_first_a",
            "matchingt_b","matchingW_b","matchingg_b","matchingZ_b","matchingu_b","matchingd_b","matchings_b","matchingc_b","matchingg_first_b","matchingu_first_b","matchingd_first_b","matchings_first_b", "matchingc_first_b","matchingqg_first_b","matchingt_first_b",
            "matchingt_c","matchingW_c","matchingg_c","matchingZ_c","matchingu_c","matchingd_c","matchings_c","matchingc_c","matchingg_first_c","matchingu_first_c","matchingd_first_c","matchings_first_c", "matchingc_first_c","matchingqg_first_c","matchingt_first_c",
            # "Jet_pt_out","Jet_eta_out","Jet_phi_out","Jet_mass_out","Jet_btagDeepFlavB_out","Jet_jetId_out","Jet_hadronFlavour_out",
        ]

    if options.signal : 
        branches += [
            'genH_pt','R4q_a','R4q_b','R4q_c','R3q_a','R3q_b','R3q_c','R2q_a','R2q_b','R2q_c','w_a','w_b','w_c','t_a','t_b','t_c','z_a','z_b','z_c','Rlqq_a','Rlqq_b','Rlqq_c','Rlq_a','Rlq_b','Rlq_c','gKK_g_a','gKK_g_b','gKK_g_c','u_a','u_b','u_c','R3q_taudecay_a','R3q_taudecay_b','R3q_taudecay_c',
            'tlqq_a','tlqq_b','tlqq_c' # Add tlqq matching
        ]

    print branches
    outbranches = ROOT.std.vector("string")(len(branches))
    for i,ibranch in enumerate(branches):
        outbranches[i] = ibranch

    print "entries",tree.GetEntries()

    Beginning = datetime.now()
    print '----------------[',str(Beginning),']--------'
    analyzer_gKK = EDBR2PKUTree( tree, outputfile, int(IsData), outbranches, channel )
    analyzer_gKK.Loop(channel, sampleXS, IsData, Nevents, LUMI, year)
    analyzer_gKK.endJob()
    Finishing = datetime.now()
    duration = (Finishing - Beginning).seconds

    if options.lxplus_path:
        dsfolder = outputfile.split("/")[-2]
        filename = outputfile.split("/")[-1]
        lxplus_dsfolder = "%s/%s/"%(options.lxplus_path,dsfolder)
        copy = 'eval `scram unsetenv -sh`;env -i X509_USER_PROXY=x509up_u12375 gfal-mkdir -t 120 -p gsiftp://eosuserftp.cern.ch/%s ;env -i X509_USER_PROXY=x509up_u12375 gfal-copy -t 120 --just-copy %s gsiftp://eosuserftp.cern.ch/%s/%s;'%(lxplus_dsfolder,outputfile,lxplus_dsfolder,filename)
        print copy
        for i in [copy]: os.system(i)

    print '----END-----------------------------------------------[time:',Finishing,', duration:',duration,'sec]---------\n'



