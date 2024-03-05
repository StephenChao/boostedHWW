#ifndef _process__process_2016_
#define _process__process_2016_

void EDBR2PKUTree::initFatJet_Collection_2016(){
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

        &v_FatJet_msoftdrop_jmsUp_,
        &v_FatJet_msoftdrop_jmsDown_,
        &v_FatJet_msoftdrop_jmrUp_,
        &v_FatJet_msoftdrop_jmrDown_,

        &v_FatJet_pt_nom_,

        //New tagger.
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
    FatJets = FatJet_Collection( FatJet_P_, 3, 1 );
}

void EDBR2PKUTree::HWW_process_1_2016(Long64_t jentry, TString YEAR) {
    Jets_GetEntry(jentry);
    fatJets_GetEntry(jentry);

    initFatJet_Collection_2016();
    Nj8 = FatJets.size();

    FatJets_P4_PTOrder_2016();
    FatJets_P4_MASSOrder_2016();
    FatJets_P4_HWWV2_Order_2016();
    MJJ_MJJJf();
    HT_ST();

}

void EDBR2PKUTree::HWW_process_2_2016(Long64_t jentry, TString YEAR) {
    initJet_Collection(YEAR);
    FatJets_HWWV2_Order(); 
    Nbtagf();
    METf_2016();

}

void EDBR2PKUTree::FatJets_P4_PTOrder_2016() {
    PTj  = FatJets.Get("PT","pt" , 0);
    Etaj = FatJets.Get("PT","eta", 0);
    Phij = FatJets.Get("PT","phi", 0);
    Mj   = FatJets.Get("PT","msoftdrop", 0);

    Mj_jesTotalUp   = FatJets.Get("PT","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown = FatJets.Get("PT","msoftdrop_jesTotalDown", 0);
    Mj_jerUp        = FatJets.Get("PT","msoftdrop_jerUp", 0);
    Mj_jerDown      = FatJets.Get("PT","msoftdrop_jerDown", 0);


    PTj_2  = FatJets.Get("PT","pt" , 1);
    Etaj_2 = FatJets.Get("PT","eta", 1);
    Phij_2 = FatJets.Get("PT","phi", 1);
    Mj_2   = FatJets.Get("PT","msoftdrop", 1);

    Mj_jesTotalUp_2   = FatJets.Get("PT","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_2 = FatJets.Get("PT","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_2        = FatJets.Get("PT","msoftdrop_jerUp", 1);
    Mj_jerDown_2      = FatJets.Get("PT","msoftdrop_jerDown", 1);


    PTj_3  = FatJets.Get("PT","pt" , 2);
    Etaj_3 = FatJets.Get("PT","eta", 2);
    Phij_3 = FatJets.Get("PT","phi", 2);
    Mj_3   = FatJets.Get("PT","msoftdrop", 2);

    Mj_jesTotalUp_3   = FatJets.Get("PT","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_3 = FatJets.Get("PT","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_3        = FatJets.Get("PT","msoftdrop_jerUp", 2);
    Mj_jerDown_3      = FatJets.Get("PT","msoftdrop_jerDown", 2);


}

void EDBR2PKUTree::FatJets_P4_MASSOrder_2016() {
    PTj_max  = FatJets.Get("Mass","pt" , 0);
    Etaj_max = FatJets.Get("Mass","eta", 0);
    Phij_max = FatJets.Get("Mass","phi", 0);
    Mj_max   = FatJets.Get("Mass","msoftdrop", 0);

    Mj_jesTotalUp_max   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown_max = FatJets.Get("Mass","msoftdrop_jesTotalDown", 0);
    Mj_jerUp_max        = FatJets.Get("Mass","msoftdrop_jerUp", 0);
    Mj_jerDown_max      = FatJets.Get("Mass","msoftdrop_jerDown", 0);


    PTj_mid  = FatJets.Get("Mass","pt" , 1);
    Etaj_mid = FatJets.Get("Mass","eta", 1);
    Phij_mid = FatJets.Get("Mass","phi", 1);
    Mj_mid   = FatJets.Get("Mass","msoftdrop", 1);
 
    Mj_jesTotalUp_mid   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_mid = FatJets.Get("Mass","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_mid        = FatJets.Get("Mass","msoftdrop_jerUp", 1);
    Mj_jerDown_mid      = FatJets.Get("Mass","msoftdrop_jerDown", 1);


    PTj_min  = FatJets.Get("Mass","pt" , 2);
    Etaj_min = FatJets.Get("Mass","eta", 2);
    Phij_min = FatJets.Get("Mass","phi", 2);
    Mj_min   = FatJets.Get("Mass","msoftdrop", 2);

    Mj_jesTotalUp_min   = FatJets.Get("Mass","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_min = FatJets.Get("Mass","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_min        = FatJets.Get("Mass","msoftdrop_jerUp", 2);
    Mj_jerDown_min      = FatJets.Get("Mass","msoftdrop_jerDown", 2);


    HWW_V2_max = FatJets.Get("Mass","HWW_V2",0);
    HWW_V2_mid = FatJets.Get("Mass","HWW_V2",1);
    HWW_V2_min = FatJets.Get("Mass","HWW_V2",2);

}


void EDBR2PKUTree::FatJets_P4_HWWV2_Order_2016() {
    PTj_V2_a  = FatJets.Get("HWW-V2-MD","pt_nom" , 0);
    Etaj_V2_a = FatJets.Get("HWW-V2-MD","eta", 0);
    Phij_V2_a = FatJets.Get("HWW-V2-MD","phi", 0);
    Mj_V2_a   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_V2_a   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 0);

    Mj_jesTotalUp_a   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 0);
    Mj_jesTotalDown_a = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 0);
    Mj_jerUp_a        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 0);
    Mj_jerDown_a      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 0);

    Mj_jmsUp_a        = FatJets.Get("HWW-V2-MD","msoftdrop_jmsUp", 0);
    Mj_jmsDown_a      = FatJets.Get("HWW-V2-MD","msoftdrop_jmsDown", 0);
    Mj_jmrUp_a        = FatJets.Get("HWW-V2-MD","msoftdrop_jmrUp", 0);
    Mj_jmrDown_a      = FatJets.Get("HWW-V2-MD","msoftdrop_jmrDown", 0);



    PTj_V2_b  = FatJets.Get("HWW-V2-MD","pt_nom" , 1);
    Etaj_V2_b = FatJets.Get("HWW-V2-MD","eta", 1);
    Phij_V2_b = FatJets.Get("HWW-V2-MD","phi", 1);
    Mj_V2_b   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_V2_b   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 1);

    Mj_jesTotalUp_b   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 1);
    Mj_jesTotalDown_b = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 1);
    Mj_jerUp_b        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 1);
    Mj_jerDown_b      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 1);


    Mj_jmsUp_b        = FatJets.Get("HWW-V2-MD","msoftdrop_jmsUp", 1);
    Mj_jmsDown_b      = FatJets.Get("HWW-V2-MD","msoftdrop_jmsDown", 1);
    Mj_jmrUp_b        = FatJets.Get("HWW-V2-MD","msoftdrop_jmrUp", 1);
    Mj_jmrDown_b      = FatJets.Get("HWW-V2-MD","msoftdrop_jmrDown", 1);


    PTj_V2_c  = FatJets.Get("HWW-V2-MD","pt_nom" , 2);
    Etaj_V2_c = FatJets.Get("HWW-V2-MD","eta", 2);
    Phij_V2_c = FatJets.Get("HWW-V2-MD","phi", 2);
    Mj_V2_c   = FatJets.Get("HWW-V2-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_V2_c   = FatJets.Get("HWW-V2-MD","msoftdrop_nom", 2);

    Mj_jesTotalUp_c   = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalUp", 2);
    Mj_jesTotalDown_c = FatJets.Get("HWW-V2-MD","msoftdrop_jesTotalDown", 2);
    Mj_jerUp_c        = FatJets.Get("HWW-V2-MD","msoftdrop_jerUp", 2);
    Mj_jerDown_c      = FatJets.Get("HWW-V2-MD","msoftdrop_jerDown", 2);

    Mj_jmsUp_c        = FatJets.Get("HWW-V2-MD","msoftdrop_jmsUp", 2);
    Mj_jmsDown_c      = FatJets.Get("HWW-V2-MD","msoftdrop_jmsDown", 2);
    Mj_jmrUp_c        = FatJets.Get("HWW-V2-MD","msoftdrop_jmrUp", 2);
    Mj_jmrDown_c      = FatJets.Get("HWW-V2-MD","msoftdrop_jmrDown", 2);

}

void EDBR2PKUTree::METf_2016() {
   if(IsData == 0){
        MET_et_NoXYCorr  = MET_pt ;
        MET_phi_NoXYCorr = MET_phi ;
    }
    else{
        MET_et_NoXYCorr  = MET_T1Smear_pt ;
        MET_phi_NoXYCorr = MET_T1Smear_phi ;

                // UE up/down uncertainty
        MET_et_NoXYCorr_UEup  = MET_T1Smear_pt_UEup ;
        MET_phi_NoXYCorr_UEup = MET_T1Smear_phi_UEup ;

        MET_et_NoXYCorr_UEdown  = MET_T1Smear_pt_UEdown ;
        MET_phi_NoXYCorr_UEdown = MET_T1Smear_phi_UEdown ;
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
    std::pair<double,double> MET_T1Smear_XYcorr        = METXYCorr_Met_MetPhi( MET_et_NoXYCorr, MET_phi_NoXYCorr, runnb, year, isMC, PV_npvs, true);
    std::pair<double,double> MET_T1Smear_XYcorr_UEup   = METXYCorr_Met_MetPhi( MET_et_NoXYCorr_UEup,   MET_phi_NoXYCorr_UEup, runnb, year, isMC, PV_npvs, true);
    std::pair<double,double> MET_T1Smear_XYcorr_UEdown = METXYCorr_Met_MetPhi( MET_et_NoXYCorr_UEdown, MET_phi_NoXYCorr_UEdown, runnb, year, isMC, PV_npvs, true);

    MET_et  = MET_T1Smear_XYcorr.first; 
    MET_phi = MET_T1Smear_XYcorr.second;

    MET_et_UEup  = MET_T1Smear_XYcorr_UEup.first; 
    MET_phi_UEup = MET_T1Smear_XYcorr_UEup.second;    
    
    MET_et_UEdown  = MET_T1Smear_XYcorr_UEdown.first; 
    MET_phi_UEdown   = MET_T1Smear_XYcorr_UEdown.second;
}

#endif
