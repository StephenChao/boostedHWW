#ifndef _outputBranches__VVVEFT_
#define _outputBranches__VVVEFT_

void EDBR2PKUTree::OutputBranches_VVV_EFT_1lepton() {
   
   ExTree->Branch("Lep1fatJet2_LeptonPt",&Lep1fatJet2_LeptonPt,"Lep1fatJet2_LeptonPt/F");
   ExTree->Branch("Lep1fatJet2_LeptonEta",&Lep1fatJet2_LeptonEta,"Lep1fatJet2_LeptonEta/F");
   ExTree->Branch("Lep1fatJet2_LeptonPhi",&Lep1fatJet2_LeptonPhi,"Lep1fatJet2_LeptonPhi/F");
   ExTree->Branch("Lep1fatJet2_LeptonE",&Lep1fatJet2_LeptonE,"Lep1fatJet2_LeptonE/F");
   ExTree->Branch("Lep1fatJet2_LeptonPDGID",&Lep1fatJet2_LeptonPDGID,"Lep1fatJet2_LeptonPDGID/I");
   ExTree->Branch("Lep1fatJet2_Muon_pfRelIso04_all",&Lep1fatJet2_Muon_pfRelIso04_all,"Lep1fatJet2_Muon_pfRelIso04_all/F");

      // MET
   ExTree->Branch("Lep1fatJet2_MET_pt",&Lep1fatJet2_MET_pt,"Lep1fatJet2_MET_pt/F");
   ExTree->Branch("Lep1fatJet2_MET_phi",&Lep1fatJet2_MET_phi,"Lep1fatJet2_MET_phi/F");
   ExTree->Branch("Common_MET_pt_JER",&Common_MET_pt_JER,"Common_MET_pt_JER/F");
   ExTree->Branch("Common_MET_phi_JER",&Common_MET_phi_JER,"Common_MET_phi_JER/F");

      // neutrino
   ExTree->Branch("Lep1fatJet2_NeutrinoPt",&Lep1fatJet2_NeutrinoPt,"Lep1fatJet2_NeutrinoPt/F");
   ExTree->Branch("Lep1fatJet2_NeutrinoEta",&Lep1fatJet2_NeutrinoEta,"Lep1fatJet2_NeutrinoEta/F");
   ExTree->Branch("Lep1fatJet2_Neutrinophi",&Lep1fatJet2_Neutrinophi,"Lep1fatJet2_Neutrinophi/F");
   ExTree->Branch("Lep1fatJet2_NeutrinoE",&Lep1fatJet2_NeutrinoE,"Lep1fatJet2_NeutrinoE/F");

      // Leptonic W
   ExTree->Branch("Lep1fatJet2_LeptonicWPt",&Lep1fatJet2_LeptonicWPt,"Lep1fatJet2_LeptonicWPt/F");
   ExTree->Branch("Lep1fatJet2_LeptonicWEta",&Lep1fatJet2_LeptonicWEta,"Lep1fatJet2_LeptonicWEta/F");
   ExTree->Branch("Lep1fatJet2_LeptonicWPhi",&Lep1fatJet2_LeptonicWPhi,"Lep1fatJet2_LeptonicWPhi/F");
   ExTree->Branch("Lep1fatJet2_LeptonicWM",&Lep1fatJet2_LeptonicWM,"Lep1fatJet2_LeptonicWM/F");
   ExTree->Branch("Lep1fatJet2_LeptonicWMt",&Lep1fatJet2_LeptonicWMt,"Lep1fatJet2_LeptonicWMt/F");
      
   // fatJet

   ExTree->Branch("Lep1fatJet2_FatJet_pt",&Lep1fatJet2_FatJet_pt,"Lep1fatJet2_FatJet_pt/F");
   ExTree->Branch("Lep1fatJet2_FatJet_eta",&Lep1fatJet2_FatJet_eta,"Lep1fatJet2_FatJet_eta/F");
   ExTree->Branch("Lep1fatJet2_FatJet_phi",&Lep1fatJet2_FatJet_phi,"Lep1fatJet2_FatJet_phi/F");
   ExTree->Branch("Lep1fatJet2_FatJet_msoftdrop",&Lep1fatJet2_FatJet_msoftdrop,"Lep1fatJet2_FatJet_msoftdrop/F");
   ExTree->Branch("Lep1fatJet2_FatJet_jetId",&Lep1fatJet2_FatJet_jetId,"Lep1fatJet2_FatJet_jetId/I");
   ExTree->Branch("Lep1fatJet2_FatJet_tau1",&Lep1fatJet2_FatJet_tau1,"Lep1fatJet2_FatJet_tau1/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau2",&Lep1fatJet2_FatJet_tau2,"Lep1fatJet2_FatJet_tau2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau3",&Lep1fatJet2_FatJet_tau3,"Lep1fatJet2_FatJet_tau3/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau4",&Lep1fatJet2_FatJet_tau4,"Lep1fatJet2_FatJet_tau4/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD,"Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight,"Lep1fatJet2_FatJet_deepTagMD_bbvsLight/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight,"Lep1fatJet2_FatJet_deepTagMD_ccvsLight/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_H",&Lep1fatJet2_FatJet_deepTag_H,"Lep1fatJet2_FatJet_deepTag_H/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCD",&Lep1fatJet2_FatJet_deepTag_QCD,"Lep1fatJet2_FatJet_deepTag_QCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCDothers",&Lep1fatJet2_FatJet_deepTag_QCDothers,"Lep1fatJet2_FatJet_deepTag_QCDothers/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_TvsQCD",&Lep1fatJet2_FatJet_deepTag_TvsQCD,"Lep1fatJet2_FatJet_deepTag_TvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_WvsQCD",&Lep1fatJet2_FatJet_deepTag_WvsQCD,"Lep1fatJet2_FatJet_deepTag_WvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_ZvsQCD",&Lep1fatJet2_FatJet_deepTag_ZvsQCD,"Lep1fatJet2_FatJet_deepTag_ZvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_QCD",&Lep1fatJet2_FatJet_particleNetMD_QCD,"Lep1fatJet2_FatJet_particleNetMD_QCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xbb",&Lep1fatJet2_FatJet_particleNetMD_Xbb,"Lep1fatJet2_FatJet_particleNetMD_Xbb/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xcc",&Lep1fatJet2_FatJet_particleNetMD_Xcc,"Lep1fatJet2_FatJet_particleNetMD_Xcc/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xqq",&Lep1fatJet2_FatJet_particleNetMD_Xqq,"Lep1fatJet2_FatJet_particleNetMD_Xqq/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD,"Lep1fatJet2_FatJet_particleNet_H4qvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD,"Lep1fatJet2_FatJet_particleNet_HbbvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HccvsQCD",&Lep1fatJet2_FatJet_particleNet_HccvsQCD,"Lep1fatJet2_FatJet_particleNet_HccvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_QCD",&Lep1fatJet2_FatJet_particleNet_QCD,"Lep1fatJet2_FatJet_particleNet_QCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_TvsQCD",&Lep1fatJet2_FatJet_particleNet_TvsQCD,"Lep1fatJet2_FatJet_particleNet_TvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_WvsQCD",&Lep1fatJet2_FatJet_particleNet_WvsQCD,"Lep1fatJet2_FatJet_particleNet_WvsQCD/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_ZvsQCD",&Lep1fatJet2_FatJet_particleNet_ZvsQCD,"Lep1fatJet2_FatJet_particleNet_ZvsQCD/F");

   ExTree->Branch("Lep1fatJet2_FatJet_pt_2",&Lep1fatJet2_FatJet_pt_2,"Lep1fatJet2_FatJet_pt_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_eta_2",&Lep1fatJet2_FatJet_eta_2,"Lep1fatJet2_FatJet_eta_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_phi_2",&Lep1fatJet2_FatJet_phi_2,"Lep1fatJet2_FatJet_phi_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_msoftdrop_2",&Lep1fatJet2_FatJet_msoftdrop_2,"Lep1fatJet2_FatJet_msoftdrop_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_jetId_2",&Lep1fatJet2_FatJet_jetId_2,"Lep1fatJet2_FatJet_jetId_2/I");
   ExTree->Branch("Lep1fatJet2_FatJet_tau1_2",&Lep1fatJet2_FatJet_tau1_2,"Lep1fatJet2_FatJet_tau1_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau2_2",&Lep1fatJet2_FatJet_tau2_2,"Lep1fatJet2_FatJet_tau2_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau3_2",&Lep1fatJet2_FatJet_tau3_2,"Lep1fatJet2_FatJet_tau3_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_tau4_2",&Lep1fatJet2_FatJet_tau4_2,"Lep1fatJet2_FatJet_tau4_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2,"Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2,"Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_H_2",&Lep1fatJet2_FatJet_deepTag_H_2,"Lep1fatJet2_FatJet_deepTag_H_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCD_2",&Lep1fatJet2_FatJet_deepTag_QCD_2,"Lep1fatJet2_FatJet_deepTag_QCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCDothers_2",&Lep1fatJet2_FatJet_deepTag_QCDothers_2,"Lep1fatJet2_FatJet_deepTag_QCDothers_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",&Lep1fatJet2_FatJet_deepTag_TvsQCD_2,"Lep1fatJet2_FatJet_deepTag_TvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",&Lep1fatJet2_FatJet_deepTag_WvsQCD_2,"Lep1fatJet2_FatJet_deepTag_WvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTag_ZvsQCD_2,"Lep1fatJet2_FatJet_deepTag_ZvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_QCD_2",&Lep1fatJet2_FatJet_particleNetMD_QCD_2,"Lep1fatJet2_FatJet_particleNetMD_QCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",&Lep1fatJet2_FatJet_particleNetMD_Xbb_2,"Lep1fatJet2_FatJet_particleNetMD_Xbb_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",&Lep1fatJet2_FatJet_particleNetMD_Xcc_2,"Lep1fatJet2_FatJet_particleNetMD_Xcc_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",&Lep1fatJet2_FatJet_particleNetMD_Xqq_2,"Lep1fatJet2_FatJet_particleNetMD_Xqq_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2,"Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2,"Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HccvsQCD_2,"Lep1fatJet2_FatJet_particleNet_HccvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_QCD_2",&Lep1fatJet2_FatJet_particleNet_QCD_2,"Lep1fatJet2_FatJet_particleNet_QCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",&Lep1fatJet2_FatJet_particleNet_TvsQCD_2,"Lep1fatJet2_FatJet_particleNet_TvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",&Lep1fatJet2_FatJet_particleNet_WvsQCD_2,"Lep1fatJet2_FatJet_particleNet_WvsQCD_2/F");
   ExTree->Branch("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",&Lep1fatJet2_FatJet_particleNet_ZvsQCD_2,"Lep1fatJet2_FatJet_particleNet_ZvsQCD_2/F");

   // weight, HLT

   ExTree->Branch("Lep1fatJet2_Pileup_nTrueInt",&Lep1fatJet2_Pileup_nTrueInt,"Lep1fatJet2_Pileup_nTrueInt/F");
   ExTree->Branch("Lep1fatJet2_Pileup_nPU",&Lep1fatJet2_Pileup_nPU,"Lep1fatJet2_Pileup_nPU/F");

   ExTree->Branch("Lep1fatJet2_HLT_Mu50",&Lep1fatJet2_HLT_Mu50,"Lep1fatJet2_HLT_Mu50/I");
   ExTree->Branch("Lep1fatJet2_HLT_IsoMu24",&Lep1fatJet2_HLT_IsoMu24,"Lep1fatJet2_HLT_IsoMu24/I");
   ExTree->Branch("Lep1fatJet2_HLT_OldMu100",&Lep1fatJet2_HLT_OldMu100,"Lep1fatJet2_HLT_OldMu100/I");
   ExTree->Branch("Lep1fatJet2_HLT_TkMu100",&Lep1fatJet2_HLT_TkMu100,"Lep1fatJet2_HLT_TkMu100/I");
   ExTree->Branch("Lep1fatJet2_HLT_IsoMu27",&Lep1fatJet2_HLT_IsoMu27,"Lep1fatJet2_HLT_IsoMu27/I");
   ExTree->Branch("Lep1fatJet2_HLT_Ele27_WPTight_GsI",&Lep1fatJet2_HLT_Ele27_WPTight_Gsf,"Lep1fatJet2_HLT_Ele27_WPTight_Gsf/I");
   ExTree->Branch("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG,"Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG/I");
   ExTree->Branch("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",&Lep1fatJet2_HLT_Ele35_WPTight_Gsf,"Lep1fatJet2_HLT_Ele35_WPTight_Gsf/I");
   ExTree->Branch("Lep1fatJet2_HLT_Photon200",&Lep1fatJet2_HLT_Photon200,"Lep1fatJet2_HLT_Photon200/I");
   ExTree->Branch("Lep1fatJet2_HLT_Ele32_WPTight_GsI",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf,"Lep1fatJet2_HLT_Ele32_WPTight_Gsf/I");

   cout << "IsData " << IsData << endl;

   if( IsData > 0){
      ExTree->Branch("Common_LHEReweightingWeight", &(Common_LHEReweightingWeight));

      ExTree->Branch("weight", &weight, "weight/D");
      ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
      ExTree->Branch("Weight_btagtight", &Weight_btagtight, "Weight_btagtight/F");
      ExTree->Branch("weight_btagmediun", &weight_btagmediun, "weight_btagmediun/F");
      ExTree->Branch("Weight_btagloose", &Weight_btagloose, "Weight_btagloose/F");
      ExTree->Branch("Weight_FJVL", &Weight_FJVL, "Weight_FJVL/F");
      ExTree->Branch("Weight_FJL", &Weight_FJL, "Weight_FJL/F");
      ExTree->Branch("Weight_FJM", &Weight_FJM, "Weight_FJM/F");
      ExTree->Branch("Weight_FJT", &Weight_FJT, "Weight_FJT/F");

      // Genmatching
      ExTree->Branch("matchingt_1",&matchingt_1,"matchingt_1/I");
      ExTree->Branch("matchingW_1",&matchingW_1,"matchingW_1/I");
      ExTree->Branch("matchingg_1",&matchingg_1,"matchingg_1/I");
      ExTree->Branch("matchingZ_1",&matchingZ_1,"matchingZ_1/I");
      ExTree->Branch("matchingu_1",&matchingu_1,"matchingu_1/I");
      ExTree->Branch("matchingd_1",&matchingd_1,"matchingd_1/I");
      ExTree->Branch("matchings_1",&matchings_1,"matchings_1/I");
      ExTree->Branch("matchingc_1",&matchingc_1,"matchingc_1/I");
      ExTree->Branch("matching_gq_1",&matching_gq_1,"matching_gq_1/I");
   }


   

   ExTree->Branch("matchingt_2",&matchingt_2,"matchingt_2/I");
   ExTree->Branch("matchingW_2",&matchingW_2,"matchingW_2/I");
   ExTree->Branch("matchingg_2",&matchingg_2,"matchingg_2/I");
   ExTree->Branch("matchingZ_2",&matchingZ_2,"matchingZ_2/I");
   ExTree->Branch("matchingu_2",&matchingu_2,"matchingu_2/I");
   ExTree->Branch("matchingd_2",&matchingd_2,"matchingd_2/I");
   ExTree->Branch("matchings_2",&matchings_2,"matchings_2/I");
   ExTree->Branch("matchingc_2",&matchingc_2,"matchingc_2/I");
   ExTree->Branch("matching_gq_2",&matching_gq_2,"matching_gq_2/I");


   // event level variables
   ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
   ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
   ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
   ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
   ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
   ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");
   ExTree->Branch("Common_nb_tight" ,&Common_nb_tight ,"Common_nb_tight/I");
   ExTree->Branch("Common_nb_medium",&Common_nb_medium,"Common_nb_medium/I");
   ExTree->Branch("Common_nb_loose" ,&Common_nb_loose ,"Common_nb_loose/I");


   ExTree->Branch("ST",&ST,"ST/F");
   ExTree->Branch("HT",&HT,"HT/F");
   ExTree->Branch("MJJlv",&MJJlv,"MJJlv/F");

   ExTree->Branch("leptonicWMT",&leptonicWMT,"leptonicWMT/F");

}


#endif
