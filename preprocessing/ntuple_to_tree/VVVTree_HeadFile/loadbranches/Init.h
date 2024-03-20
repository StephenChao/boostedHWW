#ifndef _loadbranches__Init_
#define _loadbranches__Init_

void EDBR2PKUTree::loadVectorBranches() { //Used in EDBR2PKUTree.C.

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

}

#endif
