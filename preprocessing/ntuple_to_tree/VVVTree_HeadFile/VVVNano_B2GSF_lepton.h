#ifndef _VVVNano_B2GSF_lepton_
#define _VVVNano_B2GSF_lepton_

void EDBR2PKUTree::Electron_flatVector(Long64_t jentry){
    int bytes_Electron_pt = b_Electron_pt_->GetEntry(jentry);
    v_Electron_pt_ = vector<float>(Electron_pt_,Electron_pt_+bytes_Electron_pt/sizeof(Electron_pt_[0]));

    int bytes_Electron_eta = b_Electron_eta_->GetEntry(jentry);
    v_Electron_eta_ = vector<float>(Electron_eta_,Electron_eta_+bytes_Electron_eta/sizeof(Electron_eta_[0]));

    int bytes_Electron_phi = b_Electron_phi_->GetEntry(jentry);
    v_Electron_phi_ = vector<float>(Electron_phi_,Electron_phi_+bytes_Electron_phi/sizeof(Electron_phi_[0]));

    int bytes_Electron_mass = b_Electron_mass_->GetEntry(jentry);
    v_Electron_mass_ = vector<float>(Electron_mass_,Electron_mass_+bytes_Electron_mass/sizeof(Electron_mass_[0]));

}

void EDBR2PKUTree::Muon_flatVector(Long64_t jentry){
    int bytes_Muon_pt = b_Muon_pt_->GetEntry(jentry);
    v_Muon_pt_ = vector<float>(Muon_pt_,Muon_pt_+bytes_Muon_pt/sizeof(Muon_pt_[0]));

    int bytes_Muon_eta = b_Muon_eta_->GetEntry(jentry);
    v_Muon_eta_ = vector<float>(Muon_eta_,Muon_eta_+bytes_Muon_eta/sizeof(Muon_eta_[0]));

    int bytes_Muon_phi = b_Muon_phi_->GetEntry(jentry);
    v_Muon_phi_ = vector<float>(Muon_phi_,Muon_phi_+bytes_Muon_phi/sizeof(Muon_phi_[0]));

    int bytes_Muon_mass = b_Muon_mass_->GetEntry(jentry);
    v_Muon_mass_ = vector<float>(Muon_mass_,Muon_mass_+bytes_Muon_mass/sizeof(Muon_mass_[0]));
}


#endif
