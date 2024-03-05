#ifndef _GenParticles_
#define _GenParticles_

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

struct Genparticles
{
    vector<float> v_GenPart_eta_;
    vector<int>   v_GenPart_genPartIdxMother_;
    vector<float> v_GenPart_mass_;
    vector<int>   v_GenPart_pdgId_;
    vector<float> v_GenPart_phi_;
    vector<float> v_GenPart_pt_;
    vector<int>   v_GenPart_status_;
    vector<int>   v_GenPart_statusFlags_;
} ;

struct pdgId_index
{
    int index;
    int GenPart_pdgId;
} ;

struct daughter_generation_23
{
    vector<int> generation_2;
    vector<int> generation_3;
} ;

bool cmp_daughter(pdgId_index a, pdgId_index b){
    return (abs(a.GenPart_pdgId) < abs(b.GenPart_pdgId)) ;
}

class GenParticle_Collection {
    //You can only access to public funtions or variables.
    public : 
    void AddParticle( int index );
    void AddParticle( int index , int mode );
    vector<int> collection(){ return IndexList; }
    int size(){ return IndexList.size(); }
    int matchingAK8(TLorentzVector AK8);
    int matchingAK8(TLorentzVector AK8, int mode );
    GenParticle_Collection(Genparticles Genparticle, int PDGID);
    GenParticle_Collection(GenParticle_Collection Genparticle_collection, int PDGID);
    //constructor.
    private :
    vector<float> v_GenPart_eta_;
    vector<int> v_GenPart_genPartIdxMother_;
    vector<float> v_GenPart_mass_;
    vector<int> v_GenPart_pdgId_;
    vector<float> v_GenPart_phi_;
    vector<float> v_GenPart_pt_;
    vector<int> v_GenPart_status_;
    vector<int> v_GenPart_statusFlags_;

    int PDGID;
    std::unordered_map<int, vector<int>> index_daughter;
    std::unordered_map<int, daughter_generation_23> index_daughter_23generation;
    std::vector<int> IndexList;
    std::vector<TLorentzVector> GenParticlesP4;
    float DR_1generation ;
    float DR_2generation ;
    float DR_3generation ;

    // gluon matching
    float gpt_shrehood;

    vector<int> daughters(int);
    int lastcopy(int index);
    int lastcopy_(int index);
    void index_daughter_map();
    bool qgfromtWZ(int index);
    void daughter_23generation(int index);
    int matchingW(TLorentzVector AK8);
    int matchingZ(TLorentzVector AK8);
    int matchingqg(TLorentzVector AK8);
    int matchingt(TLorentzVector AK8);
    int matchingqg_complex(TLorentzVector AK8);
} ;

GenParticle_Collection::GenParticle_Collection(Genparticles Genparticle , int PDGID_){
    v_GenPart_eta_ = Genparticle.v_GenPart_eta_;
    v_GenPart_genPartIdxMother_ = Genparticle.v_GenPart_genPartIdxMother_;
    v_GenPart_mass_ = Genparticle.v_GenPart_mass_;
    v_GenPart_pdgId_ = Genparticle.v_GenPart_pdgId_;
    v_GenPart_phi_ = Genparticle.v_GenPart_phi_;
    v_GenPart_pt_ = Genparticle.v_GenPart_pt_;
    v_GenPart_status_ = Genparticle.v_GenPart_status_;
    v_GenPart_statusFlags_ = Genparticle.v_GenPart_statusFlags_;

    PDGID = PDGID_;

    gpt_shrehood = 50;
    DR_1generation = 0.6;
    DR_2generation = 0.8;
    DR_3generation = 0.8;

    index_daughter_map();
}

GenParticle_Collection::GenParticle_Collection(GenParticle_Collection Genparticle_collection, int PDGID_){
    index_daughter = Genparticle_collection.index_daughter;
    v_GenPart_eta_ = Genparticle_collection.v_GenPart_eta_;
    v_GenPart_genPartIdxMother_ = Genparticle_collection.v_GenPart_genPartIdxMother_;
    v_GenPart_mass_ = Genparticle_collection.v_GenPart_mass_;
    v_GenPart_pdgId_ = Genparticle_collection.v_GenPart_pdgId_;
    v_GenPart_phi_ = Genparticle_collection.v_GenPart_phi_;
    v_GenPart_pt_ = Genparticle_collection.v_GenPart_pt_;
    v_GenPart_status_ = Genparticle_collection.v_GenPart_status_;
    v_GenPart_statusFlags_ = Genparticle_collection.v_GenPart_statusFlags_;
    
    PDGID = PDGID_;
    gpt_shrehood = Genparticle_collection.gpt_shrehood;

    DR_1generation = Genparticle_collection.DR_1generation;
    DR_2generation = Genparticle_collection.DR_2generation;
    DR_3generation = Genparticle_collection.DR_3generation;
}

vector<int> GenParticle_Collection::daughters(int index){
    vector<pdgId_index> daughter_pdgId_index;
    for (size_t id=0; id<v_GenPart_pt_.size();id++){
        if (v_GenPart_genPartIdxMother_[id] == index){
            pdgId_index ipdgId_index = { int(id), v_GenPart_pdgId_[id] };
            daughter_pdgId_index.push_back( ipdgId_index );
        }
    }
    std::sort( daughter_pdgId_index.begin() , daughter_pdgId_index.end() , cmp_daughter);
    vector<int> daughter_index;
    for (size_t id=0; id<daughter_pdgId_index.size();id++){
        daughter_index.push_back(daughter_pdgId_index[id].index);
    }
    return daughter_index;
}

void GenParticle_Collection::index_daughter_map( ){
    if( index_daughter.size() == 0 ){
        for (size_t id=0; id<v_GenPart_pt_.size();id++){
            index_daughter.insert({id,daughters(id)});
        }
    }
}

int GenParticle_Collection::lastcopy(int index){
    int pdgid = abs(v_GenPart_pdgId_[index]);
    int LastCopyID = index;
    int PGDID_daughter = -99;
    vector<int> daughterindex = index_daughter.at(index);
    for (size_t id=0; id<daughterindex.size();id++){
        if(abs(v_GenPart_pdgId_[daughterindex[id]])==pdgid){
            LastCopyID = daughterindex[id];
            PGDID_daughter = abs(v_GenPart_pdgId_[daughterindex[id]]);
        }
    }
    if(PGDID_daughter == pdgid){
        return lastcopy(LastCopyID);
    }
    return LastCopyID;
}


bool GenParticle_Collection::qgfromtWZ(int index){
    vector<int> qg = {1,2,3,4,21};
    vector<int>::iterator ret = std::find(qg.begin(), qg.end(), abs(v_GenPart_pdgId_[index]));
    if( ret == qg.end() ) { return false; }
    
    int parent = v_GenPart_genPartIdxMother_[index];
    while ( parent >= 0 ){
        if ( abs(v_GenPart_pdgId_[parent]) == 6  ){ return true; } 
        if ( abs(v_GenPart_pdgId_[parent]) == 24 ){ return true; } 
        if ( abs(v_GenPart_pdgId_[parent]) == 23 ){ return true; } 
        parent = v_GenPart_genPartIdxMother_[parent];
    }
    vector<int> daughterindex = index_daughter.at(index);
    while( daughterindex.size() > 0 ){
        vector<int> daughterindex_;
        for (size_t id=0; id<daughterindex.size();id++){
            int daughterid = daughterindex[id];
            if ( abs(v_GenPart_pdgId_[daughterid]) == 6  ){ return true; } 
            if ( abs(v_GenPart_pdgId_[daughterid]) == 24 ){ return true; } 
            if ( abs(v_GenPart_pdgId_[daughterid]) == 23 ){ return true; } 
            vector<int> daughter_daughter = index_daughter.at(daughterid);
            daughterindex_.insert(daughterindex_.end(),daughter_daughter.begin(),daughter_daughter.end());
        }
        daughterindex = daughterindex_;
    }
    return false;
}

void GenParticle_Collection::daughter_23generation(int index){
    vector<int> findlast = {1,2,3,4,5,23,24,11,12,13,14,15,16};
    vector<int> daughterindex_2 ;
    vector<int> daughter_ = index_daughter.at(index);
    for ( size_t id = 0 ; id < daughter_.size() ; id++ ){
        vector<int>::iterator ret = std::find(findlast.begin(), findlast.end(), abs(v_GenPart_pdgId_[daughter_[id]]));
        if( ret == findlast.end() ) { daughterindex_2.push_back(daughter_[id]); }
        else { daughterindex_2.push_back( lastcopy(daughter_[id]) ); }
    }
    vector<int> daughterindex_3;
    for (size_t id=0; id<daughterindex_2.size();id++){
        vector<int> daughter_daughter = index_daughter.at(daughterindex_2[id]);
        for (size_t idd=0; idd<daughter_daughter.size();idd++){
            vector<int>::iterator ret = std::find(findlast.begin(), findlast.end(), abs(v_GenPart_pdgId_[daughter_daughter[idd]]));
            if( ret == findlast.end() ) { daughterindex_3.push_back(daughter_daughter[idd]); }
            else { daughterindex_3.push_back( lastcopy(daughter_daughter[idd]) ); }
        }
    }
    daughter_generation_23 daughterindex_2_3 = {daughterindex_2,daughterindex_3};
    index_daughter_23generation.insert(std::make_pair(index,daughterindex_2_3));
}


void GenParticle_Collection::AddParticle(int index){
    if ( abs(v_GenPart_pdgId_[index]) == PDGID ){
        int lastcopyid = lastcopy(index);
        bool qgfromtWZ_ = qgfromtWZ(lastcopyid);
        if( !qgfromtWZ_ ){
            vector<int>::iterator ret = std::find(IndexList.begin(), IndexList.end(), lastcopyid);
            if( ret == IndexList.end() ) { 
                IndexList.push_back(lastcopyid); 
                daughter_23generation(lastcopyid);
            }
        }
    }
}

void GenParticle_Collection::AddParticle(int index, int mode){
    if( mode == 1 ){
        if ( abs(v_GenPart_pdgId_[index]) == PDGID ){
            int finalid;
            if ( abs(v_GenPart_pdgId_[index]) == 1 || abs(v_GenPart_pdgId_[index]) == 2 || abs(v_GenPart_pdgId_[index]) == 3 || abs(v_GenPart_pdgId_[index]) == 4 || abs(v_GenPart_pdgId_[index]) == 21 ){
                finalid = index;
            }
            else{
                finalid = lastcopy(index);
            }
            bool qgfromtWZ_ = qgfromtWZ(finalid);
            if( !qgfromtWZ_ ){
                vector<int>::iterator ret = std::find(IndexList.begin(), IndexList.end(), finalid);
                if( ret == IndexList.end() ) { 
                    IndexList.push_back(finalid); 
                    daughter_23generation(finalid);
                }
            }
        }
    }
}

int GenParticle_Collection::matchingAK8(TLorentzVector AK8){
    if( ( PDGID == 21 ) || ( PDGID < 5 ) ){ return matchingqg(AK8) ; }
    if( PDGID == 24 ){ return matchingW(AK8) ; }
    if( PDGID == 23 ){ return matchingZ(AK8) ; }
    if( PDGID == 6  ){ return matchingt(AK8) ; }
}

int GenParticle_Collection::matchingAK8(TLorentzVector AK8, int mode){
    if( mode == 1 ){
        if( ( PDGID == 21 ) || ( PDGID < 5 ) ){ return matchingqg_complex(AK8) ; }
        if( PDGID == 24 ){ return matchingW(AK8) ; }
        if( PDGID == 23 ){ return matchingZ(AK8) ; }
        if( PDGID == 6  ){ return matchingt(AK8) ; }
    }
}

int GenParticle_Collection::matchingW(TLorentzVector AK8){
    // if match with 2 W, what should we do ?
    int matching = -99;
    int matching_1 = -99;
    float AK8_eta = AK8.Eta() ; float AK8_phi = AK8.Phi() ; 
    for (size_t id=0; id<IndexList.size();id++){
        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) < DR_1generation ){
            matching_1 = 1 ;
        }
        vector<int> generation2 = index_daughter_23generation.at(IndexList[id]).generation_2;
        bool match_2generation = true;
        int decay = -99;
        for (size_t idd=0; idd < generation2.size(); idd++){
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 11 ) { decay = 1 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 13 ) { decay = 2 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 15 ) { decay = 3 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) <  6  ) { decay = 4 ; }
            if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation2[idd]], AK8_phi, v_GenPart_phi_[generation2[idd]] )) > DR_2generation ){
                match_2generation = false;
            }
        }
        if(match_2generation){
            if(decay == 1){ matching = 2; }
            if(decay == 2){ matching = 3; }
            if(decay == 3){ matching = 4; }
            if(decay == 4){ matching = 5; }
        }
    }
    if( matching_1 > matching ){ matching = matching_1; }
    return matching;
    // 1 for matching with W, 2,3,4,5 for matching with W and daughter
    // 2 for ele, 3 for mu, 4 for tau, 5 for q
}




int GenParticle_Collection::matchingZ(TLorentzVector AK8){
    // if match with 2 W, what should we do ?
    int matching = -99;
    int matching_1 = -99;
    float AK8_eta = AK8.Eta() ; float AK8_phi = AK8.Phi() ; 
    for (size_t id=0; id<IndexList.size();id++){
        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) < DR_1generation ){
            matching_1 = 1 ;
        }
        vector<int> generation2 = index_daughter_23generation.at(IndexList[id]).generation_2;
        bool match_2generation = true;
        int decay = -99;
        for (size_t idd=0; idd < generation2.size(); idd++){
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 11 || fabs(v_GenPart_pdgId_[generation2[idd]]) == 12 ) { decay = 1 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 13 || fabs(v_GenPart_pdgId_[generation2[idd]]) == 14 ) { decay = 2 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) == 15 || fabs(v_GenPart_pdgId_[generation2[idd]]) == 16 ) { decay = 3 ; }
            if( fabs(v_GenPart_pdgId_[generation2[idd]]) <  6  ) { decay = 4 ; }
            if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation2[idd]], AK8_phi, v_GenPart_phi_[generation2[idd]] )) > DR_2generation ){
                match_2generation = false;
            }
        }
        if(match_2generation){
            if(decay == 1){ matching = 2; }
            if(decay == 2){ matching = 3; }
            if(decay == 3){ matching = 4; }
            if(decay == 4){ matching = 5; }
        }
    }
    if( matching_1 > matching ){ matching = matching_1; }
    return matching;
    // 1 for matching with Z, 2,3,4,5 for matching with Z and daughter
    // 2 for ele, 3 for mu, 4 for tau, 5 for q
}

int GenParticle_Collection::matchingqg(TLorentzVector AK8){
    int matching = -99;
    float AK8_eta = AK8.Eta() ; float AK8_phi = AK8.Phi() ;  
    for (size_t id=0; id<IndexList.size();id++){
        if( v_GenPart_pt_[IndexList[id]] < gpt_shrehood ){ continue; }
        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) < DR_1generation ){
            matching = 1 ;
        }
    }
    return matching;
}

int GenParticle_Collection::matchingqg_complex(TLorentzVector AK8){
    int matching = -99;
    float AK8_eta = AK8.Eta() ; float AK8_phi = AK8.Phi() ;  float AK8_pt = AK8.Pt() ;  
    vector<int> matching_index , matching_nprong ; 
    for (size_t id=0; id<IndexList.size();id++){
        if( v_GenPart_pt_[IndexList[id]] < gpt_shrehood ){ continue; }
        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) < DR_1generation ){
            int nprong = 0;
            vector<int> generation_2 = index_daughter.at(IndexList[id]);
            for(size_t idd=0; idd<generation_2.size();idd++){
                vector<int> generation_3 = index_daughter.at(generation_2[idd]);
                for(size_t iddd=0; iddd<generation_3.size();iddd++){
                    if( v_GenPart_pt_[generation_3[iddd]] < gpt_shrehood ){ continue; }
                    if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation_3[iddd]], AK8_phi, v_GenPart_phi_[generation_3[iddd]] )) < DR_1generation ){
                        nprong ++;
                    }
                }
            }
            matching_index.push_back(IndexList[id]);
            matching_nprong.push_back(nprong);
        }
    }
    float Pt_ratio = 999;
    for(size_t id=0; id<matching_index.size();id++){
        if( fabs(v_GenPart_pt_[matching_index[id]]/AK8_pt-1) < fabs(Pt_ratio-1) ){
            Pt_ratio = v_GenPart_pt_[matching_index[id]]/AK8_pt;
            matching = matching_nprong[id] + 1 ; 
        }
    }
    return matching;
    // gq:1 , qg1 : 2,  qg2 : 3, qg3:4, qg4:4, ...  
}

int GenParticle_Collection::matchingt(TLorentzVector AK8){
    // if one AK8 matching with more than 1 top , choose the t3 matching first, t2 second, tl third
    int matching = -99;
    int matching_1 = -99;
    float AK8_eta = AK8.Eta() ; float AK8_phi = AK8.Phi() ; 

    for (size_t id=0; id<IndexList.size();id++){
        // cout << "deltaR(AK8_a,top) : "<< fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) << endl;
        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[IndexList[id]], AK8_phi, v_GenPart_phi_[IndexList[id]] )) < DR_1generation ){
            matching_1 = 1 ;
        }
        vector<int> generation2 = index_daughter_23generation.at(IndexList[id]).generation_2;
        bool match_b = false;
        int decay = -99;
        int nqmatch = 0;
        for (size_t idd=0; idd < generation2.size(); idd++){
            if( abs(v_GenPart_pdgId_[generation2[idd]]) == 5 ) { 
                if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation2[idd]], AK8_phi, v_GenPart_phi_[generation2[idd]] )) < DR_2generation ){
                    match_b = true;
                }
            }
            if( abs(v_GenPart_pdgId_[generation2[idd]]) == 24 ) { 
                vector<int> generation3 = index_daughter.at(generation2[idd]);
                // cout << "has W " << endl;
                for (size_t iddd=0; iddd < generation3.size(); iddd++){
                    // cout << "W daughter id : " << fabs(v_GenPart_pdgId_[generation3[iddd]]) << endl;
                    if( fabs(v_GenPart_pdgId_[generation3[iddd]]) == 11 ) { decay = 1 ; }
                    if( fabs(v_GenPart_pdgId_[generation3[iddd]]) == 13 ) { decay = 2 ; }
                    if( fabs(v_GenPart_pdgId_[generation3[iddd]]) == 15 ) { decay = 3 ; }
                    if( fabs(v_GenPart_pdgId_[generation3[iddd]]) == 11 || fabs(v_GenPart_pdgId_[generation3[iddd]]) == 13 || fabs(v_GenPart_pdgId_[generation3[iddd]]) == 15 ) { 
                        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation3[iddd]], AK8_phi, v_GenPart_phi_[generation3[iddd]] )) < DR_3generation ){ nqmatch = 1 ; }
                    }
                    if( fabs(v_GenPart_pdgId_[generation3[iddd]]) <  6  ) { 
                        decay = 4 ; 
                        if( fabs(detlaR( AK8_eta, v_GenPart_eta_[generation3[iddd]], AK8_phi, v_GenPart_phi_[generation3[iddd]] )) < DR_3generation ){ nqmatch++ ; }
                    }
                }
            }
        }
        if( match_b ){
            matching = 2;
            // cout << "decay : " << decay << endl;
            if( decay == 4 ){
                // cout << "nqmatch : " << nqmatch << endl;
                if( nqmatch == 2 ){ 
                    if( matching < 5 ){ matching = 5; } 
                }
                if( nqmatch == 1 ){ 
                    if( matching < 4 ){ matching = 4; } 
                }
            }
            if( decay > 0 && decay < 4 ){
                if( nqmatch == 1 ){ 
                    if( matching < 3 ){ matching = 3; } 
                }
            }
        }
    }
    // cout << "matching_1 : "<< matching_1 << endl;
    if( matching < matching_1 ){ matching = matching_1; } 
    return matching;
    // 1 for matching with t, 2,3,4 for matching with b and w daughter
    // 5 for t, b
    // 5 for t3, 4 for t2, 3 for tlb
}

#endif

