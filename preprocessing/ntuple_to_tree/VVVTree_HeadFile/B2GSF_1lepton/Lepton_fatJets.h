#ifndef _B2GSF_1lepton__fatJets_
#define _B2GSF_1lepton__fatJets_

void EDBR2PKUTree::B2GSF_1lepton_fatJets() {
    Nj8  = 0 ;
    if( usenumber1 >= 0 ){ Nj8++; }
    if( usenumber2 >= 0 ){ Nj8++; }
    if( usenumber3 >= 0 ){ Nj8++; }
}

#endif
