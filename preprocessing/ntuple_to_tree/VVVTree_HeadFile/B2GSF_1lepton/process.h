#ifndef _B2GSF_1lepton__process_
#define _B2GSF_1lepton__process_

void EDBR2PKUTree::B2GSF_GetEntry(Long64_t jentry) {
    Jets_GetEntry(jentry);
    fatJets_GetEntry(jentry);
    Electron_GetEntry(jentry);
    Muon_GetEntry(jentry);
}

void EDBR2PKUTree::B2GSF_preprocess() {
    B2GSF_1lepton_Lepton() ;
    B2GSF_1lepton_fatJets();
}

bool EDBR2PKUTree::B2GSF_prefilter() {
    bool pass;
    pass = (NLepton == 1);
    pass = pass && ( Nj8 > 1 );
    return pass;
}

bool EDBR2PKUTree::B2GSF_FillTree() {
    bool Fill = true;
    if( Fill ){
        ExTree->Fill();
    }
    return Fill;
}

#endif