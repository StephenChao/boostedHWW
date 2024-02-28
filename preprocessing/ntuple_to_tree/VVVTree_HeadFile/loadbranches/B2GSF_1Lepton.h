#ifndef _loadbranches__B2GSF_1Lepton_
#define _loadbranches__B2GSF_1Lepton_

void EDBR2PKUTree::loadVectorBranches_1Lepton() {
    fChain->SetBranchAddress("usenumber1",&usenumber1,&b_usenumber1);
    fChain->SetBranchAddress("usenumber2",&usenumber2,&b_usenumber2);
    fChain->SetBranchAddress("usenumber3",&usenumber3,&b_usenumber3);
    fChain->SetBranchAddress("leptonid",&leptonid,&b_leptonid);
    fChain->SetBranchAddress("leptonpgdid",&leptonpgdid,&b_leptonpgdid);
}

#endif
