#ifndef _outputBranches__B2GSF_
#define _outputBranches__B2GSF_

void EDBR2PKUTree::OutputBranches_B2GSF() {
   ExTree->Branch("NLepton",&NLepton,"NLepton/I");
   ExTree->Branch("LeptonID",&LeptonID,"LeptonID/I");
   ExTree->Branch("PT_l",&PT_l,"PT_l/F");
   ExTree->Branch("Eta_l",&Eta_l,"Eta_l/F");
   ExTree->Branch("Phi_l",&Phi_l,"Phi_l/F");
   ExTree->Branch("M_l",&M_l,"M_l/F");

   ExTree->Branch("Nj8",&Nj8,"Nj8/I");
}
#endif
