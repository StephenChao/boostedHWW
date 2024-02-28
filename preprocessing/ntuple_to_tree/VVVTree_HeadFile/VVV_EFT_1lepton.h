#ifndef _VVV_EFT_1lepton_
#define _VVV_EFT_1lepton_

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
//#include "DataFormats/Math/interface/deltaR.h"

#include <iostream>
#include <fstream>
#include <unordered_map>

bool EDBR2PKUTree::Filter_Event_1LeptonEFT(TString YEAR, Int_t IS_Data) {
    bool Fill = true;
    if(YEAR.EqualTo("2016")){
        if ( channelName.Contains("muon") ){
            Fill = Fill && (Lep1fatJet2_HLT_IsoMu24 == 1 && abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_Muon_pfRelIso04_all < 0.1 );
            if( IS_Data >  0 ){
                Fill = Fill && Common_noiseFlagMC ;
            }
            if( IS_Data == 0 ){
                Fill = Fill && Common_noiseFlag ;
                // Fill = Fill && Common_noiseFlag && Common_passGoodRun;
            }
        }
        if ( channelName.Contains("electron") ){
            Fill = Fill && ( Lep1fatJet2_HLT_Ele27_WPTight_Gsf == 1 && abs(Lep1fatJet2_LeptonPDGID) == 11 );
            if( IS_Data >  0 ){
                Fill = Fill && Common_noiseFlagMC ;
            }
            if( IS_Data == 0 ){
                Fill = Fill && Common_noiseFlag ;
                // Fill = Fill && Common_noiseFlag && Common_passGoodRun;
            }
        }
        
    }
    return Fill;
}

void EDBR2PKUTree::VVVEFT_AK8_init(){
    PTj    = Lep1fatJet2_FatJet_pt;
    PTj_2  = Lep1fatJet2_FatJet_pt_2;
    Etaj   = Lep1fatJet2_FatJet_eta;
    Etaj_2 = Lep1fatJet2_FatJet_eta_2;
    Phij   = Lep1fatJet2_FatJet_phi;
    Phij_2 = Lep1fatJet2_FatJet_phi_2;
    Mj     = Lep1fatJet2_FatJet_msoftdrop;
    Mj_2   = Lep1fatJet2_FatJet_msoftdrop_2;
}

void EDBR2PKUTree::VVVEFT_leptonicW(){
    // if(YEAR_g.Contains("2016APV")){
    //     int runnb = 0;
    //     int npv = 0; // need to be updated
    //     bool isMC  = false;
    //     if(IsData > 0){
    //         runnb = 0;

    //     }
    //     std::pair<double,double> METXYCorr_Met_MetPhi(Lep1fatJet2_MET_pt, Lep1fatJet2_MET_phi, runnb, YEAR_g, isMC, npv, isUL = true, ispuppi=false){
    // }
    // if(YEAR_g.Contains("2016nonAPV")){
        
    // }
    leptonicWMT = TMath::Sqrt(2*Lep1fatJet2_LeptonPt*Lep1fatJet2_MET_pt*(1.0-TMath::Cos(Lep1fatJet2_LeptonPhi-Lep1fatJet2_MET_phi)));
}

void EDBR2PKUTree::VVVEFT_EventLevel(){
    ST = ( Lep1fatJet2_LeptonPt + Lep1fatJet2_FatJet_pt + Lep1fatJet2_FatJet_pt_2 ) ; 
    HT = ( Lep1fatJet2_FatJet_pt + Lep1fatJet2_FatJet_pt_2 ) ;  
    TLorentzVector AK8_1, AK8_2, leptonicW; 
    AK8_1.SetPtEtaPhiM(PTj  ,Etaj  ,Phij  ,Mj  );
    AK8_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    leptonicW.SetPtEtaPhiM( Lep1fatJet2_LeptonicWPt, Lep1fatJet2_LeptonicWEta , Lep1fatJet2_LeptonicWPhi, Lep1fatJet2_LeptonicWM ); 
    MJJlv = ( AK8_1 + AK8_2 + leptonicW ).M(); 
}

void EDBR2PKUTree::VVVEFT_Nbjets(){
    float bWPloose  = 0.0614;
    float bWPmedium = 0.3093;
    float bWPtight  = 0.7221;

    nb_l_deep_ex = 0;
    nb_m_deep_ex = 0;
    nb_t_deep_ex = 0;
    nb_l_deep_in = 0;
    nb_m_deep_in = 0;
    nb_t_deep_in = 0;

    TLorentzVector AK8_1, AK8_2, Jet;
    AK8_1.SetPtEtaPhiM(PTj  ,Etaj  ,Phij  ,Mj  );
    AK8_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    vector<TLorentzVector> AK8s;
    AK8s.push_back(AK8_1); AK8s.push_back(AK8_2);

    for ( Int_t i = 0 ; i < Lep1fatJet2_Jet_pt->size() ; i++ ) {
        Jet.SetPtEtaPhiE( (*Lep1fatJet2_Jet_pt)[i], (*Lep1fatJet2_Jet_eta)[i], (*Lep1fatJet2_Jet_phi)[i], (*Lep1fatJet2_Jet_e)[i] );
        bool exclusive = Exclusive_Collection(Jet,AK8s,0.8);
        if(exclusive && (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPloose ) { nb_l_deep_ex ++; }
        if(exclusive && (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPmedium) { nb_m_deep_ex ++; }
        if(exclusive && (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPtight ) { nb_t_deep_ex ++; }
        if(             (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPloose ) { nb_l_deep_in ++; }
        if(             (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPmedium) { nb_m_deep_in ++; }
        if(             (*Lep1fatJet2_Jet_btagDeepFlavB)[i] > bWPtight ) { nb_t_deep_in ++; }
    }
}

void EDBR2PKUTree::VVVEFT_analysis_init(Long64_t jentry){
    VVVEFT_AK8_init();
}

void EDBR2PKUTree::VVVEFT_process(Long64_t jentry){
    VVVEFT_analysis_init(jentry);
    VVVEFT_Nbjets();
    VVVEFT_leptonicW();
    VVVEFT_EventLevel();
}

void EDBR2PKUTree::VVVEFT_weight(Double_t XS, Int_t Nevents, Double_t LUMI){

    lumiWeight        = (XS * LUMI) / abs(Nevents);
    weight            = lumiWeight * Common_event_lepSF ; 
    weight_btagmediun = lumiWeight * Common_event_lepSF * Common_event_mediumBtagSF ; 
    Weight_btagtight  = lumiWeight * Common_event_lepSF * Common_event_tightBtagSF ; 
    Weight_btagloose  = lumiWeight * Common_event_lepSF * Common_event_looseBtagSF ; 
    Weight_FJVL       = lumiWeight * Common_event_lepSF * Common_eventweight_fatjet_SFVLoose ; 
    Weight_FJL        = lumiWeight * Common_event_lepSF * Common_eventweight_fatjet_SFLoose ; 
    Weight_FJM        = lumiWeight * Common_event_lepSF * Common_eventweight_fatjet_SFMedium ; 
    Weight_FJT        = lumiWeight * Common_event_lepSF * Common_eventweight_fatjet_SFTight ; 

}

void EDBR2PKUTree::VVVEFT_GenMatching(){

    Genparticles Genparticles_ = {
        *Lep1fatJet2_GenPart_eta,
        *Lep1fatJet2_GenPart_genPartIdxMother,
        *Lep1fatJet2_GenPart_mass,
        *Lep1fatJet2_GenPart_pdgId,
        *Lep1fatJet2_GenPart_phi,
        *Lep1fatJet2_GenPart_pt,
        *Lep1fatJet2_GenPart_status,
        *Lep1fatJet2_GenPart_statusFlags,
    } ;

    GenParticle_Collection W_Collection = GenParticle_Collection(Genparticles_, 24);
    GenParticle_Collection t_Collection = GenParticle_Collection(W_Collection, 6);
    GenParticle_Collection Z_Collection = GenParticle_Collection(Genparticles_, 23);
    GenParticle_Collection g_Collection = GenParticle_Collection(W_Collection, 21);
    GenParticle_Collection d_Collection = GenParticle_Collection(W_Collection, 1);
    GenParticle_Collection u_Collection = GenParticle_Collection(W_Collection, 2);
    GenParticle_Collection s_Collection = GenParticle_Collection(W_Collection, 3);
    GenParticle_Collection c_Collection = GenParticle_Collection(W_Collection, 4);

    for(size_t ik=0; ik<Lep1fatJet2_GenPart_pt->size();ik++){
        t_Collection.AddParticle(ik);
        W_Collection.AddParticle(ik);
        Z_Collection.AddParticle(ik);
        g_Collection.AddParticle(ik);
        u_Collection.AddParticle(ik);
        d_Collection.AddParticle(ik);
        s_Collection.AddParticle(ik);
        c_Collection.AddParticle(ik);
    }

    TLorentzVector AK8_1, AK8_2;
    AK8_1.SetPtEtaPhiM(PTj  ,Etaj  ,Phij  ,Mj  );
    AK8_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);

    matchingt_1 = t_Collection.matchingAK8(AK8_1);
    matchingW_1 = W_Collection.matchingAK8(AK8_1);
    matchingg_1 = g_Collection.matchingAK8(AK8_1);
    matchingZ_1 = Z_Collection.matchingAK8(AK8_1);
    matchingu_1 = u_Collection.matchingAK8(AK8_1);
    matchingd_1 = d_Collection.matchingAK8(AK8_1);
    matchings_1 = s_Collection.matchingAK8(AK8_1);
    matchingc_1 = c_Collection.matchingAK8(AK8_1);
    vector<int> matching_gq__1 = { matchingu_1, matchingd_1, matchings_1, matchingc_1, matchingg_1 };
    for(size_t i=0 ; i<matching_gq__1.size() ; i++){
        if( matching_gq__1[i] == 1 ){ 
            matching_gq_1 = 1 ; 
        }
    }

    matchingt_2 = t_Collection.matchingAK8(AK8_2);
    matchingW_2 = W_Collection.matchingAK8(AK8_2);
    matchingg_2 = g_Collection.matchingAK8(AK8_2);
    matchingZ_2 = Z_Collection.matchingAK8(AK8_2);
    matchingu_2 = u_Collection.matchingAK8(AK8_2);
    matchingd_2 = d_Collection.matchingAK8(AK8_2);
    matchings_2 = s_Collection.matchingAK8(AK8_2);
    matchingc_2 = c_Collection.matchingAK8(AK8_2);
    vector<int> matching_gq__2 = { matchingu_2, matchingd_2, matchings_2, matchingc_2, matchingg_2 };
    for(size_t i=0 ; i<matching_gq__2.size() ; i++){
        if( matching_gq__2[i] == 1 ){ 
            matching_gq_2 = 1 ; 
        }
    }
    
}

#endif





