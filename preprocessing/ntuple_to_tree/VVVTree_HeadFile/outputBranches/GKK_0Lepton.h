#ifndef _outputBranches__GKK_0Lepton_
#define _outputBranches__GKK_0Lepton_

void EDBR2PKUTree::OutputBranches_GKK_0Lepton() {
   if (IsData > 0){
      ExTree->Branch("matchingt_a", &matchingt_a, "matchingt_a/I");
      ExTree->Branch("matchingW_a", &matchingW_a, "matchingW_a/I");
      ExTree->Branch("matchingg_a", &matchingg_a, "matchingg_a/I");
      ExTree->Branch("matchingZ_a", &matchingZ_a, "matchingZ_a/I");
      ExTree->Branch("matchingu_a", &matchingu_a, "matchingu_a/I");
      ExTree->Branch("matchingd_a", &matchingd_a, "matchingd_a/I");
      ExTree->Branch("matchings_a", &matchings_a, "matchings_a/I");
      ExTree->Branch("matchingc_a", &matchingc_a, "matchingc_a/I");
      ExTree->Branch("matchingg_first_a", &matchingg_first_a, "matchingg_first_a/I");
      ExTree->Branch("matchingu_first_a", &matchingu_first_a, "matchingu_first_a/I");
      ExTree->Branch("matchingd_first_a", &matchingd_first_a, "matchingd_first_a/I");
      ExTree->Branch("matchings_first_a", &matchings_first_a, "matchings_first_a/I");
      ExTree->Branch("matchingc_first_a", &matchingc_first_a, "matchingc_first_a/I");
      ExTree->Branch("matchingqg_first_a", &matchingqg_first_a, "matchingqg_first_a/I");
      ExTree->Branch("matchingt_first_a", &matchingt_first_a, "matchingt_first_a/I");

      ExTree->Branch("matchingt_b", &matchingt_b, "matchingt_b/I");
      ExTree->Branch("matchingW_b", &matchingW_b, "matchingW_b/I");
      ExTree->Branch("matchingg_b", &matchingg_b, "matchingg_b/I");
      ExTree->Branch("matchingZ_b", &matchingZ_b, "matchingZ_b/I");
      ExTree->Branch("matchingu_b", &matchingu_b, "matchingu_b/I");
      ExTree->Branch("matchingd_b", &matchingd_b, "matchingd_b/I");
      ExTree->Branch("matchings_b", &matchings_b, "matchings_b/I");
      ExTree->Branch("matchingc_b", &matchingc_b, "matchingc_b/I");
      ExTree->Branch("matchingg_first_b", &matchingg_first_b, "matchingg_first_b/I");
      ExTree->Branch("matchingu_first_b", &matchingu_first_b, "matchingu_first_b/I");
      ExTree->Branch("matchingd_first_b", &matchingd_first_b, "matchingd_first_b/I");
      ExTree->Branch("matchings_first_b", &matchings_first_b, "matchings_first_b/I");
      ExTree->Branch("matchingc_first_b", &matchingc_first_b, "matchingc_first_b/I");
      ExTree->Branch("matchingqg_first_b", &matchingqg_first_b, "matchingqg_first_b/I");
      ExTree->Branch("matchingt_first_b", &matchingt_first_b, "matchingt_first_b/I");

      ExTree->Branch("matchingt_c", &matchingt_c, "matchingt_c/I");
      ExTree->Branch("matchingW_c", &matchingW_c, "matchingW_c/I");
      ExTree->Branch("matchingg_c", &matchingg_c, "matchingg_c/I");
      ExTree->Branch("matchingZ_c", &matchingZ_c, "matchingZ_c/I");
      ExTree->Branch("matchingu_c", &matchingu_c, "matchingu_c/I");
      ExTree->Branch("matchingd_c", &matchingd_c, "matchingd_c/I");
      ExTree->Branch("matchings_c", &matchings_c, "matchings_c/I");
      ExTree->Branch("matchingc_c", &matchingc_c, "matchingc_c/I");
      ExTree->Branch("matchingg_first_c", &matchingg_first_c, "matchingg_first_c/I");
      ExTree->Branch("matchingu_first_c", &matchingu_first_c, "matchingu_first_c/I");
      ExTree->Branch("matchingd_first_c", &matchingd_first_c, "matchingd_first_c/I");
      ExTree->Branch("matchings_first_c", &matchings_first_c, "matchings_first_c/I");
      ExTree->Branch("matchingc_first_c", &matchingc_first_c, "matchingc_first_c/I");
      ExTree->Branch("matchingqg_first_c", &matchingqg_first_c, "matchingqg_first_c/I");
      ExTree->Branch("matchingt_first_c", &matchingt_first_c, "matchingt_first_c/I");



      ExTree->Branch("R4q_max", &R4q_max, "R4q_max/I");
      ExTree->Branch("R3q_max", &R3q_max, "R3q_max/I");
      ExTree->Branch("R2q_max", &R2q_max, "R2q_max/I");
      ExTree->Branch("Rlqq_max", &Rlqq_max, "Rlqq_max/I");
      ExTree->Branch("Rlq_max", &Rlq_max, "Rlq_max/I");
      ExTree->Branch("w_max", &w_max, "w_max/I");
      ExTree->Branch("u_max", &u_max, "u_max/I");
      ExTree->Branch("R4q_min", &R4q_min, "R4q_min/I");
      ExTree->Branch("R3q_min", &R3q_min, "R3q_min/I");
      ExTree->Branch("R2q_min", &R2q_min, "R2q_min/I");
      ExTree->Branch("Rlqq_min", &Rlqq_min, "Rlqq_min/I");
      ExTree->Branch("Rlq_min", &Rlq_min, "Rlq_min/I");
      ExTree->Branch("w_min", &w_min, "w_min/I");
      ExTree->Branch("u_min", &u_min, "u_min/I");
      ExTree->Branch("gKK_g_max", &gKK_g_max, "gKK_g_max/I");
      ExTree->Branch("gKK_g_min", &gKK_g_min, "gKK_g_min/I");
      ExTree->Branch("R3q_taudecay_max", &R3q_taudecay_max, "R3q_taudecay_max/I");
      ExTree->Branch("R2q_qq_taudecay_max", &R2q_qq_taudecay_max, "R2q_qq_taudecay_max/I");
      ExTree->Branch("R2q_qtau_taudecay_max", &R2q_qtau_taudecay_max, "R2q_qtau_taudecay_max/I");
      ExTree->Branch("R2q_tautau_taudecay_max", &R2q_tautau_taudecay_max, "R2q_tautau_taudecay_max/I");
      ExTree->Branch("Rlqq_emu_taudecay_max", &Rlqq_emu_taudecay_max, "Rlqq_emu_taudecay_max/I");
      ExTree->Branch("Rlqq_tau_taudecay_max", &Rlqq_tau_taudecay_max, "Rlqq_tau_taudecay_max/I");
      ExTree->Branch("Rlq_taudecay_max", &Rlq_taudecay_max, "Rlq_taudecay_max/I");
      ExTree->Branch("w_taudecay_max", &w_taudecay_max, "w_taudecay_max/I");
      ExTree->Branch("u_taudecay_max", &u_taudecay_max, "u_taudecay_max/I");
      ExTree->Branch("R3q_taudecay_min", &R3q_taudecay_min, "R3q_taudecay_min/I");
      ExTree->Branch("R2q_qq_taudecay_min", &R2q_qq_taudecay_min, "R2q_qq_taudecay_min/I");
      ExTree->Branch("R2q_qtau_taudecay_min", &R2q_qtau_taudecay_min, "R2q_qtau_taudecay_min/I");
      ExTree->Branch("R2q_tautau_taudecay_min", &R2q_tautau_taudecay_min, "R2q_tautau_taudecay_min/I");
      ExTree->Branch("Rlqq_emu_taudecay_min", &Rlqq_emu_taudecay_min, "Rlqq_emu_taudecay_min/I");
      ExTree->Branch("Rlqq_tau_taudecay_min", &Rlqq_tau_taudecay_min, "Rlqq_tau_taudecay_min/I");
      ExTree->Branch("Rlq_taudecay_min", &Rlq_taudecay_min, "Rlq_taudecay_min/I");
      ExTree->Branch("w_taudecay_min", &w_taudecay_min, "w_taudecay_min/I");
      ExTree->Branch("u_taudecay_min", &u_taudecay_min, "u_taudecay_min/I");
      ExTree->Branch("R3q_tauhad_max", &R3q_tauhad_max, "R3q_tauhad_max/I");
      ExTree->Branch("R2q_qtau_tauhad_max", &R2q_qtau_tauhad_max, "R2q_qtau_tauhad_max/I");
      ExTree->Branch("R2q_tautau_tauhad_max", &R2q_tautau_tauhad_max, "R2q_tautau_tauhad_max/I");
      ExTree->Branch("Rlqq_emu_tauhad_max", &Rlqq_emu_tauhad_max, "Rlqq_emu_tauhad_max/I");
      ExTree->Branch("Rlq_tauhad_max", &Rlq_tauhad_max, "Rlq_tauhad_max/I");
      ExTree->Branch("w_tauhad_max", &w_tauhad_max, "w_tauhad_max/I");
      ExTree->Branch("u_tauhad_max", &u_tauhad_max, "u_tauhad_max/I");
      ExTree->Branch("R3q_tauhad_min", &R3q_tauhad_min, "R3q_tauhad_min/I");
      ExTree->Branch("R2q_qtau_tauhad_min", &R2q_qtau_tauhad_min, "R2q_qtau_tauhad_min/I");
      ExTree->Branch("R2q_tautau_tauhad_min", &R2q_tautau_tauhad_min, "R2q_tautau_tauhad_min/I");
      ExTree->Branch("Rlqq_emu_tauhad_min", &Rlqq_emu_tauhad_min, "Rlqq_emu_tauhad_min/I");
      ExTree->Branch("Rlq_tauhad_min", &Rlq_tauhad_min, "Rlq_tauhad_min/I");
      ExTree->Branch("w_tauhad_min", &w_tauhad_min, "w_tauhad_min/I");
      ExTree->Branch("u_tauhad_min", &u_tauhad_min, "u_tauhad_min/I");
      ExTree->Branch("R3q_td_max", &R3q_td_max, "R3q_td_max/I");
      ExTree->Branch("rest_td_max", &rest_td_max, "rest_td_max/I");
      ExTree->Branch("R2q_Rlqq_td_max", &R2q_Rlqq_td_max, "R2q_Rlqq_td_max/I");
      ExTree->Branch("R3q_td_min", &R3q_td_min, "R3q_td_min/I");
      ExTree->Branch("rest_td_min", &rest_td_min, "rest_td_min/I");
      ExTree->Branch("R2q_Rlqq_td_min", &R2q_Rlqq_td_min, "R2q_Rlqq_td_min/I");
      ExTree->Branch("R4q_mid", &R4q_mid, "R4q_mid/I");
      ExTree->Branch("R3q_mid", &R3q_mid, "R3q_mid/I");
      ExTree->Branch("R2q_mid", &R2q_mid, "R2q_mid/I");
      ExTree->Branch("Rlqq_mid", &Rlqq_mid, "Rlqq_mid/I");
      ExTree->Branch("Rlq_mid", &Rlq_mid, "Rlq_mid/I");
      ExTree->Branch("w_mid", &w_mid, "w_mid/I");
      ExTree->Branch("u_mid", &u_mid, "u_mid/I");
      ExTree->Branch("gKK_g_mid", &gKK_g_mid, "gKK_g_mid/I");
      ExTree->Branch("R3q_taudecay_mid", &R3q_taudecay_mid, "R3q_taudecay_mid/I");
      ExTree->Branch("R2q_qq_taudecay_mid", &R2q_qq_taudecay_mid, "R2q_qq_taudecay_mid/I");
      ExTree->Branch("R2q_qtau_taudecay_mid", &R2q_qtau_taudecay_mid, "R2q_qtau_taudecay_mid/I");
      ExTree->Branch("R2q_tautau_taudecay_mid", &R2q_tautau_taudecay_mid, "R2q_tautau_taudecay_mid/I");
      ExTree->Branch("Rlqq_emu_taudecay_mid", &Rlqq_emu_taudecay_mid, "Rlqq_emu_taudecay_mid/I");
      ExTree->Branch("Rlqq_tau_taudecay_mid", &Rlqq_tau_taudecay_mid, "Rlqq_tau_taudecay_mid/I");
      ExTree->Branch("Rlq_taudecay_mid", &Rlq_taudecay_mid, "Rlq_taudecay_mid/I");
      ExTree->Branch("w_taudecay_mid", &w_taudecay_mid, "w_taudecay_mid/I");
      ExTree->Branch("u_taudecay_mid", &u_taudecay_mid, "u_taudecay_mid/I");
      ExTree->Branch("R3q_tauhad_mid", &R3q_tauhad_mid, "R3q_tauhad_mid/I");
      ExTree->Branch("R2q_qtau_tauhad_mid", &R2q_qtau_tauhad_mid, "R2q_qtau_tauhad_mid/I");
      ExTree->Branch("R2q_tautau_tauhad_mid", &R2q_tautau_tauhad_mid, "R2q_tautau_tauhad_mid/I");
      ExTree->Branch("Rlqq_emu_tauhad_mid", &Rlqq_emu_tauhad_mid, "Rlqq_emu_tauhad_mid/I");
      ExTree->Branch("Rlq_tauhad_mid", &Rlq_tauhad_mid, "Rlq_tauhad_mid/I");
      ExTree->Branch("w_tauhad_mid", &w_tauhad_mid, "w_tauhad_mid/I");
      ExTree->Branch("u_tauhad_mid", &u_tauhad_mid, "u_tauhad_mid/I");
      ExTree->Branch("R3q_td_mid", &R3q_td_mid, "R3q_td_mid/I");
      ExTree->Branch("rest_td_mid", &rest_td_mid, "rest_td_mid/I");
      ExTree->Branch("R2q_Rlqq_td_mid", &R2q_Rlqq_td_mid, "R2q_Rlqq_td_mid/I");


      ExTree->Branch("gen_gKK_g_pt_f",&gen_gKK_g_pt_f,"gen_gKK_g_pt_f/F");
      ExTree->Branch("gen_gKK_g_eta_f",&gen_gKK_g_eta_f,"gen_gKK_g_eta_f/F");
      ExTree->Branch("gen_gKK_g_phi_f",&gen_gKK_g_phi_f,"gen_gKK_g_phi_f/F");
      ExTree->Branch("gen_gKK_g_mass_f",&gen_gKK_g_mass_f,"gen_gKK_g_mass_f/F");

      ExTree->Branch("gen_tau_decay_2",&gen_tau_decay_2,"gen_tau_decay_2/I");
      ExTree->Branch("gen_tau_decay_3",&gen_tau_decay_3,"gen_tau_decay_3/I");

      ExTree->Branch("z_max",&z_max,"z_max/I");
      ExTree->Branch("t_max",&t_max,"t_max/I");
      ExTree->Branch("t_max_tag",&t_max_tag,"t_max_tag/I");
      ExTree->Branch("w_max",&w_max,"w_max/I");
      ExTree->Branch("g_max",&g_max,"g_max/I");
      ExTree->Branch("q_max",&q_max,"q_max/I");
      ExTree->Branch("u_max",&u_max,"u_max/I");
      ExTree->Branch("z_mid",&z_mid,"z_mid/I");
      ExTree->Branch("t_mid",&t_mid,"t_mid/I");
      ExTree->Branch("t_mid_tag",&t_mid_tag,"t_mid_tag/I");
      ExTree->Branch("w_mid",&w_mid,"w_mid/I");
      ExTree->Branch("g_mid",&g_mid,"g_mid/I");
      ExTree->Branch("q_mid",&q_mid,"q_mid/I");
      ExTree->Branch("u_mid",&u_mid,"u_mid/I");
      ExTree->Branch("z_min",&z_min,"z_min/I");
      ExTree->Branch("t_min",&t_min,"t_min/I");
      ExTree->Branch("t_min_tag",&t_min_tag,"t_min_tag/I");
      ExTree->Branch("w_min",&w_min,"w_min/I");
      ExTree->Branch("g_min",&g_min,"g_min/I");
      ExTree->Branch("q_min",&q_min,"q_min/I");
      ExTree->Branch("u_min",&u_min,"u_min/I");
      ExTree->Branch("z_4",&z_4,"z_4/I");
      ExTree->Branch("t_4",&t_4,"t_4/I");
      ExTree->Branch("t_4_tag",&t_4_tag,"t_4_tag/I");
      ExTree->Branch("w_4",&w_4,"w_4/I");
      ExTree->Branch("g_4",&g_4,"g_4/I");
      ExTree->Branch("q_4",&q_4,"q_4/I");
      ExTree->Branch("u_4",&u_4,"u_4/I");

      ExTree->Branch("t34_max_tag",&t34_max_tag,"t34_max_tag/I");
      ExTree->Branch("t34_mid_tag",&t34_mid_tag,"t34_mid_tag/I");
      ExTree->Branch("t34_min_tag",&t34_min_tag,"t34_min_tag/I");
      ExTree->Branch("t34_4_tag",&t34_4_tag,"t34_4_tag/I");

      ExTree->Branch("R4q_a",&R4q_a,"R4q_a/I");
      ExTree->Branch("R4q_b",&R4q_b,"R4q_b/I");
      ExTree->Branch("R4q_c",&R4q_c,"R4q_c/I");
      ExTree->Branch("R3q_a",&R3q_a,"R3q_a/I");
      ExTree->Branch("R3q_b",&R3q_b,"R3q_b/I");
      ExTree->Branch("R3q_c",&R3q_c,"R3q_c/I");
      ExTree->Branch("R2q_a",&R2q_a,"R2q_a/I");
      ExTree->Branch("R2q_b",&R2q_b,"R2q_b/I");
      ExTree->Branch("R2q_c",&R2q_c,"R2q_c/I");
      ExTree->Branch("w_a",&w_a,"w_a/I");
      ExTree->Branch("w_b",&w_b,"w_b/I");
      ExTree->Branch("w_c",&w_c,"w_c/I");
      ExTree->Branch("z_a",&z_a,"z_a/I");
      ExTree->Branch("z_b",&z_b,"z_b/I");
      ExTree->Branch("z_c",&z_c,"z_c/I");
      ExTree->Branch("Rlqq_a",&Rlqq_a,"Rlqq_a/I");
      ExTree->Branch("Rlqq_b",&Rlqq_b,"Rlqq_b/I");
      ExTree->Branch("Rlqq_c",&Rlqq_c,"Rlqq_c/I");
      ExTree->Branch("Rlq_a",&Rlq_a,"Rlq_a/I");
      ExTree->Branch("Rlq_b",&Rlq_b,"Rlq_b/I");
      ExTree->Branch("Rlq_c",&Rlq_c,"Rlq_c/I");
      ExTree->Branch("gKK_g_a",&gKK_g_a,"gKK_g_a/I");
      ExTree->Branch("gKK_g_b",&gKK_g_b,"gKK_g_b/I");
      ExTree->Branch("gKK_g_c",&gKK_g_c,"gKK_g_c/I");
      ExTree->Branch("u_a",&u_a,"u_a/I");
      ExTree->Branch("u_b",&u_b,"u_b/I");
      ExTree->Branch("u_c",&u_c,"u_c/I");
      ExTree->Branch("R3q_taudecay_a",&R3q_taudecay_a,"R3q_taudecay_a/I");
      ExTree->Branch("R3q_taudecay_b",&R3q_taudecay_b,"R3q_taudecay_b/I");
      ExTree->Branch("R3q_taudecay_c",&R3q_taudecay_c,"R3q_taudecay_c/I");
   }

   ExTree->Branch("goodRun", &goodRun, "goodRun/b");
   ExTree->Branch("Flag", &Flag, "Flag/b");

   ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
   ExTree->Branch("MET_et", &MET_et, "MET_et/F");


   ExTree->Branch("Mj",&Mj,"Mj/F");
   ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
   ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
   ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");

   ExTree->Branch("FatJet_particleNetMD_QCD_1",&FatJet_particleNetMD_QCD_1,"FatJet_particleNetMD_QCD_1/F");
   ExTree->Branch("FatJet_particleNetMD_QCD_2",&FatJet_particleNetMD_QCD_2,"FatJet_particleNetMD_QCD_2/F");
   ExTree->Branch("FatJet_particleNetMD_QCD_3",&FatJet_particleNetMD_QCD_3,"FatJet_particleNetMD_QCD_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xbb_1",&FatJet_particleNetMD_Xbb_1,"FatJet_particleNetMD_Xbb_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xbb_2",&FatJet_particleNetMD_Xbb_2,"FatJet_particleNetMD_Xbb_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xbb_3",&FatJet_particleNetMD_Xbb_3,"FatJet_particleNetMD_Xbb_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xcc_1",&FatJet_particleNetMD_Xcc_1,"FatJet_particleNetMD_Xcc_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xcc_2",&FatJet_particleNetMD_Xcc_2,"FatJet_particleNetMD_Xcc_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xcc_3",&FatJet_particleNetMD_Xcc_3,"FatJet_particleNetMD_Xcc_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xqq_1",&FatJet_particleNetMD_Xqq_1,"FatJet_particleNetMD_Xqq_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xqq_2",&FatJet_particleNetMD_Xqq_2,"FatJet_particleNetMD_Xqq_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xqq_3",&FatJet_particleNetMD_Xqq_3,"FatJet_particleNetMD_Xqq_3/F");
      
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_1",&FatJet_particleNet_H4qvsQCD_1,"FatJet_particleNet_H4qvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_2",&FatJet_particleNet_H4qvsQCD_2,"FatJet_particleNet_H4qvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_3",&FatJet_particleNet_H4qvsQCD_3,"FatJet_particleNet_H4qvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_1",&FatJet_particleNet_HbbvsQCD_1,"FatJet_particleNet_HbbvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_2",&FatJet_particleNet_HbbvsQCD_2,"FatJet_particleNet_HbbvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_3",&FatJet_particleNet_HbbvsQCD_3,"FatJet_particleNet_HbbvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_HccvsQCD_1",&FatJet_particleNet_HccvsQCD_1,"FatJet_particleNet_HccvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_HccvsQCD_2",&FatJet_particleNet_HccvsQCD_2,"FatJet_particleNet_HccvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_HccvsQCD_3",&FatJet_particleNet_HccvsQCD_3,"FatJet_particleNet_HccvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_QCD_1",&FatJet_particleNet_QCD_1,"FatJet_particleNet_QCD_1/F");
   ExTree->Branch("FatJet_particleNet_QCD_2",&FatJet_particleNet_QCD_2,"FatJet_particleNet_QCD_2/F");
   ExTree->Branch("FatJet_particleNet_QCD_3",&FatJet_particleNet_QCD_3,"FatJet_particleNet_QCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_TvsQCD_1",&FatJet_particleNet_TvsQCD_1,"FatJet_particleNet_TvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_TvsQCD_2",&FatJet_particleNet_TvsQCD_2,"FatJet_particleNet_TvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_TvsQCD_3",&FatJet_particleNet_TvsQCD_3,"FatJet_particleNet_TvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_WvsQCD_1",&FatJet_particleNet_WvsQCD_1,"FatJet_particleNet_WvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_WvsQCD_2",&FatJet_particleNet_WvsQCD_2,"FatJet_particleNet_WvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_WvsQCD_3",&FatJet_particleNet_WvsQCD_3,"FatJet_particleNet_WvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_ZvsQCD_1",&FatJet_particleNet_ZvsQCD_1,"FatJet_particleNet_ZvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_ZvsQCD_2",&FatJet_particleNet_ZvsQCD_2,"FatJet_particleNet_ZvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_ZvsQCD_3",&FatJet_particleNet_ZvsQCD_3,"FatJet_particleNet_ZvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_mass_1",&FatJet_particleNet_mass_1,"FatJet_particleNet_mass_1/F");
   ExTree->Branch("FatJet_particleNet_mass_2",&FatJet_particleNet_mass_2,"FatJet_particleNet_mass_2/F");
   ExTree->Branch("FatJet_particleNet_mass_3",&FatJet_particleNet_mass_3,"FatJet_particleNet_mass_3/F");

   ExTree->Branch("PartNet_MD_W_a",&PartNet_MD_W_a,"PartNet_MD_W_a/F");
   ExTree->Branch("PartNet_MD_W_b",&PartNet_MD_W_b,"PartNet_MD_W_b/F");
   ExTree->Branch("PartNet_MD_W_c",&PartNet_MD_W_c,"PartNet_MD_W_c/F");

   ExTree->Branch("FatJet_tau1_a",&FatJet_tau1_a,"FatJet_tau1_a/F");
   ExTree->Branch("FatJet_tau1_b",&FatJet_tau1_b,"FatJet_tau1_b/F");
   ExTree->Branch("FatJet_tau1_c",&FatJet_tau1_c,"FatJet_tau1_c/F");
   ExTree->Branch("FatJet_tau2_a",&FatJet_tau2_a,"FatJet_tau2_a/F");
   ExTree->Branch("FatJet_tau2_b",&FatJet_tau2_b,"FatJet_tau2_b/F");
   ExTree->Branch("FatJet_tau2_c",&FatJet_tau2_c,"FatJet_tau2_c/F");
   ExTree->Branch("FatJet_tau3_a",&FatJet_tau3_a,"FatJet_tau3_a/F");
   ExTree->Branch("FatJet_tau3_b",&FatJet_tau3_b,"FatJet_tau3_b/F");
   ExTree->Branch("FatJet_tau3_c",&FatJet_tau3_c,"FatJet_tau3_c/F");
   ExTree->Branch("FatJet_tau4_a",&FatJet_tau4_a,"FatJet_tau4_a/F");
   ExTree->Branch("FatJet_tau4_b",&FatJet_tau4_b,"FatJet_tau4_b/F");
   ExTree->Branch("FatJet_tau4_c",&FatJet_tau4_c,"FatJet_tau4_c/F");
      

   ExTree->Branch("num_ak4jetsex", &num_ak4jetsex, "num_ak4jetsex/I");
   ExTree->Branch("num_ak4jetsin", &num_ak4jetsin, "num_ak4jetsin/I");


   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");

      
   ExTree->Branch("MJJ", &MJJ, "MJJ/D");
      
   ExTree->Branch("event",&event,"event/L");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");

   ExTree->Branch("weight", &weight, "weight/D");
   
   ExTree->Branch("Mj_max",&Mj_max,"Mj_max/F");
   ExTree->Branch("Mj_mid",&Mj_mid,"Mj_mid/F");
   ExTree->Branch("Mj_min",&Mj_min,"Mj_min/F");
   ExTree->Branch("PTj_max",&PTj_max,"PTj_max/F");
   ExTree->Branch("PTj_mid",&PTj_mid,"PTj_mid/F");
   ExTree->Branch("PTj_min",&PTj_min,"PTj_min/F");
   

   ExTree->Branch("Etaj_max",&Etaj_max,"Etaj_max/F");
   ExTree->Branch("Etaj_mid",&Etaj_mid,"Etaj_mid/F");
   ExTree->Branch("Etaj_min",&Etaj_min,"Etaj_min/F");
   ExTree->Branch("Phij_max",&Phij_max,"Phij_max/F");
   ExTree->Branch("Phij_mid",&Phij_mid,"Phij_mid/F");
   ExTree->Branch("Phij_min",&Phij_min,"Phij_min/F");
   
   ExTree->Branch("PTj",&PTj,"PTj/F");
   ExTree->Branch("PTj_2",&PTj_2,"PTj_2/D");
   ExTree->Branch("PTj_3",&PTj_3,"PTj_3/D");
   ExTree->Branch("PTj_4",&PTj_4,"PTj_4/F");
   ExTree->Branch("Etaj",&Etaj,"Etaj/F");
   ExTree->Branch("Etaj_2",&Etaj_2,"Etaj_2/F");
   ExTree->Branch("Etaj_3",&Etaj_3,"Etaj_3/F");
   ExTree->Branch("Etaj_4",&Etaj_4,"Etaj_4/F");
   ExTree->Branch("Phij",&Phij,"Phij/F");
   ExTree->Branch("Phij_2",&Phij_2,"Phij_2/F");
   ExTree->Branch("Phij_4",&Phij_4,"Phij_4/F");
   ExTree->Branch("Phij_3",&Phij_3,"Phij_3/F");

   ExTree->Branch("ST",&ST,"ST/F");
   ExTree->Branch("HT",&HT,"HT/F");
   ExTree->Branch("Nj4",&Nj4,"Nj4/I");
   ExTree->Branch("Nj8",&Nj8,"Nj8/I");
   ExTree->Branch("MJJJ",&MJJJ,"MJJJ/F");

   ExTree->Branch("Nj4_ex",&Nj4_ex,"Nj4_ex/I");
   ExTree->Branch("Nj4_in",&Nj4_in,"Nj4_in/I");

   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");

   ExTree->Branch("dnn_probTbcq_a",&dnn_probTbcq_a,"dnn_probTbcq_a/F");
   ExTree->Branch("dnn_probTbcq_b",&dnn_probTbcq_b,"dnn_probTbcq_b/F");
   ExTree->Branch("dnn_probTbcq_c",&dnn_probTbcq_c,"dnn_probTbcq_c/F");
   ExTree->Branch("dnn_probTbqq_a",&dnn_probTbqq_a,"dnn_probTbqq_a/F");
   ExTree->Branch("dnn_probTbqq_b",&dnn_probTbqq_b,"dnn_probTbqq_b/F");
   ExTree->Branch("dnn_probTbqq_c",&dnn_probTbqq_c,"dnn_probTbqq_c/F");
   ExTree->Branch("dnn_probTbc_a",&dnn_probTbc_a,"dnn_probTbc_a/F");
   ExTree->Branch("dnn_probTbc_b",&dnn_probTbc_b,"dnn_probTbc_b/F");
   ExTree->Branch("dnn_probTbc_c",&dnn_probTbc_c,"dnn_probTbc_c/F");
   ExTree->Branch("dnn_probTbq_a",&dnn_probTbq_a,"dnn_probTbq_a/F");
   ExTree->Branch("dnn_probTbq_b",&dnn_probTbq_b,"dnn_probTbq_b/F");
   ExTree->Branch("dnn_probTbq_c",&dnn_probTbq_c,"dnn_probTbq_c/F");
   ExTree->Branch("dnn_probWcq_a",&dnn_probWcq_a,"dnn_probWcq_a/F");
   ExTree->Branch("dnn_probWcq_b",&dnn_probWcq_b,"dnn_probWcq_b/F");
   ExTree->Branch("dnn_probWcq_c",&dnn_probWcq_c,"dnn_probWcq_c/F");
   ExTree->Branch("dnn_probWqq_a",&dnn_probWqq_a,"dnn_probWqq_a/F");
   ExTree->Branch("dnn_probWqq_b",&dnn_probWqq_b,"dnn_probWqq_b/F");
   ExTree->Branch("dnn_probWqq_c",&dnn_probWqq_c,"dnn_probWqq_c/F");
   ExTree->Branch("dnn_probZbb_a",&dnn_probZbb_a,"dnn_probZbb_a/F");
   ExTree->Branch("dnn_probZbb_b",&dnn_probZbb_b,"dnn_probZbb_b/F");
   ExTree->Branch("dnn_probZbb_c",&dnn_probZbb_c,"dnn_probZbb_c/F");
   ExTree->Branch("dnn_probZcc_a",&dnn_probZcc_a,"dnn_probZcc_a/F");
   ExTree->Branch("dnn_probZcc_b",&dnn_probZcc_b,"dnn_probZcc_b/F");
   ExTree->Branch("dnn_probZcc_c",&dnn_probZcc_c,"dnn_probZcc_c/F");
   ExTree->Branch("dnn_probZqq_a",&dnn_probZqq_a,"dnn_probZqq_a/F");
   ExTree->Branch("dnn_probZqq_b",&dnn_probZqq_b,"dnn_probZqq_b/F");
   ExTree->Branch("dnn_probZqq_c",&dnn_probZqq_c,"dnn_probZqq_c/F");
   ExTree->Branch("dnn_probHbb_a",&dnn_probHbb_a,"dnn_probHbb_a/F");
   ExTree->Branch("dnn_probHbb_b",&dnn_probHbb_b,"dnn_probHbb_b/F");
   ExTree->Branch("dnn_probHbb_c",&dnn_probHbb_c,"dnn_probHbb_c/F");
   ExTree->Branch("dnn_probHcc_a",&dnn_probHcc_a,"dnn_probHcc_a/F");
   ExTree->Branch("dnn_probHcc_b",&dnn_probHcc_b,"dnn_probHcc_b/F");
   ExTree->Branch("dnn_probHcc_c",&dnn_probHcc_c,"dnn_probHcc_c/F");
   ExTree->Branch("dnn_probHqqqq_a",&dnn_probHqqqq_a,"dnn_probHqqqq_a/F");
   ExTree->Branch("dnn_probHqqqq_b",&dnn_probHqqqq_b,"dnn_probHqqqq_b/F");
   ExTree->Branch("dnn_probHqqqq_c",&dnn_probHqqqq_c,"dnn_probHqqqq_c/F");
   ExTree->Branch("dnn_probQCDbb_a",&dnn_probQCDbb_a,"dnn_probQCDbb_a/F");
   ExTree->Branch("dnn_probQCDbb_b",&dnn_probQCDbb_b,"dnn_probQCDbb_b/F");
   ExTree->Branch("dnn_probQCDbb_c",&dnn_probQCDbb_c,"dnn_probQCDbb_c/F");
   ExTree->Branch("dnn_probQCDcc_a",&dnn_probQCDcc_a,"dnn_probQCDcc_a/F");
   ExTree->Branch("dnn_probQCDcc_b",&dnn_probQCDcc_b,"dnn_probQCDcc_b/F");
   ExTree->Branch("dnn_probQCDcc_c",&dnn_probQCDcc_c,"dnn_probQCDcc_c/F");
   ExTree->Branch("dnn_probQCDb_a",&dnn_probQCDb_a,"dnn_probQCDb_a/F");
   ExTree->Branch("dnn_probQCDb_b",&dnn_probQCDb_b,"dnn_probQCDb_b/F");
   ExTree->Branch("dnn_probQCDb_c",&dnn_probQCDb_c,"dnn_probQCDb_c/F");
   ExTree->Branch("dnn_probQCDc_a",&dnn_probQCDc_a,"dnn_probQCDc_a/F");
   ExTree->Branch("dnn_probQCDc_b",&dnn_probQCDc_b,"dnn_probQCDc_b/F");
   ExTree->Branch("dnn_probQCDc_c",&dnn_probQCDc_c,"dnn_probQCDc_c/F");
   ExTree->Branch("dnn_probQCDothers_a",&dnn_probQCDothers_a,"dnn_probQCDothers_a/F");
   ExTree->Branch("dnn_probQCDothers_b",&dnn_probQCDothers_b,"dnn_probQCDothers_b/F");
   ExTree->Branch("dnn_probQCDothers_c",&dnn_probQCDothers_c,"dnn_probQCDothers_c/F");
   ExTree->Branch("dnnDecorr_probTbcq_a",&dnnDecorr_probTbcq_a,"dnnDecorr_probTbcq_a/F");
   ExTree->Branch("dnnDecorr_probTbcq_b",&dnnDecorr_probTbcq_b,"dnnDecorr_probTbcq_b/F");
   ExTree->Branch("dnnDecorr_probTbcq_c",&dnnDecorr_probTbcq_c,"dnnDecorr_probTbcq_c/F");
   ExTree->Branch("dnnDecorr_probTbqq_a",&dnnDecorr_probTbqq_a,"dnnDecorr_probTbqq_a/F");
   ExTree->Branch("dnnDecorr_probTbqq_b",&dnnDecorr_probTbqq_b,"dnnDecorr_probTbqq_b/F");
   ExTree->Branch("dnnDecorr_probTbqq_c",&dnnDecorr_probTbqq_c,"dnnDecorr_probTbqq_c/F");
   ExTree->Branch("dnnDecorr_probTbc_a",&dnnDecorr_probTbc_a,"dnnDecorr_probTbc_a/F");
   ExTree->Branch("dnnDecorr_probTbc_b",&dnnDecorr_probTbc_b,"dnnDecorr_probTbc_b/F");
   ExTree->Branch("dnnDecorr_probTbc_c",&dnnDecorr_probTbc_c,"dnnDecorr_probTbc_c/F");
   ExTree->Branch("dnnDecorr_probTbq_a",&dnnDecorr_probTbq_a,"dnnDecorr_probTbq_a/F");
   ExTree->Branch("dnnDecorr_probTbq_b",&dnnDecorr_probTbq_b,"dnnDecorr_probTbq_b/F");
   ExTree->Branch("dnnDecorr_probTbq_c",&dnnDecorr_probTbq_c,"dnnDecorr_probTbq_c/F");
   ExTree->Branch("dnnDecorr_probWcq_a",&dnnDecorr_probWcq_a,"dnnDecorr_probWcq_a/F");
   ExTree->Branch("dnnDecorr_probWcq_b",&dnnDecorr_probWcq_b,"dnnDecorr_probWcq_b/F");
   ExTree->Branch("dnnDecorr_probWcq_c",&dnnDecorr_probWcq_c,"dnnDecorr_probWcq_c/F");
   ExTree->Branch("dnnDecorr_probWqq_a",&dnnDecorr_probWqq_a,"dnnDecorr_probWqq_a/F");
   ExTree->Branch("dnnDecorr_probWqq_b",&dnnDecorr_probWqq_b,"dnnDecorr_probWqq_b/F");
   ExTree->Branch("dnnDecorr_probWqq_c",&dnnDecorr_probWqq_c,"dnnDecorr_probWqq_c/F");
   ExTree->Branch("dnnDecorr_probZbb_a",&dnnDecorr_probZbb_a,"dnnDecorr_probZbb_a/F");
   ExTree->Branch("dnnDecorr_probZbb_b",&dnnDecorr_probZbb_b,"dnnDecorr_probZbb_b/F");
   ExTree->Branch("dnnDecorr_probZbb_c",&dnnDecorr_probZbb_c,"dnnDecorr_probZbb_c/F");
   ExTree->Branch("dnnDecorr_probZcc_a",&dnnDecorr_probZcc_a,"dnnDecorr_probZcc_a/F");
   ExTree->Branch("dnnDecorr_probZcc_b",&dnnDecorr_probZcc_b,"dnnDecorr_probZcc_b/F");
   ExTree->Branch("dnnDecorr_probZcc_c",&dnnDecorr_probZcc_c,"dnnDecorr_probZcc_c/F");
   ExTree->Branch("dnnDecorr_probZqq_a",&dnnDecorr_probZqq_a,"dnnDecorr_probZqq_a/F");
   ExTree->Branch("dnnDecorr_probZqq_b",&dnnDecorr_probZqq_b,"dnnDecorr_probZqq_b/F");
   ExTree->Branch("dnnDecorr_probZqq_c",&dnnDecorr_probZqq_c,"dnnDecorr_probZqq_c/F");
   ExTree->Branch("dnnDecorr_probHbb_a",&dnnDecorr_probHbb_a,"dnnDecorr_probHbb_a/F");
   ExTree->Branch("dnnDecorr_probHbb_b",&dnnDecorr_probHbb_b,"dnnDecorr_probHbb_b/F");
   ExTree->Branch("dnnDecorr_probHbb_c",&dnnDecorr_probHbb_c,"dnnDecorr_probHbb_c/F");
   ExTree->Branch("dnnDecorr_probHcc_a",&dnnDecorr_probHcc_a,"dnnDecorr_probHcc_a/F");
   ExTree->Branch("dnnDecorr_probHcc_b",&dnnDecorr_probHcc_b,"dnnDecorr_probHcc_b/F");
   ExTree->Branch("dnnDecorr_probHcc_c",&dnnDecorr_probHcc_c,"dnnDecorr_probHcc_c/F");
   ExTree->Branch("dnnDecorr_probHqqqq_a",&dnnDecorr_probHqqqq_a,"dnnDecorr_probHqqqq_a/F");
   ExTree->Branch("dnnDecorr_probHqqqq_b",&dnnDecorr_probHqqqq_b,"dnnDecorr_probHqqqq_b/F");
   ExTree->Branch("dnnDecorr_probHqqqq_c",&dnnDecorr_probHqqqq_c,"dnnDecorr_probHqqqq_c/F");
   ExTree->Branch("dnnDecorr_probQCDbb_a",&dnnDecorr_probQCDbb_a,"dnnDecorr_probQCDbb_a/F");
   ExTree->Branch("dnnDecorr_probQCDbb_b",&dnnDecorr_probQCDbb_b,"dnnDecorr_probQCDbb_b/F");
   ExTree->Branch("dnnDecorr_probQCDbb_c",&dnnDecorr_probQCDbb_c,"dnnDecorr_probQCDbb_c/F");
   ExTree->Branch("dnnDecorr_probQCDcc_a",&dnnDecorr_probQCDcc_a,"dnnDecorr_probQCDcc_a/F");
   ExTree->Branch("dnnDecorr_probQCDcc_b",&dnnDecorr_probQCDcc_b,"dnnDecorr_probQCDcc_b/F");
   ExTree->Branch("dnnDecorr_probQCDcc_c",&dnnDecorr_probQCDcc_c,"dnnDecorr_probQCDcc_c/F");
   ExTree->Branch("dnnDecorr_probQCDb_a",&dnnDecorr_probQCDb_a,"dnnDecorr_probQCDb_a/F");
   ExTree->Branch("dnnDecorr_probQCDb_b",&dnnDecorr_probQCDb_b,"dnnDecorr_probQCDb_b/F");
   ExTree->Branch("dnnDecorr_probQCDb_c",&dnnDecorr_probQCDb_c,"dnnDecorr_probQCDb_c/F");
   ExTree->Branch("dnnDecorr_probQCDc_a",&dnnDecorr_probQCDc_a,"dnnDecorr_probQCDc_a/F");
   ExTree->Branch("dnnDecorr_probQCDc_b",&dnnDecorr_probQCDc_b,"dnnDecorr_probQCDc_b/F");
   ExTree->Branch("dnnDecorr_probQCDc_c",&dnnDecorr_probQCDc_c,"dnnDecorr_probQCDc_c/F");
   ExTree->Branch("dnnDecorr_probQCDothers_a",&dnnDecorr_probQCDothers_a,"dnnDecorr_probQCDothers_a/F");
   ExTree->Branch("dnnDecorr_probQCDothers_b",&dnnDecorr_probQCDothers_b,"dnnDecorr_probQCDothers_b/F");
   ExTree->Branch("dnnDecorr_probQCDothers_c",&dnnDecorr_probQCDothers_c,"dnnDecorr_probQCDothers_c/F");

   ExTree->Branch("Mj_a",&Mj_a,"Mj_a/F");
   ExTree->Branch("Mj_b",&Mj_b,"Mj_b/F");
   ExTree->Branch("Mj_c",&Mj_c,"Mj_c/F");
   ExTree->Branch("PTj_a",&PTj_a,"PTj_a/F");
   ExTree->Branch("PTj_b",&PTj_b,"PTj_b/F");
   ExTree->Branch("PTj_c",&PTj_c,"PTj_c/F");
   ExTree->Branch("Etaj_a",&Etaj_a,"Etaj_a/F");
   ExTree->Branch("Etaj_b",&Etaj_b,"Etaj_b/F");
   ExTree->Branch("Etaj_c",&Etaj_c,"Etaj_c/F");
   ExTree->Branch("Phij_a",&Phij_a,"Phij_a/F");
   ExTree->Branch("Phij_b",&Phij_b,"Phij_b/F");
   ExTree->Branch("Phij_c",&Phij_c,"Phij_c/F");

   ExTree->Branch("Mj_Pneta",&Mj_Pneta,"Mj_Pneta/F");
   ExTree->Branch("Mj_Pnetb",&Mj_Pnetb,"Mj_Pnetb/F");
   ExTree->Branch("Mj_Pnetc",&Mj_Pnetc,"Mj_Pnetc/F");
   ExTree->Branch("PTj_Pneta",&PTj_Pneta,"PTj_Pneta/F");
   ExTree->Branch("PTj_Pnetb",&PTj_Pnetb,"PTj_Pnetb/F");
   ExTree->Branch("PTj_Pnetc",&PTj_Pnetc,"PTj_Pnetc/F");
   ExTree->Branch("Etaj_Pneta",&Etaj_Pneta,"Etaj_Pneta/F");
   ExTree->Branch("Etaj_Pnetb",&Etaj_Pnetb,"Etaj_Pnetb/F");
   ExTree->Branch("Etaj_Pnetc",&Etaj_Pnetc,"Etaj_Pnetc/F");
   ExTree->Branch("Phij_Pneta",&Phij_Pneta,"Phij_Pneta/F");
   ExTree->Branch("Phij_Pnetb",&Phij_Pnetb,"Phij_Pnetb/F");
   ExTree->Branch("Phij_Pnetc",&Phij_Pnetc,"Phij_Pnetc/F");

   ExTree->Branch("PartNet_MD_W_Pneta",&PartNet_MD_W_Pneta,"PartNet_MD_W_Pneta/F");
   ExTree->Branch("PartNet_MD_W_Pnetb",&PartNet_MD_W_Pnetb,"PartNet_MD_W_Pnetb/F");
   ExTree->Branch("PartNet_MD_W_Pnetc",&PartNet_MD_W_Pnetc,"PartNet_MD_W_Pnetc/F");

   ExTree->Branch("dnnDecorr_probTbcq_Pnetc",&dnnDecorr_probTbcq_Pnetc,"dnnDecorr_probTbcq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbqq_Pnetc",&dnnDecorr_probTbqq_Pnetc,"dnnDecorr_probTbqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbc_Pnetc",&dnnDecorr_probTbc_Pnetc,"dnnDecorr_probTbc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbq_Pnetc",&dnnDecorr_probTbq_Pnetc,"dnnDecorr_probTbq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probWcq_Pnetc",&dnnDecorr_probWcq_Pnetc,"dnnDecorr_probWcq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probWqq_Pnetc",&dnnDecorr_probWqq_Pnetc,"dnnDecorr_probWqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZbb_Pnetc",&dnnDecorr_probZbb_Pnetc,"dnnDecorr_probZbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZcc_Pnetc",&dnnDecorr_probZcc_Pnetc,"dnnDecorr_probZcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZqq_Pnetc",&dnnDecorr_probZqq_Pnetc,"dnnDecorr_probZqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHbb_Pnetc",&dnnDecorr_probHbb_Pnetc,"dnnDecorr_probHbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHcc_Pnetc",&dnnDecorr_probHcc_Pnetc,"dnnDecorr_probHcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHqqqq_Pnetc",&dnnDecorr_probHqqqq_Pnetc,"dnnDecorr_probHqqqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDbb_Pnetc",&dnnDecorr_probQCDbb_Pnetc,"dnnDecorr_probQCDbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDcc_Pnetc",&dnnDecorr_probQCDcc_Pnetc,"dnnDecorr_probQCDcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDb_Pnetc",&dnnDecorr_probQCDb_Pnetc,"dnnDecorr_probQCDb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDc_Pnetc",&dnnDecorr_probQCDc_Pnetc,"dnnDecorr_probQCDc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDothers_Pnetc",&dnnDecorr_probQCDothers_Pnetc,"dnnDecorr_probQCDothers_Pnetc/F");

   ExTree->Branch("FatJet_tau1_Pneta",&FatJet_tau1_Pneta,"FatJet_tau1_Pneta/F");
   ExTree->Branch("FatJet_tau2_Pneta",&FatJet_tau2_Pneta,"FatJet_tau2_Pneta/F");
   ExTree->Branch("FatJet_tau3_Pneta",&FatJet_tau3_Pneta,"FatJet_tau3_Pneta/F");
   ExTree->Branch("FatJet_tau4_Pneta",&FatJet_tau4_Pneta,"FatJet_tau4_Pneta/F");
   ExTree->Branch("FatJet_tau1_Pnetb",&FatJet_tau1_Pnetb,"FatJet_tau1_Pnetb/F");
   ExTree->Branch("FatJet_tau2_Pnetb",&FatJet_tau2_Pnetb,"FatJet_tau2_Pnetb/F");
   ExTree->Branch("FatJet_tau3_Pnetb",&FatJet_tau3_Pnetb,"FatJet_tau3_Pnetb/F");
   ExTree->Branch("FatJet_tau4_Pnetb",&FatJet_tau4_Pnetb,"FatJet_tau4_Pnetb/F");
   ExTree->Branch("FatJet_tau1_Pnetc",&FatJet_tau1_Pnetc,"FatJet_tau1_Pnetc/F");
   ExTree->Branch("FatJet_tau2_Pnetc",&FatJet_tau2_Pnetc,"FatJet_tau2_Pnetc/F");
   ExTree->Branch("FatJet_tau3_Pnetc",&FatJet_tau3_Pnetc,"FatJet_tau3_Pnetc/F");
   ExTree->Branch("FatJet_tau4_Pnetc",&FatJet_tau4_Pnetc,"FatJet_tau4_Pnetc/F");

   ExTree->Branch("dnnTop_a",&dnnTop_a,"dnnTop_a/F");
   ExTree->Branch("dnnTop_b",&dnnTop_b,"dnnTop_b/F");
   ExTree->Branch("dnnTop_c",&dnnTop_c,"dnnTop_c/F");
   ExTree->Branch("dnnW_a",&dnnW_a,"dnnW_a/F");
   ExTree->Branch("dnnW_b",&dnnW_b,"dnnW_b/F");
   ExTree->Branch("dnnW_c",&dnnW_c,"dnnW_c/F");
   ExTree->Branch("dnnH4q_a",&dnnH4q_a,"dnnH4q_a/F");
   ExTree->Branch("dnnH4q_b",&dnnH4q_b,"dnnH4q_b/F");
   ExTree->Branch("dnnH4q_c",&dnnH4q_c,"dnnH4q_c/F");
   ExTree->Branch("dnnZ_a",&dnnZ_a,"dnnZ_a/F");
   ExTree->Branch("dnnZ_b",&dnnZ_b,"dnnZ_b/F");
   ExTree->Branch("dnnZ_c",&dnnZ_c,"dnnZ_c/F");
   ExTree->Branch("dnnZbb_a",&dnnZbb_a,"dnnZbb_a/F");
   ExTree->Branch("dnnZbb_b",&dnnZbb_b,"dnnZbb_b/F");
   ExTree->Branch("dnnZbb_c",&dnnZbb_c,"dnnZbb_c/F");
   ExTree->Branch("dnnHbb_a",&dnnHbb_a,"dnnHbb_a/F");
   ExTree->Branch("dnnHbb_b",&dnnHbb_b,"dnnHbb_b/F");
   ExTree->Branch("dnnHbb_c",&dnnHbb_c,"dnnHbb_c/F");
   ExTree->Branch("dnnDecorrTop_a",&dnnDecorrTop_a,"dnnDecorrTop_a/F");
   ExTree->Branch("dnnDecorrTop_b",&dnnDecorrTop_b,"dnnDecorrTop_b/F");
   ExTree->Branch("dnnDecorrTop_c",&dnnDecorrTop_c,"dnnDecorrTop_c/F");
   ExTree->Branch("dnnDecorrW_a",&dnnDecorrW_a,"dnnDecorrW_a/F");
   ExTree->Branch("dnnDecorrW_b",&dnnDecorrW_b,"dnnDecorrW_b/F");
   ExTree->Branch("dnnDecorrW_c",&dnnDecorrW_c,"dnnDecorrW_c/F");
   ExTree->Branch("dnnDecorrH4q_a",&dnnDecorrH4q_a,"dnnDecorrH4q_a/F");
   ExTree->Branch("dnnDecorrH4q_b",&dnnDecorrH4q_b,"dnnDecorrH4q_b/F");
   ExTree->Branch("dnnDecorrH4q_c",&dnnDecorrH4q_c,"dnnDecorrH4q_c/F");
   ExTree->Branch("dnnDecorrZ_a",&dnnDecorrZ_a,"dnnDecorrZ_a/F");
   ExTree->Branch("dnnDecorrZ_b",&dnnDecorrZ_b,"dnnDecorrZ_b/F");
   ExTree->Branch("dnnDecorrZ_c",&dnnDecorrZ_c,"dnnDecorrZ_c/F");
   ExTree->Branch("dnnDecorrZbb_a",&dnnDecorrZbb_a,"dnnDecorrZbb_a/F");
   ExTree->Branch("dnnDecorrZbb_b",&dnnDecorrZbb_b,"dnnDecorrZbb_b/F");
   ExTree->Branch("dnnDecorrZbb_c",&dnnDecorrZbb_c,"dnnDecorrZbb_c/F");
   ExTree->Branch("dnnDecorrHbb_a",&dnnDecorrHbb_a,"dnnDecorrHbb_a/F");
   ExTree->Branch("dnnDecorrHbb_b",&dnnDecorrHbb_b,"dnnDecorrHbb_b/F");
   ExTree->Branch("dnnDecorrHbb_c",&dnnDecorrHbb_c,"dnnDecorrHbb_c/F");
   ExTree->Branch("dnnDecorrbb_a",&dnnDecorrbb_a,"dnnDecorrbb_a/F");
   ExTree->Branch("dnnDecorrbb_b",&dnnDecorrbb_b,"dnnDecorrbb_b/F");
   ExTree->Branch("dnnDecorrbb_c",&dnnDecorrbb_c,"dnnDecorrbb_c/F");
   ExTree->Branch("dnnDecorrcc_a",&dnnDecorrcc_a,"dnnDecorrcc_a/F");
   ExTree->Branch("dnnDecorrcc_b",&dnnDecorrcc_b,"dnnDecorrcc_b/F");
   ExTree->Branch("dnnDecorrcc_c",&dnnDecorrcc_c,"dnnDecorrcc_c/F");
   ExTree->Branch("dnnDecorrbbnog_a",&dnnDecorrbbnog_a,"dnnDecorrbbnog_a/F");
   ExTree->Branch("dnnDecorrbbnog_b",&dnnDecorrbbnog_b,"dnnDecorrbbnog_b/F");
   ExTree->Branch("dnnDecorrbbnog_c",&dnnDecorrbbnog_c,"dnnDecorrbbnog_c/F");
   ExTree->Branch("dnnDecorrccnog_a",&dnnDecorrccnog_a,"dnnDecorrccnog_a/F");
   ExTree->Branch("dnnDecorrccnog_b",&dnnDecorrccnog_b,"dnnDecorrccnog_b/F");
   ExTree->Branch("dnnDecorrccnog_c",&dnnDecorrccnog_c,"dnnDecorrccnog_c/F");
   ExTree->Branch("dnnqcd_a",&dnnqcd_a,"dnnqcd_a/F");
   ExTree->Branch("dnnqcd_b",&dnnqcd_b,"dnnqcd_b/F");
   ExTree->Branch("dnnqcd_c",&dnnqcd_c,"dnnqcd_c/F");
   ExTree->Branch("dnntop_a",&dnntop_a,"dnntop_a/F");
   ExTree->Branch("dnntop_b",&dnntop_b,"dnntop_b/F");
   ExTree->Branch("dnntop_c",&dnntop_c,"dnntop_c/F");
   ExTree->Branch("dnnw_a",&dnnw_a,"dnnw_a/F");
   ExTree->Branch("dnnw_b",&dnnw_b,"dnnw_b/F");
   ExTree->Branch("dnnw_c",&dnnw_c,"dnnw_c/F");
   ExTree->Branch("dnnz_a",&dnnz_a,"dnnz_a/F");
   ExTree->Branch("dnnz_b",&dnnz_b,"dnnz_b/F");
   ExTree->Branch("dnnz_c",&dnnz_c,"dnnz_c/F");
   ExTree->Branch("dnnzbb_a",&dnnzbb_a,"dnnzbb_a/F");
   ExTree->Branch("dnnzbb_b",&dnnzbb_b,"dnnzbb_b/F");
   ExTree->Branch("dnnzbb_c",&dnnzbb_c,"dnnzbb_c/F");
   ExTree->Branch("dnnhbb_a",&dnnhbb_a,"dnnhbb_a/F");
   ExTree->Branch("dnnhbb_b",&dnnhbb_b,"dnnhbb_b/F");
   ExTree->Branch("dnnhbb_c",&dnnhbb_c,"dnnhbb_c/F");
   ExTree->Branch("dnnh4q_a",&dnnh4q_a,"dnnh4q_a/F");
   ExTree->Branch("dnnh4q_b",&dnnh4q_b,"dnnh4q_b/F");
   ExTree->Branch("dnnh4q_c",&dnnh4q_c,"dnnh4q_c/F");
   ExTree->Branch("dnnDecorrqcd_a",&dnnDecorrqcd_a,"dnnDecorrqcd_a/F");
   ExTree->Branch("dnnDecorrqcd_b",&dnnDecorrqcd_b,"dnnDecorrqcd_b/F");
   ExTree->Branch("dnnDecorrqcd_c",&dnnDecorrqcd_c,"dnnDecorrqcd_c/F");
   ExTree->Branch("dnnDecorrtop_a",&dnnDecorrtop_a,"dnnDecorrtop_a/F");
   ExTree->Branch("dnnDecorrtop_b",&dnnDecorrtop_b,"dnnDecorrtop_b/F");
   ExTree->Branch("dnnDecorrtop_c",&dnnDecorrtop_c,"dnnDecorrtop_c/F");
   ExTree->Branch("dnnDecorrw_a",&dnnDecorrw_a,"dnnDecorrw_a/F");
   ExTree->Branch("dnnDecorrw_b",&dnnDecorrw_b,"dnnDecorrw_b/F");
   ExTree->Branch("dnnDecorrw_c",&dnnDecorrw_c,"dnnDecorrw_c/F");
   ExTree->Branch("dnnDecorrz_a",&dnnDecorrz_a,"dnnDecorrz_a/F");
   ExTree->Branch("dnnDecorrz_b",&dnnDecorrz_b,"dnnDecorrz_b/F");
   ExTree->Branch("dnnDecorrz_c",&dnnDecorrz_c,"dnnDecorrz_c/F");
   ExTree->Branch("dnnDecorrzbb_a",&dnnDecorrzbb_a,"dnnDecorrzbb_a/F");
   ExTree->Branch("dnnDecorrzbb_b",&dnnDecorrzbb_b,"dnnDecorrzbb_b/F");
   ExTree->Branch("dnnDecorrzbb_c",&dnnDecorrzbb_c,"dnnDecorrzbb_c/F");
   ExTree->Branch("dnnDecorrhbb_a",&dnnDecorrhbb_a,"dnnDecorrhbb_a/F");
   ExTree->Branch("dnnDecorrhbb_b",&dnnDecorrhbb_b,"dnnDecorrhbb_b/F");
   ExTree->Branch("dnnDecorrhbb_c",&dnnDecorrhbb_c,"dnnDecorrhbb_c/F");
   ExTree->Branch("dnnDecorrh4q_a",&dnnDecorrh4q_a,"dnnDecorrh4q_a/F");
   ExTree->Branch("dnnDecorrh4q_b",&dnnDecorrh4q_b,"dnnDecorrh4q_b/F");
   ExTree->Branch("dnnDecorrh4q_c",&dnnDecorrh4q_c,"dnnDecorrh4q_c/F");

   ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
   ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
   ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
   ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
   ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
   ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");

   // define ExTree for gKK 0lepton output

   ExTree->Branch("MET_phi_NoXYCorr",&MET_phi_NoXYCorr,"MET_phi_NoXYCorr/F");
   ExTree->Branch("MET_et_NoXYCorr",&MET_et_NoXYCorr,"MET_et_NoXYCorr/F");
   
   ExTree->Branch("Jet_mass_nom_out",&Jet_mass_nom_out);
   ExTree->Branch("Jet_pt_nom_out",&Jet_pt_nom_out);

   ExTree->Branch("Jet_pt_out",&Jet_pt_out);
   ExTree->Branch("Jet_eta_out",&Jet_eta_out);
   ExTree->Branch("Jet_phi_out",&Jet_phi_out);
   ExTree->Branch("Jet_mass_out",&Jet_mass_out);
   ExTree->Branch("Jet_btagDeepFlavB_out",&Jet_btagDeepFlavB_out);
   ExTree->Branch("Jet_jetId_out",&Jet_jetId_out);
   ExTree->Branch("Jet_hadronFlavour_out",&Jet_hadronFlavour_out);

   ExTree->Branch("Mj_corr_Pneta",&Mj_corr_Pneta,"Mj_corr_Pneta/F");
   ExTree->Branch("Mj_corr_Pnetb",&Mj_corr_Pnetb,"Mj_corr_Pnetb/F");
   ExTree->Branch("Mj_corr_Pnetc",&Mj_corr_Pnetc,"Mj_corr_Pnetc/F");

   ExTree->Branch("Mj_corr_a",&Mj_corr_a,"Mj_corr_a/F");
   ExTree->Branch("Mj_corr_b",&Mj_corr_b,"Mj_corr_b/F");
   ExTree->Branch("Mj_corr_c",&Mj_corr_c,"Mj_corr_c/F");

   ExTree->Branch("Mj_corr_max",&Mj_corr_max,"Mj_corr_max/F");
   ExTree->Branch("Mj_corr_mid",&Mj_corr_mid,"Mj_corr_mid/F");
   ExTree->Branch("Mj_corr_min",&Mj_corr_min,"Mj_corr_min/F");

   ExTree->Branch("Mj_corr",&Mj_corr,"Mj_corr/F");
   ExTree->Branch("Mj_corr_2",&Mj_corr_2,"Mj_corr_2/F");
   ExTree->Branch("Mj_corr_3",&Mj_corr_3,"Mj_corr_3/F");

   ExTree->Branch("MET_T1Smear_phi_XYcorr",&MET_T1Smear_phi_XYcorr,"MET_T1Smear_phi_XYcorr/F");
   ExTree->Branch("MET_T1Smear_pt_XYcorr",&MET_T1Smear_pt_XYcorr,"MET_T1Smear_pt_XYcorr/F");
}



void EDBR2PKUTree::OutputBranches_HWW() {
   if (IsData > 100){
      //Added genH information;

      ExTree->Branch("genH_pt", &genH_pt, "genH_pt/F");

      ExTree->Branch("matchingt_a", &matchingt_a, "matchingt_a/I");
      ExTree->Branch("matchingW_a", &matchingW_a, "matchingW_a/I");
      ExTree->Branch("matchingg_a", &matchingg_a, "matchingg_a/I");
      ExTree->Branch("matchingZ_a", &matchingZ_a, "matchingZ_a/I");
      ExTree->Branch("matchingu_a", &matchingu_a, "matchingu_a/I");
      ExTree->Branch("matchingd_a", &matchingd_a, "matchingd_a/I");
      ExTree->Branch("matchings_a", &matchings_a, "matchings_a/I");
      ExTree->Branch("matchingc_a", &matchingc_a, "matchingc_a/I");
      ExTree->Branch("matchingg_first_a", &matchingg_first_a, "matchingg_first_a/I");
      ExTree->Branch("matchingu_first_a", &matchingu_first_a, "matchingu_first_a/I");
      ExTree->Branch("matchingd_first_a", &matchingd_first_a, "matchingd_first_a/I");
      ExTree->Branch("matchings_first_a", &matchings_first_a, "matchings_first_a/I");
      ExTree->Branch("matchingc_first_a", &matchingc_first_a, "matchingc_first_a/I");
      ExTree->Branch("matchingqg_first_a", &matchingqg_first_a, "matchingqg_first_a/I");
      ExTree->Branch("matchingt_first_a", &matchingt_first_a, "matchingt_first_a/I");

      ExTree->Branch("matchingt_b", &matchingt_b, "matchingt_b/I");
      ExTree->Branch("matchingW_b", &matchingW_b, "matchingW_b/I");
      ExTree->Branch("matchingg_b", &matchingg_b, "matchingg_b/I");
      ExTree->Branch("matchingZ_b", &matchingZ_b, "matchingZ_b/I");
      ExTree->Branch("matchingu_b", &matchingu_b, "matchingu_b/I");
      ExTree->Branch("matchingd_b", &matchingd_b, "matchingd_b/I");
      ExTree->Branch("matchings_b", &matchings_b, "matchings_b/I");
      ExTree->Branch("matchingc_b", &matchingc_b, "matchingc_b/I");
      ExTree->Branch("matchingg_first_b", &matchingg_first_b, "matchingg_first_b/I");
      ExTree->Branch("matchingu_first_b", &matchingu_first_b, "matchingu_first_b/I");
      ExTree->Branch("matchingd_first_b", &matchingd_first_b, "matchingd_first_b/I");
      ExTree->Branch("matchings_first_b", &matchings_first_b, "matchings_first_b/I");
      ExTree->Branch("matchingc_first_b", &matchingc_first_b, "matchingc_first_b/I");
      ExTree->Branch("matchingqg_first_b", &matchingqg_first_b, "matchingqg_first_b/I");
      ExTree->Branch("matchingt_first_b", &matchingt_first_b, "matchingt_first_b/I");

      ExTree->Branch("matchingt_c", &matchingt_c, "matchingt_c/I");
      ExTree->Branch("matchingW_c", &matchingW_c, "matchingW_c/I");
      ExTree->Branch("matchingg_c", &matchingg_c, "matchingg_c/I");
      ExTree->Branch("matchingZ_c", &matchingZ_c, "matchingZ_c/I");
      ExTree->Branch("matchingu_c", &matchingu_c, "matchingu_c/I");
      ExTree->Branch("matchingd_c", &matchingd_c, "matchingd_c/I");
      ExTree->Branch("matchings_c", &matchings_c, "matchings_c/I");
      ExTree->Branch("matchingc_c", &matchingc_c, "matchingc_c/I");
      ExTree->Branch("matchingg_first_c", &matchingg_first_c, "matchingg_first_c/I");
      ExTree->Branch("matchingu_first_c", &matchingu_first_c, "matchingu_first_c/I");
      ExTree->Branch("matchingd_first_c", &matchingd_first_c, "matchingd_first_c/I");
      ExTree->Branch("matchings_first_c", &matchings_first_c, "matchings_first_c/I");
      ExTree->Branch("matchingc_first_c", &matchingc_first_c, "matchingc_first_c/I");
      ExTree->Branch("matchingqg_first_c", &matchingqg_first_c, "matchingqg_first_c/I");
      ExTree->Branch("matchingt_first_c", &matchingt_first_c, "matchingt_first_c/I");



      ExTree->Branch("R4q_max", &R4q_max, "R4q_max/I");
      ExTree->Branch("R3q_max", &R3q_max, "R3q_max/I");
      ExTree->Branch("R2q_max", &R2q_max, "R2q_max/I");
      ExTree->Branch("Rlqq_max", &Rlqq_max, "Rlqq_max/I");
      ExTree->Branch("Rlq_max", &Rlq_max, "Rlq_max/I");
      ExTree->Branch("w_max", &w_max, "w_max/I");
      ExTree->Branch("u_max", &u_max, "u_max/I");
      ExTree->Branch("R4q_min", &R4q_min, "R4q_min/I");
      ExTree->Branch("R3q_min", &R3q_min, "R3q_min/I");
      ExTree->Branch("R2q_min", &R2q_min, "R2q_min/I");
      ExTree->Branch("Rlqq_min", &Rlqq_min, "Rlqq_min/I");
      ExTree->Branch("Rlq_min", &Rlq_min, "Rlq_min/I");
      ExTree->Branch("w_min", &w_min, "w_min/I");
      ExTree->Branch("u_min", &u_min, "u_min/I");
      ExTree->Branch("gKK_g_max", &gKK_g_max, "gKK_g_max/I");
      ExTree->Branch("gKK_g_min", &gKK_g_min, "gKK_g_min/I");
      ExTree->Branch("R3q_taudecay_max", &R3q_taudecay_max, "R3q_taudecay_max/I");
      ExTree->Branch("R2q_qq_taudecay_max", &R2q_qq_taudecay_max, "R2q_qq_taudecay_max/I");
      ExTree->Branch("R2q_qtau_taudecay_max", &R2q_qtau_taudecay_max, "R2q_qtau_taudecay_max/I");
      ExTree->Branch("R2q_tautau_taudecay_max", &R2q_tautau_taudecay_max, "R2q_tautau_taudecay_max/I");
      ExTree->Branch("Rlqq_emu_taudecay_max", &Rlqq_emu_taudecay_max, "Rlqq_emu_taudecay_max/I");
      ExTree->Branch("Rlqq_tau_taudecay_max", &Rlqq_tau_taudecay_max, "Rlqq_tau_taudecay_max/I");
      ExTree->Branch("Rlq_taudecay_max", &Rlq_taudecay_max, "Rlq_taudecay_max/I");
      ExTree->Branch("w_taudecay_max", &w_taudecay_max, "w_taudecay_max/I");
      ExTree->Branch("u_taudecay_max", &u_taudecay_max, "u_taudecay_max/I");
      ExTree->Branch("R3q_taudecay_min", &R3q_taudecay_min, "R3q_taudecay_min/I");
      ExTree->Branch("R2q_qq_taudecay_min", &R2q_qq_taudecay_min, "R2q_qq_taudecay_min/I");
      ExTree->Branch("R2q_qtau_taudecay_min", &R2q_qtau_taudecay_min, "R2q_qtau_taudecay_min/I");
      ExTree->Branch("R2q_tautau_taudecay_min", &R2q_tautau_taudecay_min, "R2q_tautau_taudecay_min/I");
      ExTree->Branch("Rlqq_emu_taudecay_min", &Rlqq_emu_taudecay_min, "Rlqq_emu_taudecay_min/I");
      ExTree->Branch("Rlqq_tau_taudecay_min", &Rlqq_tau_taudecay_min, "Rlqq_tau_taudecay_min/I");
      ExTree->Branch("Rlq_taudecay_min", &Rlq_taudecay_min, "Rlq_taudecay_min/I");
      ExTree->Branch("w_taudecay_min", &w_taudecay_min, "w_taudecay_min/I");
      ExTree->Branch("u_taudecay_min", &u_taudecay_min, "u_taudecay_min/I");
      ExTree->Branch("R3q_tauhad_max", &R3q_tauhad_max, "R3q_tauhad_max/I");
      ExTree->Branch("R2q_qtau_tauhad_max", &R2q_qtau_tauhad_max, "R2q_qtau_tauhad_max/I");
      ExTree->Branch("R2q_tautau_tauhad_max", &R2q_tautau_tauhad_max, "R2q_tautau_tauhad_max/I");
      ExTree->Branch("Rlqq_emu_tauhad_max", &Rlqq_emu_tauhad_max, "Rlqq_emu_tauhad_max/I");
      ExTree->Branch("Rlq_tauhad_max", &Rlq_tauhad_max, "Rlq_tauhad_max/I");
      ExTree->Branch("w_tauhad_max", &w_tauhad_max, "w_tauhad_max/I");
      ExTree->Branch("u_tauhad_max", &u_tauhad_max, "u_tauhad_max/I");
      ExTree->Branch("R3q_tauhad_min", &R3q_tauhad_min, "R3q_tauhad_min/I");
      ExTree->Branch("R2q_qtau_tauhad_min", &R2q_qtau_tauhad_min, "R2q_qtau_tauhad_min/I");
      ExTree->Branch("R2q_tautau_tauhad_min", &R2q_tautau_tauhad_min, "R2q_tautau_tauhad_min/I");
      ExTree->Branch("Rlqq_emu_tauhad_min", &Rlqq_emu_tauhad_min, "Rlqq_emu_tauhad_min/I");
      ExTree->Branch("Rlq_tauhad_min", &Rlq_tauhad_min, "Rlq_tauhad_min/I");
      ExTree->Branch("w_tauhad_min", &w_tauhad_min, "w_tauhad_min/I");
      ExTree->Branch("u_tauhad_min", &u_tauhad_min, "u_tauhad_min/I");
      ExTree->Branch("R3q_td_max", &R3q_td_max, "R3q_td_max/I");
      ExTree->Branch("rest_td_max", &rest_td_max, "rest_td_max/I");
      ExTree->Branch("R2q_Rlqq_td_max", &R2q_Rlqq_td_max, "R2q_Rlqq_td_max/I");
      ExTree->Branch("R3q_td_min", &R3q_td_min, "R3q_td_min/I");
      ExTree->Branch("rest_td_min", &rest_td_min, "rest_td_min/I");
      ExTree->Branch("R2q_Rlqq_td_min", &R2q_Rlqq_td_min, "R2q_Rlqq_td_min/I");
      ExTree->Branch("R4q_mid", &R4q_mid, "R4q_mid/I");
      ExTree->Branch("R3q_mid", &R3q_mid, "R3q_mid/I");
      ExTree->Branch("R2q_mid", &R2q_mid, "R2q_mid/I");
      ExTree->Branch("Rlqq_mid", &Rlqq_mid, "Rlqq_mid/I");
      ExTree->Branch("Rlq_mid", &Rlq_mid, "Rlq_mid/I");
      ExTree->Branch("w_mid", &w_mid, "w_mid/I");
      ExTree->Branch("u_mid", &u_mid, "u_mid/I");
      ExTree->Branch("gKK_g_mid", &gKK_g_mid, "gKK_g_mid/I");
      ExTree->Branch("R3q_taudecay_mid", &R3q_taudecay_mid, "R3q_taudecay_mid/I");
      ExTree->Branch("R2q_qq_taudecay_mid", &R2q_qq_taudecay_mid, "R2q_qq_taudecay_mid/I");
      ExTree->Branch("R2q_qtau_taudecay_mid", &R2q_qtau_taudecay_mid, "R2q_qtau_taudecay_mid/I");
      ExTree->Branch("R2q_tautau_taudecay_mid", &R2q_tautau_taudecay_mid, "R2q_tautau_taudecay_mid/I");
      ExTree->Branch("Rlqq_emu_taudecay_mid", &Rlqq_emu_taudecay_mid, "Rlqq_emu_taudecay_mid/I");
      ExTree->Branch("Rlqq_tau_taudecay_mid", &Rlqq_tau_taudecay_mid, "Rlqq_tau_taudecay_mid/I");
      ExTree->Branch("Rlq_taudecay_mid", &Rlq_taudecay_mid, "Rlq_taudecay_mid/I");
      ExTree->Branch("w_taudecay_mid", &w_taudecay_mid, "w_taudecay_mid/I");
      ExTree->Branch("u_taudecay_mid", &u_taudecay_mid, "u_taudecay_mid/I");
      ExTree->Branch("R3q_tauhad_mid", &R3q_tauhad_mid, "R3q_tauhad_mid/I");
      ExTree->Branch("R2q_qtau_tauhad_mid", &R2q_qtau_tauhad_mid, "R2q_qtau_tauhad_mid/I");
      ExTree->Branch("R2q_tautau_tauhad_mid", &R2q_tautau_tauhad_mid, "R2q_tautau_tauhad_mid/I");
      ExTree->Branch("Rlqq_emu_tauhad_mid", &Rlqq_emu_tauhad_mid, "Rlqq_emu_tauhad_mid/I");
      ExTree->Branch("Rlq_tauhad_mid", &Rlq_tauhad_mid, "Rlq_tauhad_mid/I");
      ExTree->Branch("w_tauhad_mid", &w_tauhad_mid, "w_tauhad_mid/I");
      ExTree->Branch("u_tauhad_mid", &u_tauhad_mid, "u_tauhad_mid/I");
      ExTree->Branch("R3q_td_mid", &R3q_td_mid, "R3q_td_mid/I");
      ExTree->Branch("rest_td_mid", &rest_td_mid, "rest_td_mid/I");
      ExTree->Branch("R2q_Rlqq_td_mid", &R2q_Rlqq_td_mid, "R2q_Rlqq_td_mid/I");


      ExTree->Branch("gen_gKK_g_pt_f",&gen_gKK_g_pt_f,"gen_gKK_g_pt_f/F");
      ExTree->Branch("gen_gKK_g_eta_f",&gen_gKK_g_eta_f,"gen_gKK_g_eta_f/F");
      ExTree->Branch("gen_gKK_g_phi_f",&gen_gKK_g_phi_f,"gen_gKK_g_phi_f/F");
      ExTree->Branch("gen_gKK_g_mass_f",&gen_gKK_g_mass_f,"gen_gKK_g_mass_f/F");

      ExTree->Branch("gen_tau_decay_2",&gen_tau_decay_2,"gen_tau_decay_2/I");
      ExTree->Branch("gen_tau_decay_3",&gen_tau_decay_3,"gen_tau_decay_3/I");

      ExTree->Branch("z_max",&z_max,"z_max/I");
      ExTree->Branch("t_max",&t_max,"t_max/I");
      ExTree->Branch("t_max_tag",&t_max_tag,"t_max_tag/I");
      ExTree->Branch("w_max",&w_max,"w_max/I");
      ExTree->Branch("g_max",&g_max,"g_max/I");
      ExTree->Branch("q_max",&q_max,"q_max/I");
      ExTree->Branch("u_max",&u_max,"u_max/I");
      ExTree->Branch("z_mid",&z_mid,"z_mid/I");
      ExTree->Branch("t_mid",&t_mid,"t_mid/I");
      ExTree->Branch("t_mid_tag",&t_mid_tag,"t_mid_tag/I");
      ExTree->Branch("w_mid",&w_mid,"w_mid/I");
      ExTree->Branch("g_mid",&g_mid,"g_mid/I");
      ExTree->Branch("q_mid",&q_mid,"q_mid/I");
      ExTree->Branch("u_mid",&u_mid,"u_mid/I");
      ExTree->Branch("z_min",&z_min,"z_min/I");
      ExTree->Branch("t_min",&t_min,"t_min/I");
      ExTree->Branch("t_min_tag",&t_min_tag,"t_min_tag/I");
      ExTree->Branch("w_min",&w_min,"w_min/I");
      ExTree->Branch("g_min",&g_min,"g_min/I");
      ExTree->Branch("q_min",&q_min,"q_min/I");
      ExTree->Branch("u_min",&u_min,"u_min/I");
      ExTree->Branch("z_4",&z_4,"z_4/I");
      ExTree->Branch("t_4",&t_4,"t_4/I");
      ExTree->Branch("t_4_tag",&t_4_tag,"t_4_tag/I");
      ExTree->Branch("w_4",&w_4,"w_4/I");
      ExTree->Branch("g_4",&g_4,"g_4/I");
      ExTree->Branch("q_4",&q_4,"q_4/I");
      ExTree->Branch("u_4",&u_4,"u_4/I");

      ExTree->Branch("t34_max_tag",&t34_max_tag,"t34_max_tag/I");
      ExTree->Branch("t34_mid_tag",&t34_mid_tag,"t34_mid_tag/I");
      ExTree->Branch("t34_min_tag",&t34_min_tag,"t34_min_tag/I");
      ExTree->Branch("t34_4_tag",&t34_4_tag,"t34_4_tag/I");

      ExTree->Branch("R4q_a",&R4q_a,"R4q_a/I");
      ExTree->Branch("R4q_b",&R4q_b,"R4q_b/I");
      ExTree->Branch("R4q_c",&R4q_c,"R4q_c/I");
      ExTree->Branch("R3q_a",&R3q_a,"R3q_a/I");
      ExTree->Branch("R3q_b",&R3q_b,"R3q_b/I");
      ExTree->Branch("R3q_c",&R3q_c,"R3q_c/I");
      ExTree->Branch("R2q_a",&R2q_a,"R2q_a/I");
      ExTree->Branch("R2q_b",&R2q_b,"R2q_b/I");
      ExTree->Branch("R2q_c",&R2q_c,"R2q_c/I");
      ExTree->Branch("w_a",&w_a,"w_a/I");
      ExTree->Branch("w_b",&w_b,"w_b/I");
      ExTree->Branch("w_c",&w_c,"w_c/I");
      ExTree->Branch("t_a",&t_a,"t_a/I");
      ExTree->Branch("t_b",&t_b,"t_b/I");
      ExTree->Branch("t_c",&t_c,"t_c/I");
      ExTree->Branch("tlqq_a",&tlqq_a,"tlqq_a/I"); // Add tlqq matching
      ExTree->Branch("tlqq_b",&tlqq_b,"tlqq_b/I");
      ExTree->Branch("tlqq_c",&tlqq_c,"tlqq_c/I"); 
      ExTree->Branch("z_a",&z_a,"z_a/I");
      ExTree->Branch("z_b",&z_b,"z_b/I");
      ExTree->Branch("z_c",&z_c,"z_c/I");
      ExTree->Branch("Rlqq_a",&Rlqq_a,"Rlqq_a/I");
      ExTree->Branch("Rlqq_b",&Rlqq_b,"Rlqq_b/I");
      ExTree->Branch("Rlqq_c",&Rlqq_c,"Rlqq_c/I");
      ExTree->Branch("Rlq_a",&Rlq_a,"Rlq_a/I");
      ExTree->Branch("Rlq_b",&Rlq_b,"Rlq_b/I");
      ExTree->Branch("Rlq_c",&Rlq_c,"Rlq_c/I");
      ExTree->Branch("gKK_g_a",&gKK_g_a,"gKK_g_a/I");
      ExTree->Branch("gKK_g_b",&gKK_g_b,"gKK_g_b/I");
      ExTree->Branch("gKK_g_c",&gKK_g_c,"gKK_g_c/I");
      ExTree->Branch("u_a",&u_a,"u_a/I");
      ExTree->Branch("u_b",&u_b,"u_b/I");
      ExTree->Branch("u_c",&u_c,"u_c/I");
      ExTree->Branch("R3q_taudecay_a",&R3q_taudecay_a,"R3q_taudecay_a/I");
      ExTree->Branch("R3q_taudecay_b",&R3q_taudecay_b,"R3q_taudecay_b/I");
      ExTree->Branch("R3q_taudecay_c",&R3q_taudecay_c,"R3q_taudecay_c/I");
   
   }

   ExTree->Branch("puWeight", &puWeight, "puWeight/F");
   ExTree->Branch("puWeightDown", &puWeightDown, "puWeightDown/F");
   ExTree->Branch("puWeightUp", &puWeightUp, "puWeightUp/F");




   ExTree->Branch("goodRun", &goodRun, "goodRun/b");
   ExTree->Branch("Flag", &Flag, "Flag/b");

   ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
   ExTree->Branch("MET_et", &MET_et, "MET_et/F");


   ExTree->Branch("Mj",&Mj,"Mj/F");
   ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
   ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
   ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");


      

   ExTree->Branch("num_ak4jetsex", &num_ak4jetsex, "num_ak4jetsex/I");
   ExTree->Branch("num_ak4jetsin", &num_ak4jetsin, "num_ak4jetsin/I");


   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");

      
   ExTree->Branch("MJJ", &MJJ, "MJJ/D");
      
   ExTree->Branch("event",&event,"event/L");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");

   ExTree->Branch("weight", &weight, "weight/D");
   ExTree->Branch("TriggerSF", &TriggerSF, "TriggerSF/D");
   ExTree->Branch("HEM_Filter", &HEM_Filter, "HEM_Filter/I");
   
   ExTree->Branch("Mj_max",&Mj_max,"Mj_max/F");
   ExTree->Branch("Mj_mid",&Mj_mid,"Mj_mid/F");
   ExTree->Branch("Mj_min",&Mj_min,"Mj_min/F");
   ExTree->Branch("PTj_max",&PTj_max,"PTj_max/F");
   ExTree->Branch("PTj_mid",&PTj_mid,"PTj_mid/F");
   ExTree->Branch("PTj_min",&PTj_min,"PTj_min/F");
   

   ExTree->Branch("Etaj_max",&Etaj_max,"Etaj_max/F");
   ExTree->Branch("Etaj_mid",&Etaj_mid,"Etaj_mid/F");
   ExTree->Branch("Etaj_min",&Etaj_min,"Etaj_min/F");
   ExTree->Branch("Phij_max",&Phij_max,"Phij_max/F");
   ExTree->Branch("Phij_mid",&Phij_mid,"Phij_mid/F");
   ExTree->Branch("Phij_min",&Phij_min,"Phij_min/F");
   
   ExTree->Branch("PTj",&PTj,"PTj/F");
   ExTree->Branch("PTj_2",&PTj_2,"PTj_2/D");
   ExTree->Branch("PTj_3",&PTj_3,"PTj_3/D");
   ExTree->Branch("PTj_4",&PTj_4,"PTj_4/F");
   ExTree->Branch("Etaj",&Etaj,"Etaj/F");
   ExTree->Branch("Etaj_2",&Etaj_2,"Etaj_2/F");
   ExTree->Branch("Etaj_3",&Etaj_3,"Etaj_3/F");
   ExTree->Branch("Etaj_4",&Etaj_4,"Etaj_4/F");
   ExTree->Branch("Phij",&Phij,"Phij/F");
   ExTree->Branch("Phij_2",&Phij_2,"Phij_2/F");
   ExTree->Branch("Phij_4",&Phij_4,"Phij_4/F");
   ExTree->Branch("Phij_3",&Phij_3,"Phij_3/F");

   ExTree->Branch("ST",&ST,"ST/F");
   ExTree->Branch("HT",&HT,"HT/F");
   ExTree->Branch("Nj4",&Nj4,"Nj4/I");
   ExTree->Branch("Nj8",&Nj8,"Nj8/I");
   ExTree->Branch("MJJJ",&MJJJ,"MJJJ/F");

   ExTree->Branch("Nj4_ex",&Nj4_ex,"Nj4_ex/I");
   ExTree->Branch("Nj4_in",&Nj4_in,"Nj4_in/I");

   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");



   ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
   ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
   ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
   ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
   ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
   ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");

   // define ExTree for gKK 0lepton output

   ExTree->Branch("Mj_V2_a",&Mj_V2_a,"Mj_V2_a/F");
   ExTree->Branch("Mj_V2_b",&Mj_V2_b,"Mj_V2_b/F");
   ExTree->Branch("Mj_V2_c",&Mj_V2_c,"Mj_V2_c/F");

   ExTree->Branch("Mj_corr_V2_a",&Mj_corr_V2_a,"Mj_corr_V2_a/F");
   ExTree->Branch("Mj_corr_V2_b",&Mj_corr_V2_b,"Mj_corr_V2_b/F");
   ExTree->Branch("Mj_corr_V2_c",&Mj_corr_V2_c,"Mj_corr_V2_c/F");

   // JES, JER part

   ExTree->Branch("Mj_jesTotalUp_a",&Mj_jesTotalUp_a,"Mj_jesTotalUp_a/F");
   ExTree->Branch("Mj_jesTotalUp_b",&Mj_jesTotalUp_b,"Mj_jesTotalUp_b/F");
   ExTree->Branch("Mj_jesTotalUp_c",&Mj_jesTotalUp_c,"Mj_jesTotalUp_c/F");

   ExTree->Branch("Mj_jesTotalDown_a",&Mj_jesTotalDown_a,"Mj_jesTotalDown_a/F");
   ExTree->Branch("Mj_jesTotalDown_b",&Mj_jesTotalDown_b,"Mj_jesTotalDown_b/F");
   ExTree->Branch("Mj_jesTotalDown_c",&Mj_jesTotalDown_c,"Mj_jesTotalDown_c/F");

   ExTree->Branch("Mj_jerUp_a",&Mj_jerUp_a,"Mj_jerUp_a/F");
   ExTree->Branch("Mj_jerUp_b",&Mj_jerUp_b,"Mj_jerUp_b/F");
   ExTree->Branch("Mj_jerUp_c",&Mj_jerUp_c,"Mj_jerUp_c/F");

   ExTree->Branch("Mj_jerDown_a",&Mj_jerDown_a,"Mj_jerDown_a/F");
   ExTree->Branch("Mj_jerDown_b",&Mj_jerDown_b,"Mj_jerDown_b/F");
   ExTree->Branch("Mj_jerDown_c",&Mj_jerDown_c,"Mj_jerDown_c/F");
   
   // JES, JER over

   ExTree->Branch("PTj_V2_a",&PTj_V2_a,"PTj_V2_a/F");
   ExTree->Branch("PTj_V2_b",&PTj_V2_b,"PTj_V2_b/F");
   ExTree->Branch("PTj_V2_c",&PTj_V2_c,"PTj_V2_c/F");

   ExTree->Branch("Etaj_V2_a",&Etaj_V2_a,"Etaj_V2_a/F");
   ExTree->Branch("Etaj_V2_b",&Etaj_V2_b,"Etaj_V2_b/F");
   ExTree->Branch("Etaj_V2_c",&Etaj_V2_c,"Etaj_V2_c/F");

   ExTree->Branch("Phij_V2_a",&Phij_V2_a,"Phij_V2_a/F");
   ExTree->Branch("Phij_V2_b",&Phij_V2_b,"Phij_V2_b/F");
   ExTree->Branch("Phij_V2_c",&Phij_V2_c,"Phij_V2_c/F");


   ExTree->Branch("a_HWW_V2",&a_HWW_V2,"a_HWW_V2/F");
   ExTree->Branch("b_HWW_V2",&b_HWW_V2,"b_HWW_V2/F");
   ExTree->Branch("c_HWW_V2",&c_HWW_V2,"c_HWW_V2/F");

   ExTree->Branch("a_HWWvsQCD_V2",&a_HWWvsQCD_V2,"a_HWWvsQCD_V2/F");
   ExTree->Branch("b_HWWvsQCD_V2",&b_HWWvsQCD_V2,"b_HWWvsQCD_V2/F");
   ExTree->Branch("c_HWWvsQCD_V2",&c_HWWvsQCD_V2,"c_HWWvsQCD_V2/F");


ExTree->Branch("a_HWqqWqq0c",&a_HWqqWqq0c      , "a_HWqqWqq0c/F");
ExTree->Branch("a_HWqqWqq1c",&a_HWqqWqq1c      , "a_HWqqWqq1c/F");
ExTree->Branch("a_HWqqWqq2c",&a_HWqqWqq2c      , "a_HWqqWqq2c/F");
ExTree->Branch("a_HWqqWq0c",&a_HWqqWq0c       , "a_HWqqWq0c/F");
ExTree->Branch("a_HWqqWq1c",&a_HWqqWq1c       , "a_HWqqWq1c/F");
ExTree->Branch("a_HWqqWq2c",&a_HWqqWq2c       , "a_HWqqWq2c/F");
ExTree->Branch("a_HWqqWev0c",&a_HWqqWev0c      , "a_HWqqWev0c/F");
ExTree->Branch("a_HWqqWev1c",&a_HWqqWev1c      , "a_HWqqWev1c/F");
ExTree->Branch("a_HWqqWmv0c",&a_HWqqWmv0c      , "a_HWqqWmv0c/F");
ExTree->Branch("a_HWqqWmv1c",&a_HWqqWmv1c      , "a_HWqqWmv1c/F");
ExTree->Branch("a_HWqqWtauev0c",&a_HWqqWtauev0c   , "a_HWqqWtauev0c/F");
ExTree->Branch("a_HWqqWtauev1c",&a_HWqqWtauev1c   , "a_HWqqWtauev1c/F");
ExTree->Branch("a_HWqqWtaumv0c",&a_HWqqWtaumv0c   , "a_HWqqWtaumv0c/F");
ExTree->Branch("a_HWqqWtaumv1c",&a_HWqqWtaumv1c   , "a_HWqqWtaumv1c/F");
ExTree->Branch("a_HWqqWtauhv0c",&a_HWqqWtauhv0c   , "a_HWqqWtauhv0c/F");
ExTree->Branch("a_HWqqWtauhv1c",&a_HWqqWtauhv1c   , "a_HWqqWtauhv1c/F");
ExTree->Branch("a_Hbb",&a_Hbb            , "a_Hbb/F");
ExTree->Branch("a_Hcc",&a_Hcc            , "a_Hcc/F");
ExTree->Branch("a_Hss",&a_Hss            , "a_Hss/F");
ExTree->Branch("a_Hqq",&a_Hqq            , "a_Hqq/F");
ExTree->Branch("a_Htauhtaue",&a_Htauhtaue      , "a_Htauhtaue/F");
ExTree->Branch("a_Htauhtaum",&a_Htauhtaum      , "a_Htauhtaum/F");
ExTree->Branch("a_Htauhtauh",&a_Htauhtauh      , "a_Htauhtauh/F");
ExTree->Branch("a_QCDbb",&a_QCDbb          , "a_QCDbb/F");
ExTree->Branch("a_QCDcc",&a_QCDcc          , "a_QCDcc/F");
ExTree->Branch("a_QCDb",&a_QCDb           , "a_QCDb/F");
ExTree->Branch("a_QCDc",&a_QCDc           , "a_QCDc/F");
ExTree->Branch("a_QCDothers",&a_QCDothers      , "a_QCDothers/F");
ExTree->Branch("a_TopbWqq0c",&a_TopbWqq0c      , "a_TopbWqq0c/F");
ExTree->Branch("a_TopbWqq1c",&a_TopbWqq1c      , "a_TopbWqq1c/F");
ExTree->Branch("a_TopbWq0c",&a_TopbWq0c       , "a_TopbWq0c/F");
ExTree->Branch("a_TopbWq1c",&a_TopbWq1c       , "a_TopbWq1c/F");
ExTree->Branch("a_TopbWev",&a_TopbWev        , "a_TopbWev/F");
ExTree->Branch("a_TopbWmv",&a_TopbWmv        , "a_TopbWmv/F");
ExTree->Branch("a_TopbWtauhv",&a_TopbWtauhv     , "a_TopbWtauhv/F");
ExTree->Branch("a_TopbWtauev",&a_TopbWtauev     , "a_TopbWtauev/F");
ExTree->Branch("a_TopbWtaumv",&a_TopbWtaumv     , "a_TopbWtaumv/F");

ExTree->Branch("b_HWqqWqq0c",&b_HWqqWqq0c      , "b_HWqqWqq0c/F");
ExTree->Branch("b_HWqqWqq1c",&b_HWqqWqq1c      , "b_HWqqWqq1c/F");
ExTree->Branch("b_HWqqWqq2c",&b_HWqqWqq2c      , "b_HWqqWqq2c/F");
ExTree->Branch("b_HWqqWq0c",&b_HWqqWq0c       , "b_HWqqWq0c/F");
ExTree->Branch("b_HWqqWq1c",&b_HWqqWq1c       , "b_HWqqWq1c/F");
ExTree->Branch("b_HWqqWq2c",&b_HWqqWq2c       , "b_HWqqWq2c/F");
ExTree->Branch("b_HWqqWev0c",&b_HWqqWev0c      , "b_HWqqWev0c/F");
ExTree->Branch("b_HWqqWev1c",&b_HWqqWev1c      , "b_HWqqWev1c/F");
ExTree->Branch("b_HWqqWmv0c",&b_HWqqWmv0c      , "b_HWqqWmv0c/F");
ExTree->Branch("b_HWqqWmv1c",&b_HWqqWmv1c      , "b_HWqqWmv1c/F");
ExTree->Branch("b_HWqqWtauev0c",&b_HWqqWtauev0c   , "b_HWqqWtauev0c/F");
ExTree->Branch("b_HWqqWtauev1c",&b_HWqqWtauev1c   , "b_HWqqWtauev1c/F");
ExTree->Branch("b_HWqqWtaumv0c",&b_HWqqWtaumv0c   , "b_HWqqWtaumv0c/F");
ExTree->Branch("b_HWqqWtaumv1c",&b_HWqqWtaumv1c   , "b_HWqqWtaumv1c/F");
ExTree->Branch("b_HWqqWtauhv0c",&b_HWqqWtauhv0c   , "b_HWqqWtauhv0c/F");
ExTree->Branch("b_HWqqWtauhv1c",&b_HWqqWtauhv1c   , "b_HWqqWtauhv1c/F");
ExTree->Branch("b_Hbb",&b_Hbb            , "b_Hbb/F");
ExTree->Branch("b_Hcc",&b_Hcc            , "b_Hcc/F");
ExTree->Branch("b_Hss",&b_Hss            , "b_Hss/F");
ExTree->Branch("b_Hqq",&b_Hqq            , "b_Hqq/F");
ExTree->Branch("b_Htauhtaue",&b_Htauhtaue      , "b_Htauhtaue/F");
ExTree->Branch("b_Htauhtaum",&b_Htauhtaum      , "b_Htauhtaum/F");
ExTree->Branch("b_Htauhtauh",&b_Htauhtauh      , "b_Htauhtauh/F");
ExTree->Branch("b_QCDbb",&b_QCDbb          , "b_QCDbb/F");
ExTree->Branch("b_QCDcc",&b_QCDcc          , "b_QCDcc/F");
ExTree->Branch("b_QCDb",&b_QCDb           , "b_QCDb/F");
ExTree->Branch("b_QCDc",&b_QCDc           , "b_QCDc/F");
ExTree->Branch("b_QCDothers",&b_QCDothers      , "b_QCDothers/F");
ExTree->Branch("b_TopbWqq0c",&b_TopbWqq0c      , "b_TopbWqq0c/F");
ExTree->Branch("b_TopbWqq1c",&b_TopbWqq1c      , "b_TopbWqq1c/F");
ExTree->Branch("b_TopbWq0c",&b_TopbWq0c       , "b_TopbWq0c/F");
ExTree->Branch("b_TopbWq1c",&b_TopbWq1c       , "b_TopbWq1c/F");
ExTree->Branch("b_TopbWev",&b_TopbWev        , "b_TopbWev/F");
ExTree->Branch("b_TopbWmv",&b_TopbWmv        , "b_TopbWmv/F");
ExTree->Branch("b_TopbWtauhv",&b_TopbWtauhv     , "b_TopbWtauhv/F");
ExTree->Branch("b_TopbWtauev",&b_TopbWtauev     , "b_TopbWtauev/F");
ExTree->Branch("b_TopbWtaumv",&b_TopbWtaumv     , "b_TopbWtaumv/F");

ExTree->Branch("c_HWqqWqq0c",&c_HWqqWqq0c      , "c_HWqqWqq0c/F");
ExTree->Branch("c_HWqqWqq1c",&c_HWqqWqq1c      , "c_HWqqWqq1c/F");
ExTree->Branch("c_HWqqWqq2c",&c_HWqqWqq2c      , "c_HWqqWqq2c/F");
ExTree->Branch("c_HWqqWq0c",&c_HWqqWq0c       , "c_HWqqWq0c/F");
ExTree->Branch("c_HWqqWq1c",&c_HWqqWq1c       , "c_HWqqWq1c/F");
ExTree->Branch("c_HWqqWq2c",&c_HWqqWq2c       , "c_HWqqWq2c/F");
ExTree->Branch("c_HWqqWev0c",&c_HWqqWev0c      , "c_HWqqWev0c/F");
ExTree->Branch("c_HWqqWev1c",&c_HWqqWev1c      , "c_HWqqWev1c/F");
ExTree->Branch("c_HWqqWmv0c",&c_HWqqWmv0c      , "c_HWqqWmv0c/F");
ExTree->Branch("c_HWqqWmv1c",&c_HWqqWmv1c      , "c_HWqqWmv1c/F");
ExTree->Branch("c_HWqqWtauev0c",&c_HWqqWtauev0c   , "c_HWqqWtauev0c/F");
ExTree->Branch("c_HWqqWtauev1c",&c_HWqqWtauev1c   , "c_HWqqWtauev1c/F");
ExTree->Branch("c_HWqqWtaumv0c",&c_HWqqWtaumv0c   , "c_HWqqWtaumv0c/F");
ExTree->Branch("c_HWqqWtaumv1c",&c_HWqqWtaumv1c   , "c_HWqqWtaumv1c/F");
ExTree->Branch("c_HWqqWtauhv0c",&c_HWqqWtauhv0c   , "c_HWqqWtauhv0c/F");
ExTree->Branch("c_HWqqWtauhv1c",&c_HWqqWtauhv1c   , "c_HWqqWtauhv1c/F");
ExTree->Branch("c_Hbb",&c_Hbb            , "c_Hbb/F");
ExTree->Branch("c_Hcc",&c_Hcc            , "c_Hcc/F");
ExTree->Branch("c_Hss",&c_Hss            , "c_Hss/F");
ExTree->Branch("c_Hqq",&c_Hqq            , "c_Hqq/F");
ExTree->Branch("c_Htauhtaue",&c_Htauhtaue      , "c_Htauhtaue/F");
ExTree->Branch("c_Htauhtaum",&c_Htauhtaum      , "c_Htauhtaum/F");
ExTree->Branch("c_Htauhtauh",&c_Htauhtauh      , "c_Htauhtauh/F");
ExTree->Branch("c_QCDbb",&c_QCDbb          , "c_QCDbb/F");
ExTree->Branch("c_QCDcc",&c_QCDcc          , "c_QCDcc/F");
ExTree->Branch("c_QCDb",&c_QCDb           , "c_QCDb/F");
ExTree->Branch("c_QCDc",&c_QCDc           , "c_QCDc/F");
ExTree->Branch("c_QCDothers",&c_QCDothers      , "c_QCDothers/F");
ExTree->Branch("c_TopbWqq0c",&c_TopbWqq0c      , "c_TopbWqq0c/F");
ExTree->Branch("c_TopbWqq1c",&c_TopbWqq1c      , "c_TopbWqq1c/F");
ExTree->Branch("c_TopbWq0c",&c_TopbWq0c       , "c_TopbWq0c/F");
ExTree->Branch("c_TopbWq1c",&c_TopbWq1c       , "c_TopbWq1c/F");
ExTree->Branch("c_TopbWev",&c_TopbWev        , "c_TopbWev/F");
ExTree->Branch("c_TopbWmv",&c_TopbWmv        , "c_TopbWmv/F");
ExTree->Branch("c_TopbWtauhv",&c_TopbWtauhv     , "c_TopbWtauhv/F");
ExTree->Branch("c_TopbWtauev",&c_TopbWtauev     , "c_TopbWtauev/F");
ExTree->Branch("c_TopbWtaumv",&c_TopbWtaumv     , "c_TopbWtaumv/F");

ExTree->Branch("FatJet_tau1_HWW_a",&FatJet_tau1_HWW_a, "FatJet_tau1_HWW_a/F");
ExTree->Branch("FatJet_tau2_HWW_a",&FatJet_tau2_HWW_a, "FatJet_tau2_HWW_a/F");
ExTree->Branch("FatJet_tau3_HWW_a",&FatJet_tau3_HWW_a, "FatJet_tau3_HWW_a/F");
ExTree->Branch("FatJet_tau4_HWW_a",&FatJet_tau4_HWW_a, "FatJet_tau4_HWW_a/F");
ExTree->Branch("FatJet_tau1_HWW_b",&FatJet_tau1_HWW_b, "FatJet_tau1_HWW_b/F");
ExTree->Branch("FatJet_tau2_HWW_b",&FatJet_tau2_HWW_b, "FatJet_tau2_HWW_b/F");
ExTree->Branch("FatJet_tau3_HWW_b",&FatJet_tau3_HWW_b, "FatJet_tau3_HWW_b/F");
ExTree->Branch("FatJet_tau4_HWW_b",&FatJet_tau4_HWW_b, "FatJet_tau4_HWW_b/F");
ExTree->Branch("FatJet_tau1_HWW_c",&FatJet_tau1_HWW_c, "FatJet_tau1_HWW_c/F");
ExTree->Branch("FatJet_tau2_HWW_c",&FatJet_tau2_HWW_c, "FatJet_tau2_HWW_c/F");
ExTree->Branch("FatJet_tau3_HWW_c",&FatJet_tau3_HWW_c, "FatJet_tau3_HWW_c/F");
ExTree->Branch("FatJet_tau4_HWW_c",&FatJet_tau4_HWW_c, "FatJet_tau4_HWW_c/F");

    ExTree->Branch("HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",&HLT_PFHT650_WideJetMJJ900DEtaJJ1p5,"HLT_PFHT650_WideJetMJJ900DEtaJJ1p5/B");
    ExTree->Branch("HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",&HLT_PFHT650_WideJetMJJ950DEtaJJ1p5,"HLT_PFHT650_WideJetMJJ950DEtaJJ1p5/B");
    ExTree->Branch("HLT_PFHT800",&HLT_PFHT800,"HLT_PFHT800/B");
    ExTree->Branch("HLT_PFHT900",&HLT_PFHT900,"HLT_PFHT900/B");
    ExTree->Branch("HLT_PFJet450",&HLT_PFJet450,"HLT_PFJet450/B");
    ExTree->Branch("HLT_AK8PFJet400",&HLT_AK8PFJet400,"HLT_AK8PFJet400/B");
    ExTree->Branch("HLT_AK8PFJet450",&HLT_AK8PFJet450,"HLT_AK8PFJet450/B");
    ExTree->Branch("HLT_AK8PFJet500",&HLT_AK8PFJet500,"HLT_AK8PFJet500/B");
    ExTree->Branch("HLT_PFJet500",&HLT_PFJet500,"HLT_PFJet500/B");
    ExTree->Branch("HLT_AK8PFJet360_TrimMass30",&HLT_AK8PFJet360_TrimMass30,"HLT_AK8PFJet360_TrimMass30/B");
    ExTree->Branch("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",&HLT_AK8PFHT700_TrimR0p1PT0p03Mass50,"HLT_AK8PFHT700_TrimR0p1PT0p03Mass50/B");
    ExTree->Branch("HLT_PFHT1050",&HLT_PFHT1050,"HLT_PFHT1050/B");
    ExTree->Branch("HLT_AK8PFJet380_TrimMass30",&HLT_AK8PFJet380_TrimMass30,"HLT_AK8PFJet380_TrimMass30/B");
    ExTree->Branch("HLT_AK8PFJet400_TrimMass30",&HLT_AK8PFJet400_TrimMass30,"HLT_AK8PFJet400_TrimMass30/B");
    ExTree->Branch("HLT_AK8PFJet420_TrimMass30",&HLT_AK8PFJet420_TrimMass30,"HLT_AK8PFJet420_TrimMass30/B");
    ExTree->Branch("HLT_AK8PFHT750_TrimMass50",&HLT_AK8PFHT750_TrimMass50,"HLT_AK8PFHT750_TrimMass50/B");
    ExTree->Branch("HLT_AK8PFHT800_TrimMass50",&HLT_AK8PFHT800_TrimMass50,"HLT_AK8PFHT800_TrimMass50/B");
    ExTree->Branch("HLT_AK8PFHT850_TrimMass50",&HLT_AK8PFHT850_TrimMass50,"HLT_AK8PFHT850_TrimMass50/B");
    ExTree->Branch("HLT_AK8PFHT900_TrimMass50",&HLT_AK8PFHT900_TrimMass50,"HLT_AK8PFHT900_TrimMass50/B");

   ExTree->Branch("HLT_PFMET110_PFMHT110_IDTight",&HLT_PFMET110_PFMHT110_IDTight,"HLT_PFMET110_PFMHT110_IDTight/B");
   ExTree->Branch("HLT_PFMET120_PFMHT120_IDTight",&HLT_PFMET120_PFMHT120_IDTight,"HLT_PFMET120_PFMHT120_IDTight/B");
   ExTree->Branch("HLT_PFMET130_PFMHT130_IDTight",&HLT_PFMET130_PFMHT130_IDTight,"HLT_PFMET130_PFMHT130_IDTight/B");
   ExTree->Branch("HLT_PFMET140_PFMHT140_IDTight",&HLT_PFMET140_PFMHT140_IDTight,"HLT_PFMET140_PFMHT140_IDTight/B");
   ExTree->Branch("HLT_Mu50",                     &HLT_Mu50,                     "HLT_Mu50/B");
   ExTree->Branch("HLT_Ele115_CaloIdVT_GsfTrkIdT",&HLT_Ele115_CaloIdVT_GsfTrkIdT,"HLT_Ele115_CaloIdVT_GsfTrkIdT/B");
   ExTree->Branch("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165",&HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165,"HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165/B");
   // define ExTree for HWW output.

   ExTree->Branch("MET_phi_NoXYCorr",&MET_phi_NoXYCorr,"MET_phi_NoXYCorr/F");
   ExTree->Branch("MET_et_NoXYCorr",&MET_et_NoXYCorr,"MET_et_NoXYCorr/F");
   
   ExTree->Branch("Jet_mass_nom_out",&Jet_mass_nom_out);
   ExTree->Branch("Jet_pt_nom_out",&Jet_pt_nom_out);

   ExTree->Branch("Jet_pt_out",&Jet_pt_out);
   ExTree->Branch("Jet_eta_out",&Jet_eta_out);
   ExTree->Branch("Jet_phi_out",&Jet_phi_out);
   ExTree->Branch("Jet_mass_out",&Jet_mass_out);
   ExTree->Branch("Jet_btagDeepFlavB_out",&Jet_btagDeepFlavB_out);
   ExTree->Branch("Jet_jetId_out",&Jet_jetId_out);
   ExTree->Branch("Jet_hadronFlavour_out",&Jet_hadronFlavour_out);

   ExTree->Branch("Mj_corr_Pneta",&Mj_corr_Pneta,"Mj_corr_Pneta/F");
   ExTree->Branch("Mj_corr_Pnetb",&Mj_corr_Pnetb,"Mj_corr_Pnetb/F");
   ExTree->Branch("Mj_corr_Pnetc",&Mj_corr_Pnetc,"Mj_corr_Pnetc/F");

   ExTree->Branch("Mj_corr_a",&Mj_corr_a,"Mj_corr_a/F");
   ExTree->Branch("Mj_corr_b",&Mj_corr_b,"Mj_corr_b/F");
   ExTree->Branch("Mj_corr_c",&Mj_corr_c,"Mj_corr_c/F");

   ExTree->Branch("Mj_corr_max",&Mj_corr_max,"Mj_corr_max/F");
   ExTree->Branch("Mj_corr_mid",&Mj_corr_mid,"Mj_corr_mid/F");
   ExTree->Branch("Mj_corr_min",&Mj_corr_min,"Mj_corr_min/F");

   ExTree->Branch("Mj_corr",&Mj_corr,"Mj_corr/F");
   ExTree->Branch("Mj_corr_2",&Mj_corr_2,"Mj_corr_2/F");
   ExTree->Branch("Mj_corr_3",&Mj_corr_3,"Mj_corr_3/F");

   ExTree->Branch("MET_T1Smear_phi_XYcorr",&MET_T1Smear_phi_XYcorr,"MET_T1Smear_phi_XYcorr/F");
   ExTree->Branch("MET_T1Smear_pt_XYcorr",&MET_T1Smear_pt_XYcorr,"MET_T1Smear_pt_XYcorr/F");
}
#endif