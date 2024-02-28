#ifndef _B2GSF_1lepton__Lepton_
#define _B2GSF_1lepton__Lepton_

void EDBR2PKUTree::B2GSF_1lepton_Lepton() {
    NLepton  = 1 ;
    LeptonID = fabs(leptonpgdid) ;

    cout << leptonpgdid << " leptonpgdid" << endl ; 
    cout << LeptonID << " LeptonID" << endl ; 

    if( fabs(LeptonID) == 11 ){
        PT_l  = v_Electron_pt_[leptonid];
        Eta_l = v_Electron_eta_[leptonid];
        Phi_l = v_Electron_phi_[leptonid];
        M_l   = v_Electron_mass_[leptonid];
    }
    if( fabs(LeptonID) == 13 ){
        PT_l  = v_Muon_pt_[leptonid];
        Eta_l = v_Muon_eta_[leptonid];
        Phi_l = v_Muon_phi_[leptonid];
        M_l   = v_Muon_mass_[leptonid];
    }
    
}

#endif
