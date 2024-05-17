#ifndef _outputbranches__HWW_0lepton_
#define _outputbranches__HWW_0lepton_

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

   // pileup weight
   ExTree->Branch("puWeight", &puWeight, "puWeight/F");
   ExTree->Branch("puWeightDown", &puWeightDown, "puWeightDown/F");
   ExTree->Branch("puWeightUp", &puWeightUp, "puWeightUp/F");

   // prefire weight
   ExTree->Branch("PrefireWeight", &PrefireWeight, "PrefireWeight/F");
   ExTree->Branch("PrefireWeightDown", &PrefireWeightDown, "PrefireWeightDown/F");
   ExTree->Branch("PrefireWeightUp", &PrefireWeightUp, "PrefireWeightUp/F");


   // LHE weight

   ExTree->Branch("LHEScaleWeight",&v_LHEScaleWeight_);
   // cout<< "Test"<<v_LHEScaleWeight_[0]<<endl;

   ExTree->Branch("LHEScaleWeight_0", &LHEScaleWeight_0, "LHEScaleWeight_0/F");
   ExTree->Branch("LHEScaleWeight_1", &LHEScaleWeight_1, "LHEScaleWeight_1/F");
   ExTree->Branch("LHEScaleWeight_2", &LHEScaleWeight_2, "LHEScaleWeight_2/F");
   ExTree->Branch("LHEScaleWeight_3", &LHEScaleWeight_3, "LHEScaleWeight_3/F");
   ExTree->Branch("LHEScaleWeight_4", &LHEScaleWeight_4, "LHEScaleWeight_4/F");
   ExTree->Branch("LHEScaleWeight_5", &LHEScaleWeight_5, "LHEScaleWeight_5/F");
   ExTree->Branch("LHEScaleWeight_6", &LHEScaleWeight_6, "LHEScaleWeight_6/F");
   ExTree->Branch("LHEScaleWeight_7", &LHEScaleWeight_7, "LHEScaleWeight_7/F");
   ExTree->Branch("LHEScaleWeight_8", &LHEScaleWeight_8, "LHEScaleWeight_8/F");


   // PDF weight
   ExTree->Branch("LHEPdfWeight",&v_LHEPdfWeight_);

   // PS weight

   ExTree->Branch("PSWeight",&v_PSWeight_);
   // cout<< "Test"<<v_LHEScaleWeight_[0]<<endl;

   ExTree->Branch("PSWeight_0", &PSWeight_0, "PSWeight_0/F");
   ExTree->Branch("PSWeight_1", &PSWeight_1, "PSWeight_1/F");
   ExTree->Branch("PSWeight_2", &PSWeight_2, "PSWeight_2/F");
   ExTree->Branch("PSWeight_3", &PSWeight_3, "PSWeight_3/F");




   ExTree->Branch("goodRun", &goodRun, "goodRun/b");
   ExTree->Branch("Flag", &Flag, "Flag/b");

   ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
   // ExTree->Branch("MET_et", &MET_et, "MET_et/F");


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

   ExTree->Branch("MET_et",&MET_et,"MET_et/F");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");

   // UE up/down MET variation
   ExTree->Branch("MET_et_UEup",&MET_et_UEup,"MET_et_UEup/F");
   ExTree->Branch("MET_phi_UEup",&MET_phi_UEup,"MET_phi_UEup/F");
   // cout << "MET test 2:" << MET_et_UEup << endl;

   ExTree->Branch("MET_et_UEdown",&MET_et_UEdown,"MET_et_UEdown/F");
   ExTree->Branch("MET_phi_UEdown",&MET_phi_UEdown,"MET_phi_UEdown/F");



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

   //Split JES
   
ExTree->Branch("Mj_jesAbsoluteUp_a",&Mj_jesAbsoluteUp_a,"Mj_jesAbsoluteUp_a/F"),
ExTree->Branch("Mj_jesAbsoluteDown_a",&Mj_jesAbsoluteDown_a,"Mj_jesAbsoluteDown_a/F"),
ExTree->Branch("Mj_jesAbsolute_yearUp_a",&Mj_jesAbsolute_yearUp_a,"Mj_jesAbsolute_yearUp_a/F"),
ExTree->Branch("Mj_jesAbsolute_yearDown_a",&Mj_jesAbsolute_yearDown_a,"Mj_jesAbsolute_yearDown_a/F"),
ExTree->Branch("Mj_jesBBEC1Down_a",&Mj_jesBBEC1Down_a,"Mj_jesBBEC1Down_a/F"),
ExTree->Branch("Mj_jesBBEC1Up_a",&Mj_jesBBEC1Up_a,"Mj_jesBBEC1Up_a/F"),
ExTree->Branch("Mj_jesBBEC1_yearUp_a",&Mj_jesBBEC1_yearUp_a,"Mj_jesBBEC1_yearUp_a/F"),
ExTree->Branch("Mj_jesBBEC1_yearDown_a",&Mj_jesBBEC1_yearDown_a,"Mj_jesBBEC1_yearDown_a/F"),
ExTree->Branch("Mj_jesEC2Up_a",&Mj_jesEC2Up_a,"Mj_jesEC2Up_a/F"),
ExTree->Branch("Mj_jesEC2Down_a",&Mj_jesEC2Down_a,"Mj_jesEC2Down_a/F"),
ExTree->Branch("Mj_jesEC2_yearUp_a",&Mj_jesEC2_yearUp_a,"Mj_jesEC2_yearUp_a/F"),
ExTree->Branch("Mj_jesEC2_yearDown_a",&Mj_jesEC2_yearDown_a,"Mj_jesEC2_yearDown_a/F"),
ExTree->Branch("Mj_jesFlavorQCDUp_a",&Mj_jesFlavorQCDUp_a,"Mj_jesFlavorQCDUp_a/F"),
ExTree->Branch("Mj_jesFlavorQCDDown_a",&Mj_jesFlavorQCDDown_a,"Mj_jesFlavorQCDDown_a/F"),
ExTree->Branch("Mj_jesHFDown_a",&Mj_jesHFDown_a,"Mj_jesHFDown_a/F"),
ExTree->Branch("Mj_jesHFUp_a",&Mj_jesHFUp_a,"Mj_jesHFUp_a/F"),
ExTree->Branch("Mj_jesHF_yearUp_a",&Mj_jesHF_yearUp_a,"Mj_jesHF_yearUp_a/F"),
ExTree->Branch("Mj_jesHF_yearDown_a",&Mj_jesHF_yearDown_a,"Mj_jesHF_yearDown_a/F"),
ExTree->Branch("Mj_jesRelativeBalUp_a",&Mj_jesRelativeBalUp_a,"Mj_jesRelativeBalUp_a/F"),
ExTree->Branch("Mj_jesRelativeBalDown_a",&Mj_jesRelativeBalDown_a,"Mj_jesRelativeBalDown_a/F"),
ExTree->Branch("Mj_jesRelativeSample_yearUp_a",&Mj_jesRelativeSample_yearUp_a,"Mj_jesRelativeSample_yearUp_a/F"),
ExTree->Branch("Mj_jesRelativeSample_yearDown_a",&Mj_jesRelativeSample_yearDown_a,"Mj_jesRelativeSample_yearDown_a/F"),

ExTree->Branch("Mj_jesAbsoluteUp_b",&Mj_jesAbsoluteUp_b,"Mj_jesAbsoluteUp_b/F"),
ExTree->Branch("Mj_jesAbsoluteDown_b",&Mj_jesAbsoluteDown_b,"Mj_jesAbsoluteDown_b/F"),
ExTree->Branch("Mj_jesAbsolute_yearUp_b",&Mj_jesAbsolute_yearUp_b,"Mj_jesAbsolute_yearUp_b/F"),
ExTree->Branch("Mj_jesAbsolute_yearDown_b",&Mj_jesAbsolute_yearDown_b,"Mj_jesAbsolute_yearDown_b/F"),
ExTree->Branch("Mj_jesBBEC1Down_b",&Mj_jesBBEC1Down_b,"Mj_jesBBEC1Down_b/F"),
ExTree->Branch("Mj_jesBBEC1Up_b",&Mj_jesBBEC1Up_b,"Mj_jesBBEC1Up_b/F"),
ExTree->Branch("Mj_jesBBEC1_yearUp_b",&Mj_jesBBEC1_yearUp_b,"Mj_jesBBEC1_yearUp_b/F"),
ExTree->Branch("Mj_jesBBEC1_yearDown_b",&Mj_jesBBEC1_yearDown_b,"Mj_jesBBEC1_yearDown_b/F"),
ExTree->Branch("Mj_jesEC2Up_b",&Mj_jesEC2Up_b,"Mj_jesEC2Up_b/F"),
ExTree->Branch("Mj_jesEC2Down_b",&Mj_jesEC2Down_b,"Mj_jesEC2Down_b/F"),
ExTree->Branch("Mj_jesEC2_yearUp_b",&Mj_jesEC2_yearUp_b,"Mj_jesEC2_yearUp_b/F"),
ExTree->Branch("Mj_jesEC2_yearDown_b",&Mj_jesEC2_yearDown_b,"Mj_jesEC2_yearDown_b/F"),
ExTree->Branch("Mj_jesFlavorQCDUp_b",&Mj_jesFlavorQCDUp_b,"Mj_jesFlavorQCDUp_b/F"),
ExTree->Branch("Mj_jesFlavorQCDDown_b",&Mj_jesFlavorQCDDown_b,"Mj_jesFlavorQCDDown_b/F"),
ExTree->Branch("Mj_jesHFDown_b",&Mj_jesHFDown_b,"Mj_jesHFDown_b/F"),
ExTree->Branch("Mj_jesHFUp_b",&Mj_jesHFUp_b,"Mj_jesHFUp_b/F"),
ExTree->Branch("Mj_jesHF_yearUp_b",&Mj_jesHF_yearUp_b,"Mj_jesHF_yearUp_b/F"),
ExTree->Branch("Mj_jesHF_yearDown_b",&Mj_jesHF_yearDown_b,"Mj_jesHF_yearDown_b/F"),
ExTree->Branch("Mj_jesRelativeBalUp_b",&Mj_jesRelativeBalUp_b,"Mj_jesRelativeBalUp_b/F"),
ExTree->Branch("Mj_jesRelativeBalDown_b",&Mj_jesRelativeBalDown_b,"Mj_jesRelativeBalDown_b/F"),
ExTree->Branch("Mj_jesRelativeSample_yearUp_b",&Mj_jesRelativeSample_yearUp_b,"Mj_jesRelativeSample_yearUp_b/F"),
ExTree->Branch("Mj_jesRelativeSample_yearDown_b",&Mj_jesRelativeSample_yearDown_b,"Mj_jesRelativeSample_yearDown_b/F"),

ExTree->Branch("Mj_jesAbsoluteUp_c",&Mj_jesAbsoluteUp_c,"Mj_jesAbsoluteUp_c/F"),
ExTree->Branch("Mj_jesAbsoluteDown_c",&Mj_jesAbsoluteDown_c,"Mj_jesAbsoluteDown_c/F"),
ExTree->Branch("Mj_jesAbsolute_yearUp_c",&Mj_jesAbsolute_yearUp_c,"Mj_jesAbsolute_yearUp_c/F"),
ExTree->Branch("Mj_jesAbsolute_yearDown_c",&Mj_jesAbsolute_yearDown_c,"Mj_jesAbsolute_yearDown_c/F"),
ExTree->Branch("Mj_jesBBEC1Down_c",&Mj_jesBBEC1Down_c,"Mj_jesBBEC1Down_c/F"),
ExTree->Branch("Mj_jesBBEC1Up_c",&Mj_jesBBEC1Up_c,"Mj_jesBBEC1Up_c/F"),
ExTree->Branch("Mj_jesBBEC1_yearUp_c",&Mj_jesBBEC1_yearUp_c,"Mj_jesBBEC1_yearUp_c/F"),
ExTree->Branch("Mj_jesBBEC1_yearDown_c",&Mj_jesBBEC1_yearDown_c,"Mj_jesBBEC1_yearDown_c/F"),
ExTree->Branch("Mj_jesEC2Up_c",&Mj_jesEC2Up_c,"Mj_jesEC2Up_c/F"),
ExTree->Branch("Mj_jesEC2Down_c",&Mj_jesEC2Down_c,"Mj_jesEC2Down_c/F"),
ExTree->Branch("Mj_jesEC2_yearUp_c",&Mj_jesEC2_yearUp_c,"Mj_jesEC2_yearUp_c/F"),
ExTree->Branch("Mj_jesEC2_yearDown_c",&Mj_jesEC2_yearDown_c,"Mj_jesEC2_yearDown_c/F"),
ExTree->Branch("Mj_jesFlavorQCDUp_c",&Mj_jesFlavorQCDUp_c,"Mj_jesFlavorQCDUp_c/F"),
ExTree->Branch("Mj_jesFlavorQCDDown_c",&Mj_jesFlavorQCDDown_c,"Mj_jesFlavorQCDDown_c/F"),
ExTree->Branch("Mj_jesHFDown_c",&Mj_jesHFDown_c,"Mj_jesHFDown_c/F"),
ExTree->Branch("Mj_jesHFUp_c",&Mj_jesHFUp_c,"Mj_jesHFUp_c/F"),
ExTree->Branch("Mj_jesHF_yearUp_c",&Mj_jesHF_yearUp_c,"Mj_jesHF_yearUp_c/F"),
ExTree->Branch("Mj_jesHF_yearDown_c",&Mj_jesHF_yearDown_c,"Mj_jesHF_yearDown_c/F"),
ExTree->Branch("Mj_jesRelativeBalUp_c",&Mj_jesRelativeBalUp_c,"Mj_jesRelativeBalUp_c/F"),
ExTree->Branch("Mj_jesRelativeBalDown_c",&Mj_jesRelativeBalDown_c,"Mj_jesRelativeBalDown_c/F"),
ExTree->Branch("Mj_jesRelativeSample_yearUp_c",&Mj_jesRelativeSample_yearUp_c,"Mj_jesRelativeSample_yearUp_c/F"),
ExTree->Branch("Mj_jesRelativeSample_yearDown_c",&Mj_jesRelativeSample_yearDown_c,"Mj_jesRelativeSample_yearDown_c/F"),


   // Done Split

   ExTree->Branch("Mj_jerUp_a",&Mj_jerUp_a,"Mj_jerUp_a/F");
   ExTree->Branch("Mj_jerUp_b",&Mj_jerUp_b,"Mj_jerUp_b/F");
   ExTree->Branch("Mj_jerUp_c",&Mj_jerUp_c,"Mj_jerUp_c/F");

   ExTree->Branch("Mj_jerDown_a",&Mj_jerDown_a,"Mj_jerDown_a/F");
   ExTree->Branch("Mj_jerDown_b",&Mj_jerDown_b,"Mj_jerDown_b/F");
   ExTree->Branch("Mj_jerDown_c",&Mj_jerDown_c,"Mj_jerDown_c/F");
   
   // JES, JER over

   // JMS, JMR part

   ExTree->Branch("Mj_jmsUp_a",&Mj_jmsUp_a,"Mj_jmsUp_a/F");
   ExTree->Branch("Mj_jmsUp_b",&Mj_jmsUp_b,"Mj_jmsUp_b/F");
   ExTree->Branch("Mj_jmsUp_c",&Mj_jmsUp_c,"Mj_jmsUp_c/F");

   ExTree->Branch("Mj_jmsDown_a",&Mj_jmsDown_a,"Mj_jmsDown_a/F");
   ExTree->Branch("Mj_jmsDown_b",&Mj_jmsDown_b,"Mj_jmsDown_b/F");
   ExTree->Branch("Mj_jmsDown_c",&Mj_jmsDown_c,"Mj_jmsDown_c/F");

   ExTree->Branch("Mj_jmrUp_a",&Mj_jmrUp_a,"Mj_jmrUp_a/F");
   ExTree->Branch("Mj_jmrUp_b",&Mj_jmrUp_b,"Mj_jmrUp_b/F");
   ExTree->Branch("Mj_jmrUp_c",&Mj_jmrUp_c,"Mj_jmrUp_c/F");

   ExTree->Branch("Mj_jmrDown_a",&Mj_jmrDown_a,"Mj_jmrDown_a/F");
   ExTree->Branch("Mj_jmrDown_b",&Mj_jmrDown_b,"Mj_jmrDown_b/F");
   ExTree->Branch("Mj_jmrDown_c",&Mj_jmrDown_c,"Mj_jmrDown_c/F");
   
   // JMS, JMR over

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

// Deleted since not used
// ExTree->Branch("FatJet_tau1_HWW_a",&FatJet_tau1_HWW_a, "FatJet_tau1_HWW_a/F");
// ExTree->Branch("FatJet_tau2_HWW_a",&FatJet_tau2_HWW_a, "FatJet_tau2_HWW_a/F");
// ExTree->Branch("FatJet_tau3_HWW_a",&FatJet_tau3_HWW_a, "FatJet_tau3_HWW_a/F");
// ExTree->Branch("FatJet_tau4_HWW_a",&FatJet_tau4_HWW_a, "FatJet_tau4_HWW_a/F");
// ExTree->Branch("FatJet_tau1_HWW_b",&FatJet_tau1_HWW_b, "FatJet_tau1_HWW_b/F");
// ExTree->Branch("FatJet_tau2_HWW_b",&FatJet_tau2_HWW_b, "FatJet_tau2_HWW_b/F");
// ExTree->Branch("FatJet_tau3_HWW_b",&FatJet_tau3_HWW_b, "FatJet_tau3_HWW_b/F");
// ExTree->Branch("FatJet_tau4_HWW_b",&FatJet_tau4_HWW_b, "FatJet_tau4_HWW_b/F");
// ExTree->Branch("FatJet_tau1_HWW_c",&FatJet_tau1_HWW_c, "FatJet_tau1_HWW_c/F");
// ExTree->Branch("FatJet_tau2_HWW_c",&FatJet_tau2_HWW_c, "FatJet_tau2_HWW_c/F");
// ExTree->Branch("FatJet_tau3_HWW_c",&FatJet_tau3_HWW_c, "FatJet_tau3_HWW_c/F");
// ExTree->Branch("FatJet_tau4_HWW_c",&FatJet_tau4_HWW_c, "FatJet_tau4_HWW_c/F");

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

   //Deleted since not used

   // ExTree->Branch("HLT_PFMET110_PFMHT110_IDTight",&HLT_PFMET110_PFMHT110_IDTight,"HLT_PFMET110_PFMHT110_IDTight/B");
   // ExTree->Branch("HLT_PFMET120_PFMHT120_IDTight",&HLT_PFMET120_PFMHT120_IDTight,"HLT_PFMET120_PFMHT120_IDTight/B");
   // ExTree->Branch("HLT_PFMET130_PFMHT130_IDTight",&HLT_PFMET130_PFMHT130_IDTight,"HLT_PFMET130_PFMHT130_IDTight/B");
   // ExTree->Branch("HLT_PFMET140_PFMHT140_IDTight",&HLT_PFMET140_PFMHT140_IDTight,"HLT_PFMET140_PFMHT140_IDTight/B");
   // ExTree->Branch("HLT_Mu50",                     &HLT_Mu50,                     "HLT_Mu50/B");
   // ExTree->Branch("HLT_Ele115_CaloIdVT_GsfTrkIdT",&HLT_Ele115_CaloIdVT_GsfTrkIdT,"HLT_Ele115_CaloIdVT_GsfTrkIdT/B");
   // ExTree->Branch("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165",&HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165,"HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165/B");
   
   // define ExTree for HWW output.

   //Deleted since not used

   // ExTree->Branch("MET_phi_NoXYCorr",&MET_phi_NoXYCorr,"MET_phi_NoXYCorr/F");
   // ExTree->Branch("MET_et_NoXYCorr",&MET_et_NoXYCorr,"MET_et_NoXYCorr/F");
   
   // ExTree->Branch("Jet_mass_nom_out",&Jet_mass_nom_out);
   // ExTree->Branch("Jet_pt_nom_out",&Jet_pt_nom_out);

   // ExTree->Branch("Jet_pt_out",&Jet_pt_out);
   // ExTree->Branch("Jet_eta_out",&Jet_eta_out);
   // ExTree->Branch("Jet_phi_out",&Jet_phi_out);
   // ExTree->Branch("Jet_mass_out",&Jet_mass_out);
   // ExTree->Branch("Jet_btagDeepFlavB_out",&Jet_btagDeepFlavB_out);
   // ExTree->Branch("Jet_jetId_out",&Jet_jetId_out);
   // ExTree->Branch("Jet_hadronFlavour_out",&Jet_hadronFlavour_out);

   // ExTree->Branch("Mj_corr_Pneta",&Mj_corr_Pneta,"Mj_corr_Pneta/F");
   // ExTree->Branch("Mj_corr_Pnetb",&Mj_corr_Pnetb,"Mj_corr_Pnetb/F");
   // ExTree->Branch("Mj_corr_Pnetc",&Mj_corr_Pnetc,"Mj_corr_Pnetc/F");

   // ExTree->Branch("Mj_corr_a",&Mj_corr_a,"Mj_corr_a/F");
   // ExTree->Branch("Mj_corr_b",&Mj_corr_b,"Mj_corr_b/F");
   // ExTree->Branch("Mj_corr_c",&Mj_corr_c,"Mj_corr_c/F");

   // ExTree->Branch("Mj_corr_max",&Mj_corr_max,"Mj_corr_max/F");
   // ExTree->Branch("Mj_corr_mid",&Mj_corr_mid,"Mj_corr_mid/F");
   // ExTree->Branch("Mj_corr_min",&Mj_corr_min,"Mj_corr_min/F");

   // ExTree->Branch("Mj_corr",&Mj_corr,"Mj_corr/F");
   // ExTree->Branch("Mj_corr_2",&Mj_corr_2,"Mj_corr_2/F");
   // ExTree->Branch("Mj_corr_3",&Mj_corr_3,"Mj_corr_3/F");

   // ExTree->Branch("MET_T1Smear_phi_XYcorr",&MET_T1Smear_phi_XYcorr,"MET_T1Smear_phi_XYcorr/F");
   // ExTree->Branch("MET_T1Smear_pt_XYcorr",&MET_T1Smear_pt_XYcorr,"MET_T1Smear_pt_XYcorr/F");

}
#endif