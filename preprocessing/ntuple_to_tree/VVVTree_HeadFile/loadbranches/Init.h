#ifndef _loadbranches__B2GSF_init_
#define _loadbranches__B2GSF_init_

void EDBR2PKUTree::loadVectorBranches() { //Used in EDBR2PKUTree.C.

    if(channelName.EqualTo("had")){
        loadVectorBranches_FatJets();
        loadVectorBranches_Jets();
        loadVectorBranches_Genparticles();
        loadVectorBranches_MET();
        loadVectorBranches_Flag();
        loadVectorBranches_HLT();
        loadVectorBranches_Vertices();
        loadVectorBranches_genWeight();
        loadVectorBranches_run();
    }

    if(channelName.EqualTo("HWW")){
        loadVectorBranches_FatJets_HWW(); //Defined in VVVTree_HeadFile > loadbranches > NanoAOD.h > loadVectorBranches_FatJets_HWW
        loadVectorBranches_Jets();
        loadVectorBranches_Genparticles();
        loadVectorBranches_MET();
        loadVectorBranches_genH();
        loadVectorBranches_Flag();
        loadVectorBranches_HLT();
        loadVectorBranches_Vertices();
        loadVectorBranches_genWeight();
        loadVectorBranches_run();
    }

    if(channelName.EqualTo("B2GSF_1lepton")){
        loadVectorBranches_FatJets();
        loadVectorBranches_Jets();
        loadVectorBranches_Genparticles();
        loadVectorBranches_Electron();
        loadVectorBranches_Muon();
        loadVectorBranches_1Lepton();
        loadVectorBranches_MET();
        loadVectorBranches_Flag();
        loadVectorBranches_genWeight();
        loadVectorBranches_run();
    }

    if (channelName.Contains("VVV_EFT_1lepton") ){
        loadVectorBranches_B2GSF_1Lepton();
    }

}

#endif
