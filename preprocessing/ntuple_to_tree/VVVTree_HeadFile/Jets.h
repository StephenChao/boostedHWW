#ifndef _Jets_
#define _Jets_

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
#include <map>

#include <cstring>

#include <algorithm>
#include <numeric>
#include<vector>
#include <iostream>

#include "VVVUtils.h"

/*
float,pt
float,eta
float,phi
float,mass
float,btagDeepFlavB
int,jetId
int,hadronFlavour
float,pt_nom
float,mass_nom
*/


struct Jet_P
{
    vector<float>* v_Jet_pt_;
    vector<float>* v_Jet_eta_;
    vector<float>* v_Jet_phi_;
    vector<float>* v_Jet_mass_;
    vector<float>* v_Jet_btagDeepFlavB_;
    vector<int>*   v_Jet_jetId_;
    vector<int>*   v_Jet_hadronFlavour_;
    vector<float>*   v_Jet_pt_nom_;
    vector<float>*   v_Jet_mass_nom_;

} ;

struct Jet_WP
{
    int l;
    int m;
    int t;
} ;

class Jet_Collection {
    public : 
    Jet_Collection();
    Jet_Collection(Jet_P Jet_, int filterMode, TString YEAR, vector<TLorentzVector> FatJets_);
    size_t size();
    int Nj4_inclusive();
    int Nj4_exclusive();
    Jet_WP Nj4_btag_inclusive();
    Jet_WP Nj4_btag_exclusive();
    template <typename T>
    void branch(string variable, std::vector<T>& outbr);

    private :
    // original branches
    std::map<std::string, vector<float>> Jet_Branches;

    vector<float>* v_Jet_pt_;
    vector<float>* v_Jet_eta_;
    vector<float>* v_Jet_phi_;
    vector<float>* v_Jet_mass_;
    vector<float>* v_Jet_btagDeepFlavB_;
    vector<int>* v_Jet_jetId_;
    vector<int>*   v_Jet_hadronFlavour_;
    vector<float>*   v_Jet_pt_nom_;
    vector<float>*   v_Jet_mass_nom_;


    // filtered branches
    vector<float> Jet_pt;
    vector<float> Jet_eta;
    vector<float> Jet_phi;
    vector<float> Jet_mass;
    vector<float> Jet_btagDeepFlavB;
    vector<float> Jet_jetId;
    vector<float> Jet_hadronFlavour;
    vector<float> Jet_pt_nom;
    vector<float> Jet_mass_nom;


    vector<TLorentzVector> FatJets;

    // branches map
    TString YEAR;

    int filterMode;

    void brances_map();

    void Filter();
    void Filter_1();

    int btagDeepFlavB_WP(int Jet_index);
    bool exclusive(int Jet_index);

    template <typename T>
    void Out(vector<T>,vector<T> &);

};

Jet_Collection::Jet_Collection(){
    filterMode = -1 ;
}

Jet_Collection::Jet_Collection(Jet_P Jet_ , int filterMode_, TString YEAR_, vector<TLorentzVector> FatJets_){
    v_Jet_pt_            = Jet_.v_Jet_pt_;
    v_Jet_eta_           = Jet_.v_Jet_eta_;
    v_Jet_phi_           = Jet_.v_Jet_phi_;
    v_Jet_mass_          = Jet_.v_Jet_mass_;
    v_Jet_btagDeepFlavB_ = Jet_.v_Jet_btagDeepFlavB_;
    v_Jet_jetId_         = Jet_.v_Jet_jetId_;
    v_Jet_hadronFlavour_ = Jet_.v_Jet_hadronFlavour_;
    v_Jet_pt_nom_        = Jet_.v_Jet_pt_nom_;
    v_Jet_mass_nom_      = Jet_.v_Jet_mass_nom_;

    FatJets = FatJets_ ;

    YEAR = YEAR_;
    filterMode = filterMode_;

    Filter();
    brances_map();
}



void Jet_Collection::brances_map(){
    Jet_Branches["pt"]            = Jet_pt ;
    Jet_Branches["eta"]           = Jet_eta ;
    Jet_Branches["phi"]           = Jet_phi ;
    Jet_Branches["mass"]          = Jet_mass ;
    Jet_Branches["btagDeepFlavB"] = Jet_btagDeepFlavB ;
    Jet_Branches["jetId"]         = Jet_jetId ;
    Jet_Branches["hadronFlavour"] = Jet_hadronFlavour ;
    Jet_Branches["pt_nom"]        = Jet_pt_nom ;
    Jet_Branches["mass_nom"]      = Jet_mass_nom ;

}

void Jet_Collection::Filter(){
    if( filterMode == 1 ){
        Filter_1();
    }
}

void Jet_Collection::Filter_1(){
    // jetid , eta requirement
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID13TeVUL
    // Please note: For AK8 jets, the corresponding (CHS or PUPPI) AK4 jet ID should be used.
    // For 2016 samples : jetId==3 means: pass loose and tight ID, fail tightLepVeto, jetId==7 means: pass loose, tight, tightLepVeto ID.
    // For 2017 and 2018 samples : jetId==2 means: pass tight ID, fail tightLepVeto, jetId==6 means: pass tight and tightLepVeto ID.
    for (size_t iFJ = 0; iFJ != v_Jet_pt_->size(); ++iFJ ){

        int   iJet_jetId  = v_Jet_jetId_->at(iFJ) ; if( iJet_jetId&2 != 2 ){ continue; }
        float iJet_jeteta = v_Jet_eta_->at(iFJ)   ; if( fabs(iJet_jeteta) > 2.4 ){ continue; }
        float iJet_jetpt = 0 ;
        if(v_Jet_pt_nom_->size() >0){
            iJet_jetpt  = v_Jet_pt_nom_->at(iFJ)    ; 
        }
        else{
            iJet_jetpt  = v_Jet_pt_->at(iFJ)    ; 
        }
        if( iJet_jetpt < 30 ){ continue; }

        Jet_pt.push_back(v_Jet_pt_->at(iFJ));
        Jet_eta.push_back(v_Jet_eta_->at(iFJ));
        Jet_phi.push_back(v_Jet_phi_->at(iFJ));
        Jet_mass.push_back(v_Jet_mass_->at(iFJ));
        Jet_btagDeepFlavB.push_back(v_Jet_btagDeepFlavB_->at(iFJ));
        Jet_jetId.push_back(v_Jet_jetId_->at(iFJ));

        if(v_Jet_pt_nom_->size()>0){
            Jet_pt_nom.push_back(v_Jet_pt_nom_->at(iFJ));
            Jet_mass_nom.push_back(v_Jet_mass_nom_->at(iFJ));
        }

        if(v_Jet_hadronFlavour_->size()>0){
            Jet_hadronFlavour.push_back(v_Jet_hadronFlavour_->at(iFJ));
        }

    }

}


size_t Jet_Collection::size(){
    return Jet_pt.size();
}

bool Jet_Collection::exclusive(int Jet_index){
    bool exclusive = true; 
    TLorentzVector Jet;
    if(Jet_pt_nom.size()>0){
        Jet.SetPtEtaPhiM( Jet_pt_nom[Jet_index], Jet_eta[Jet_index], Jet_phi[Jet_index], Jet_mass_nom[Jet_index] );
    }
    else{
        Jet.SetPtEtaPhiM( Jet_pt[Jet_index], Jet_eta[Jet_index], Jet_phi[Jet_index], Jet_mass[Jet_index] );
    }
    exclusive = Exclusive_Collection(Jet,FatJets,0.8);
    return exclusive;
}

int Jet_Collection::btagDeepFlavB_WP(int Jet_index){
    int WP = 0 ;

    float bWPloose ;
    float bWPmedium;
    float bWPtight ;
    if(YEAR.Contains("2016preVFP")){
        bWPloose  = 0.0508;
        bWPmedium = 0.2598;
        bWPtight  = 0.6502;
    }
    if(YEAR.Contains("2016postVFP")){
        bWPloose  = 0.0480;
        bWPmedium = 0.2489;
        bWPtight  = 0.6377;
    }
    if(YEAR.Contains("2017")){
        bWPloose  = 0.0532;
        bWPmedium = 0.3040;
        bWPtight  = 0.7476;
    }
    if(YEAR.Contains("2018")){
        bWPloose  = 0.0490;
        bWPmedium = 0.2783;
        bWPtight  = 0.7100;
    }

    if(Jet_btagDeepFlavB[Jet_index] > bWPloose){
        WP = 1;
    } 
    if(Jet_btagDeepFlavB[Jet_index] > bWPmedium){
        WP = 2;
    } 
    if(Jet_btagDeepFlavB[Jet_index] > bWPtight){
        WP = 3;
    } 

    return WP;
}

int Jet_Collection::Nj4_inclusive(){
    return Jet_pt.size();
}

int Jet_Collection::Nj4_exclusive(){
    int Nj4_ex = 0 ;
    for ( Int_t i = 0 ; i < Jet_pt.size() ; i++ ) {
        if(exclusive(i)){
            Nj4_ex++ ;
        }
    }
    return Nj4_ex;
}

Jet_WP Jet_Collection::Nj4_btag_inclusive(){
    int Nj4_btag_l = 0 ;
    int Nj4_btag_m = 0 ;
    int Nj4_btag_t = 0 ;
    for ( Int_t i = 0 ; i < Jet_pt.size() ; i++ ) {
        if(btagDeepFlavB_WP(i) >= 1 ){
            Nj4_btag_l ++ ;
        }
        if(btagDeepFlavB_WP(i) >= 2 ){
            Nj4_btag_m ++ ;
        }
        if(btagDeepFlavB_WP(i) >= 3 ){
            Nj4_btag_t ++ ;
        }
    }
    Jet_WP Jet_WP_ = {
        Nj4_btag_l,
        Nj4_btag_m,
        Nj4_btag_t,
    } ; 
    return Jet_WP_;
}

Jet_WP Jet_Collection::Nj4_btag_exclusive(){
    int Nj4_btag_l = 0 ;
    int Nj4_btag_m = 0 ;
    int Nj4_btag_t = 0 ;
    for ( Int_t i = 0 ; i < Jet_pt.size() ; i++ ) {
        if(not exclusive(i)) continue ;
        if(btagDeepFlavB_WP(i) >= 1 ){
            Nj4_btag_l ++ ;
        }
        if(btagDeepFlavB_WP(i) >= 2 ){
            Nj4_btag_m ++ ;
        }
        if(btagDeepFlavB_WP(i) >= 3 ){
            Nj4_btag_t ++ ;
        }
    }
    Jet_WP Jet_WP_ = {
        Nj4_btag_l,
        Nj4_btag_m,
        Nj4_btag_t,
    } ; 
    return Jet_WP_;
}

template <typename T>
void Jet_Collection::branch(string variable, std::vector<T>& outbr){
    outbr.clear();
    for( size_t i = 0 ; i < Jet_Branches[variable].size() ; i ++ ){
        outbr.push_back(Jet_Branches[variable][i]);
    }
}

// template <typename T>
// void Jet_Collection::Out(vector<T> In_branch, vector<T> & Out_branch){
    // for (size_t iFJ = 0; iFJ != FJorder.size(); ++iFJ ){ 
        // if(iFJ < In_branch.size()){ Out_branch.push_back( In_branch.at(FJorder.at(iFJ)) ); }
        // else{ Out_branch.push_back(-99); }
    // }
// }

#endif
