#ifndef _VVVTree_MJJ_MJJJ_
#define _VVVTree_MJJ_MJJJ_

void EDBR2PKUTree::EventLevel(Long64_t jentry, TString YEAR, Int_t IS_Data) {
    METf();
    Jets_GetEntry(jentry);
    Nj4_Nj8();
    MJJ_MJJJf();
    HT_ST();
    // Nbtagf(YEAR, IS_Data);
}

void EDBR2PKUTree::GlobalInit(TString YEAR, Int_t IS_Data) {
    goldenjsoninit(YEAR, IS_Data);
}

void EDBR2PKUTree::goldenjsoninit(TString YEAR, Int_t IS_Data) {
    std::string list = "";
    if(IS_Data == 0){
        if(YEAR.Contains("2016")){
            list = "config/Cert_271036-284044_13TeV_PromptReco_Collisions16_JSON_formatted.txt"; //36.773 ifb
        }
        if(YEAR.Contains("2017")){
            list = "config/Cert_294927-306462_13TeV_PromptReco_Collisions17_JSON_formatted.txt"; //41.53 ifb
        }
        if(YEAR.Contains("2018")){
            list = "config/Cert_314472-325175_13TeV_PromptReco_Collisions18_JSON_formatted.txt"; //59.69 ifb
        }
        set_goodrun_file(list.c_str());
    }
    
}





#endif