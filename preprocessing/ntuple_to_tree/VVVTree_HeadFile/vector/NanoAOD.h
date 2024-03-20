#ifndef _vector_GetEntry__NanoAOD_
#define _vector_GetEntry__NanoAOD_

void EDBR2PKUTree::Jets_GetEntry(Long64_t jentry) {
    
    int bytes_Jet_btagDeepB = b_Jet_btagDeepB_->GetEntry(jentry);
    v_Jet_btagDeepB_ = vector<float>(Jet_btagDeepB_,Jet_btagDeepB_+bytes_Jet_btagDeepB/sizeof(Jet_btagDeepB_[0]));
    size_t nJet_btagDeepB = v_Jet_btagDeepB_.size();
    
    int bytes_Jet_btagDeepFlavB = b_Jet_btagDeepFlavB_->GetEntry(jentry);
    v_Jet_btagDeepFlavB_ = vector<float>(Jet_btagDeepFlavB_,Jet_btagDeepFlavB_+bytes_Jet_btagDeepFlavB/sizeof(Jet_btagDeepFlavB_[0]));
    size_t nJet_btagDeepFlavB = v_Jet_btagDeepFlavB_.size();
    
    int bytes_Jet_btagDeepFlavCvB = b_Jet_btagDeepFlavCvB_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvB_ = vector<float>(Jet_btagDeepFlavCvB_,Jet_btagDeepFlavCvB_+bytes_Jet_btagDeepFlavCvB/sizeof(Jet_btagDeepFlavCvB_[0]));
    size_t nJet_btagDeepFlavCvB = v_Jet_btagDeepFlavCvB_.size();
    
    int bytes_Jet_btagDeepFlavCvL = b_Jet_btagDeepFlavCvL_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvL_ = vector<float>(Jet_btagDeepFlavCvL_,Jet_btagDeepFlavCvL_+bytes_Jet_btagDeepFlavCvL/sizeof(Jet_btagDeepFlavCvL_[0]));
    size_t nJet_btagDeepFlavCvL = v_Jet_btagDeepFlavCvL_.size();
    
    int bytes_Jet_btagDeepFlavQG = b_Jet_btagDeepFlavQG_->GetEntry(jentry);
    v_Jet_btagDeepFlavQG_ = vector<float>(Jet_btagDeepFlavQG_,Jet_btagDeepFlavQG_+bytes_Jet_btagDeepFlavQG/sizeof(Jet_btagDeepFlavQG_[0]));
    size_t nJet_btagDeepFlavQG = v_Jet_btagDeepFlavQG_.size();
    
    int bytes_Jet_eta = b_Jet_eta_->GetEntry(jentry);
    v_Jet_eta_ = vector<float>(Jet_eta_,Jet_eta_+bytes_Jet_eta/sizeof(Jet_eta_[0]));
    size_t nJet_eta = v_Jet_eta_.size();

    if (b_Jet_hadronFlavour_){
        int bytes_Jet_hadronFlavour = b_Jet_hadronFlavour_->GetEntry(jentry);
        v_Jet_hadronFlavour_ = vector<int>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes_Jet_hadronFlavour/sizeof(Jet_hadronFlavour_[0]));
        size_t nJet_hadronFlavour = v_Jet_hadronFlavour_.size();
    }
    
    int bytes_Jet_jetId = b_Jet_jetId_->GetEntry(jentry);
    v_Jet_jetId_ = vector<int>(Jet_jetId_,Jet_jetId_+bytes_Jet_jetId/sizeof(Jet_jetId_[0]));
    size_t nJet_jetId = v_Jet_jetId_.size();
    

    int bytes_Jet_mass = b_Jet_mass_->GetEntry(jentry);
    v_Jet_mass_ = vector<float>(Jet_mass_,Jet_mass_+bytes_Jet_mass/sizeof(Jet_mass_[0]));
    size_t nJet_mass = v_Jet_mass_.size();
    
    if (b_Jet_partonFlavour_){
        int bytes_Jet_partonFlavour = b_Jet_partonFlavour_->GetEntry(jentry);
        v_Jet_partonFlavour_ = vector<float>(Jet_partonFlavour_,Jet_partonFlavour_+bytes_Jet_partonFlavour/sizeof(Jet_partonFlavour_[0]));
        size_t nJet_partonFlavour = v_Jet_partonFlavour_.size();
    }
    
    int bytes_Jet_phi = b_Jet_phi_->GetEntry(jentry);
    v_Jet_phi_ = vector<float>(Jet_phi_,Jet_phi_+bytes_Jet_phi/sizeof(Jet_phi_[0]));
    size_t nJet_phi = v_Jet_phi_.size();
    
    int bytes_Jet_pt = b_Jet_pt_->GetEntry(jentry);
    v_Jet_pt_ = vector<float>(Jet_pt_,Jet_pt_+bytes_Jet_pt/sizeof(Jet_pt_[0]));
    size_t nJet_pt = v_Jet_pt_.size();
    
    int bytes_Jet_puId = b_Jet_puId_->GetEntry(jentry);
    v_Jet_puId_ = vector<float>(Jet_puId_,Jet_puId_+bytes_Jet_puId/sizeof(Jet_puId_[0]));
    size_t nJet_puId = v_Jet_puId_.size();
    
    
    int bytes_Jet_puIdDisc = b_Jet_puIdDisc_->GetEntry(jentry);
    v_Jet_puIdDisc_ = vector<float>(Jet_puIdDisc_,Jet_puIdDisc_+bytes_Jet_puIdDisc/sizeof(Jet_puIdDisc_[0]));
    size_t nJet_puIdDisc = v_Jet_puIdDisc_.size();
    

    
    int bytes_Jet_qgl = b_Jet_qgl_->GetEntry(jentry);
    v_Jet_qgl_ = vector<float>(Jet_qgl_,Jet_qgl_+bytes_Jet_qgl/sizeof(Jet_qgl_[0]));
    size_t nJet_qgl = v_Jet_qgl_.size();
    

    
    int bytes_Jet_rawFactor = b_Jet_rawFactor_->GetEntry(jentry);
    v_Jet_rawFactor_ = vector<float>(Jet_rawFactor_,Jet_rawFactor_+bytes_Jet_rawFactor/sizeof(Jet_rawFactor_[0]));
    size_t nJet_rawFactor = v_Jet_rawFactor_.size();

    if(b_Jet_pt_nom_){
        int bytes_Jet_pt_nom = b_Jet_pt_nom_->GetEntry(jentry);
        v_Jet_pt_nom_ = vector<float>(Jet_pt_nom_,Jet_pt_nom_+bytes_Jet_pt_nom/sizeof(Jet_pt_nom_[0]));
    }

    if(b_Jet_mass_nom_){
        int bytes_Jet_mass_nom = b_Jet_mass_nom_->GetEntry(jentry);
        v_Jet_mass_nom_ = vector<float>(Jet_mass_nom_,Jet_mass_nom_+bytes_Jet_mass_nom/sizeof(Jet_mass_nom_[0]));
    }

    
}

void EDBR2PKUTree::fatJets_GetEntry(Long64_t jentry) {

//Just get the j'th entry information.

//Because it's used in the process.h, in GKK_process_1(jentry,YEAR);

//Here is already jentry involved.

    //LHE Scale Weight
    if(b_LHEScaleWeight_){
        int bytes_LHEScaleWeight_ = b_LHEScaleWeight_->GetEntry(jentry);
        v_LHEScaleWeight_ = vector<float>(LHEScaleWeight_ , LHEScaleWeight_ + bytes_LHEScaleWeight_/sizeof(LHEScaleWeight_[0]));
    }

    //PS Weight
    if(b_PSWeight_){
        int bytes_PSWeight_ = b_PSWeight_->GetEntry(jentry);
        v_PSWeight_ = vector<float>(PSWeight_ , PSWeight_ + bytes_PSWeight_/sizeof(PSWeight_[0]));
    }

    // Jet mass
    if(b_FatJet_msoftdrop_raw_){
        int bytes_FatJet_msoftdrop_raw = b_FatJet_msoftdrop_raw_->GetEntry(jentry);
        v_FatJet_msoftdrop_raw_ = vector<float>(FatJet_msoftdrop_raw_,FatJet_msoftdrop_raw_+bytes_FatJet_msoftdrop_raw/sizeof(FatJet_msoftdrop_raw_[0]));
    }

    if(b_FatJet_msoftdrop_nom_){
        int bytes_FatJet_msoftdrop_nom = b_FatJet_msoftdrop_nom_->GetEntry(jentry);
        v_FatJet_msoftdrop_nom_ = vector<float>(FatJet_msoftdrop_nom_,FatJet_msoftdrop_nom_+bytes_FatJet_msoftdrop_nom/sizeof(FatJet_msoftdrop_nom_[0]));
    }

    if(b_FatJet_msoftdrop_corr_JMR_){
        int bytes_FatJet_msoftdrop_corr_JMR = b_FatJet_msoftdrop_corr_JMR_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_JMR_ = vector<float>(FatJet_msoftdrop_corr_JMR_,FatJet_msoftdrop_corr_JMR_+bytes_FatJet_msoftdrop_corr_JMR/sizeof(FatJet_msoftdrop_corr_JMR_[0]));
    }

    if(b_FatJet_msoftdrop_corr_JMS_){
        int bytes_FatJet_msoftdrop_corr_JMS = b_FatJet_msoftdrop_corr_JMS_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_JMS_ = vector<float>(FatJet_msoftdrop_corr_JMS_,FatJet_msoftdrop_corr_JMS_+bytes_FatJet_msoftdrop_corr_JMS/sizeof(FatJet_msoftdrop_corr_JMS_[0]));
    }

    if(b_FatJet_msoftdrop_corr_PUPPI_){
        int bytes_FatJet_msoftdrop_corr_PUPPI = b_FatJet_msoftdrop_corr_PUPPI_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_PUPPI_ = vector<float>(FatJet_msoftdrop_corr_PUPPI_,FatJet_msoftdrop_corr_PUPPI_+bytes_FatJet_msoftdrop_corr_PUPPI/sizeof(FatJet_msoftdrop_corr_PUPPI_[0]));
    }

        // Add JES, JER up and down branch on 26/2/2024

    if(b_FatJet_msoftdrop_jesTotalUp_){
        int bytes_FatJet_msoftdrop_jesTotalUp = b_FatJet_msoftdrop_jesTotalUp_->GetEntry(jentry);
        v_FatJet_msoftdrop_jesTotalUp_ = vector<float>(FatJet_msoftdrop_jesTotalUp_,FatJet_msoftdrop_jesTotalUp_ + bytes_FatJet_msoftdrop_jesTotalUp/sizeof(FatJet_msoftdrop_jesTotalUp_[0]));
    }

    if(b_FatJet_msoftdrop_jesTotalDown_){
        int bytes_FatJet_msoftdrop_jesTotalDown = b_FatJet_msoftdrop_jesTotalDown_->GetEntry(jentry);
        v_FatJet_msoftdrop_jesTotalDown_ = vector<float>(FatJet_msoftdrop_jesTotalDown_,FatJet_msoftdrop_jesTotalDown_ + bytes_FatJet_msoftdrop_jesTotalDown/sizeof(FatJet_msoftdrop_jesTotalDown_[0]));
    }

    if(b_FatJet_msoftdrop_jerUp_){
        int bytes_FatJet_msoftdrop_jerUp = b_FatJet_msoftdrop_jerUp_->GetEntry(jentry);
        v_FatJet_msoftdrop_jerUp_ = vector<float>(FatJet_msoftdrop_jerUp_,FatJet_msoftdrop_jerUp_+bytes_FatJet_msoftdrop_jerUp/sizeof(FatJet_msoftdrop_jerUp_[0]));
    }

    if(b_FatJet_msoftdrop_jerDown_){
        int bytes_FatJet_msoftdrop_jerDown = b_FatJet_msoftdrop_jerDown_->GetEntry(jentry);
        v_FatJet_msoftdrop_jerDown_ = vector<float>(FatJet_msoftdrop_jerDown_,FatJet_msoftdrop_jerDown_+bytes_FatJet_msoftdrop_jerDown/sizeof(FatJet_msoftdrop_jerDown_[0]));
    }

    //  Add JMS/JMR up and down

    if(b_FatJet_msoftdrop_jmsUp_){
        int bytes_FatJet_msoftdrop_jmsUp = b_FatJet_msoftdrop_jmsUp_->GetEntry(jentry);
        v_FatJet_msoftdrop_jmsUp_ = vector<float>(FatJet_msoftdrop_jmsUp_,FatJet_msoftdrop_jmsUp_ + bytes_FatJet_msoftdrop_jmsUp/sizeof(FatJet_msoftdrop_jmsUp_[0]));
    }

    if(b_FatJet_msoftdrop_jmsDown_){
        int bytes_FatJet_msoftdrop_jmsDown = b_FatJet_msoftdrop_jmsDown_->GetEntry(jentry);
        v_FatJet_msoftdrop_jmsDown_ = vector<float>(FatJet_msoftdrop_jmsDown_,FatJet_msoftdrop_jmsDown_ + bytes_FatJet_msoftdrop_jmsDown/sizeof(FatJet_msoftdrop_jmsDown_[0]));
    }

    if(b_FatJet_msoftdrop_jmrUp_){
        int bytes_FatJet_msoftdrop_jmrUp = b_FatJet_msoftdrop_jmrUp_->GetEntry(jentry);
        v_FatJet_msoftdrop_jmrUp_ = vector<float>(FatJet_msoftdrop_jmrUp_,FatJet_msoftdrop_jmrUp_+bytes_FatJet_msoftdrop_jmrUp/sizeof(FatJet_msoftdrop_jmrUp_[0]));
    }

    if(b_FatJet_msoftdrop_jmrDown_){
        int bytes_FatJet_msoftdrop_jmrDown = b_FatJet_msoftdrop_jmrDown_->GetEntry(jentry);
        v_FatJet_msoftdrop_jmrDown_ = vector<float>(FatJet_msoftdrop_jmrDown_,FatJet_msoftdrop_jmrDown_+bytes_FatJet_msoftdrop_jmrDown/sizeof(FatJet_msoftdrop_jmrDown_[0]));
    }


    // if(b_FatJet_ParticleNetMDraw_probQCDb_){
    //     int bytes_FatJet_ParticleNetMDraw_probQCDb = b_FatJet_ParticleNetMDraw_probQCDb_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probQCDb_ = vector<float>(FatJet_ParticleNetMDraw_probQCDb_,FatJet_ParticleNetMDraw_probQCDb_+bytes_FatJet_ParticleNetMDraw_probQCDb/sizeof(FatJet_ParticleNetMDraw_probQCDb_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probQCDbb_){
    //     int bytes_FatJet_ParticleNetMDraw_probQCDbb = b_FatJet_ParticleNetMDraw_probQCDbb_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probQCDbb_ = vector<float>(FatJet_ParticleNetMDraw_probQCDbb_,FatJet_ParticleNetMDraw_probQCDbb_+bytes_FatJet_ParticleNetMDraw_probQCDbb/sizeof(FatJet_ParticleNetMDraw_probQCDbb_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probQCDc_){
    //     int bytes_FatJet_ParticleNetMDraw_probQCDc = b_FatJet_ParticleNetMDraw_probQCDc_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probQCDc_ = vector<float>(FatJet_ParticleNetMDraw_probQCDc_,FatJet_ParticleNetMDraw_probQCDc_+bytes_FatJet_ParticleNetMDraw_probQCDc/sizeof(FatJet_ParticleNetMDraw_probQCDc_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probQCDcc_){
    //     int bytes_FatJet_ParticleNetMDraw_probQCDcc = b_FatJet_ParticleNetMDraw_probQCDcc_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probQCDcc_ = vector<float>(FatJet_ParticleNetMDraw_probQCDcc_,FatJet_ParticleNetMDraw_probQCDcc_+bytes_FatJet_ParticleNetMDraw_probQCDcc/sizeof(FatJet_ParticleNetMDraw_probQCDcc_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probQCDothers_){
    //     int bytes_FatJet_ParticleNetMDraw_probQCDothers = b_FatJet_ParticleNetMDraw_probQCDothers_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probQCDothers_ = vector<float>(FatJet_ParticleNetMDraw_probQCDothers_,FatJet_ParticleNetMDraw_probQCDothers_+bytes_FatJet_ParticleNetMDraw_probQCDothers/sizeof(FatJet_ParticleNetMDraw_probQCDothers_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probXbb_){
    //     int bytes_FatJet_ParticleNetMDraw_probXbb = b_FatJet_ParticleNetMDraw_probXbb_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probXbb_ = vector<float>(FatJet_ParticleNetMDraw_probXbb_,FatJet_ParticleNetMDraw_probXbb_+bytes_FatJet_ParticleNetMDraw_probXbb/sizeof(FatJet_ParticleNetMDraw_probXbb_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probXcc_){
    //     int bytes_FatJet_ParticleNetMDraw_probXcc = b_FatJet_ParticleNetMDraw_probXcc_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probXcc_ = vector<float>(FatJet_ParticleNetMDraw_probXcc_,FatJet_ParticleNetMDraw_probXcc_+bytes_FatJet_ParticleNetMDraw_probXcc/sizeof(FatJet_ParticleNetMDraw_probXcc_[0]));
    // }

    // if(b_FatJet_ParticleNetMDraw_probXqq_){
    //     int bytes_FatJet_ParticleNetMDraw_probXqq = b_FatJet_ParticleNetMDraw_probXqq_->GetEntry(jentry);
    //     v_FatJet_ParticleNetMDraw_probXqq_ = vector<float>(FatJet_ParticleNetMDraw_probXqq_,FatJet_ParticleNetMDraw_probXqq_+bytes_FatJet_ParticleNetMDraw_probXqq/sizeof(FatJet_ParticleNetMDraw_probXqq_[0]));
    // }

    if(b_FatJet_pt_nom_){
        int bytes_FatJet_pt_nom = b_FatJet_pt_nom_->GetEntry(jentry);
        v_FatJet_pt_nom_ = vector<float>(FatJet_pt_nom_,FatJet_pt_nom_+bytes_FatJet_pt_nom/sizeof(FatJet_pt_nom_[0]));
    }

    if(b_FatJet_pt_){
        int bytes_FatJet_pt = b_FatJet_pt_->GetEntry(jentry);
        v_FatJet_pt_ = vector<float>(FatJet_pt_,FatJet_pt_+bytes_FatJet_pt/sizeof(FatJet_pt_[0]));
        for (int i = 0; i < v_FatJet_pt_.size() ; i++){
        // cout << "pt_i = " << v_FatJet_pt_[i] << endl;
        }
    }


    
    if(b_FatJet_eta_){
        int bytes_FatJet_eta = b_FatJet_eta_->GetEntry(jentry);
        v_FatJet_eta_ = vector<float>(FatJet_eta_,FatJet_eta_+bytes_FatJet_eta/sizeof(FatJet_eta_[0]));
    }
    
    if(b_FatJet_phi_){
        int bytes_FatJet_phi = b_FatJet_phi_->GetEntry(jentry);
        v_FatJet_phi_ = vector<float>(FatJet_phi_,FatJet_phi_+bytes_FatJet_phi/sizeof(FatJet_phi_[0]));
    }
    
    if(b_FatJet_msoftdrop_){
        int bytes_FatJet_msoftdrop = b_FatJet_msoftdrop_->GetEntry(jentry);
        v_FatJet_msoftdrop_ = vector<float>(FatJet_msoftdrop_,FatJet_msoftdrop_+bytes_FatJet_msoftdrop/sizeof(FatJet_msoftdrop_[0]));
    }

    if(b_FatJet_jetId_){
        int bytes_FatJet_jetId = b_FatJet_jetId_->GetEntry(jentry);
        v_FatJet_jetId_ = vector<int>(FatJet_jetId_,FatJet_jetId_+bytes_FatJet_jetId/sizeof(FatJet_jetId_[0]));
    }



    if(b_FatJet_tau1_){
        int bytes_FatJet_tau1 = b_FatJet_tau1_->GetEntry(jentry);
        v_FatJet_tau1_ = vector<float>(FatJet_tau1_,FatJet_tau1_+bytes_FatJet_tau1/sizeof(FatJet_tau1_[0]));
    }

    if(b_FatJet_tau2_){
        int bytes_FatJet_tau2 = b_FatJet_tau2_->GetEntry(jentry);
        v_FatJet_tau2_ = vector<float>(FatJet_tau2_,FatJet_tau2_+bytes_FatJet_tau2/sizeof(FatJet_tau2_[0]));
    }

    if(b_FatJet_tau3_){
        int bytes_FatJet_tau3 = b_FatJet_tau3_->GetEntry(jentry);
        v_FatJet_tau3_ = vector<float>(FatJet_tau3_,FatJet_tau3_+bytes_FatJet_tau3/sizeof(FatJet_tau3_[0]));
    }

    if(b_FatJet_tau4_){
        int bytes_FatJet_tau4 = b_FatJet_tau4_->GetEntry(jentry);
        v_FatJet_tau4_ = vector<float>(FatJet_tau4_,FatJet_tau4_+bytes_FatJet_tau4/sizeof(FatJet_tau4_[0]));
    }
//     //HWW tagger.


    //V2
    if(b_FatJet_inclParTMDV1_probHWqqWqq0c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWqq0c    =  b_FatJet_inclParTMDV1_probHWqqWqq0c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWqq0c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWqq0c_   ,FatJet_inclParTMDV1_probHWqqWqq0c_    + bytes_FatJet_inclParTMDV1_probHWqqWqq0c/sizeof(FatJet_inclParTMDV1_probHWqqWqq0c_[0])) ;}
    // else{cout << "No b_FatJet_inclParTMDV1_probHWqqWqq0c_! = " << bytes_FatJet_inclParTMDV1_probHWqqWqq0c << endl;}
    if(b_FatJet_inclParTMDV1_probHWqqWqq1c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWqq1c    =  b_FatJet_inclParTMDV1_probHWqqWqq1c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWqq1c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWqq1c_   ,FatJet_inclParTMDV1_probHWqqWqq1c_    + bytes_FatJet_inclParTMDV1_probHWqqWqq1c/sizeof(FatJet_inclParTMDV1_probHWqqWqq1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWqq2c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWqq2c    =  b_FatJet_inclParTMDV1_probHWqqWqq2c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWqq2c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWqq2c_   ,FatJet_inclParTMDV1_probHWqqWqq2c_    + bytes_FatJet_inclParTMDV1_probHWqqWqq2c/sizeof(FatJet_inclParTMDV1_probHWqqWqq2c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWq0c_    ){int bytes_FatJet_inclParTMDV1_probHWqqWq0c     =  b_FatJet_inclParTMDV1_probHWqqWq0c_    ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWq0c_     = vector<float>(FatJet_inclParTMDV1_probHWqqWq0c_    ,FatJet_inclParTMDV1_probHWqqWq0c_     + bytes_FatJet_inclParTMDV1_probHWqqWq0c/sizeof(FatJet_inclParTMDV1_probHWqqWq0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWq1c_    ){int bytes_FatJet_inclParTMDV1_probHWqqWq1c     =  b_FatJet_inclParTMDV1_probHWqqWq1c_    ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWq1c_     = vector<float>(FatJet_inclParTMDV1_probHWqqWq1c_    ,FatJet_inclParTMDV1_probHWqqWq1c_     + bytes_FatJet_inclParTMDV1_probHWqqWq1c/sizeof(FatJet_inclParTMDV1_probHWqqWq1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWq2c_    ){int bytes_FatJet_inclParTMDV1_probHWqqWq2c     =  b_FatJet_inclParTMDV1_probHWqqWq2c_    ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWq2c_     = vector<float>(FatJet_inclParTMDV1_probHWqqWq2c_    ,FatJet_inclParTMDV1_probHWqqWq2c_     + bytes_FatJet_inclParTMDV1_probHWqqWq2c/sizeof(FatJet_inclParTMDV1_probHWqqWq2c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWev0c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWev0c    =  b_FatJet_inclParTMDV1_probHWqqWev0c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWev0c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWev0c_   ,FatJet_inclParTMDV1_probHWqqWev0c_    + bytes_FatJet_inclParTMDV1_probHWqqWev0c/sizeof(FatJet_inclParTMDV1_probHWqqWev0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWev1c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWev1c    =  b_FatJet_inclParTMDV1_probHWqqWev1c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWev1c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWev1c_   ,FatJet_inclParTMDV1_probHWqqWev1c_    + bytes_FatJet_inclParTMDV1_probHWqqWev1c/sizeof(FatJet_inclParTMDV1_probHWqqWev1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWmv0c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWmv0c    =  b_FatJet_inclParTMDV1_probHWqqWmv0c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWmv0c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWmv0c_   ,FatJet_inclParTMDV1_probHWqqWmv0c_    + bytes_FatJet_inclParTMDV1_probHWqqWmv0c/sizeof(FatJet_inclParTMDV1_probHWqqWmv0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWmv1c_   ){int bytes_FatJet_inclParTMDV1_probHWqqWmv1c    =  b_FatJet_inclParTMDV1_probHWqqWmv1c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWmv1c_    = vector<float>(FatJet_inclParTMDV1_probHWqqWmv1c_   ,FatJet_inclParTMDV1_probHWqqWmv1c_    + bytes_FatJet_inclParTMDV1_probHWqqWmv1c/sizeof(FatJet_inclParTMDV1_probHWqqWmv1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtauev0c_){int bytes_FatJet_inclParTMDV1_probHWqqWtauev0c =  b_FatJet_inclParTMDV1_probHWqqWtauev0c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtauev0c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtauev0c_,FatJet_inclParTMDV1_probHWqqWtauev0c_ + bytes_FatJet_inclParTMDV1_probHWqqWtauev0c/sizeof(FatJet_inclParTMDV1_probHWqqWtauev0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtauev1c_){int bytes_FatJet_inclParTMDV1_probHWqqWtauev1c =  b_FatJet_inclParTMDV1_probHWqqWtauev1c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtauev1c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtauev1c_,FatJet_inclParTMDV1_probHWqqWtauev1c_ + bytes_FatJet_inclParTMDV1_probHWqqWtauev1c/sizeof(FatJet_inclParTMDV1_probHWqqWtauev1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtaumv0c_){int bytes_FatJet_inclParTMDV1_probHWqqWtaumv0c =  b_FatJet_inclParTMDV1_probHWqqWtaumv0c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtaumv0c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtaumv0c_,FatJet_inclParTMDV1_probHWqqWtaumv0c_ + bytes_FatJet_inclParTMDV1_probHWqqWtaumv0c/sizeof(FatJet_inclParTMDV1_probHWqqWtaumv0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtaumv1c_){int bytes_FatJet_inclParTMDV1_probHWqqWtaumv1c =  b_FatJet_inclParTMDV1_probHWqqWtaumv1c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtaumv1c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtaumv1c_,FatJet_inclParTMDV1_probHWqqWtaumv1c_ + bytes_FatJet_inclParTMDV1_probHWqqWtaumv1c/sizeof(FatJet_inclParTMDV1_probHWqqWtaumv1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtauhv0c_){int bytes_FatJet_inclParTMDV1_probHWqqWtauhv0c =  b_FatJet_inclParTMDV1_probHWqqWtauhv0c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtauhv0c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtauhv0c_,FatJet_inclParTMDV1_probHWqqWtauhv0c_ + bytes_FatJet_inclParTMDV1_probHWqqWtauhv0c/sizeof(FatJet_inclParTMDV1_probHWqqWtauhv0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHWqqWtauhv1c_){int bytes_FatJet_inclParTMDV1_probHWqqWtauhv1c =  b_FatJet_inclParTMDV1_probHWqqWtauhv1c_->GetEntry(jentry); v_FatJet_inclParTMDV1_probHWqqWtauhv1c_ = vector<float>(FatJet_inclParTMDV1_probHWqqWtauhv1c_,FatJet_inclParTMDV1_probHWqqWtauhv1c_ + bytes_FatJet_inclParTMDV1_probHWqqWtauhv1c/sizeof(FatJet_inclParTMDV1_probHWqqWtauhv1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHbb_         ){int bytes_FatJet_inclParTMDV1_probHbb          =  b_FatJet_inclParTMDV1_probHbb_         ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHbb_          = vector<float>(FatJet_inclParTMDV1_probHbb_         ,FatJet_inclParTMDV1_probHbb_          + bytes_FatJet_inclParTMDV1_probHbb/sizeof(FatJet_inclParTMDV1_probHbb_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHcc_         ){int bytes_FatJet_inclParTMDV1_probHcc          =  b_FatJet_inclParTMDV1_probHcc_         ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHcc_          = vector<float>(FatJet_inclParTMDV1_probHcc_         ,FatJet_inclParTMDV1_probHcc_          + bytes_FatJet_inclParTMDV1_probHcc/sizeof(FatJet_inclParTMDV1_probHcc_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHss_         ){int bytes_FatJet_inclParTMDV1_probHss          =  b_FatJet_inclParTMDV1_probHss_         ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHss_          = vector<float>(FatJet_inclParTMDV1_probHss_         ,FatJet_inclParTMDV1_probHss_          + bytes_FatJet_inclParTMDV1_probHss/sizeof(FatJet_inclParTMDV1_probHss_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHqq_         ){int bytes_FatJet_inclParTMDV1_probHqq          =  b_FatJet_inclParTMDV1_probHqq_         ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHqq_          = vector<float>(FatJet_inclParTMDV1_probHqq_         ,FatJet_inclParTMDV1_probHqq_          + bytes_FatJet_inclParTMDV1_probHqq/sizeof(FatJet_inclParTMDV1_probHqq_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHtauhtaue_   ){int bytes_FatJet_inclParTMDV1_probHtauhtaue    =  b_FatJet_inclParTMDV1_probHtauhtaue_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHtauhtaue_    = vector<float>(FatJet_inclParTMDV1_probHtauhtaue_   ,FatJet_inclParTMDV1_probHtauhtaue_    + bytes_FatJet_inclParTMDV1_probHtauhtaue/sizeof(FatJet_inclParTMDV1_probHtauhtaue_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHtauhtaum_   ){int bytes_FatJet_inclParTMDV1_probHtauhtaum    =  b_FatJet_inclParTMDV1_probHtauhtaum_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHtauhtaum_    = vector<float>(FatJet_inclParTMDV1_probHtauhtaum_   ,FatJet_inclParTMDV1_probHtauhtaum_    + bytes_FatJet_inclParTMDV1_probHtauhtaum/sizeof(FatJet_inclParTMDV1_probHtauhtaum_[0])) ;}
    if(b_FatJet_inclParTMDV1_probHtauhtauh_   ){int bytes_FatJet_inclParTMDV1_probHtauhtauh    =  b_FatJet_inclParTMDV1_probHtauhtauh_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probHtauhtauh_    = vector<float>(FatJet_inclParTMDV1_probHtauhtauh_   ,FatJet_inclParTMDV1_probHtauhtauh_    + bytes_FatJet_inclParTMDV1_probHtauhtauh/sizeof(FatJet_inclParTMDV1_probHtauhtauh_[0])) ;}
    if(b_FatJet_inclParTMDV1_probQCDbb_       ){int bytes_FatJet_inclParTMDV1_probQCDbb        =  b_FatJet_inclParTMDV1_probQCDbb_       ->GetEntry(jentry); v_FatJet_inclParTMDV1_probQCDbb_        = vector<float>(FatJet_inclParTMDV1_probQCDbb_       ,FatJet_inclParTMDV1_probQCDbb_        + bytes_FatJet_inclParTMDV1_probQCDbb/sizeof(FatJet_inclParTMDV1_probQCDbb_[0])) ;}
    if(b_FatJet_inclParTMDV1_probQCDcc_       ){int bytes_FatJet_inclParTMDV1_probQCDcc        =  b_FatJet_inclParTMDV1_probQCDcc_       ->GetEntry(jentry); v_FatJet_inclParTMDV1_probQCDcc_        = vector<float>(FatJet_inclParTMDV1_probQCDcc_       ,FatJet_inclParTMDV1_probQCDcc_        + bytes_FatJet_inclParTMDV1_probQCDcc/sizeof(FatJet_inclParTMDV1_probQCDcc_[0])) ;}
    if(b_FatJet_inclParTMDV1_probQCDb_        ){int bytes_FatJet_inclParTMDV1_probQCDb         =  b_FatJet_inclParTMDV1_probQCDb_        ->GetEntry(jentry); v_FatJet_inclParTMDV1_probQCDb_         = vector<float>(FatJet_inclParTMDV1_probQCDb_        ,FatJet_inclParTMDV1_probQCDb_         + bytes_FatJet_inclParTMDV1_probQCDb/sizeof(FatJet_inclParTMDV1_probQCDb_[0])) ;}
    if(b_FatJet_inclParTMDV1_probQCDc_        ){int bytes_FatJet_inclParTMDV1_probQCDc         =  b_FatJet_inclParTMDV1_probQCDc_        ->GetEntry(jentry); v_FatJet_inclParTMDV1_probQCDc_         = vector<float>(FatJet_inclParTMDV1_probQCDc_        ,FatJet_inclParTMDV1_probQCDc_         + bytes_FatJet_inclParTMDV1_probQCDc/sizeof(FatJet_inclParTMDV1_probQCDc_[0])) ;}
    if(b_FatJet_inclParTMDV1_probQCDothers_   ){int bytes_FatJet_inclParTMDV1_probQCDothers    =  b_FatJet_inclParTMDV1_probQCDothers_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probQCDothers_    = vector<float>(FatJet_inclParTMDV1_probQCDothers_   ,FatJet_inclParTMDV1_probQCDothers_    + bytes_FatJet_inclParTMDV1_probQCDothers/sizeof(FatJet_inclParTMDV1_probQCDothers_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWqq0c_   ){int bytes_FatJet_inclParTMDV1_probTopbWqq0c    =  b_FatJet_inclParTMDV1_probTopbWqq0c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWqq0c_    = vector<float>(FatJet_inclParTMDV1_probTopbWqq0c_   ,FatJet_inclParTMDV1_probTopbWqq0c_    + bytes_FatJet_inclParTMDV1_probTopbWqq0c/sizeof(FatJet_inclParTMDV1_probTopbWqq0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWqq1c_   ){int bytes_FatJet_inclParTMDV1_probTopbWqq1c    =  b_FatJet_inclParTMDV1_probTopbWqq1c_   ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWqq1c_    = vector<float>(FatJet_inclParTMDV1_probTopbWqq1c_   ,FatJet_inclParTMDV1_probTopbWqq1c_    + bytes_FatJet_inclParTMDV1_probTopbWqq1c/sizeof(FatJet_inclParTMDV1_probTopbWqq1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWq0c_    ){int bytes_FatJet_inclParTMDV1_probTopbWq0c     =  b_FatJet_inclParTMDV1_probTopbWq0c_    ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWq0c_     = vector<float>(FatJet_inclParTMDV1_probTopbWq0c_    ,FatJet_inclParTMDV1_probTopbWq0c_     + bytes_FatJet_inclParTMDV1_probTopbWq0c/sizeof(FatJet_inclParTMDV1_probTopbWq0c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWq1c_    ){int bytes_FatJet_inclParTMDV1_probTopbWq1c     =  b_FatJet_inclParTMDV1_probTopbWq1c_    ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWq1c_     = vector<float>(FatJet_inclParTMDV1_probTopbWq1c_    ,FatJet_inclParTMDV1_probTopbWq1c_     + bytes_FatJet_inclParTMDV1_probTopbWq1c/sizeof(FatJet_inclParTMDV1_probTopbWq1c_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWev_     ){int bytes_FatJet_inclParTMDV1_probTopbWev      =  b_FatJet_inclParTMDV1_probTopbWev_     ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWev_      = vector<float>(FatJet_inclParTMDV1_probTopbWev_     ,FatJet_inclParTMDV1_probTopbWev_      + bytes_FatJet_inclParTMDV1_probTopbWev/sizeof(FatJet_inclParTMDV1_probTopbWev_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWmv_     ){int bytes_FatJet_inclParTMDV1_probTopbWmv      =  b_FatJet_inclParTMDV1_probTopbWmv_     ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWmv_      = vector<float>(FatJet_inclParTMDV1_probTopbWmv_     ,FatJet_inclParTMDV1_probTopbWmv_      + bytes_FatJet_inclParTMDV1_probTopbWmv/sizeof(FatJet_inclParTMDV1_probTopbWmv_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWtauhv_  ){int bytes_FatJet_inclParTMDV1_probTopbWtauhv   =  b_FatJet_inclParTMDV1_probTopbWtauhv_  ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWtauhv_   = vector<float>(FatJet_inclParTMDV1_probTopbWtauhv_  ,FatJet_inclParTMDV1_probTopbWtauhv_   + bytes_FatJet_inclParTMDV1_probTopbWtauhv/sizeof(FatJet_inclParTMDV1_probTopbWtauhv_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWtauev_  ){int bytes_FatJet_inclParTMDV1_probTopbWtauev   =  b_FatJet_inclParTMDV1_probTopbWtauev_  ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWtauev_   = vector<float>(FatJet_inclParTMDV1_probTopbWtauev_  ,FatJet_inclParTMDV1_probTopbWtauev_   + bytes_FatJet_inclParTMDV1_probTopbWtauev/sizeof(FatJet_inclParTMDV1_probTopbWtauev_[0])) ;}
    if(b_FatJet_inclParTMDV1_probTopbWtaumv_  ){int bytes_FatJet_inclParTMDV1_probTopbWtaumv   =  b_FatJet_inclParTMDV1_probTopbWtaumv_  ->GetEntry(jentry); v_FatJet_inclParTMDV1_probTopbWtaumv_   = vector<float>(FatJet_inclParTMDV1_probTopbWtaumv_  ,FatJet_inclParTMDV1_probTopbWtaumv_   + bytes_FatJet_inclParTMDV1_probTopbWtaumv/sizeof(FatJet_inclParTMDV1_probTopbWtaumv_[0])) ;}
    // else{cout << "b_FatJet_inclParTMDV1_probTopbWtaumv_! =" << bytes_FatJet_inclParTMDV1_probTopbWtaumv << endl;}
    //Begin hidden.
}

void EDBR2PKUTree::Electron_GetEntry(Long64_t jentry) {
   int bytes_Electron_charge = b_Electron_charge_->GetEntry(jentry);
    v_Electron_charge_ = vector<int>(Electron_charge_,Electron_charge_+bytes_Electron_charge/sizeof(Electron_charge_[0]));

    int bytes_Electron_jetIdx = b_Electron_jetIdx_->GetEntry(jentry);
    v_Electron_jetIdx_ = vector<int>(Electron_jetIdx_,Electron_jetIdx_+bytes_Electron_jetIdx/sizeof(Electron_jetIdx_[0]));

    int bytes_Electron_pdgId = b_Electron_pdgId_->GetEntry(jentry);
    v_Electron_pdgId_ = vector<int>(Electron_pdgId_,Electron_pdgId_+bytes_Electron_pdgId/sizeof(Electron_pdgId_[0]));


    int bytes_Electron_jetRelIso = b_Electron_jetRelIso_->GetEntry(jentry);
    v_Electron_jetRelIso_ = vector<float>(Electron_jetRelIso_,Electron_jetRelIso_+bytes_Electron_jetRelIso/sizeof(Electron_jetRelIso_[0]));

    int bytes_Electron_eta = b_Electron_eta_->GetEntry(jentry);
    v_Electron_eta_ = vector<float>(Electron_eta_,Electron_eta_+bytes_Electron_eta/sizeof(Electron_eta_[0]));

    int bytes_Electron_mass = b_Electron_mass_->GetEntry(jentry);
    v_Electron_mass_ = vector<float>(Electron_mass_,Electron_mass_+bytes_Electron_mass/sizeof(Electron_mass_[0]));

    int bytes_Electron_pfRelIso03_all = b_Electron_pfRelIso03_all_->GetEntry(jentry);
    v_Electron_pfRelIso03_all_ = vector<float>(Electron_pfRelIso03_all_,Electron_pfRelIso03_all_+bytes_Electron_pfRelIso03_all/sizeof(Electron_pfRelIso03_all_[0]));

    int bytes_Electron_phi = b_Electron_phi_->GetEntry(jentry);
    v_Electron_phi_ = vector<float>(Electron_phi_,Electron_phi_+bytes_Electron_phi/sizeof(Electron_phi_[0]));

    int bytes_Electron_pt = b_Electron_pt_->GetEntry(jentry);
    v_Electron_pt_ = vector<float>(Electron_pt_,Electron_pt_+bytes_Electron_pt/sizeof(Electron_pt_[0]));
}

void EDBR2PKUTree::Muon_GetEntry(Long64_t jentry) {
    int bytes_Muon_charge = b_Muon_charge_->GetEntry(jentry);
    v_Muon_charge_ = vector<int>(Muon_charge_,Muon_charge_+bytes_Muon_charge/sizeof(Muon_charge_[0]));

    int bytes_Muon_highPtId = b_Muon_highPtId_->GetEntry(jentry);
    v_Muon_highPtId_ = vector<int>(Muon_highPtId_,Muon_highPtId_+bytes_Muon_highPtId/sizeof(Muon_highPtId_[0]));

    int bytes_Muon_jetIdx = b_Muon_jetIdx_->GetEntry(jentry);
    v_Muon_jetIdx_ = vector<int>(Muon_jetIdx_,Muon_jetIdx_+bytes_Muon_jetIdx/sizeof(Muon_jetIdx_[0]));

    int bytes_Muon_pdgId = b_Muon_pdgId_->GetEntry(jentry);
    v_Muon_pdgId_ = vector<int>(Muon_pdgId_,Muon_pdgId_+bytes_Muon_pdgId/sizeof(Muon_pdgId_[0]));


    int bytes_Muon_eta = b_Muon_eta_->GetEntry(jentry);
    v_Muon_eta_ = vector<float>(Muon_eta_,Muon_eta_+bytes_Muon_eta/sizeof(Muon_eta_[0]));

    int bytes_Muon_jetRelIso = b_Muon_jetRelIso_->GetEntry(jentry);
    v_Muon_jetRelIso_ = vector<float>(Muon_jetRelIso_,Muon_jetRelIso_+bytes_Muon_jetRelIso/sizeof(Muon_jetRelIso_[0]));

    int bytes_Muon_mass = b_Muon_mass_->GetEntry(jentry);
    v_Muon_mass_ = vector<float>(Muon_mass_,Muon_mass_+bytes_Muon_mass/sizeof(Muon_mass_[0]));

    int bytes_Muon_pfRelIso03_all = b_Muon_pfRelIso03_all_->GetEntry(jentry);
    v_Muon_pfRelIso03_all_ = vector<float>(Muon_pfRelIso03_all_,Muon_pfRelIso03_all_+bytes_Muon_pfRelIso03_all/sizeof(Muon_pfRelIso03_all_[0]));

    int bytes_Muon_pfRelIso04_all = b_Muon_pfRelIso04_all_->GetEntry(jentry);
    v_Muon_pfRelIso04_all_ = vector<float>(Muon_pfRelIso04_all_,Muon_pfRelIso04_all_+bytes_Muon_pfRelIso04_all/sizeof(Muon_pfRelIso04_all_[0]));

    int bytes_Muon_phi = b_Muon_phi_->GetEntry(jentry);
    v_Muon_phi_ = vector<float>(Muon_phi_,Muon_phi_+bytes_Muon_phi/sizeof(Muon_phi_[0]));

    int bytes_Muon_pt = b_Muon_pt_->GetEntry(jentry);
    v_Muon_pt_ = vector<float>(Muon_pt_,Muon_pt_+bytes_Muon_pt/sizeof(Muon_pt_[0]));

    int bytes_Muon_tkRelIso = b_Muon_tkRelIso_->GetEntry(jentry);
    v_Muon_tkRelIso_ = vector<float>(Muon_tkRelIso_,Muon_tkRelIso_+bytes_Muon_tkRelIso/sizeof(Muon_tkRelIso_[0]));

}

#endif
