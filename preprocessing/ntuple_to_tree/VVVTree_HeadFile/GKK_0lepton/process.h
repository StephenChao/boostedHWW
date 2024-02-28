#ifndef _GKK_0lepton__process_
#define _GKK_0lepton__process_


void EDBR2PKUTree::initFatJet_Collection(){
    FatJet_P FatJet_P_ = {
        &v_FatJet_pt_,
        &v_FatJet_eta_,
        &v_FatJet_phi_,
        &v_FatJet_msoftdrop_,
        &v_FatJet_jetId_,

        &v_FatJet_tau1_,
        &v_FatJet_tau2_,
        &v_FatJet_tau3_,
        &v_FatJet_tau4_,
        &v_FatJet_msoftdrop_raw_,
        &v_FatJet_msoftdrop_nom_,
        &v_FatJet_msoftdrop_corr_JMR_,
        &v_FatJet_msoftdrop_corr_JMS_,
        &v_FatJet_msoftdrop_corr_PUPPI_,

        &v_FatJet_msoftdrop_jesTotalUp_,
        &v_FatJet_msoftdrop_jesTotalDown_,
        &v_FatJet_msoftdrop_jerUp_,
        &v_FatJet_msoftdrop_jerDown_,

        &v_FatJet_pt_nom_,
        //HWW tagger.
        //V2
        &v_FatJet_inclParTMDV1_probHWqqWqq0c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWqq1c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWqq2c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWq0c_     ,
        &v_FatJet_inclParTMDV1_probHWqqWq1c_     ,
        &v_FatJet_inclParTMDV1_probHWqqWq2c_     ,
        &v_FatJet_inclParTMDV1_probHWqqWev0c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWev1c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWmv0c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWmv1c_    ,
        &v_FatJet_inclParTMDV1_probHWqqWtauev0c_ ,
        &v_FatJet_inclParTMDV1_probHWqqWtauev1c_ ,
        &v_FatJet_inclParTMDV1_probHWqqWtaumv0c_ ,
        &v_FatJet_inclParTMDV1_probHWqqWtaumv1c_ ,
        &v_FatJet_inclParTMDV1_probHWqqWtauhv0c_ ,
        &v_FatJet_inclParTMDV1_probHWqqWtauhv1c_ ,
        &v_FatJet_inclParTMDV1_probHbb_          ,
        &v_FatJet_inclParTMDV1_probHcc_          ,
        &v_FatJet_inclParTMDV1_probHss_          ,
        &v_FatJet_inclParTMDV1_probHqq_          ,
        &v_FatJet_inclParTMDV1_probHtauhtaue_    ,
        &v_FatJet_inclParTMDV1_probHtauhtaum_    ,
        &v_FatJet_inclParTMDV1_probHtauhtauh_    ,
        &v_FatJet_inclParTMDV1_probQCDbb_        ,
        &v_FatJet_inclParTMDV1_probQCDcc_        ,
        &v_FatJet_inclParTMDV1_probQCDb_         ,
        &v_FatJet_inclParTMDV1_probQCDc_         ,
        &v_FatJet_inclParTMDV1_probQCDothers_    ,
        &v_FatJet_inclParTMDV1_probTopbWqq0c_    ,
        &v_FatJet_inclParTMDV1_probTopbWqq1c_    ,
        &v_FatJet_inclParTMDV1_probTopbWq0c_     ,
        &v_FatJet_inclParTMDV1_probTopbWq1c_     ,
        &v_FatJet_inclParTMDV1_probTopbWev_      ,
        &v_FatJet_inclParTMDV1_probTopbWmv_      ,
        &v_FatJet_inclParTMDV1_probTopbWtauhv_   ,
        &v_FatJet_inclParTMDV1_probTopbWtauev_   ,
        &v_FatJet_inclParTMDV1_probTopbWtaumv_   ,

    } ;
    FatJets = FatJet_Collection( FatJet_P_, 3, 2);

    // class FatJet_Collection defined in fatJets.h
}

void EDBR2PKUTree::GKK_process_1(Long64_t jentry, TString YEAR) {
    Jets_GetEntry(jentry);
    fatJets_GetEntry(jentry);

    initFatJet_Collection(); // Fill the array of all variables, using FatJet_Collection.
    Nj8 = FatJets.size();

    FatJets_P4_PTOrder();
    FatJets_P4_MASSOrder();
    // FatJets_P4_DEEP_MD_W_Order();
    // FatJets_P4_PNet_MD_W_Order();
    // FatJets_P4_HWWH4q_Order();
    FatJets_P4_HWWV2_Order();

    MJJ_MJJJf();
    METf();
    HT_ST();

    //So MET and HT was defined in this step!
}

void EDBR2PKUTree::initJet_Collection(TString YEAR){
    Jet_P Jet_P_ = {
        &v_Jet_pt_,
        &v_Jet_eta_,
        &v_Jet_phi_,
        &v_Jet_mass_,
        &v_Jet_btagDeepFlavB_,
        &v_Jet_jetId_,
        &v_Jet_hadronFlavour_,
        &v_Jet_pt_nom_,
        &v_Jet_mass_nom_,
    };
    
    vector<TLorentzVector> FatJets_;
    TLorentzVector AK8;
    if(PTj > 200){
        AK8.SetPtEtaPhiM( PTj, Etaj, Phij, Mj );
        FatJets_.push_back(AK8);
    }
    if(PTj_2 > 200){
        AK8.SetPtEtaPhiM( PTj_2, Etaj_2, Phij_2, Mj_2 );
        FatJets_.push_back(AK8);
    }
    if(PTj_3 > 200){
        AK8.SetPtEtaPhiM( PTj_3, Etaj_3, Phij_3, Mj_3 );
        FatJets_.push_back(AK8);
    }
//input FatJets to calculate the exclusive or not.
    Jets = Jet_Collection( Jet_P_, 1, YEAR, FatJets_);
}

void EDBR2PKUTree::GKK_process_2(Long64_t jentry, TString YEAR) {

    initJet_Collection(YEAR);

    // FatJets_DEEP_MD_W_Order();
    // FatJets_PNet_MD_W_Order();
    // FatJets_HWWH4q_Order(); 
    FatJets_HWWV2_Order(); 
    Nbtagf();


}

void EDBR2PKUTree::FatJets_P4_PTOrder() { // here we used pt_nom order but not the original pt order.
    PTj  = FatJets.Get("pt_nom","pt_nom" , 0);
    Etaj = FatJets.Get("pt_nom","eta", 0);
    Phij = FatJets.Get("pt_nom","phi", 0);
    Mj   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 0);
    // Mj   = FatJets.Get("pt_nom","msoftdrop_nom", 0);

    Mj_jesTotalUp   = FatJets.Get("pt_nom","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown = FatJets.Get("pt_nom","msoftdrop_jesTotalDown", 0);
    Mj_jerUp        = FatJets.Get("pt_nom","msoftdrop_jerUp", 0);
    Mj_jerDown      = FatJets.Get("pt_nom","msoftdrop_jerDown", 0);

    Mj_corr   = FatJets.Get("pt_nom","msoftdrop_nom", 0);

    PTj_2  = FatJets.Get("pt_nom","pt_nom" , 1);
    Etaj_2 = FatJets.Get("pt_nom","eta", 1);
    Phij_2 = FatJets.Get("pt_nom","phi", 1);
    Mj_2   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 1);
    Mj_corr_2   = FatJets.Get("pt_nom","msoftdrop_nom", 1);
    
    Mj_jesTotalUp_2   = FatJets.Get("pt_nom","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_2 = FatJets.Get("pt_nom","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_2        = FatJets.Get("pt_nom","msoftdrop_jerUp", 1);
    Mj_jerDown_2      = FatJets.Get("pt_nom","msoftdrop_jerDown", 1);



    PTj_3  = FatJets.Get("pt_nom","pt_nom" , 2);
    Etaj_3 = FatJets.Get("pt_nom","eta", 2);
    Phij_3 = FatJets.Get("pt_nom","phi", 2);
    Mj_3   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 2);
    Mj_corr_3   = FatJets.Get("pt_nom","msoftdrop_nom", 2);

    Mj_jesTotalUp_3   = FatJets.Get("pt_nom","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_3 = FatJets.Get("pt_nom","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_3        = FatJets.Get("pt_nom","msoftdrop_jerUp", 2);
    Mj_jerDown_3      = FatJets.Get("pt_nom","msoftdrop_jerDown", 2);
}

void EDBR2PKUTree::FatJets_P4_MASSOrder() {
    PTj_max  = FatJets.Get("Mass","pt_nom" , 0);
    Etaj_max = FatJets.Get("Mass","eta", 0);
    Phij_max = FatJets.Get("Mass","phi", 0);
    Mj_max   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 0);
    Mj_corr_max   = FatJets.Get("Mass","msoftdrop_nom", 0);

    Mj_jesTotalUp_max   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown_max = FatJets.Get("Mass","msoftdrop_jesTotalDown", 0);
    Mj_jerUp_max        = FatJets.Get("Mass","msoftdrop_jerUp", 0);
    Mj_jerDown_max      = FatJets.Get("Mass","msoftdrop_jerDown", 0);


    HWW_V2_max = FatJets.Get("Mass","HWW_V2",0);
    HWW_V2_mid = FatJets.Get("Mass","HWW_V2",1);
    HWW_V2_min = FatJets.Get("Mass","HWW_V2",2);

    PTj_mid  = FatJets.Get("Mass","pt_nom" , 1);
    Etaj_mid = FatJets.Get("Mass","eta", 1);
    Phij_mid = FatJets.Get("Mass","phi", 1);
    Mj_mid   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 1);
    Mj_corr_mid   = FatJets.Get("Mass","msoftdrop_nom", 1);

    Mj_jesTotalUp_mid   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_mid = FatJets.Get("Mass","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_mid        = FatJets.Get("Mass","msoftdrop_jerUp", 1);
    Mj_jerDown_mid      = FatJets.Get("Mass","msoftdrop_jerDown", 1);


    PTj_min  = FatJets.Get("Mass","pt_nom" , 2);
    Etaj_min = FatJets.Get("Mass","eta", 2);
    Phij_min = FatJets.Get("Mass","phi", 2);
    Mj_min   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 2);
    Mj_corr_min   = FatJets.Get("Mass","msoftdrop_nom", 2);

    Mj_jesTotalUp_min   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_min = FatJets.Get("Mass","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_min        = FatJets.Get("Mass","msoftdrop_jerUp", 2);
    Mj_jerDown_min      = FatJets.Get("Mass","msoftdrop_jerDown", 2);


}

void EDBR2PKUTree::FatJets_P4_DEEP_MD_W_Order() {
    PTj_a  = FatJets.Get("deep-W-MD","pt_nom" , 0);
    Etaj_a = FatJets.Get("deep-W-MD","eta", 0);
    Phij_a = FatJets.Get("deep-W-MD","phi", 0);
    Mj_a   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_a   = FatJets.Get("deep-W-MD","msoftdrop_nom", 0);

    PTj_b  = FatJets.Get("deep-W-MD","pt_nom" , 1);
    Etaj_b = FatJets.Get("deep-W-MD","eta", 1);
    Phij_b = FatJets.Get("deep-W-MD","phi", 1);
    Mj_b   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_b   = FatJets.Get("deep-W-MD","msoftdrop_nom", 1);

    PTj_c  = FatJets.Get("deep-W-MD","pt_nom" , 2);
    Etaj_c = FatJets.Get("deep-W-MD","eta", 2);
    Phij_c = FatJets.Get("deep-W-MD","phi", 2);
    Mj_c   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_c   = FatJets.Get("deep-W-MD","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_DEEP_MD_W_Order(){
    dnnDecorr_probTbcq_a      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",0);
    dnnDecorr_probTbqq_a      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",0);
    dnnDecorr_probTbc_a       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",0);
    dnnDecorr_probTbq_a       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",0);
    dnnDecorr_probWcq_a       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",0);
    dnnDecorr_probWqq_a       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",0);
    dnnDecorr_probZbb_a       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",0);
    dnnDecorr_probZcc_a       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",0);
    dnnDecorr_probZqq_a       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",0);
    dnnDecorr_probHbb_a       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",0);
    dnnDecorr_probHcc_a       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",0);
    dnnDecorr_probHqqqq_a     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",0);
    dnnDecorr_probQCDbb_a     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",0);
    dnnDecorr_probQCDcc_a     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",0);
    dnnDecorr_probQCDb_a      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",0);
    dnnDecorr_probQCDc_a      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",0);
    dnnDecorr_probQCDothers_a = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",0);
    FatJet_tau1_a             = FatJets.Get("deep-W-MD","tau1",0);
    FatJet_tau2_a             = FatJets.Get("deep-W-MD","tau2",0);
    FatJet_tau3_a             = FatJets.Get("deep-W-MD","tau3",0);
    FatJet_tau4_a             = FatJets.Get("deep-W-MD","tau4",0);


    dnnDecorr_probTbcq_b      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",1);
    dnnDecorr_probTbqq_b      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",1);
    dnnDecorr_probTbc_b       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",1);
    dnnDecorr_probTbq_b       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",1);
    dnnDecorr_probWcq_b       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",1);
    dnnDecorr_probWqq_b       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",1);
    dnnDecorr_probZbb_b       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",1);
    dnnDecorr_probZcc_b       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",1);
    dnnDecorr_probZqq_b       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",1);
    dnnDecorr_probHbb_b       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",1);
    dnnDecorr_probHcc_b       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",1);
    dnnDecorr_probHqqqq_b     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",1);
    dnnDecorr_probQCDbb_b     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",1);
    dnnDecorr_probQCDcc_b     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",1);
    dnnDecorr_probQCDb_b      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",1);
    dnnDecorr_probQCDc_b      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",1);
    dnnDecorr_probQCDothers_b = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",1);
    FatJet_tau1_b      = FatJets.Get("deep-W-MD","tau1",1);
    FatJet_tau2_b      = FatJets.Get("deep-W-MD","tau2",1);
    FatJet_tau3_b      = FatJets.Get("deep-W-MD","tau3",1);
    FatJet_tau4_b      = FatJets.Get("deep-W-MD","tau4",1);

    dnnDecorr_probTbcq_c      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",2);
    dnnDecorr_probTbqq_c      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",2);
    dnnDecorr_probTbc_c       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",2);
    dnnDecorr_probTbq_c       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",2);
    dnnDecorr_probWcq_c       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",2);
    dnnDecorr_probWqq_c       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",2);
    dnnDecorr_probZbb_c       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",2);
    dnnDecorr_probZcc_c       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",2);
    dnnDecorr_probZqq_c       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",2);
    dnnDecorr_probHbb_c       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",2);
    dnnDecorr_probHcc_c       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",2);
    dnnDecorr_probHqqqq_c     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",2);
    dnnDecorr_probQCDbb_c     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",2);
    dnnDecorr_probQCDcc_c     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",2);
    dnnDecorr_probQCDb_c      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",2);
    dnnDecorr_probQCDc_c      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",2);
    dnnDecorr_probQCDothers_c = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",2);
    FatJet_tau1_c = FatJets.Get("deep-W-MD","tau1",2);
    FatJet_tau2_c = FatJets.Get("deep-W-MD","tau2",2);
    FatJet_tau3_c = FatJets.Get("deep-W-MD","tau3",2);
    FatJet_tau4_c = FatJets.Get("deep-W-MD","tau4",2);

    PartNet_MD_W_a   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 0);
    PartNet_MD_W_b   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 1);
    PartNet_MD_W_c   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 2);
}

void EDBR2PKUTree::FatJets_P4_PNet_MD_W_Order() {
    PTj_Pneta  = FatJets.Get("PNet-W-MD","pt_nom" , 0);
    Etaj_Pneta = FatJets.Get("PNet-W-MD","eta", 0);
    Phij_Pneta = FatJets.Get("PNet-W-MD","phi", 0);
    Mj_Pneta   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_Pneta   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 0);

    PTj_Pnetb  = FatJets.Get("PNet-W-MD","pt_nom" , 1);
    Etaj_Pnetb = FatJets.Get("PNet-W-MD","eta", 1);
    Phij_Pnetb = FatJets.Get("PNet-W-MD","phi", 1);
    Mj_Pnetb   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_Pnetb   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 1);

    PTj_Pnetc  = FatJets.Get("PNet-W-MD","pt_nom" , 2);
    Etaj_Pnetc = FatJets.Get("PNet-W-MD","eta", 2);
    Phij_Pnetc = FatJets.Get("PNet-W-MD","phi", 2);
    Mj_Pnetc   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_Pnetc   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_PNet_MD_W_Order() {
    PartNet_MD_W_Pneta   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 0);
    PartNet_MD_W_Pnetb   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 1);
    PartNet_MD_W_Pnetc   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 2);

    dnnDecorr_probTbcq_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probTbcq",2);
    dnnDecorr_probTbqq_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probTbqq",2);
    dnnDecorr_probTbc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probTbc",2);
    dnnDecorr_probTbq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probTbq",2);
    dnnDecorr_probWcq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probWcq",2);
    dnnDecorr_probWqq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probWqq",2);
    dnnDecorr_probZbb_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZbb",2);
    dnnDecorr_probZcc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZcc",2);
    dnnDecorr_probZqq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZqq",2);
    dnnDecorr_probHbb_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probHbb",2);
    dnnDecorr_probHcc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probHcc",2);
    dnnDecorr_probHqqqq_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probHqqqq",2);
    dnnDecorr_probQCDbb_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probQCDbb",2);
    dnnDecorr_probQCDcc_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probQCDcc",2);
    dnnDecorr_probQCDb_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probQCDb",2);
    dnnDecorr_probQCDc_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probQCDc",2);
    dnnDecorr_probQCDothers_Pnetc = FatJets.Get("PNet-W-MD","deepTagMD_probQCDothers",2);

    FatJet_tau1_Pneta = FatJets.Get("PNet-W-MD","tau1",0);
    FatJet_tau2_Pneta = FatJets.Get("PNet-W-MD","tau2",0);
    FatJet_tau3_Pneta = FatJets.Get("PNet-W-MD","tau3",0);
    FatJet_tau4_Pneta = FatJets.Get("PNet-W-MD","tau4",0);

    FatJet_tau1_Pnetb = FatJets.Get("PNet-W-MD","tau1",1);
    FatJet_tau2_Pnetb = FatJets.Get("PNet-W-MD","tau2",1);
    FatJet_tau3_Pnetb = FatJets.Get("PNet-W-MD","tau3",1);
    FatJet_tau4_Pnetb = FatJets.Get("PNet-W-MD","tau4",1);

    FatJet_tau1_Pnetc = FatJets.Get("PNet-W-MD","tau1",2);
    FatJet_tau2_Pnetc = FatJets.Get("PNet-W-MD","tau2",2);
    FatJet_tau3_Pnetc = FatJets.Get("PNet-W-MD","tau3",2);
    FatJet_tau4_Pnetc = FatJets.Get("PNet-W-MD","tau4",2);
}

//New tagger, actually general HWW tagger order.
void EDBR2PKUTree::FatJets_P4_HWWH4q_Order() {
    PTj_HWWa  = FatJets.Get("HWW-H4q-MD","pt_nom" , 0);
    Etaj_HWWa = FatJets.Get("HWW-H4q-MD","eta", 0);
    Phij_HWWa = FatJets.Get("HWW-H4q-MD","phi", 0);
    Mj_HWWa   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_HWWa   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom", 0);

    PTj_HWWb  = FatJets.Get("HWW-H4q-MD","pt_nom" , 1);
    Etaj_HWWb = FatJets.Get("HWW-H4q-MD","eta", 1);
    Phij_HWWb = FatJets.Get("HWW-H4q-MD","phi", 1);
    Mj_HWWb   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_HWWb   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom", 1);

    PTj_HWWc  = FatJets.Get("HWW-H4q-MD","pt_nom" , 2);
    Etaj_HWWc = FatJets.Get("HWW-H4q-MD","eta", 2);
    Phij_HWWc = FatJets.Get("HWW-H4q-MD","phi", 2);
    Mj_HWWc   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_HWWc   = FatJets.Get("HWW-H4q-MD","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_P4_HWWV2_Order() {
    PTj_V2_a  = FatJets.Get("HWW-V2-MD","pt_nom" , 0);
    Etaj_V2_a = FatJets.Get("HWW-V2-MD","eta", 0);
    Phij_V2_a = FatJets.Get("HWW-V2-MD","phi", 0);
    Mj_V2_a   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_V2_a   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 0);

    Mj_jesTotalUp_a   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown_a = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 0);
    Mj_jerUp_a        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 0);
    Mj_jerDown_a      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 0);

    PTj_V2_b  = FatJets.Get("HWW-V2-MD","pt_nom" , 1);
    Etaj_V2_b = FatJets.Get("HWW-V2-MD","eta", 1);
    Phij_V2_b = FatJets.Get("HWW-V2-MD","phi", 1);
    Mj_V2_b   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_V2_b   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 1);

    Mj_jesTotalUp_b   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_b = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_b        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 1);
    Mj_jerDown_b      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 1);


    PTj_V2_c  = FatJets.Get("HWW-V2-MD","pt_nom" , 2);
    Etaj_V2_c = FatJets.Get("HWW-V2-MD","eta", 2);
    Phij_V2_c = FatJets.Get("HWW-V2-MD","phi", 2);
    Mj_V2_c   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_V2_c   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 2);
    
    Mj_jesTotalUp_c   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_c = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_c        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 2);
    Mj_jerDown_c      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 2);


}


void EDBR2PKUTree::FatJets_HWWH4q_Order(){
    deepHWW_probHww3q_a         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww3q",0); 
    deepHWW_probHww4q_a         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q",0);
    deepHWW_probHww4q3qvsQCD_a  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q3qvsQCD",0);
    deepHWW_probHww4qvsQCD_a    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4qvsQCD",0);
    deepHWW_probHwwevqq_a       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwevqq",0);
    deepHWW_probHwwmvqq_a       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwmvqq",0);
    deepHWW_probHwwhadtauvqq_a  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwhadtauvqq",0);
    deepHWW_probHwwleptauevqq_a = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptauevqq",0);
    deepHWW_probHwwleptaumvqq_a = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptaumvqq",0);
    deepHWW_probQCDc_a          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDc",0);
    deepHWW_probQCDcc_a         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDcc",0);
    deepHWW_probQCDb_a          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDb",0);
    deepHWW_probQCDbb_a         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDbb",0);
    deepHWW_probQCDothers_a     = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDothers",0);
    deepHWW_H4q_a               = FatJets.Get("HWW-H4q-MD","particleNetMD_WvsQCD", 0);
    FatJet_tau1_HWW_a           = FatJets.Get("HWW-H4q-MD","tau1",0);
    FatJet_tau2_HWW_a           = FatJets.Get("HWW-H4q-MD","tau2",0);
    FatJet_tau3_HWW_a           = FatJets.Get("HWW-H4q-MD","tau3",0);
    FatJet_tau4_HWW_a           = FatJets.Get("HWW-H4q-MD","tau4",0);
    deepHWWMDV1_HallvsQCD_a       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HallvsQCD",0); 
 

    deepHWW_probHww3q_b         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww3q",1); 
    deepHWW_probHww4q_b         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q",1);
    deepHWW_probHww4q3qvsQCD_b  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q3qvsQCD",1);
    deepHWW_probHww4qvsQCD_b    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4qvsQCD",1);
    deepHWW_probHwwevqq_b       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwevqq",1);
    deepHWW_probHwwmvqq_b       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwmvqq",1);
    deepHWW_probHwwhadtauvqq_b  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwhadtauvqq",1);
    deepHWW_probHwwleptauevqq_b = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptauevqq",1);
    deepHWW_probHwwleptaumvqq_b = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptaumvqq",1);
    deepHWW_probQCDc_b          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDc",1);
    deepHWW_probQCDcc_b         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDcc",1);
    deepHWW_probQCDb_b          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDb",1);
    deepHWW_probQCDbb_b         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDbb",1);
    deepHWW_probQCDothers_b     = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDothers",1);
    deepHWW_H4q_b               = FatJets.Get("HWW-H4q-MD","particleNetMD_WvsQCD", 1);;
    FatJet_tau1_HWW_b           = FatJets.Get("HWW-H4q-MD","tau1",1);
    FatJet_tau2_HWW_b           = FatJets.Get("HWW-H4q-MD","tau2",1);
    FatJet_tau3_HWW_b           = FatJets.Get("HWW-H4q-MD","tau3",1);
    FatJet_tau4_HWW_b           = FatJets.Get("HWW-H4q-MD","tau4",1);
    deepHWWMDV1_HallvsQCD_b       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HallvsQCD",1); 


    deepHWW_probHww3q_c         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww3q",2); 
    deepHWW_probHww4q_c         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q",2);
    deepHWW_probHww4q3qvsQCD_c  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4q3qvsQCD",2);
    deepHWW_probHww4qvsQCD_c    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHww4qvsQCD",2);
    deepHWW_probHwwevqq_c       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwevqq",2);
    deepHWW_probHwwmvqq_c       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwmvqq",2);
    deepHWW_probHwwhadtauvqq_c  = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwhadtauvqq",2);
    deepHWW_probHwwleptauevqq_c = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptauevqq",2);
    deepHWW_probHwwleptaumvqq_c = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probHwwleptaumvqq",2);
    deepHWW_probQCDc_c          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDc",2);
    deepHWW_probQCDcc_c         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDcc",2);
    deepHWW_probQCDb_c          = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDb",2);
    deepHWW_probQCDbb_c         = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDbb",2);
    deepHWW_probQCDothers_c     = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_probQCDothers",2);
    deepHWW_H4q_c               = FatJets.Get("HWW-H4q-MD","particleNetMD_WvsQCD", 2);;
    FatJet_tau1_HWW_c           = FatJets.Get("HWW-H4q-MD","tau1",2);
    FatJet_tau2_HWW_c           = FatJets.Get("HWW-H4q-MD","tau1",2);
    FatJet_tau3_HWW_c           = FatJets.Get("HWW-H4q-MD","tau1",2);
    FatJet_tau4_HWW_c           = FatJets.Get("HWW-H4q-MD","tau1",2);
    deepHWWMDV1_HallvsQCD_c       = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HallvsQCD",2); 


    deepHWWMDV1_H4qvsQCD_a      = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4qvsQCD",0);
    deepHWWMDV1_H4q3qvsQCD_a    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4q3qvsQCD",0);
    deepHWWMDV1_HevqqvsQCD_a    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HevqqvsQCD",0);
    deepHWWMDV1_HmvqqvsQCD_a    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HmvqqvsQCD",0);
    deepHWWMDV1_HtauevqqvsQCD_a = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtauevqqvsQCD",0);
    deepHWWMDV1_HtaumvqqvsQCD_a = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtaumvqqvsQCD",0);
    deepHWWMDV1_HhadtauvqqvsQCD_a=FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HhadtauvqqvsQCD",0);

    deepHWWMDV1_H4qvsQCD_b      = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4qvsQCD",1);
    deepHWWMDV1_H4q3qvsQCD_b    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4q3qvsQCD",1);
    deepHWWMDV1_HevqqvsQCD_b    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HevqqvsQCD",1);
    deepHWWMDV1_HmvqqvsQCD_b    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HmvqqvsQCD",1);
    deepHWWMDV1_HtauevqqvsQCD_b = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtauevqqvsQCD",1);
    deepHWWMDV1_HtaumvqqvsQCD_b = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtaumvqqvsQCD",1);
    deepHWWMDV1_HhadtauvqqvsQCD_b=FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HhadtauvqqvsQCD",1);

    deepHWWMDV1_H4qvsQCD_c      = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4qvsQCD",2);
    deepHWWMDV1_H4q3qvsQCD_c    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_H4q3qvsQCD",2);
    deepHWWMDV1_HevqqvsQCD_c    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HevqqvsQCD",2);
    deepHWWMDV1_HmvqqvsQCD_c    = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HmvqqvsQCD",2);
    deepHWWMDV1_HtauevqqvsQCD_c = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtauevqqvsQCD",2);
    deepHWWMDV1_HtaumvqqvsQCD_c = FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HtaumvqqvsQCD",2);
    deepHWWMDV1_HhadtauvqqvsQCD_c=FatJets.Get("HWW-H4q-MD","deepHWWMDV1_HhadtauvqqvsQCD",2);



}

void EDBR2PKUTree::FatJets_HWWV2_Order(){

    a_HWqqWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq0c"   ,         0);
    a_HWqqWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq1c"   ,         0);
    a_HWqqWqq2c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq2c"   ,         0);
    a_HWqqWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq0c"    ,         0);
    a_HWqqWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq1c"    ,         0);
    a_HWqqWq2c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq2c"    ,         0);
    a_HWqqWev0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev0c"   ,         0);
    a_HWqqWev1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev1c"   ,         0);
    a_HWqqWmv0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv0c"   ,         0);
    a_HWqqWmv1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv1c"   ,         0);
    a_HWqqWtauev0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev0c",         0);
    a_HWqqWtauev1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev1c",         0);
    a_HWqqWtaumv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv0c",         0);
    a_HWqqWtaumv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv1c",         0);
    a_HWqqWtauhv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv0c",         0);
    a_HWqqWtauhv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv1c",         0);
    a_Hbb                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHbb"         ,         0);
    a_Hcc                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHcc"         ,         0);
    a_Hss                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHss"         ,         0);
    a_Hqq                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHqq"         ,         0);
    a_Htauhtaue                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaue"   ,         0);
    a_Htauhtaum                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaum"   ,         0);
    a_Htauhtauh                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtauh"   ,         0);
    a_QCDbb                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDbb"       ,         0);
    a_QCDcc                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDcc"       ,         0);
    a_QCDb                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDb"        ,         0);
    a_QCDc                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDc"        ,         0);
    a_QCDothers                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDothers"   ,         0);
    a_TopbWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq0c"   ,         0);
    a_TopbWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq1c"   ,         0);
    a_TopbWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq0c"    ,         0);
    a_TopbWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq1c"    ,         0);
    a_TopbWev                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWev"     ,         0);
    a_TopbWmv                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWmv"     ,         0);
    a_TopbWtauhv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauhv"  ,         0);
    a_TopbWtauev                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauev"  ,         0);
    a_TopbWtaumv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtaumv"  ,         0);

    b_HWqqWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq0c"   ,         1);
    b_HWqqWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq1c"   ,         1);
    b_HWqqWqq2c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq2c"   ,         1);
    b_HWqqWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq0c"    ,         1);
    b_HWqqWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq1c"    ,         1);
    b_HWqqWq2c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq2c"    ,         1);
    b_HWqqWev0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev0c"   ,         1);
    b_HWqqWev1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev1c"   ,         1);
    b_HWqqWmv0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv0c"   ,         1);
    b_HWqqWmv1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv1c"   ,         1);
    b_HWqqWtauev0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev0c",         1);
    b_HWqqWtauev1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev1c",         1);
    b_HWqqWtaumv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv0c",         1);
    b_HWqqWtaumv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv1c",         1);
    b_HWqqWtauhv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv0c",         1);
    b_HWqqWtauhv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv1c",         1);
    b_Hbb                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHbb"         ,         1);
    b_Hcc                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHcc"         ,         1);
    b_Hss                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHss"         ,         1);
    b_Hqq                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHqq"         ,         1);
    b_Htauhtaue                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaue"   ,         1);
    b_Htauhtaum                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaum"   ,         1);
    b_Htauhtauh                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtauh"   ,         1);
    b_QCDbb                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDbb"       ,         1);
    b_QCDcc                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDcc"       ,         1);
    b_QCDb                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDb"        ,         1);
    b_QCDc                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDc"        ,         1);
    b_QCDothers                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDothers"   ,         1);
    b_TopbWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq0c"   ,         1);
    b_TopbWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq1c"   ,         1);
    b_TopbWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq0c"    ,         1);
    b_TopbWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq1c"    ,         1);
    b_TopbWev                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWev"     ,         1);
    b_TopbWmv                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWmv"     ,         1);
    b_TopbWtauhv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauhv"  ,         1);
    b_TopbWtauev                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauev"  ,         1);
    b_TopbWtaumv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtaumv"  ,         1);

    c_HWqqWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq0c"   ,         2);
    c_HWqqWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq1c"   ,         2);
    c_HWqqWqq2c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWqq2c"   ,         2);
    c_HWqqWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq0c"    ,         2);
    c_HWqqWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq1c"    ,         2);
    c_HWqqWq2c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWq2c"    ,         2);
    c_HWqqWev0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev0c"   ,         2);
    c_HWqqWev1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWev1c"   ,         2);
    c_HWqqWmv0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv0c"   ,         2);
    c_HWqqWmv1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWmv1c"   ,         2);
    c_HWqqWtauev0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev0c",         2);
    c_HWqqWtauev1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauev1c",         2);
    c_HWqqWtaumv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv0c",         2);
    c_HWqqWtaumv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtaumv1c",         2);
    c_HWqqWtauhv0c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv0c",         2);
    c_HWqqWtauhv1c              = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHWqqWtauhv1c",         2);
    c_Hbb                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHbb"         ,         2);
    c_Hcc                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHcc"         ,         2);
    c_Hss                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHss"         ,         2);
    c_Hqq                       = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHqq"         ,         2);
    c_Htauhtaue                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaue"   ,         2);
    c_Htauhtaum                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtaum"   ,         2);
    c_Htauhtauh                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probHtauhtauh"   ,         2);
    c_QCDbb                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDbb"       ,         2);
    c_QCDcc                     = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDcc"       ,         2);
    c_QCDb                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDb"        ,         2);
    c_QCDc                      = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDc"        ,         2);
    c_QCDothers                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probQCDothers"   ,         2);
    c_TopbWqq0c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq0c"   ,         2);
    c_TopbWqq1c                 = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWqq1c"   ,         2);
    c_TopbWq0c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq0c"    ,         2);
    c_TopbWq1c                  = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWq1c"    ,         2);
    c_TopbWev                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWev"     ,         2);
    c_TopbWmv                   = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWmv"     ,         2);
    c_TopbWtauhv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauhv"  ,         2);
    c_TopbWtauev                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtauev"  ,         2);
    c_TopbWtaumv                = FatJets.Get("HWW-V2-MD",     "inclParTMDV1_probTopbWtaumv"  ,         2);


    FatJet_tau1_HWW_a           = FatJets.Get("HWW-V2-MD","tau1",0);
    FatJet_tau2_HWW_a           = FatJets.Get("HWW-V2-MD","tau2",0);
    FatJet_tau3_HWW_a           = FatJets.Get("HWW-V2-MD","tau3",0);
    FatJet_tau4_HWW_a           = FatJets.Get("HWW-V2-MD","tau4",0);
    
    FatJet_tau1_HWW_c           = FatJets.Get("HWW-V2-MD","tau1",2);
    FatJet_tau2_HWW_c           = FatJets.Get("HWW-V2-MD","tau2",2);
    FatJet_tau3_HWW_c           = FatJets.Get("HWW-V2-MD","tau3",2);
    FatJet_tau4_HWW_c           = FatJets.Get("HWW-V2-MD","tau4",2);
    
    FatJet_tau1_HWW_b           = FatJets.Get("HWW-V2-MD","tau1",1);
    FatJet_tau2_HWW_b           = FatJets.Get("HWW-V2-MD","tau2",1);
    FatJet_tau3_HWW_b           = FatJets.Get("HWW-V2-MD","tau3",1);
    FatJet_tau4_HWW_b           = FatJets.Get("HWW-V2-MD","tau4",1);

    a_HWW_V2       = FatJets.Get("HWW-V2-MD","HWW_V2",0); 
    b_HWW_V2       = FatJets.Get("HWW-V2-MD","HWW_V2",1); 
    c_HWW_V2       = FatJets.Get("HWW-V2-MD","HWW_V2",2);

    a_HWWvsQCD_V2       = FatJets.Get("HWW-V2-MD","HWWvsQCD_V2",0); 
    b_HWWvsQCD_V2       = FatJets.Get("HWW-V2-MD","HWWvsQCD_V2",1); 
    c_HWWvsQCD_V2       = FatJets.Get("HWW-V2-MD","HWWvsQCD_V2",2);


    // cout << "Must satisfy" << a_HWW_V2 << " > " << b_HWW_V2 << " > " << c_HWW_V2 << endl;
}



bool EDBR2PKUTree::Filter_Events(TString YEAR, Int_t IS_Data) {
    bool Fill = true;
    bool HLT  = false;
    if ( !(Nj8 == 2 || Nj8 == 3 ) ){ 
        Fill = false; 
    }
    if ( !( Mj_max >= 50 ) ){ 
        Fill = false; 
    }
    if ( !( HT >= 1100 ) ){ 
        Fill = false; 
    }
    if ( !( PTj > 400 ) ){ 
        Fill = false; 
    }
    // if( IS_Data == 0 ){ goodRun = goodrun(run, luminosityBlock) ; }
    // else{ goodRun = true ; }
    if(YEAR.Contains("2016")){
        if( IS_Data == 0 ){
            Flag = Flag_METFilters && Flag_goodVertices && Flag_globalSuperTightHalo2016Filter && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        else{
            Flag = Flag_METFilters && Flag_goodVertices && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        HLT = ( HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 || HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 || HLT_PFHT800 || HLT_PFHT900 || HLT_PFJet450 || HLT_AK8PFJet450 || HLT_AK8PFJet500 || HLT_PFJet500 || HLT_AK8PFJet360_TrimMass30 || HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 );
    }

    if(YEAR.Contains("2017")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );

    }

    if(YEAR.Contains("2018")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );
    }

    if( !( Flag ) || !(HLT) ){ 
        Fill = false; 
    }

    return Fill;
}

bool EDBR2PKUTree::Filter_Events_HWW(TString YEAR, Int_t IS_Data) {
    bool Fill = true;
    bool HLT  = false;
    if ( !(Nj8 == 2 || Nj8 == 3 ) ){ 
        Fill = false; 
    }
    if ( !( Mj_max >= 50 ) ){ 
        Fill = false; 
    }

    if ( !( Mj_V2_a >= 40 ) ){ 
        Fill = false; 
    } 
    // if ( !( HT >= 1100 ) ){ 
    //     Fill = false; 
    // }

    // Cut on HT has been commentted out for HWW analysis.
    if ( !( PTj > 400 ) ){ 
        Fill = false; 
    }
    // if( IS_Data == 0 ){ goodRun = goodrun(run, luminosityBlock) ; }
    // else{ goodRun = true ; }
    if(YEAR.Contains("2016")){
        if( IS_Data == 0 ){
            Flag = Flag_METFilters && Flag_goodVertices && Flag_globalSuperTightHalo2016Filter && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        else{
            Flag = Flag_METFilters && Flag_goodVertices && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        // HLT = ( HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 || HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 || HLT_PFHT800 || HLT_PFHT900 || HLT_PFJet450 || HLT_AK8PFJet450 || HLT_AK8PFJet500 || HLT_PFJet500 || HLT_AK8PFJet360_TrimMass30 || HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 );
        HLT = 1;
    }

    if(YEAR.Contains("2017")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        // HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );
        HLT = 1;

    }

    if(YEAR.Contains("2018")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        // HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );
        HLT = 1;
        }

    if( !( Flag ) || !(HLT) ){ 
        Fill = false; 
    }

    return Fill;
}

void EDBR2PKUTree::METf() {
   if(IsData == 0){
        MET_et_NoXYCorr  = MET_pt ;
        MET_phi_NoXYCorr = MET_phi ;
    }
    else{
        MET_et_NoXYCorr  = MET_T1Smear_pt ;
        MET_phi_NoXYCorr = MET_T1Smear_phi ;
    }
    int  runnb = 0 ;
    bool isMC  = true ;
    if(IsData == 0){
        isMC  = false ;
        runnb = run;
    }
    TString year;
    //  yUL2016MCAPV,  yUL2016MCnonAPV, yUL2017MC,yUL2018MC
    if( YEAR_g.Contains("2016preVFP") ){
        year = "2016APV";
    }
    if( YEAR_g.Contains("2016postVFP") ){
        year = "2016nonAPV";
    }
    if( YEAR_g.Contains("2017") ){
        year = "2017";
    }
    if( YEAR_g.Contains("2018") ){
        year = "2018";
    }
    std::pair<double,double> MET_T1Smear_XYcorr = METXYCorr_Met_MetPhi( MET_et_NoXYCorr, MET_phi_NoXYCorr, runnb, year, isMC, PV_npvs, true);

    MET_et  = MET_T1Smear_XYcorr.first; 
    MET_phi = MET_T1Smear_XYcorr.second;

}

void EDBR2PKUTree::HEMFilter() {
    HEM_Filter = 1;

    int  runnb = 0 ;
    bool CheckHEM = false ;
    if(IsData == 0){
        runnb = run;
        if(runnb >=319313 && runnb <=320393){
            // runC
            CheckHEM = true ;
        }
        if(runnb >=320394 && runnb <=325273){
            // runD
            CheckHEM = true ;
        }
    }
    else{
        if(YEAR_g.Contains("2018")){
            Double_t d = gRandom->Rndm(0);
           // cout << "HEMFilter random number " << d << endl;
           // removed cout to faster the code
            if(d < 0.632){
                CheckHEM = true ;
            }
        }
    }

    if(CheckHEM){
        float Eta_dn = -2.7;
        float Eta_up = -1.1;
        float Phi_dn = -1.77;
        float Phi_up = -0.67;
        if( Nj8 == 2 ){
            if( Eta_dn < Etaj_V2_a && Etaj_V2_a < Eta_up && Phij_V2_a > Phi_dn && Phij_V2_a < Phi_up ){
                HEM_Filter = 0;
            }
            if( Eta_dn < Etaj_V2_c && Etaj_V2_c < Eta_up && Phij_V2_c > Phi_dn && Phij_V2_c < Phi_up ){
                HEM_Filter = 0;
            }
        }
        if( Nj8 == 3 ){
            if( Eta_dn < Etaj_V2_a && Etaj_V2_a < Eta_up && Phij_V2_a > Phi_dn && Phij_V2_a < Phi_up ){
                HEM_Filter = 0;
            }
            if( Eta_dn < Etaj_V2_c && Etaj_V2_c < Eta_up && Phij_V2_c > Phi_dn && Phij_V2_c < Phi_up ){
                HEM_Filter = 0;
            }
            if( Eta_dn < Etaj_V2_b && Etaj_V2_b < Eta_up && Phij_V2_b > Phi_dn && Phij_V2_b < Phi_up ){
                HEM_Filter = 0;
            }
        }
    }

}

void EDBR2PKUTree::Weightf(Double_t XS, Int_t Nevents, Double_t LUMI) {

	Double_t nn;
	Float_t Identical_lumiWeight = XS;//All the events inside a sample are same lumiweight

    trigger_eff=1.0;
    IDweight=1.0;
    IDweightISO=1.0;
    IDweighttrk=1.0;
    ToppTweight=1.0;

    if(genWeight>0) nn=1;    else nn= -1;
    // cout<<"genweight = "<< genWeight <<endl;
    lumiWeight=Identical_lumiWeight/abs(Nevents);
    lumiWeight=lumiWeight*LUMI;
    weight=lumiWeight*nn;
    // cout<<"puweight = "<< puWeight <<endl;
    // cout<<"weight = "<< weight <<endl;   
    weight = weight * puWeight;
    // cout<<"final weight = "<< weight <<endl;   

    if ( IsData==0 ) weight=1;weight_deep = 1;

}

void EDBR2PKUTree::TriggerSFf(){
TriggerSF = 1;
if ( IsData==0 ){
    TriggerSF = 1;
}

else{
    if (YEAR_g.Contains("2016")){
        if (HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 || HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 || HLT_PFHT900 || HLT_PFJet450 || HLT_PFJet500 || HLT_AK8PFJet360_TrimMass30 || HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 ){
            TriggerSF = 1;
        }
        else if ( HLT_AK8PFJet450 || HLT_AK8PFJet500 ){
            TriggerSF = 33.64/36.47;
        }
        else if ( HLT_PFHT800 ) {
             TriggerSF = 27.71/36.47;
        }
        // For test;
        // cout << "Now the 2016 TriggerSF is " << TriggerSF << endl;
    }
    if(YEAR_g.Contains("2017")){
        if (HLT_PFJet500 || HLT_AK8PFJet500 || HLT_PFHT1050){
            TriggerSF = 1;
        }
        else if (HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30) {
            TriggerSF = 36.75/41.54;
        }
        else if (HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50){
            TriggerSF = 36.49/41.54;
        }
        else if (HLT_AK8PFJet380_TrimMass30){
            TriggerSF = 31.22/41.54;
        }
        else if (HLT_AK8PFHT750_TrimMass50){
            TriggerSF = 30.96/41.54;
        }
        else if (HLT_AK8PFJet360_TrimMass30){
            TriggerSF = 28.30/41.54;
        }
        // else if (HLT_AK8PFJet400){
        //     TriggerSF = 7.68/41.54;
        // }
        // cout << "Now the 2017 TriggerSF is " << TriggerSF << endl;
    }
    if( YEAR_g.Contains("2018") ){
            TriggerSF = 1;
            //Because all the triggers we used in 2018 are un-prescaled.
    }

}


}

void EDBR2PKUTree::MJJ_MJJJf() {
    
    if(Nj8==2){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJ=(AK81+AK82).M();
    }

    if(Nj8==3){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_mid,Etaj_mid,Phij_mid,Mj_mid);
        AK83.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJJ=(AK81+AK82+AK83).M();
        MJJ=-99;
    }
}

void EDBR2PKUTree::HT_ST() {
    HT = (PTj>0)*PTj+(PTj_2>0)*PTj_2+(PTj_3>0)*PTj_3;
    ST = Float_t(HT+MET_et);
}

void EDBR2PKUTree::Nbtagf() {

    Nj4_in = Jets.Nj4_inclusive();
    Nj4_ex = Jets.Nj4_exclusive();

    Jet_WP Jet_WP_in = Jets.Nj4_btag_inclusive();
    Jet_WP Jet_WP_ex = Jets.Nj4_btag_exclusive();

    nb_l_deep_ex = Jet_WP_ex.l;
    nb_m_deep_ex = Jet_WP_ex.m;
    nb_t_deep_ex = Jet_WP_ex.t;

    nb_l_deep_in = Jet_WP_in.l;
    nb_m_deep_in = Jet_WP_in.m;
    nb_t_deep_in = Jet_WP_in.t;

    Jets.branch("pt",Jet_pt_out);
    Jets.branch("eta",Jet_eta_out);
    Jets.branch("phi",Jet_phi_out);
    Jets.branch("mass",Jet_mass_out);
    Jets.branch("btagDeepFlavB",Jet_btagDeepFlavB_out);
    Jets.branch("jetId",Jet_jetId_out);
    Jets.branch("hadronFlavour",Jet_hadronFlavour_out);
    Jets.branch("pt_nom",Jet_pt_nom_out);
    Jets.branch("mass_nom",Jet_mass_nom_out);

}

#endif


// dnnDecorr_probTbcq_a 
// deepTagMD_probTbcq

// dnnDecorr_(.*)_a

// dnnDecorr_$1_a = FatJets.Get("deep-W-MD","deepTagMD_$1",0);
// dnnDecorr_$1_b = FatJets.Get("deep-W-MD","deepTagMD_$1",1);
// dnnDecorr_$1_c = FatJets.Get("deep-W-MD","deepTagMD_$1",2);

