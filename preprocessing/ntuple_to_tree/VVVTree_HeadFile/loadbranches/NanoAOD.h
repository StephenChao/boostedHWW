#ifndef _loadbranches_NanoAOD_
#define _loadbranches_NanoAOD_


void EDBR2PKUTree::loadVectorBranches_Electron() {
    // b_Electron_pt_ = fChain->GetBranch("Electron_pt");
    // if (b_Electron_pt_) { b_Electron_pt_->SetAddress(&Electron_pt_);}

    // b_Electron_eta_ = fChain->GetBranch("Electron_eta");
    // if (b_Electron_eta_) { b_Electron_eta_->SetAddress(&Electron_eta_);}

    // b_Electron_phi_ = fChain->GetBranch("Electron_phi");
    // if (b_Electron_phi_) { b_Electron_phi_->SetAddress(&Electron_phi_);}

    // b_Electron_mass_ = fChain->GetBranch("Electron_mass");
    // if (b_Electron_mass_) { b_Electron_mass_->SetAddress(&Electron_mass_);}

    fChain->SetBranchAddress("Electron_charge",Electron_charge_,&b_Electron_charge_);
    fChain->SetBranchAddress("Electron_jetIdx",Electron_jetIdx_,&b_Electron_jetIdx_);
    fChain->SetBranchAddress("Electron_pdgId",Electron_pdgId_,&b_Electron_pdgId_);
    fChain->SetBranchAddress("Electron_jetRelIso",Electron_jetRelIso_,&b_Electron_jetRelIso_);
    fChain->SetBranchAddress("Electron_eta",Electron_eta_,&b_Electron_eta_);
    fChain->SetBranchAddress("Electron_mass",Electron_mass_,&b_Electron_mass_);
    fChain->SetBranchAddress("Electron_pfRelIso03_all",Electron_pfRelIso03_all_,&b_Electron_pfRelIso03_all_);
    fChain->SetBranchAddress("Electron_phi",Electron_phi_,&b_Electron_phi_);

    fChain->SetBranchAddress("Electron_pt",Electron_pt_,&b_Electron_pt_);
}

void EDBR2PKUTree::loadVectorBranches_Muon() {
    // b_Muon_pt_ = fChain->GetBranch("Muon_pt");
    // if (b_Muon_pt_) { b_Muon_pt_->SetAddress(&Muon_pt_);}

    // b_Muon_eta_ = fChain->GetBranch("Muon_eta");
    // if (b_Muon_eta_) { b_Muon_eta_->SetAddress(&Muon_eta_);}

    // b_Muon_phi_ = fChain->GetBranch("Muon_phi");
    // if (b_Muon_phi_) { b_Muon_phi_->SetAddress(&Muon_phi_);}

    // b_Muon_mass_ = fChain->GetBranch("Muon_mass");
    // if (b_Muon_mass_) { b_Muon_mass_->SetAddress(&Muon_mass_);}

    fChain->SetBranchAddress("Muon_charge",Muon_charge_,&b_Muon_charge_);
    fChain->SetBranchAddress("Muon_highPtId",Muon_highPtId_,&b_Muon_highPtId_);
    fChain->SetBranchAddress("Muon_jetIdx",Muon_jetIdx_,&b_Muon_jetIdx_);
    fChain->SetBranchAddress("Muon_pdgId",Muon_pdgId_,&b_Muon_pdgId_);
    fChain->SetBranchAddress("Muon_eta",Muon_eta_,&b_Muon_eta_);
    fChain->SetBranchAddress("Muon_jetRelIso",Muon_jetRelIso_,&b_Muon_jetRelIso_);
    fChain->SetBranchAddress("Muon_mass",Muon_mass_,&b_Muon_mass_);
    fChain->SetBranchAddress("Muon_pfRelIso03_all",Muon_pfRelIso03_all_,&b_Muon_pfRelIso03_all_);
    fChain->SetBranchAddress("Muon_pfRelIso04_all",Muon_pfRelIso04_all_,&b_Muon_pfRelIso04_all_);
    fChain->SetBranchAddress("Muon_phi",Muon_phi_,&b_Muon_phi_);
    fChain->SetBranchAddress("Muon_pt",Muon_pt_,&b_Muon_pt_);
    fChain->SetBranchAddress("Muon_tkRelIso",Muon_tkRelIso_,&b_Muon_tkRelIso_);
}

//To give value to Muon_pt_, now it's a array like the original content in the branch "Muon_charge"
//b_Muon_charge is a clone to this branch
void EDBR2PKUTree::loadVectorBranches_FatJets_HWW() {

    b_FatJet_msoftdrop_raw_ = fChain->GetBranch("FatJet_msoftdrop_raw");
    if (b_FatJet_msoftdrop_raw_) { b_FatJet_msoftdrop_raw_->SetAddress(&FatJet_msoftdrop_raw_);}

    b_FatJet_msoftdrop_nom_ = fChain->GetBranch("FatJet_msoftdrop_nom");
    if (b_FatJet_msoftdrop_nom_) { b_FatJet_msoftdrop_nom_->SetAddress(&FatJet_msoftdrop_nom_);}

    b_FatJet_msoftdrop_corr_JMR_ = fChain->GetBranch("FatJet_msoftdrop_corr_JMR");
    if (b_FatJet_msoftdrop_corr_JMR_) { b_FatJet_msoftdrop_corr_JMR_->SetAddress(&FatJet_msoftdrop_corr_JMR_);}

    b_FatJet_msoftdrop_corr_JMS_ = fChain->GetBranch("FatJet_msoftdrop_corr_JMS");
    if (b_FatJet_msoftdrop_corr_JMS_) { b_FatJet_msoftdrop_corr_JMS_->SetAddress(&FatJet_msoftdrop_corr_JMS_);}

    b_FatJet_msoftdrop_corr_PUPPI_ = fChain->GetBranch("FatJet_msoftdrop_corr_PUPPI");
    if (b_FatJet_msoftdrop_corr_PUPPI_) { b_FatJet_msoftdrop_corr_PUPPI_->SetAddress(&FatJet_msoftdrop_corr_PUPPI_);}


    // Add JES, JER up and down branch on 26/2/2024

    b_FatJet_msoftdrop_jesTotalUp_ = fChain->GetBranch("FatJet_msoftdrop_jesTotalUp");
    if (b_FatJet_msoftdrop_jesTotalUp_) { b_FatJet_msoftdrop_jesTotalUp_->SetAddress(&FatJet_msoftdrop_jesTotalUp_);}

    b_FatJet_msoftdrop_jesTotalDown_ = fChain->GetBranch("FatJet_msoftdrop_jesTotalDown");
    if (b_FatJet_msoftdrop_jesTotalDown_) { b_FatJet_msoftdrop_jesTotalDown_->SetAddress(&FatJet_msoftdrop_jesTotalDown_);}

    b_FatJet_msoftdrop_jerUp_ = fChain->GetBranch("FatJet_msoftdrop_jerUp");
    if (b_FatJet_msoftdrop_jerUp_) { b_FatJet_msoftdrop_jerUp_->SetAddress(&FatJet_msoftdrop_jerUp_);}

    b_FatJet_msoftdrop_jerDown_ = fChain->GetBranch("FatJet_msoftdrop_jerDown");
    if (b_FatJet_msoftdrop_jerDown_) { b_FatJet_msoftdrop_jerDown_->SetAddress(&FatJet_msoftdrop_jerDown_);}

    // Add JES, JER up and down branch on 26/2/2024, over

    b_FatJet_pt_nom_ = fChain->GetBranch("FatJet_pt_nom");
    if (b_FatJet_pt_nom_) { b_FatJet_pt_nom_->SetAddress(&FatJet_pt_nom_);}

    b_FatJet_pt_ = fChain->GetBranch("FatJet_pt");
    if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_);}
        
    b_FatJet_eta_ = fChain->GetBranch("FatJet_eta");
    if (b_FatJet_eta_) { b_FatJet_eta_->SetAddress(&FatJet_eta_);}
        
    b_FatJet_phi_ = fChain->GetBranch("FatJet_phi");
    if (b_FatJet_phi_) { b_FatJet_phi_->SetAddress(&FatJet_phi_);}
        
    b_FatJet_msoftdrop_ = fChain->GetBranch("FatJet_msoftdrop");
    if (b_FatJet_msoftdrop_) { b_FatJet_msoftdrop_->SetAddress(&FatJet_msoftdrop_);}
        
    b_FatJet_jetId_ = fChain->GetBranch("FatJet_jetId");
    if (b_FatJet_jetId_) { b_FatJet_jetId_->SetAddress(&FatJet_jetId_);}


        
    b_FatJet_particleNet_mass_ = fChain->GetBranch("FatJet_particleNet_mass");
    if (b_FatJet_particleNet_mass_) { b_FatJet_particleNet_mass_->SetAddress(&FatJet_particleNet_mass_);}

    b_FatJet_tau1_ = fChain->GetBranch("FatJet_tau1");
    if (b_FatJet_tau1_) { b_FatJet_tau1_->SetAddress(&FatJet_tau1_);}

    b_FatJet_tau2_ = fChain->GetBranch("FatJet_tau2");
    if (b_FatJet_tau2_) { b_FatJet_tau2_->SetAddress(&FatJet_tau2_);}

    b_FatJet_tau3_ = fChain->GetBranch("FatJet_tau3");
    if (b_FatJet_tau3_) { b_FatJet_tau3_->SetAddress(&FatJet_tau3_);}

    b_FatJet_tau4_ = fChain->GetBranch("FatJet_tau4");
    if (b_FatJet_tau4_) { b_FatJet_tau4_->SetAddress(&FatJet_tau4_);}

        //New tagger


    b_FatJet_inclParTMDV1_probHWqqWqq0c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWqq0c"     );
    b_FatJet_inclParTMDV1_probHWqqWqq1c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWqq1c"     );
    b_FatJet_inclParTMDV1_probHWqqWqq2c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWqq2c"     );
    b_FatJet_inclParTMDV1_probHWqqWq0c_     = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWq0c"      );
    b_FatJet_inclParTMDV1_probHWqqWq1c_     = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWq1c"      );
    b_FatJet_inclParTMDV1_probHWqqWq2c_     = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWq2c"      );
    b_FatJet_inclParTMDV1_probHWqqWev0c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWev0c"     );
    b_FatJet_inclParTMDV1_probHWqqWev1c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWev1c"     );
    b_FatJet_inclParTMDV1_probHWqqWmv0c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWmv0c"     );
    b_FatJet_inclParTMDV1_probHWqqWmv1c_    = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWmv1c"     );
    b_FatJet_inclParTMDV1_probHWqqWtauev0c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtauev0c"  );
    b_FatJet_inclParTMDV1_probHWqqWtauev1c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtauev1c"  );
    b_FatJet_inclParTMDV1_probHWqqWtaumv0c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtaumv0c"  );
    b_FatJet_inclParTMDV1_probHWqqWtaumv1c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtaumv1c"  );
    b_FatJet_inclParTMDV1_probHWqqWtauhv0c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtauhv0c"  );
    b_FatJet_inclParTMDV1_probHWqqWtauhv1c_ = fChain->GetBranch("FatJet_inclParTMDV1_probHWqqWtauhv1c"  );
    b_FatJet_inclParTMDV1_probHbb_          = fChain->GetBranch("FatJet_inclParTMDV1_probHbb"           );
    b_FatJet_inclParTMDV1_probHcc_          = fChain->GetBranch("FatJet_inclParTMDV1_probHcc"           );
    b_FatJet_inclParTMDV1_probHss_          = fChain->GetBranch("FatJet_inclParTMDV1_probHss"           );
    b_FatJet_inclParTMDV1_probHqq_          = fChain->GetBranch("FatJet_inclParTMDV1_probHqq"           );
    b_FatJet_inclParTMDV1_probHtauhtaue_    = fChain->GetBranch("FatJet_inclParTMDV1_probHtauhtaue"     );
    b_FatJet_inclParTMDV1_probHtauhtaum_    = fChain->GetBranch("FatJet_inclParTMDV1_probHtauhtaum"     );
    b_FatJet_inclParTMDV1_probHtauhtauh_    = fChain->GetBranch("FatJet_inclParTMDV1_probHtauhtauh"     );
    b_FatJet_inclParTMDV1_probQCDbb_        = fChain->GetBranch("FatJet_inclParTMDV1_probQCDbb"         );
    b_FatJet_inclParTMDV1_probQCDcc_        = fChain->GetBranch("FatJet_inclParTMDV1_probQCDcc"         );
    b_FatJet_inclParTMDV1_probQCDb_         = fChain->GetBranch("FatJet_inclParTMDV1_probQCDb"          );
    b_FatJet_inclParTMDV1_probQCDc_         = fChain->GetBranch("FatJet_inclParTMDV1_probQCDc"          );
    b_FatJet_inclParTMDV1_probQCDothers_    = fChain->GetBranch("FatJet_inclParTMDV1_probQCDothers"     );
    b_FatJet_inclParTMDV1_probTopbWqq0c_    = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWqq0c"     );
    b_FatJet_inclParTMDV1_probTopbWqq1c_    = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWqq1c"     );
    b_FatJet_inclParTMDV1_probTopbWq0c_     = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWq0c"      );
    b_FatJet_inclParTMDV1_probTopbWq1c_     = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWq1c"      );
    b_FatJet_inclParTMDV1_probTopbWev_      = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWev"       );
    b_FatJet_inclParTMDV1_probTopbWmv_      = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWmv"       );
    b_FatJet_inclParTMDV1_probTopbWtauhv_   = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWtauhv"    );
    b_FatJet_inclParTMDV1_probTopbWtauev_   = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWtauev"    );
    b_FatJet_inclParTMDV1_probTopbWtaumv_   = fChain->GetBranch("FatJet_inclParTMDV1_probTopbWtaumv"    );



    if(b_FatJet_inclParTMDV1_probHWqqWqq0c_   ){  b_FatJet_inclParTMDV1_probHWqqWqq0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWqq0c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWqq1c_   ){  b_FatJet_inclParTMDV1_probHWqqWqq1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWqq1c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWqq2c_   ){  b_FatJet_inclParTMDV1_probHWqqWqq2c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWqq2c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWq0c_    ){  b_FatJet_inclParTMDV1_probHWqqWq0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWq0c_    );}
    if(b_FatJet_inclParTMDV1_probHWqqWq1c_    ){  b_FatJet_inclParTMDV1_probHWqqWq1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWq1c_    );}
    if(b_FatJet_inclParTMDV1_probHWqqWq2c_    ){  b_FatJet_inclParTMDV1_probHWqqWq2c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWq2c_    );}
    if(b_FatJet_inclParTMDV1_probHWqqWev0c_   ){  b_FatJet_inclParTMDV1_probHWqqWev0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWev0c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWev1c_   ){  b_FatJet_inclParTMDV1_probHWqqWev1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWev1c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWmv0c_   ){  b_FatJet_inclParTMDV1_probHWqqWmv0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWmv0c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWmv1c_   ){  b_FatJet_inclParTMDV1_probHWqqWmv1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWmv1c_   );}
    if(b_FatJet_inclParTMDV1_probHWqqWtauev0c_){  b_FatJet_inclParTMDV1_probHWqqWtauev0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtauev0c_);}
    if(b_FatJet_inclParTMDV1_probHWqqWtauev1c_){  b_FatJet_inclParTMDV1_probHWqqWtauev1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtauev1c_);}
    if(b_FatJet_inclParTMDV1_probHWqqWtaumv0c_){  b_FatJet_inclParTMDV1_probHWqqWtaumv0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtaumv0c_);}
    if(b_FatJet_inclParTMDV1_probHWqqWtaumv1c_){  b_FatJet_inclParTMDV1_probHWqqWtaumv1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtaumv1c_);}
    if(b_FatJet_inclParTMDV1_probHWqqWtauhv0c_){  b_FatJet_inclParTMDV1_probHWqqWtauhv0c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtauhv0c_);}
    if(b_FatJet_inclParTMDV1_probHWqqWtauhv1c_){  b_FatJet_inclParTMDV1_probHWqqWtauhv1c_->SetAddress(&FatJet_inclParTMDV1_probHWqqWtauhv1c_);}
    if(b_FatJet_inclParTMDV1_probHbb_         ){  b_FatJet_inclParTMDV1_probHbb_->SetAddress(&FatJet_inclParTMDV1_probHbb_         );}
    if(b_FatJet_inclParTMDV1_probHcc_         ){  b_FatJet_inclParTMDV1_probHcc_->SetAddress(&FatJet_inclParTMDV1_probHcc_         );}
    if(b_FatJet_inclParTMDV1_probHss_         ){  b_FatJet_inclParTMDV1_probHss_->SetAddress(&FatJet_inclParTMDV1_probHss_         );}
    if(b_FatJet_inclParTMDV1_probHqq_         ){  b_FatJet_inclParTMDV1_probHqq_->SetAddress(&FatJet_inclParTMDV1_probHqq_         );}
    if(b_FatJet_inclParTMDV1_probHtauhtaue_   ){  b_FatJet_inclParTMDV1_probHtauhtaue_->SetAddress(&FatJet_inclParTMDV1_probHtauhtaue_   );}
    if(b_FatJet_inclParTMDV1_probHtauhtaum_   ){  b_FatJet_inclParTMDV1_probHtauhtaum_->SetAddress(&FatJet_inclParTMDV1_probHtauhtaum_   );}
    if(b_FatJet_inclParTMDV1_probHtauhtauh_   ){  b_FatJet_inclParTMDV1_probHtauhtauh_->SetAddress(&FatJet_inclParTMDV1_probHtauhtauh_   );}
    if(b_FatJet_inclParTMDV1_probQCDbb_       ){  b_FatJet_inclParTMDV1_probQCDbb_->SetAddress(&FatJet_inclParTMDV1_probQCDbb_       );}
    if(b_FatJet_inclParTMDV1_probQCDcc_       ){  b_FatJet_inclParTMDV1_probQCDcc_->SetAddress(&FatJet_inclParTMDV1_probQCDcc_       );}
    if(b_FatJet_inclParTMDV1_probQCDb_        ){  b_FatJet_inclParTMDV1_probQCDb_->SetAddress(&FatJet_inclParTMDV1_probQCDb_        );}
    if(b_FatJet_inclParTMDV1_probQCDc_        ){  b_FatJet_inclParTMDV1_probQCDc_->SetAddress(&FatJet_inclParTMDV1_probQCDc_        );}
    if(b_FatJet_inclParTMDV1_probQCDothers_   ){  b_FatJet_inclParTMDV1_probQCDothers_->SetAddress(&FatJet_inclParTMDV1_probQCDothers_   );}
    if(b_FatJet_inclParTMDV1_probTopbWqq0c_   ){  b_FatJet_inclParTMDV1_probTopbWqq0c_->SetAddress(&FatJet_inclParTMDV1_probTopbWqq0c_   );}
    if(b_FatJet_inclParTMDV1_probTopbWqq1c_   ){  b_FatJet_inclParTMDV1_probTopbWqq1c_->SetAddress(&FatJet_inclParTMDV1_probTopbWqq1c_   );}
    if(b_FatJet_inclParTMDV1_probTopbWq0c_    ){  b_FatJet_inclParTMDV1_probTopbWq0c_->SetAddress(&FatJet_inclParTMDV1_probTopbWq0c_    );}
    if(b_FatJet_inclParTMDV1_probTopbWq1c_    ){  b_FatJet_inclParTMDV1_probTopbWq1c_->SetAddress(&FatJet_inclParTMDV1_probTopbWq1c_    );}
    if(b_FatJet_inclParTMDV1_probTopbWev_     ){  b_FatJet_inclParTMDV1_probTopbWev_->SetAddress(&FatJet_inclParTMDV1_probTopbWev_     );}
    if(b_FatJet_inclParTMDV1_probTopbWmv_     ){  b_FatJet_inclParTMDV1_probTopbWmv_->SetAddress(&FatJet_inclParTMDV1_probTopbWmv_     );}
    if(b_FatJet_inclParTMDV1_probTopbWtauhv_  ){  b_FatJet_inclParTMDV1_probTopbWtauhv_->SetAddress(&FatJet_inclParTMDV1_probTopbWtauhv_  );}
    if(b_FatJet_inclParTMDV1_probTopbWtauev_  ){  b_FatJet_inclParTMDV1_probTopbWtauev_->SetAddress(&FatJet_inclParTMDV1_probTopbWtauev_  );}
    if(b_FatJet_inclParTMDV1_probTopbWtaumv_  ){  b_FatJet_inclParTMDV1_probTopbWtaumv_->SetAddress(&FatJet_inclParTMDV1_probTopbWtaumv_  );}
    

    //New tagger ends.

}

void EDBR2PKUTree::loadVectorBranches_FatJets() {

    b_FatJet_msoftdrop_raw_ = fChain->GetBranch("FatJet_msoftdrop_raw");
    if (b_FatJet_msoftdrop_raw_) { b_FatJet_msoftdrop_raw_->SetAddress(&FatJet_msoftdrop_raw_);}

    b_FatJet_msoftdrop_nom_ = fChain->GetBranch("FatJet_msoftdrop_nom");
    if (b_FatJet_msoftdrop_nom_) { b_FatJet_msoftdrop_nom_->SetAddress(&FatJet_msoftdrop_nom_);}

    b_FatJet_msoftdrop_corr_JMR_ = fChain->GetBranch("FatJet_msoftdrop_corr_JMR");
    if (b_FatJet_msoftdrop_corr_JMR_) { b_FatJet_msoftdrop_corr_JMR_->SetAddress(&FatJet_msoftdrop_corr_JMR_);}

    b_FatJet_msoftdrop_corr_JMS_ = fChain->GetBranch("FatJet_msoftdrop_corr_JMS");
    if (b_FatJet_msoftdrop_corr_JMS_) { b_FatJet_msoftdrop_corr_JMS_->SetAddress(&FatJet_msoftdrop_corr_JMS_);}

    b_FatJet_msoftdrop_corr_PUPPI_ = fChain->GetBranch("FatJet_msoftdrop_corr_PUPPI");
    if (b_FatJet_msoftdrop_corr_PUPPI_) { b_FatJet_msoftdrop_corr_PUPPI_->SetAddress(&FatJet_msoftdrop_corr_PUPPI_);}

    b_FatJet_ParticleNetMDraw_probQCDb_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probQCDb");
    if (b_FatJet_ParticleNetMDraw_probQCDb_) { b_FatJet_ParticleNetMDraw_probQCDb_->SetAddress(&FatJet_ParticleNetMDraw_probQCDb_);}

    b_FatJet_ParticleNetMDraw_probQCDbb_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probQCDbb");
    if (b_FatJet_ParticleNetMDraw_probQCDbb_) { b_FatJet_ParticleNetMDraw_probQCDbb_->SetAddress(&FatJet_ParticleNetMDraw_probQCDbb_);}

    b_FatJet_ParticleNetMDraw_probQCDc_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probQCDc");
    if (b_FatJet_ParticleNetMDraw_probQCDc_) { b_FatJet_ParticleNetMDraw_probQCDc_->SetAddress(&FatJet_ParticleNetMDraw_probQCDc_);}

    b_FatJet_ParticleNetMDraw_probQCDcc_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probQCDcc");
    if (b_FatJet_ParticleNetMDraw_probQCDcc_) { b_FatJet_ParticleNetMDraw_probQCDcc_->SetAddress(&FatJet_ParticleNetMDraw_probQCDcc_);}

    b_FatJet_ParticleNetMDraw_probQCDothers_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probQCDothers");
    if (b_FatJet_ParticleNetMDraw_probQCDothers_) { b_FatJet_ParticleNetMDraw_probQCDothers_->SetAddress(&FatJet_ParticleNetMDraw_probQCDothers_);}

    b_FatJet_ParticleNetMDraw_probXbb_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probXbb");
    if (b_FatJet_ParticleNetMDraw_probXbb_) { b_FatJet_ParticleNetMDraw_probXbb_->SetAddress(&FatJet_ParticleNetMDraw_probXbb_);}

    b_FatJet_ParticleNetMDraw_probXcc_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probXcc");
    if (b_FatJet_ParticleNetMDraw_probXcc_) { b_FatJet_ParticleNetMDraw_probXcc_->SetAddress(&FatJet_ParticleNetMDraw_probXcc_);}

    b_FatJet_ParticleNetMDraw_probXqq_ = fChain->GetBranch("FatJet_ParticleNetMDraw_probXqq");
    if (b_FatJet_ParticleNetMDraw_probXqq_) { b_FatJet_ParticleNetMDraw_probXqq_->SetAddress(&FatJet_ParticleNetMDraw_probXqq_);}

    b_FatJet_pt_nom_ = fChain->GetBranch("FatJet_pt_nom");
    if (b_FatJet_pt_nom_) { b_FatJet_pt_nom_->SetAddress(&FatJet_pt_nom_);}

    b_FatJet_pt_ = fChain->GetBranch("FatJet_pt");
    if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_);}
        
    b_FatJet_eta_ = fChain->GetBranch("FatJet_eta");
    if (b_FatJet_eta_) { b_FatJet_eta_->SetAddress(&FatJet_eta_);}
        
    b_FatJet_phi_ = fChain->GetBranch("FatJet_phi");
    if (b_FatJet_phi_) { b_FatJet_phi_->SetAddress(&FatJet_phi_);}
        
    b_FatJet_msoftdrop_ = fChain->GetBranch("FatJet_msoftdrop");
    if (b_FatJet_msoftdrop_) { b_FatJet_msoftdrop_->SetAddress(&FatJet_msoftdrop_);}
    
    b_FatJet_jetId_ = fChain->GetBranch("FatJet_jetId");
    if (b_FatJet_jetId_) { b_FatJet_jetId_->SetAddress(&FatJet_jetId_);}

    b_FatJet_deepTagMD_probHbb_ = fChain->GetBranch("FatJet_deepTagMD_probHbb");
    if (b_FatJet_deepTagMD_probHbb_) { b_FatJet_deepTagMD_probHbb_->SetAddress(&FatJet_deepTagMD_probHbb_);}
        
    b_FatJet_deepTagMD_probHcc_ = fChain->GetBranch("FatJet_deepTagMD_probHcc");
    if (b_FatJet_deepTagMD_probHcc_) { b_FatJet_deepTagMD_probHcc_->SetAddress(&FatJet_deepTagMD_probHcc_);}
        
    b_FatJet_deepTagMD_probHqqqq_ = fChain->GetBranch("FatJet_deepTagMD_probHqqqq");
    if (b_FatJet_deepTagMD_probHqqqq_) { b_FatJet_deepTagMD_probHqqqq_->SetAddress(&FatJet_deepTagMD_probHqqqq_);}
        
    b_FatJet_deepTagMD_probQCDb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDb");
    if (b_FatJet_deepTagMD_probQCDb_) { b_FatJet_deepTagMD_probQCDb_->SetAddress(&FatJet_deepTagMD_probQCDb_);}
        
    b_FatJet_deepTagMD_probQCDbb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDbb");
    if (b_FatJet_deepTagMD_probQCDbb_) { b_FatJet_deepTagMD_probQCDbb_->SetAddress(&FatJet_deepTagMD_probQCDbb_);}
        
    b_FatJet_deepTagMD_probQCDc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDc");
    if (b_FatJet_deepTagMD_probQCDc_) { b_FatJet_deepTagMD_probQCDc_->SetAddress(&FatJet_deepTagMD_probQCDc_);}
        
    b_FatJet_deepTagMD_probQCDcc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDcc");
    if (b_FatJet_deepTagMD_probQCDcc_) { b_FatJet_deepTagMD_probQCDcc_->SetAddress(&FatJet_deepTagMD_probQCDcc_);}
        
    b_FatJet_deepTagMD_probQCDothers_ = fChain->GetBranch("FatJet_deepTagMD_probQCDothers");
    if (b_FatJet_deepTagMD_probQCDothers_) { b_FatJet_deepTagMD_probQCDothers_->SetAddress(&FatJet_deepTagMD_probQCDothers_);}
        
    b_FatJet_deepTagMD_probTbc_ = fChain->GetBranch("FatJet_deepTagMD_probTbc");
    if (b_FatJet_deepTagMD_probTbc_) { b_FatJet_deepTagMD_probTbc_->SetAddress(&FatJet_deepTagMD_probTbc_);}
        
    b_FatJet_deepTagMD_probTbcq_ = fChain->GetBranch("FatJet_deepTagMD_probTbcq");
    if (b_FatJet_deepTagMD_probTbcq_) { b_FatJet_deepTagMD_probTbcq_->SetAddress(&FatJet_deepTagMD_probTbcq_);}
        
    b_FatJet_deepTagMD_probTbq_ = fChain->GetBranch("FatJet_deepTagMD_probTbq");
    if (b_FatJet_deepTagMD_probTbq_) { b_FatJet_deepTagMD_probTbq_->SetAddress(&FatJet_deepTagMD_probTbq_);}
        
    b_FatJet_deepTagMD_probTbqq_ = fChain->GetBranch("FatJet_deepTagMD_probTbqq");
    if (b_FatJet_deepTagMD_probTbqq_) { b_FatJet_deepTagMD_probTbqq_->SetAddress(&FatJet_deepTagMD_probTbqq_);}
        
    b_FatJet_deepTagMD_probWcq_ = fChain->GetBranch("FatJet_deepTagMD_probWcq");
    if (b_FatJet_deepTagMD_probWcq_) { b_FatJet_deepTagMD_probWcq_->SetAddress(&FatJet_deepTagMD_probWcq_);}
        
    b_FatJet_deepTagMD_probWqq_ = fChain->GetBranch("FatJet_deepTagMD_probWqq");
    if (b_FatJet_deepTagMD_probWqq_) { b_FatJet_deepTagMD_probWqq_->SetAddress(&FatJet_deepTagMD_probWqq_);}
        
    b_FatJet_deepTagMD_probZbb_ = fChain->GetBranch("FatJet_deepTagMD_probZbb");
    if (b_FatJet_deepTagMD_probZbb_) { b_FatJet_deepTagMD_probZbb_->SetAddress(&FatJet_deepTagMD_probZbb_);}
        
    b_FatJet_deepTagMD_probZcc_ = fChain->GetBranch("FatJet_deepTagMD_probZcc");
    if (b_FatJet_deepTagMD_probZcc_) { b_FatJet_deepTagMD_probZcc_->SetAddress(&FatJet_deepTagMD_probZcc_);}
        
    b_FatJet_deepTagMD_probZqq_ = fChain->GetBranch("FatJet_deepTagMD_probZqq");
    if (b_FatJet_deepTagMD_probZqq_) { b_FatJet_deepTagMD_probZqq_->SetAddress(&FatJet_deepTagMD_probZqq_);}
        
    b_FatJet_deepTag_probHbb_ = fChain->GetBranch("FatJet_deepTag_probHbb");
    if (b_FatJet_deepTag_probHbb_) { b_FatJet_deepTag_probHbb_->SetAddress(&FatJet_deepTag_probHbb_);}
        
    b_FatJet_deepTag_probHcc_ = fChain->GetBranch("FatJet_deepTag_probHcc");
    if (b_FatJet_deepTag_probHcc_) { b_FatJet_deepTag_probHcc_->SetAddress(&FatJet_deepTag_probHcc_);}
        
    b_FatJet_deepTag_probHqqqq_ = fChain->GetBranch("FatJet_deepTag_probHqqqq");
    if (b_FatJet_deepTag_probHqqqq_) { b_FatJet_deepTag_probHqqqq_->SetAddress(&FatJet_deepTag_probHqqqq_);}
        
    b_FatJet_deepTag_probQCDb_ = fChain->GetBranch("FatJet_deepTag_probQCDb");
    if (b_FatJet_deepTag_probQCDb_) { b_FatJet_deepTag_probQCDb_->SetAddress(&FatJet_deepTag_probQCDb_);}
        
    b_FatJet_deepTag_probQCDbb_ = fChain->GetBranch("FatJet_deepTag_probQCDbb");
    if (b_FatJet_deepTag_probQCDbb_) { b_FatJet_deepTag_probQCDbb_->SetAddress(&FatJet_deepTag_probQCDbb_);}
        
    b_FatJet_deepTag_probQCDc_ = fChain->GetBranch("FatJet_deepTag_probQCDc");
    if (b_FatJet_deepTag_probQCDc_) { b_FatJet_deepTag_probQCDc_->SetAddress(&FatJet_deepTag_probQCDc_);}
        
    b_FatJet_deepTag_probQCDcc_ = fChain->GetBranch("FatJet_deepTag_probQCDcc");
    if (b_FatJet_deepTag_probQCDcc_) { b_FatJet_deepTag_probQCDcc_->SetAddress(&FatJet_deepTag_probQCDcc_);}
        
    b_FatJet_deepTag_probQCDothers_ = fChain->GetBranch("FatJet_deepTag_probQCDothers");
    if (b_FatJet_deepTag_probQCDothers_) { b_FatJet_deepTag_probQCDothers_->SetAddress(&FatJet_deepTag_probQCDothers_);}
        
    b_FatJet_deepTag_probTbc_ = fChain->GetBranch("FatJet_deepTag_probTbc");
    if (b_FatJet_deepTag_probTbc_) { b_FatJet_deepTag_probTbc_->SetAddress(&FatJet_deepTag_probTbc_);}
        
    b_FatJet_deepTag_probTbcq_ = fChain->GetBranch("FatJet_deepTag_probTbcq");
    if (b_FatJet_deepTag_probTbcq_) { b_FatJet_deepTag_probTbcq_->SetAddress(&FatJet_deepTag_probTbcq_);}
        
    b_FatJet_deepTag_probTbq_ = fChain->GetBranch("FatJet_deepTag_probTbq");
    if (b_FatJet_deepTag_probTbq_) { b_FatJet_deepTag_probTbq_->SetAddress(&FatJet_deepTag_probTbq_);}
        
    b_FatJet_deepTag_probTbqq_ = fChain->GetBranch("FatJet_deepTag_probTbqq");
    if (b_FatJet_deepTag_probTbqq_) { b_FatJet_deepTag_probTbqq_->SetAddress(&FatJet_deepTag_probTbqq_);}
        
    b_FatJet_deepTag_probWcq_ = fChain->GetBranch("FatJet_deepTag_probWcq");
    if (b_FatJet_deepTag_probWcq_) { b_FatJet_deepTag_probWcq_->SetAddress(&FatJet_deepTag_probWcq_);}
        
    b_FatJet_deepTag_probWqq_ = fChain->GetBranch("FatJet_deepTag_probWqq");
    if (b_FatJet_deepTag_probWqq_) { b_FatJet_deepTag_probWqq_->SetAddress(&FatJet_deepTag_probWqq_);}
        
    b_FatJet_deepTag_probZbb_ = fChain->GetBranch("FatJet_deepTag_probZbb");
    if (b_FatJet_deepTag_probZbb_) { b_FatJet_deepTag_probZbb_->SetAddress(&FatJet_deepTag_probZbb_);}
        
    b_FatJet_deepTag_probZcc_ = fChain->GetBranch("FatJet_deepTag_probZcc");
    if (b_FatJet_deepTag_probZcc_) { b_FatJet_deepTag_probZcc_->SetAddress(&FatJet_deepTag_probZcc_);}
        
    b_FatJet_deepTag_probZqq_ = fChain->GetBranch("FatJet_deepTag_probZqq");
    if (b_FatJet_deepTag_probZqq_) { b_FatJet_deepTag_probZqq_->SetAddress(&FatJet_deepTag_probZqq_);}

    b_FatJet_particleNetMD_QCD_ = fChain->GetBranch("FatJet_particleNetMD_QCD");
    if (b_FatJet_particleNetMD_QCD_) { b_FatJet_particleNetMD_QCD_->SetAddress(&FatJet_particleNetMD_QCD_);}
        
    b_FatJet_particleNetMD_Xbb_ = fChain->GetBranch("FatJet_particleNetMD_Xbb");
    if (b_FatJet_particleNetMD_Xbb_) { b_FatJet_particleNetMD_Xbb_->SetAddress(&FatJet_particleNetMD_Xbb_);}
        
    b_FatJet_particleNetMD_Xcc_ = fChain->GetBranch("FatJet_particleNetMD_Xcc");
    if (b_FatJet_particleNetMD_Xcc_) { b_FatJet_particleNetMD_Xcc_->SetAddress(&FatJet_particleNetMD_Xcc_);}
        
    b_FatJet_particleNetMD_Xqq_ = fChain->GetBranch("FatJet_particleNetMD_Xqq");
    if (b_FatJet_particleNetMD_Xqq_) { b_FatJet_particleNetMD_Xqq_->SetAddress(&FatJet_particleNetMD_Xqq_);}
        
    b_FatJet_particleNet_H4qvsQCD_ = fChain->GetBranch("FatJet_particleNet_H4qvsQCD");
    if (b_FatJet_particleNet_H4qvsQCD_) { b_FatJet_particleNet_H4qvsQCD_->SetAddress(&FatJet_particleNet_H4qvsQCD_);}
        
    b_FatJet_particleNet_HbbvsQCD_ = fChain->GetBranch("FatJet_particleNet_HbbvsQCD");
    if (b_FatJet_particleNet_HbbvsQCD_) { b_FatJet_particleNet_HbbvsQCD_->SetAddress(&FatJet_particleNet_HbbvsQCD_);}
        
    b_FatJet_particleNet_HccvsQCD_ = fChain->GetBranch("FatJet_particleNet_HccvsQCD");
    if (b_FatJet_particleNet_HccvsQCD_) { b_FatJet_particleNet_HccvsQCD_->SetAddress(&FatJet_particleNet_HccvsQCD_);}
        
    b_FatJet_particleNet_QCD_ = fChain->GetBranch("FatJet_particleNet_QCD");
    if (b_FatJet_particleNet_QCD_) { b_FatJet_particleNet_QCD_->SetAddress(&FatJet_particleNet_QCD_);}
        
    b_FatJet_particleNet_TvsQCD_ = fChain->GetBranch("FatJet_particleNet_TvsQCD");
    if (b_FatJet_particleNet_TvsQCD_) { b_FatJet_particleNet_TvsQCD_->SetAddress(&FatJet_particleNet_TvsQCD_);}
        
    b_FatJet_particleNet_WvsQCD_ = fChain->GetBranch("FatJet_particleNet_WvsQCD");
    if (b_FatJet_particleNet_WvsQCD_) { b_FatJet_particleNet_WvsQCD_->SetAddress(&FatJet_particleNet_WvsQCD_);}
        
    b_FatJet_particleNet_ZvsQCD_ = fChain->GetBranch("FatJet_particleNet_ZvsQCD");
    if (b_FatJet_particleNet_ZvsQCD_) { b_FatJet_particleNet_ZvsQCD_->SetAddress(&FatJet_particleNet_ZvsQCD_);}
        
    b_FatJet_particleNet_mass_ = fChain->GetBranch("FatJet_particleNet_mass");
    if (b_FatJet_particleNet_mass_) { b_FatJet_particleNet_mass_->SetAddress(&FatJet_particleNet_mass_);}

    b_FatJet_tau1_ = fChain->GetBranch("FatJet_tau1");
    if (b_FatJet_tau1_) { b_FatJet_tau1_->SetAddress(&FatJet_tau1_);}

    b_FatJet_tau2_ = fChain->GetBranch("FatJet_tau2");
    if (b_FatJet_tau2_) { b_FatJet_tau2_->SetAddress(&FatJet_tau2_);}

    b_FatJet_tau3_ = fChain->GetBranch("FatJet_tau3");
    if (b_FatJet_tau3_) { b_FatJet_tau3_->SetAddress(&FatJet_tau3_);}

    b_FatJet_tau4_ = fChain->GetBranch("FatJet_tau4");
    if (b_FatJet_tau4_) { b_FatJet_tau4_->SetAddress(&FatJet_tau4_);}

  

}

void EDBR2PKUTree::loadVectorBranches_Jets() {
    b_Jet_pt_nom_ = fChain->GetBranch("Jet_pt_nom");
    if (b_Jet_pt_nom_) { b_Jet_pt_nom_->SetAddress(&Jet_pt_nom_);}

    b_Jet_mass_nom_ = fChain->GetBranch("Jet_mass_nom");
    if (b_Jet_mass_nom_) { b_Jet_mass_nom_->SetAddress(&Jet_mass_nom_);}

    b_Jet_btagDeepB_ = fChain->GetBranch("Jet_btagDeepB");
    if (b_Jet_btagDeepB_) { b_Jet_btagDeepB_->SetAddress(&Jet_btagDeepB_);}
        
    b_Jet_btagDeepFlavB_ = fChain->GetBranch("Jet_btagDeepFlavB");
    if (b_Jet_btagDeepFlavB_) { b_Jet_btagDeepFlavB_->SetAddress(&Jet_btagDeepFlavB_);}
        
    b_Jet_btagDeepFlavCvB_ = fChain->GetBranch("Jet_btagDeepFlavCvB");
    if (b_Jet_btagDeepFlavCvB_) { b_Jet_btagDeepFlavCvB_->SetAddress(&Jet_btagDeepFlavCvB_);}
        
    b_Jet_btagDeepFlavCvL_ = fChain->GetBranch("Jet_btagDeepFlavCvL");
    if (b_Jet_btagDeepFlavCvL_) { b_Jet_btagDeepFlavCvL_->SetAddress(&Jet_btagDeepFlavCvL_);}
        
    b_Jet_btagDeepFlavQG_ = fChain->GetBranch("Jet_btagDeepFlavQG");
    if (b_Jet_btagDeepFlavQG_) { b_Jet_btagDeepFlavQG_->SetAddress(&Jet_btagDeepFlavQG_);}
        
    b_Jet_eta_ = fChain->GetBranch("Jet_eta");
    if (b_Jet_eta_) { b_Jet_eta_->SetAddress(&Jet_eta_);}
        
    b_Jet_hadronFlavour_ = fChain->GetBranch("Jet_hadronFlavour");
    if (b_Jet_hadronFlavour_) { b_Jet_hadronFlavour_->SetAddress(&Jet_hadronFlavour_);}
        
    b_Jet_jetId_ = fChain->GetBranch("Jet_jetId");
    if (b_Jet_jetId_) { b_Jet_jetId_->SetAddress(&Jet_jetId_);}

    b_Jet_mass_ = fChain->GetBranch("Jet_mass");
    if (b_Jet_mass_) { b_Jet_mass_->SetAddress(&Jet_mass_);}
        
    b_Jet_partonFlavour_ = fChain->GetBranch("Jet_partonFlavour");
    if (b_Jet_partonFlavour_) { b_Jet_partonFlavour_->SetAddress(&Jet_partonFlavour_);}
        
    b_Jet_phi_ = fChain->GetBranch("Jet_phi");
    if (b_Jet_phi_) { b_Jet_phi_->SetAddress(&Jet_phi_);}
        
    b_Jet_pt_ = fChain->GetBranch("Jet_pt");
    if (b_Jet_pt_) { b_Jet_pt_->SetAddress(&Jet_pt_);}
        
    b_Jet_puId_ = fChain->GetBranch("Jet_puId");
    if (b_Jet_puId_) { b_Jet_puId_->SetAddress(&Jet_puId_);}
        
    b_Jet_puIdDisc_ = fChain->GetBranch("Jet_puIdDisc");
    if (b_Jet_puIdDisc_) { b_Jet_puIdDisc_->SetAddress(&Jet_puIdDisc_);}
        
    b_Jet_qgl_ = fChain->GetBranch("Jet_qgl");
    if (b_Jet_qgl_) { b_Jet_qgl_->SetAddress(&Jet_qgl_);}
        
    b_Jet_rawFactor_ = fChain->GetBranch("Jet_rawFactor");
    if (b_Jet_rawFactor_) { b_Jet_rawFactor_->SetAddress(&Jet_rawFactor_);}
}

void EDBR2PKUTree::loadVectorBranches_Genparticles() {
    b_GenPart_eta_ = fChain->GetBranch("GenPart_eta");
    if (b_GenPart_eta_) { b_GenPart_eta_->SetAddress(&GenPart_eta_);}
        
    b_GenPart_genPartIdxMother_ = fChain->GetBranch("GenPart_genPartIdxMother");
    if (b_GenPart_genPartIdxMother_) { b_GenPart_genPartIdxMother_->SetAddress(&GenPart_genPartIdxMother_);}
        
    b_GenPart_mass_ = fChain->GetBranch("GenPart_mass");
    if (b_GenPart_mass_) { b_GenPart_mass_->SetAddress(&GenPart_mass_);}
        
    b_GenPart_pdgId_ = fChain->GetBranch("GenPart_pdgId");
    if (b_GenPart_pdgId_) { b_GenPart_pdgId_->SetAddress(&GenPart_pdgId_);}
        
    b_GenPart_phi_ = fChain->GetBranch("GenPart_phi");
    if (b_GenPart_phi_) { b_GenPart_phi_->SetAddress(&GenPart_phi_);}
        
    b_GenPart_pt_ = fChain->GetBranch("GenPart_pt");
    if (b_GenPart_pt_) { b_GenPart_pt_->SetAddress(&GenPart_pt_);}
        
    b_GenPart_status_ = fChain->GetBranch("GenPart_status");
    if (b_GenPart_status_) { b_GenPart_status_->SetAddress(&GenPart_status_);}
        
    b_GenPart_statusFlags_ = fChain->GetBranch("GenPart_statusFlags");
    if (b_GenPart_statusFlags_) { b_GenPart_statusFlags_->SetAddress(&GenPart_statusFlags_);}
}

void EDBR2PKUTree::loadVectorBranches_MET() {
   fChain->SetBranchAddress("MET_pt",&MET_pt,&b_MET_pt);
   fChain->SetBranchAddress("MET_phi",&MET_phi,&b_MET_phi);
   fChain->SetBranchAddress("MET_T1Smear_pt",&MET_T1Smear_pt,&b_MET_T1Smear_pt);
   fChain->SetBranchAddress("MET_T1Smear_phi",&MET_T1Smear_phi,&b_MET_T1Smear_phi);
}

void EDBR2PKUTree::loadVectorBranches_genH() {
   fChain->SetBranchAddress("genH_pt",&genH_pt,&b_genH_pt);
}


void EDBR2PKUTree::loadVectorBranches_Flag() {
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter",&Flag_globalSuperTightHalo2016Filter,&b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_METFilters",&Flag_METFilters,&b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_goodVertices",&Flag_goodVertices,&b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter",&Flag_HBHENoiseFilter,&b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter",&Flag_HBHENoiseIsoFilter,&b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter",&Flag_EcalDeadCellTriggerPrimitiveFilter,&b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter",&Flag_BadPFMuonFilter,&b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_eeBadScFilter",&Flag_eeBadScFilter,&b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter",&Flag_ecalBadCalibFilter,&b_Flag_ecalBadCalibFilter);
}


void EDBR2PKUTree::loadVectorBranches_HLT() {
    fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ900DEtaJJ1p5",&HLT_PFHT650_WideJetMJJ900DEtaJJ1p5,&b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5);
    fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ950DEtaJJ1p5",&HLT_PFHT650_WideJetMJJ950DEtaJJ1p5,&b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5);
    fChain->SetBranchAddress("HLT_PFHT800",&HLT_PFHT800,&b_HLT_PFHT800);
    fChain->SetBranchAddress("HLT_PFHT900",&HLT_PFHT900,&b_HLT_PFHT900);
    fChain->SetBranchAddress("HLT_PFJet450",&HLT_PFJet450,&b_HLT_PFJet450);
    fChain->SetBranchAddress("HLT_AK8PFJet400",&HLT_AK8PFJet400,&b_HLT_AK8PFJet400);
    fChain->SetBranchAddress("HLT_AK8PFJet450",&HLT_AK8PFJet450,&b_HLT_AK8PFJet450);
    fChain->SetBranchAddress("HLT_AK8PFJet500",&HLT_AK8PFJet500,&b_HLT_AK8PFJet500);
    fChain->SetBranchAddress("HLT_PFJet500",&HLT_PFJet500,&b_HLT_PFJet500);
    fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30",&HLT_AK8PFJet360_TrimMass30,&b_HLT_AK8PFJet360_TrimMass30);
    fChain->SetBranchAddress("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50",&HLT_AK8PFHT700_TrimR0p1PT0p03Mass50,&b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50);
    fChain->SetBranchAddress("HLT_PFHT1050",&HLT_PFHT1050,&b_HLT_PFHT1050);
    fChain->SetBranchAddress("HLT_AK8PFJet380_TrimMass30",&HLT_AK8PFJet380_TrimMass30,&b_HLT_AK8PFJet380_TrimMass30);
    fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30",&HLT_AK8PFJet400_TrimMass30,&b_HLT_AK8PFJet400_TrimMass30);
    fChain->SetBranchAddress("HLT_AK8PFJet420_TrimMass30",&HLT_AK8PFJet420_TrimMass30,&b_HLT_AK8PFJet420_TrimMass30);
    fChain->SetBranchAddress("HLT_AK8PFHT750_TrimMass50",&HLT_AK8PFHT750_TrimMass50,&b_HLT_AK8PFHT750_TrimMass50);
    fChain->SetBranchAddress("HLT_AK8PFHT800_TrimMass50",&HLT_AK8PFHT800_TrimMass50,&b_HLT_AK8PFHT800_TrimMass50);
    fChain->SetBranchAddress("HLT_AK8PFHT850_TrimMass50",&HLT_AK8PFHT850_TrimMass50,&b_HLT_AK8PFHT850_TrimMass50);
    fChain->SetBranchAddress("HLT_AK8PFHT900_TrimMass50",&HLT_AK8PFHT900_TrimMass50,&b_HLT_AK8PFHT900_TrimMass50);

    fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight",&HLT_PFMET110_PFMHT110_IDTight,&b_HLT_PFMET110_PFMHT110_IDTight);
    fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight",&HLT_PFMET120_PFMHT120_IDTight,&b_HLT_PFMET120_PFMHT120_IDTight);
    fChain->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight",&HLT_PFMET130_PFMHT130_IDTight,&b_HLT_PFMET130_PFMHT130_IDTight);
    fChain->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight",&HLT_PFMET140_PFMHT140_IDTight,&b_HLT_PFMET140_PFMHT140_IDTight);
    
    fChain->SetBranchAddress("HLT_Mu50",&HLT_Mu50,&b_HLT_Mu50);
    fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT",&HLT_Ele115_CaloIdVT_GsfTrkIdT,&b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
    fChain->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165",&HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165,&b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165);

}

void EDBR2PKUTree::loadVectorBranches_Vertices() {
    fChain->SetBranchAddress("PV_npvs",&PV_npvs,&b_PV_npvs);    
}

void EDBR2PKUTree::loadVectorBranches_genWeight() {
    fChain->SetBranchAddress("genWeight",&genWeight,&b_genWeight);
    fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
    fChain->SetBranchAddress("puWeightDown", &puWeightDown, &b_puWeightDown);
    fChain->SetBranchAddress("puWeightUp", &puWeightUp, &b_puWeightUp);
}

void EDBR2PKUTree::loadVectorBranches_run() {
    fChain->SetBranchAddress("run",&run,&b_run);
}


#endif
