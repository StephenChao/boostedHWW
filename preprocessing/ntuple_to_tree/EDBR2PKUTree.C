#define EDBR2PKUTree_cxx
#include "EDBR2PKUTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TRandom.h>
#define Pi 3.141593
#include "TLorentzVector.h"
#include<ctime>


Double_t detlaR (Double_t eta1,Double_t eta2,Double_t phi1,Double_t phi2)
{
    double resultR=99.;
    resultR=sqrt(pow(eta1-eta2,2)+pow(3.1416-abs(3.1416-abs(phi1-phi2)),2));
    return resultR;
}

#include "VVVTree_HeadFile/utils/XYMETCorrection_withUL17andUL18andUL16.h"



// HWW
#include "VVVTree_HeadFile/process/process.h"
#include "VVVTree_HeadFile/process/process_2016.h"
#include "VVVTree_HeadFile/utils/VVVTree_EventLevel.h"
#include "VVVTree_HeadFile/matching/GenParticles.h"
#include "VVVTree_HeadFile/matching/VVVTree_GenMatching.h"
#include "VVVTree_HeadFile/matching/VVVTree_signal_DECO.h"
#include "VVVTree_HeadFile/outputbranches/HWW_0lepton.h"
#include "VVVTree_HeadFile/vector/NanoAOD.h"
#include "VVVTree_HeadFile/loadbranches/Init.h"
#include "VVVTree_HeadFile/loadbranches/NanoAOD.h"

void EDBR2PKUTree::Loop(TString channelname, Double_t XS, Int_t IsData_, Float_t Nevents,  Double_t LUMI, TString YEAR) {
    /*
    allowed year
        mc :
            2016postVFP
            2016preVFP
            2017
            2018
        data :
    */
    
    YEAR_g = YEAR;
    IsData = IsData_;

	if (fChain == 0) return;
	// Long64_t nentries = 4000;
	Long64_t nentries = fChain->GetEntriesFast(); //The whole entries in the original root file?
    int jentryprint = std::min(int(nentries/100),50000); //To show the process status now.
    clock_t startTime,endTime;
    startTime = clock();

	Long64_t nbytes = 0, nb = 0;
    Long64_t NeventsFilled = 0 ;



    if(channelname.EqualTo("HWW")){
        // GlobalInit(YEAR,IsData);
        loadVectorBranches(); //This is always the first step, load the branches.
        //This function define in Init.h in loadbranches directory, but then used NanoAOD.h in loadVectorBranches_FatJets_HWW function.
        for (Long64_t jentry=0; jentry<nentries;jentry++) 
        // for (Long64_t jentry=0; jentry<1000;jentry++) 
        {
            Long64_t ientry = LoadTree(jentry);
            if (ientry < 0) break;
            if (jentry%jentryprint==0)   {
                std::cout<<jentry<<std::endl;
                float Ratio;
                Ratio = 100*Float_t(jentry)/Float_t(nentries);
                std::cout<<"finsh : "<< Ratio << "%"<<std::endl;
            }
            nb = fChain->GetEntry(jentry); 
            nbytes += nb;
            if(event<0){event=event+pow(2,32);}

            // Int_t nLooseLep=nLooseEle+nLooseMu;

            if(YEAR_g.Contains("2016")){
                HWW_process_1_2016(jentry,YEAR);
            }
            else{
                HWW_process_1(jentry,YEAR);
            }
            
            bool Fill = Filter_Events_HWW(YEAR,IsData);
            if ( !Fill ){ continue ; }

            if(YEAR_g.Contains("2016")){
                HWW_process_2_2016(jentry,YEAR);
            }
            else{
                HWW_process_2(jentry,YEAR);
            }

            HEMFilter(); //This issue only appears in 2018.
            Weightf(XS, Nevents, LUMI);
            TriggerSFf();

            if (IsData_ > 100){
                GenMatching_HWW(jentry);
            }
            if (IsData_ == 1000){
                Higgs_Matching();
            }

            if ( Fill ){
                ExTree->Fill();
                NeventsFilled++;
            }
        }
    }

    std::cout << NeventsFilled  <<  " Filled" << std::endl;
    std::cout << "transfertree finished" << std::endl;

}

