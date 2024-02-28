#ifndef _loadbranches_VVVEFT_
#define _loadbranches_VVVEFT_

void EDBR2PKUTree::loadVectorBranches_B2GSF_1Lepton() {

   fChain->SetBranchStatus("*",0);

   // lepton
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPhi",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonE",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPDGID",1);
    fChain->SetBranchStatus("Lep1fatJet2_Muon_pfRelIso04_all",1);

    // MET
    fChain->SetBranchStatus("Lep1fatJet2_MET_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_MET_phi",1);
    fChain->SetBranchStatus("Common_MET_pt_JER",1);
    fChain->SetBranchStatus("Common_MET_phi_JER",1);

    // neutrino
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Neutrinophi",1);
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoE",1);

    // Leptonic W
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWPhi",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWM",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWMt",1);

    // Jet
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_qgl",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_hadronFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_partonFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_e",1);
   
    // fatJet1
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_msoftdrop",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau1",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau3",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau4",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_H",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCDothers",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_ZvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xbb",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xcc",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xqq",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HccvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_ZvsQCD",1);

    // fatJet2
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_pt_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_eta_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_phi_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_msoftdrop_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_jetId_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau1_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau2_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau3_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau4_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_H_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCDothers_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",1);

    // Gen
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_genPartIdxMother",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_mass",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pdgId",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_status",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_statusFlags",1);
    fChain->SetBranchStatus("Lep1fatJet2_nGenPart",1);


    // weight, HLT
    fChain->SetBranchStatus("Common_LHEReweightingWeight",1);

    fChain->SetBranchStatus("Lep1fatJet2_Pileup_nTrueInt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Pileup_nPU",1);

    fChain->SetBranchStatus("Lep1fatJet2_HLT_Mu50",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_IsoMu24",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_OldMu100",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_TkMu100",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_IsoMu27",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele27_WPTight_Gsf",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Photon200",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele32_WPTight_Gsf",1);

    fChain->SetBranchStatus("Common_passGoodRun",1);
    fChain->SetBranchStatus("Common_noiseFlag",1);
    fChain->SetBranchStatus("Common_noiseFlagMC",1);

    fChain->SetBranchStatus("Common_event_lepSF",1);
    fChain->SetBranchStatus("Common_event_tightBtagSF",1);
    fChain->SetBranchStatus("Common_event_mediumBtagSF",1);
    fChain->SetBranchStatus("Common_event_looseBtagSF",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFVLoose",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFLoose",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFMedium",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFTight",1);

    // vector branches
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_qgl",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_hadronFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_partonFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_e",1);

    fChain->SetBranchStatus("Common_nb_tight",1);
    fChain->SetBranchStatus("Common_nb_medium",1);
    fChain->SetBranchStatus("Common_nb_loose",1);


    fChain->SetBranchStatus("Lep1fatJet2_GenPart_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_genPartIdxMother",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_mass",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pdgId",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_status",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_statusFlags",1);

    

   fChain->SetBranchAddress("Lep1fatJet2_LeptonPt",&Lep1fatJet2_LeptonPt,&b_Lep1fatJet2_LeptonPt);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonEta",&Lep1fatJet2_LeptonEta,&b_Lep1fatJet2_LeptonEta);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonPhi",&Lep1fatJet2_LeptonPhi,&b_Lep1fatJet2_LeptonPhi);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonE",&Lep1fatJet2_LeptonE,&b_Lep1fatJet2_LeptonE);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonPDGID",&Lep1fatJet2_LeptonPDGID,&b_Lep1fatJet2_LeptonPDGID);
   fChain->SetBranchAddress("Lep1fatJet2_Muon_pfRelIso04_all",&Lep1fatJet2_Muon_pfRelIso04_all,&b_Lep1fatJet2_Muon_pfRelIso04_all);

      // MET
   fChain->SetBranchAddress("Lep1fatJet2_MET_pt",&Lep1fatJet2_MET_pt,&b_Lep1fatJet2_MET_pt);
   fChain->SetBranchAddress("Lep1fatJet2_MET_phi",&Lep1fatJet2_MET_phi,&b_Lep1fatJet2_MET_phi);
   fChain->SetBranchAddress("Common_MET_pt_JER",&Common_MET_pt_JER,&b_Common_MET_pt_JER);
   fChain->SetBranchAddress("Common_MET_phi_JER",&Common_MET_phi_JER,&b_Common_MET_phi_JER);

      // neutrino
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoPt",&Lep1fatJet2_NeutrinoPt,&b_Lep1fatJet2_NeutrinoPt);
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoEta",&Lep1fatJet2_NeutrinoEta,&b_Lep1fatJet2_NeutrinoEta);
   fChain->SetBranchAddress("Lep1fatJet2_Neutrinophi",&Lep1fatJet2_Neutrinophi,&b_Lep1fatJet2_Neutrinophi);
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoE",&Lep1fatJet2_NeutrinoE,&b_Lep1fatJet2_NeutrinoE);

      // Leptonic W
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWPt",&Lep1fatJet2_LeptonicWPt,&b_Lep1fatJet2_LeptonicWPt);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWEta",&Lep1fatJet2_LeptonicWEta,&b_Lep1fatJet2_LeptonicWEta);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWPhi",&Lep1fatJet2_LeptonicWPhi,&b_Lep1fatJet2_LeptonicWPhi);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWM",&Lep1fatJet2_LeptonicWM,&b_Lep1fatJet2_LeptonicWM);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWMt",&Lep1fatJet2_LeptonicWMt,&b_Lep1fatJet2_LeptonicWMt);
      
   // fatJet

   fChain->SetBranchAddress("Lep1fatJet2_FatJet_pt",&Lep1fatJet2_FatJet_pt,&b_Lep1fatJet2_FatJet_pt);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_eta",&Lep1fatJet2_FatJet_eta,&b_Lep1fatJet2_FatJet_eta);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_phi",&Lep1fatJet2_FatJet_phi,&b_Lep1fatJet2_FatJet_phi);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_msoftdrop",&Lep1fatJet2_FatJet_msoftdrop,&b_Lep1fatJet2_FatJet_msoftdrop);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_jetId",&Lep1fatJet2_FatJet_jetId,&b_Lep1fatJet2_FatJet_jetId);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau1",&Lep1fatJet2_FatJet_tau1,&b_Lep1fatJet2_FatJet_tau1);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau2",&Lep1fatJet2_FatJet_tau2,&b_Lep1fatJet2_FatJet_tau2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau3",&Lep1fatJet2_FatJet_tau3,&b_Lep1fatJet2_FatJet_tau3);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau4",&Lep1fatJet2_FatJet_tau4,&b_Lep1fatJet2_FatJet_tau4);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight,&b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight,&b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_H",&Lep1fatJet2_FatJet_deepTag_H,&b_Lep1fatJet2_FatJet_deepTag_H);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCD",&Lep1fatJet2_FatJet_deepTag_QCD,&b_Lep1fatJet2_FatJet_deepTag_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCDothers",&Lep1fatJet2_FatJet_deepTag_QCDothers,&b_Lep1fatJet2_FatJet_deepTag_QCDothers);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_TvsQCD",&Lep1fatJet2_FatJet_deepTag_TvsQCD,&b_Lep1fatJet2_FatJet_deepTag_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_WvsQCD",&Lep1fatJet2_FatJet_deepTag_WvsQCD,&b_Lep1fatJet2_FatJet_deepTag_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_ZvsQCD",&Lep1fatJet2_FatJet_deepTag_ZvsQCD,&b_Lep1fatJet2_FatJet_deepTag_ZvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_QCD",&Lep1fatJet2_FatJet_particleNetMD_QCD,&b_Lep1fatJet2_FatJet_particleNetMD_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xbb",&Lep1fatJet2_FatJet_particleNetMD_Xbb,&b_Lep1fatJet2_FatJet_particleNetMD_Xbb);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xcc",&Lep1fatJet2_FatJet_particleNetMD_Xcc,&b_Lep1fatJet2_FatJet_particleNetMD_Xcc);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xqq",&Lep1fatJet2_FatJet_particleNetMD_Xqq,&b_Lep1fatJet2_FatJet_particleNetMD_Xqq);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD,&b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD,&b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HccvsQCD",&Lep1fatJet2_FatJet_particleNet_HccvsQCD,&b_Lep1fatJet2_FatJet_particleNet_HccvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_QCD",&Lep1fatJet2_FatJet_particleNet_QCD,&b_Lep1fatJet2_FatJet_particleNet_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_TvsQCD",&Lep1fatJet2_FatJet_particleNet_TvsQCD,&b_Lep1fatJet2_FatJet_particleNet_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_WvsQCD",&Lep1fatJet2_FatJet_particleNet_WvsQCD,&b_Lep1fatJet2_FatJet_particleNet_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_ZvsQCD",&Lep1fatJet2_FatJet_particleNet_ZvsQCD,&b_Lep1fatJet2_FatJet_particleNet_ZvsQCD);

   fChain->SetBranchAddress("Lep1fatJet2_FatJet_pt_2",&Lep1fatJet2_FatJet_pt_2,&b_Lep1fatJet2_FatJet_pt_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_eta_2",&Lep1fatJet2_FatJet_eta_2,&b_Lep1fatJet2_FatJet_eta_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_phi_2",&Lep1fatJet2_FatJet_phi_2,&b_Lep1fatJet2_FatJet_phi_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_msoftdrop_2",&Lep1fatJet2_FatJet_msoftdrop_2,&b_Lep1fatJet2_FatJet_msoftdrop_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_jetId_2",&Lep1fatJet2_FatJet_jetId_2,&b_Lep1fatJet2_FatJet_jetId_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau1_2",&Lep1fatJet2_FatJet_tau1_2,&b_Lep1fatJet2_FatJet_tau1_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau2_2",&Lep1fatJet2_FatJet_tau2_2,&b_Lep1fatJet2_FatJet_tau2_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau3_2",&Lep1fatJet2_FatJet_tau3_2,&b_Lep1fatJet2_FatJet_tau3_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau4_2",&Lep1fatJet2_FatJet_tau4_2,&b_Lep1fatJet2_FatJet_tau4_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2,&b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2,&b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_H_2",&Lep1fatJet2_FatJet_deepTag_H_2,&b_Lep1fatJet2_FatJet_deepTag_H_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCD_2",&Lep1fatJet2_FatJet_deepTag_QCD_2,&b_Lep1fatJet2_FatJet_deepTag_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCDothers_2",&Lep1fatJet2_FatJet_deepTag_QCDothers_2,&b_Lep1fatJet2_FatJet_deepTag_QCDothers_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",&Lep1fatJet2_FatJet_deepTag_TvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",&Lep1fatJet2_FatJet_deepTag_WvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTag_ZvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_ZvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_QCD_2",&Lep1fatJet2_FatJet_particleNetMD_QCD_2,&b_Lep1fatJet2_FatJet_particleNetMD_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",&Lep1fatJet2_FatJet_particleNetMD_Xbb_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xbb_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",&Lep1fatJet2_FatJet_particleNetMD_Xcc_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xcc_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",&Lep1fatJet2_FatJet_particleNetMD_Xqq_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xqq_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HccvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_HccvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_QCD_2",&Lep1fatJet2_FatJet_particleNet_QCD_2,&b_Lep1fatJet2_FatJet_particleNet_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",&Lep1fatJet2_FatJet_particleNet_TvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",&Lep1fatJet2_FatJet_particleNet_WvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",&Lep1fatJet2_FatJet_particleNet_ZvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_ZvsQCD_2);


   // weight, HLT
   fChain->SetBranchAddress("Common_LHEReweightingWeight",  &Common_LHEReweightingWeight);

   fChain->SetBranchAddress("Lep1fatJet2_Pileup_nTrueInt",&Lep1fatJet2_Pileup_nTrueInt,&b_Lep1fatJet2_Pileup_nTrueInt);
   fChain->SetBranchAddress("Lep1fatJet2_Pileup_nPU",&Lep1fatJet2_Pileup_nPU,&b_Lep1fatJet2_Pileup_nPU);

   fChain->SetBranchAddress("Lep1fatJet2_HLT_Mu50",&Lep1fatJet2_HLT_Mu50,&b_Lep1fatJet2_HLT_Mu50);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_IsoMu24",&Lep1fatJet2_HLT_IsoMu24,&b_Lep1fatJet2_HLT_IsoMu24);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_OldMu100",&Lep1fatJet2_HLT_OldMu100,&b_Lep1fatJet2_HLT_OldMu100);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_TkMu100",&Lep1fatJet2_HLT_TkMu100,&b_Lep1fatJet2_HLT_TkMu100);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_IsoMu27",&Lep1fatJet2_HLT_IsoMu27,&b_Lep1fatJet2_HLT_IsoMu27);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele27_WPTight_Gsf",&Lep1fatJet2_HLT_Ele27_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG,&b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",&Lep1fatJet2_HLT_Ele35_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Photon200",&Lep1fatJet2_HLT_Photon200,&b_Lep1fatJet2_HLT_Photon200);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele32_WPTight_Gsf",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf);

   fChain->SetBranchAddress("Common_passGoodRun",&Common_passGoodRun,&b_Common_passGoodRun);
   fChain->SetBranchAddress("Common_noiseFlag",&Common_noiseFlag,&b_Common_noiseFlag);
   fChain->SetBranchAddress("Common_noiseFlagMC",&Common_noiseFlagMC,&b_Common_noiseFlagMC);

   fChain->SetBranchAddress("Common_event_lepSF",&Common_event_lepSF,&b_Common_event_lepSF);
   fChain->SetBranchAddress("Common_event_tightBtagSF",&Common_event_tightBtagSF,&b_Common_event_tightBtagSF);
   fChain->SetBranchAddress("Common_event_mediumBtagSF",&Common_event_mediumBtagSF,&b_Common_event_mediumBtagSF);
   fChain->SetBranchAddress("Common_event_looseBtagSF",&Common_event_looseBtagSF,&b_Common_event_looseBtagSF);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFVLoose",&Common_eventweight_fatjet_SFVLoose,&b_Common_eventweight_fatjet_SFVLoose);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFLoose",&Common_eventweight_fatjet_SFLoose,&b_Common_eventweight_fatjet_SFLoose);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFMedium",&Common_eventweight_fatjet_SFMedium,&b_Common_eventweight_fatjet_SFMedium);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFTight",&Common_eventweight_fatjet_SFTight,&b_Common_eventweight_fatjet_SFTight);

   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepB",  &Lep1fatJet2_Jet_btagDeepB);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepC",  &Lep1fatJet2_Jet_btagDeepC);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepFlavC",  &Lep1fatJet2_Jet_btagDeepFlavC);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepFlavB",  &Lep1fatJet2_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_qgl",  &Lep1fatJet2_Jet_qgl);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_jetId",  &Lep1fatJet2_Jet_jetId);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_hadronFlavour",  &Lep1fatJet2_Jet_hadronFlavour);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_partonFlavour",  &Lep1fatJet2_Jet_partonFlavour);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_pt",  &Lep1fatJet2_Jet_pt);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_eta",  &Lep1fatJet2_Jet_eta);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_phi",  &Lep1fatJet2_Jet_phi);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_e",  &Lep1fatJet2_Jet_e);

   fChain->SetBranchAddress("Common_nb_tight",&Common_nb_tight,&b_Common_nb_tight);
   fChain->SetBranchAddress("Common_nb_medium",&Common_nb_medium,&b_Common_nb_medium);
   fChain->SetBranchAddress("Common_nb_loose",&Common_nb_loose,&b_Common_nb_loose);

   fChain->SetBranchAddress("Lep1fatJet2_GenPart_eta",  &Lep1fatJet2_GenPart_eta);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_genPartIdxMother",  &Lep1fatJet2_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_mass",  &Lep1fatJet2_GenPart_mass);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_pdgId",  &Lep1fatJet2_GenPart_pdgId);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_phi",  &Lep1fatJet2_GenPart_phi);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_pt",  &Lep1fatJet2_GenPart_pt);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_status",  &Lep1fatJet2_GenPart_status);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_statusFlags",  &Lep1fatJet2_GenPart_statusFlags);
}


#endif
