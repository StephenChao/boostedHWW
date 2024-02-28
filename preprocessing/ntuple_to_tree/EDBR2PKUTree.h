//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan  6 02:39:46 2016 by ROOT version 5.34/32
// from TTree EDBRCandidates/EDBR Candidates
// found on file: BulkGravWW750.root
//////////////////////////////////////////////////////////

#ifndef EDBR2PKUTree_h
#define EDBR2PKUTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
//#include "DataFormats/Math/interface/deltaR.h"

#include "VVVTree_HeadFile/goodrun.h"
#include "VVVTree_HeadFile/fatJets.h"
#include "VVVTree_HeadFile/Jets.h"

#include <iostream>
#include <fstream>
using namespace std;

#define NFATJET_MAX 20 // for FatJet collection
#define NJET_MAX 100 // for FatJet collection
#define NLEPTON_MAX 100 // for FatJet collection
#define NGENPART_MAX 502 // for FatJet collection

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxpassFilter_HBHE = 1;
   const Int_t kMaxpassFilter_HBHEIso = 1;
   const Int_t kMaxpassFilter_GlobalHalo = 1;
   const Int_t kMaxpassFilter_ECALDeadCell = 1;
   const Int_t kMaxpassFilter_GoodVtx = 1;
   const Int_t kMaxpassFilter_EEBadSc = 1;
   const Int_t kMaxpassFilter_badMuon = 1;
   const Int_t kMaxpassFilter_badChargedHadron = 1;

class EDBR2PKUTree {
   public :
      TTree          *fChain;   //!pointer to the analyzed TTree or TChain
      // TChain          *fChain;   //!pointer to the analyzed TTree or TChain
      Int_t           fCurrent; //!current Tree number in a TChain
      TString channelName;
      TString YEAR_g;

   
   
   /// define EDBR2PKUTree functions
   void loadVectorBranches_run();
   void loadVectorBranches_genWeight();
   void initFatJet_Collection_2016();
   void GKK_process_1_2016(Long64_t jentry, TString YEAR);
   void GKK_process_2_2016(Long64_t jentry, TString YEAR);
   void FatJets_P4_PTOrder_2016();
   void FatJets_P4_MASSOrder_2016();
   void FatJets_P4_DEEP_MD_W_Order_2016();
   void FatJets_P4_PNet_MD_W_Order_2016();
   void FatJets_P4_HWWH4q_Order_2016();
   void FatJets_P4_HWWV2_Order_2016();
   
   void FatJets_P4_HWWH4q_Order();
   void FatJets_P4_HWWV2_Order();
   void FatJets_HWWH4q_Order();
   void FatJets_HWWV2_Order();
   void METf_2016();

   void GKK_process_1(Long64_t jentry, TString YEAR);
   void GKK_process_2(Long64_t jentry, TString YEAR);
   void FatJets_P4_PTOrder();
   void FatJets_P4_MASSOrder();
   void FatJets_P4_DEEP_MD_W_Order();
   void FatJets_P4_PNet_MD_W_Order();
   void FatJets_DEEP_MD_W_Order();
   void FatJets_PNet_MD_W_Order();
   void initJet_Collection(TString YEAR);
   void Nbtagf();

   void loadVectorBranches_MET();
   void loadVectorBranches_genH();
   void loadVectorBranches_Flag();
   void loadVectorBranches_HLT();
   void loadVectorBranches_Vertices();
   //HWW
   void OutputBranches_HWW();
   // gkk
   void initFatJet_Collection();
   void DeepW_Rank_Variable();
   void Added_Pt_ranked_Variables();
   void Added_Mass_ranked_Variables();
   void Added_Mass_ranked_score();
   void AK4_InsideAK8();
   void METAK8_DPhi();
   void METRecovery();
   void Rank_AK8();
   void MET_AK8_MT();
   void Unknown();
   void METf();
   void HEMFilter();
   void MJJ_MJJJf();
   void DR_DPhi_M2J();
   void AK8_Pt_Ordered(Long64_t jentry);
   void AK8_Pt_Ordered_PnScore_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_RawScore_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_p4_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_RawScore_swtich();
   void AK8_Pt_Ordered_p4();
   void DeepAK8_Mass_Ordered_init();
   void DeepAK8_Mass_Ordered_deepAK8RawScore();
   void DeepAK8_Mass_Ordered_deepAK8CombineScore();
   void DeepAK8_Mass_Ordered_P4();
   void DeepAK8_Mass_Ordered();
   void Deep_W_Ordered_Init();
   void Deep_W_Ordered_P4();
   void Deep_W_Ordered_RawScore();
   void Deep_W_Ordered_CombineScore();
   void Deep_W_Ordered();
   void EventLevel(Long64_t jentry, TString YEAR, Int_t IS_Data);
   void AK4_init(Long64_t jentry);
   void HT_ST();
   void Nj4_Nj8();
   // void NAK4();
   void Weightf(Double_t XS, Int_t Nevents, Double_t LUMI);
   void TriggerSFf();
   void GlobalInit(TString YEAR, Int_t IS_Data);
   void goldenjsoninit(TString YEAR, Int_t IS_Data);
   void loadVectorBranches();
   void Deep_W_Ordered_ParticleNetScore();
   void AK8_Nsubjetness_Init(Long64_t jentry);
   void Deep_W_Ordered_Nsubjetness();

   vector<size_t> GenParticles_Daughterindex(size_t Genpart_index);
   int GenParticles_Lastcopy(size_t Genpart_index);
   int GenParticles_FindW(size_t Genpart_index);
   
   int GenParticles_Firstcopy(size_t Genpart_index);
   void GenMatching(Long64_t jentry) ;
   void GenMatching_HWW(Long64_t jentry);

   void loadGenpart(Long64_t jentry);
   void GenParticles();
   void GenParticles_HWW();
   
   void Radion_Matching();
   void Radion_Matching_taulep();
   void gKK_g_Matching();
   void Radion_Matching_taudecay();
   void Radion_Matching_deepW_Ordered();

   //HWW ordering.
   void Higgs_Matching();
   void Higgs_Matching_taulep();
   void Higgs_g_Matching();
   void Higgs_Matching_taudecay();
   void Higgs_Matching_HWW_Ordered();


   void Outputbranches();
   bool Filter_Events(TString YEAR, Int_t IS_Data);
   bool Filter_Events_HWW(TString YEAR, Int_t IS_Data);

   // for VVV EFT study
   void VVVEFT_analysis_init(Long64_t jentry);
   void VVVEFT_AK8_init();
   void VVVEFT_GenMatching();
   void VVVEFT_leptonicW();
   void VVVEFT_EventLevel();
   void VVVEFT_Nbjets();
   void VVVEFT_process(Long64_t jentry);
   void VVVEFT_weight(Double_t XS, Int_t Nevents, Double_t LUMI);
   bool Filter_Event_1LeptonEFT(TString YEAR, Int_t IS_Data);

   void B2GSF_preprocess();
   void loadVectorBranches_FatJets();
   void loadVectorBranches_FatJets_HWW();
   void OutputBranches_GKK_0Lepton();
   void B2GSF_GetEntry(Long64_t jentry);
   void Electron_GetEntry(Long64_t jentry);
   void Muon_GetEntry(Long64_t jentry);
   void Muon_flatVector(Long64_t jentry);
   void loadVectorBranches_Electron();
   void Jets_GetEntry(Long64_t jentry);
   void OutputBranches_VVV_EFT_1lepton();
   void B2GSF_1lepton_Lepton();
   void fatJets_GetEntry(Long64_t jentry);
   void loadVectorBranches_Muon();
   bool B2GSF_prefilter();
   void loadVectorBranches_1Lepton();
   void Electron_flatVector(Long64_t jentry);
   bool B2GSF_FillTree();
   void B2GSF_1lepton_fatJets();
   void loadVectorBranches_B2GSF_1Lepton();
   // void loadVectorBranches_GKK_0Lepton();
   void OutputBranches_B2GSF();
   void loadVectorBranches_Genparticles();
   void loadVectorBranches_Jets();

   /// define EDBR2PKUTree functions


FatJet_Collection FatJets ;
Jet_Collection Jets ;

std::vector<std::string> outputbranches;

Int_t IsData;
Int_t HEM_Filter = 1;

TLorentzVector LMJ_j,LMJJ_j;

Double_t        deltaRAK4AK8_new_2[15];
Double_t        deltaRAK4AK8_new_3[15];
Double_t        deltaRAK4AK8_new_4[15];

double deltaRak4sj[15]={0};
double deltaRak4sj2[15]={0};
double deltaRak4sj3[15]={0};
double deltaRak4sj4[15]={0};

double DR1,DR2,DR3,DR4,DR5,DR6;
double W_n_phi,W_n_eta;
double DR01,DR02,DR03,DR04,DR05;

Float_t Mj;
Float_t Mj_2;
Float_t Mj_3;

float HWW_V2_max;
float HWW_V2_mid;
float HWW_V2_min;
bool goodRun;
bool Flag;
float Mj_V2_a;
float Mj_V2_b;
float Mj_V2_c;

float Mj_jesTotalUp_a  ;
float Mj_jesTotalDown_a;
float Mj_jerUp_a       ;
float Mj_jerDown_a     ;
float Mj_jesTotalUp_b  ;
float Mj_jesTotalDown_b;
float Mj_jerUp_b       ;
float Mj_jerDown_b     ;
float Mj_jesTotalUp_c  ;
float Mj_jesTotalDown_c;
float Mj_jerUp_c       ;
float Mj_jerDown_c     ;

float Mj_jesTotalUp  ;
float Mj_jesTotalDown;
float Mj_jerUp       ;
float Mj_jerDown     ;
float Mj_jesTotalUp_2  ;
float Mj_jesTotalDown_2;
float Mj_jerUp_2       ;
float Mj_jerDown_2     ;
float Mj_jesTotalUp_3  ;
float Mj_jesTotalDown_3;
float Mj_jerUp_3       ;
float Mj_jerDown_3     ;

float Mj_jesTotalUp_max  ;
float Mj_jesTotalDown_max;
float Mj_jerUp_max       ;
float Mj_jerDown_max     ;
float Mj_jesTotalUp_mid  ;
float Mj_jesTotalDown_mid;
float Mj_jerUp_mid       ;
float Mj_jerDown_mid     ;
float Mj_jesTotalUp_min  ;
float Mj_jesTotalDown_min;
float Mj_jerUp_min       ;
float Mj_jerDown_min     ;

float PTj_V2_a;
float PTj_V2_b;
float PTj_V2_c;
float Etaj_V2_a;
float Etaj_V2_b;
float Etaj_V2_c;
float Phij_V2_a;
float Phij_V2_b;
float Phij_V2_c;
float Mj_corr_V2_a;
float Mj_corr_V2_b;
float Mj_corr_V2_c;

float a_HWqqWqq0c       ;
float a_HWqqWqq1c       ;
float a_HWqqWqq2c       ;
float a_HWqqWq0c        ;
float a_HWqqWq1c        ;
float a_HWqqWq2c        ;
float a_HWqqWev0c       ;
float a_HWqqWev1c       ;
float a_HWqqWmv0c       ;
float a_HWqqWmv1c       ;
float a_HWqqWtauev0c    ;
float a_HWqqWtauev1c    ;
float a_HWqqWtaumv0c    ;
float a_HWqqWtaumv1c    ;
float a_HWqqWtauhv0c    ;
float a_HWqqWtauhv1c    ;
float a_Hbb             ;
float a_Hcc             ;
float a_Hss             ;
float a_Hqq             ;
float a_Htauhtaue       ;
float a_Htauhtaum       ;
float a_Htauhtauh       ;
float a_QCDbb           ;
float a_QCDcc           ;
float a_QCDb            ;
float a_QCDc            ;
float a_QCDothers       ;
float a_TopbWqq0c       ;
float a_TopbWqq1c       ;
float a_TopbWq0c        ;
float a_TopbWq1c        ;
float a_TopbWev         ;
float a_TopbWmv         ;
float a_TopbWtauhv      ;
float a_TopbWtauev      ;
float a_TopbWtaumv      ;
float b_HWqqWqq0c       ;
float b_HWqqWqq1c       ;
float b_HWqqWqq2c       ;
float b_HWqqWq0c        ;
float b_HWqqWq1c        ;
float b_HWqqWq2c        ;
float b_HWqqWev0c       ;
float b_HWqqWev1c       ;
float b_HWqqWmv0c       ;
float b_HWqqWmv1c       ;
float b_HWqqWtauev0c    ;
float b_HWqqWtauev1c    ;
float b_HWqqWtaumv0c    ;
float b_HWqqWtaumv1c    ;
float b_HWqqWtauhv0c    ;
float b_HWqqWtauhv1c    ;
float b_Hbb             ;
float b_Hcc             ;
float b_Hss             ;
float b_Hqq             ;
float b_Htauhtaue       ;
float b_Htauhtaum       ;
float b_Htauhtauh       ;
float b_QCDbb           ;
float b_QCDcc           ;
float b_QCDb            ;
float b_QCDc            ;
float b_QCDothers       ;
float b_TopbWqq0c       ;
float b_TopbWqq1c       ;
float b_TopbWq0c        ;
float b_TopbWq1c        ;
float b_TopbWev         ;
float b_TopbWmv         ;
float b_TopbWtauhv      ;
float b_TopbWtauev      ;
float b_TopbWtaumv      ;
float c_HWqqWqq0c       ;
float c_HWqqWqq1c       ;
float c_HWqqWqq2c       ;
float c_HWqqWq0c        ;
float c_HWqqWq1c        ;
float c_HWqqWq2c        ;
float c_HWqqWev0c       ;
float c_HWqqWev1c       ;
float c_HWqqWmv0c       ;
float c_HWqqWmv1c       ;
float c_HWqqWtauev0c    ;
float c_HWqqWtauev1c    ;
float c_HWqqWtaumv0c    ;
float c_HWqqWtaumv1c    ;
float c_HWqqWtauhv0c    ;
float c_HWqqWtauhv1c    ;
float c_Hbb             ;
float c_Hcc             ;
float c_Hss             ;
float c_Hqq             ;
float c_Htauhtaue       ;
float c_Htauhtaum       ;
float c_Htauhtauh       ;
float c_QCDbb           ;
float c_QCDcc           ;
float c_QCDb            ;
float c_QCDc            ;
float c_QCDothers       ;
float c_TopbWqq0c       ;
float c_TopbWqq1c       ;
float c_TopbWq0c        ;
float c_TopbWq1c        ;
float c_TopbWev         ;
float c_TopbWmv         ;
float c_TopbWtauhv      ;
float c_TopbWtauev      ;
float c_TopbWtaumv      ;
float a_HWW_V2             ;
float b_HWW_V2             ;
float c_HWW_V2             ; 
float a_HWWvsQCD_V2;
float b_HWWvsQCD_V2;
float c_HWWvsQCD_V2;

float jetAK8puppi_pt ;
float jetAK8puppi_pt_2 ;
float jetAK8puppi_pt_3 ;
float jetAK8puppi_eta;
float jetAK8puppi_eta_2;
float jetAK8puppi_eta_3;
float jetAK8puppi_phi;
float jetAK8puppi_phi_2;
float jetAK8puppi_phi_3;
float jetAK8puppi_sd;
float jetAK8puppi_sd_2;
float jetAK8puppi_sd_3;

Float_t MET_pt;
Float_t MET_et; // no use at all
Float_t genH_pt;
Float_t genWeight;



Int_t matchingt_a;
Int_t matchingW_a;
Int_t matchingg_a;
Int_t matchingZ_a;
Int_t matchingu_a;
Int_t matchingd_a;
Int_t matchings_a;
Int_t matchingc_a;
Int_t matchingg_first_a;
Int_t matchingu_first_a;
Int_t matchingd_first_a;
Int_t matchings_first_a;
Int_t matchingc_first_a;
Int_t matchingqg_first_a;
Int_t matchingt_first_a;


Int_t matchingt_b;
Int_t matchingW_b;
Int_t matchingg_b;
Int_t matchingZ_b;
Int_t matchingu_b;
Int_t matchingd_b;
Int_t matchings_b;
Int_t matchingc_b;
Int_t matchingg_first_b;
Int_t matchingu_first_b;
Int_t matchingd_first_b;
Int_t matchings_first_b;
Int_t matchingc_first_b;
Int_t matchingqg_first_b;
Int_t matchingt_first_b;


Int_t matchingt_c;
Int_t matchingW_c;
Int_t matchingg_c;
Int_t matchingZ_c;
Int_t matchingu_c;
Int_t matchingd_c;
Int_t matchings_c;
Int_t matchingc_c;
Int_t matchingg_first_c;
Int_t matchingu_first_c;
Int_t matchingd_first_c;
Int_t matchings_first_c;
Int_t matchingc_first_c;
Int_t matchingqg_first_c;
Int_t matchingt_first_c;


Int_t R4q_max;
Int_t R3q_max;
Int_t R2q_max;
Int_t Rlqq_max;
Int_t Rlq_max;
Int_t w_max;
Int_t u_max;
Int_t R4q_min;
Int_t R3q_min;
Int_t R2q_min;
Int_t Rlqq_min;
Int_t Rlq_min;
Int_t w_min;
Int_t u_min;
Int_t gKK_g_max;
Int_t gKK_g_min;
Int_t R3q_taudecay_max;
Int_t R2q_qq_taudecay_max;
Int_t R2q_qtau_taudecay_max;
Int_t R2q_tautau_taudecay_max;
Int_t Rlqq_emu_taudecay_max;
Int_t Rlqq_tau_taudecay_max;
Int_t Rlq_taudecay_max;
Int_t w_taudecay_max;
Int_t u_taudecay_max;
Int_t R3q_taudecay_min;
Int_t R2q_qq_taudecay_min;
Int_t R2q_qtau_taudecay_min;
Int_t R2q_tautau_taudecay_min;
Int_t Rlqq_emu_taudecay_min;
Int_t Rlqq_tau_taudecay_min;
Int_t Rlq_taudecay_min;
Int_t w_taudecay_min;
Int_t u_taudecay_min;
Int_t R3q_tauhad_max;
Int_t R2q_qtau_tauhad_max;
Int_t R2q_tautau_tauhad_max;
Int_t Rlqq_emu_tauhad_max;
Int_t Rlq_tauhad_max;
Int_t w_tauhad_max;
Int_t u_tauhad_max;
Int_t R3q_tauhad_min;
Int_t R2q_qtau_tauhad_min;
Int_t R2q_tautau_tauhad_min;
Int_t Rlqq_emu_tauhad_min;
Int_t Rlq_tauhad_min;
Int_t w_tauhad_min;
Int_t u_tauhad_min;
Int_t R3q_td_max;
Int_t rest_td_max;
Int_t R2q_Rlqq_td_max;
Int_t R3q_td_min;
Int_t rest_td_min;
Int_t R2q_Rlqq_td_min;
Int_t R4q_mid;
Int_t R3q_mid;
Int_t R2q_mid;
Int_t Rlqq_mid;
Int_t Rlq_mid;
Int_t w_mid;
Int_t u_mid;
Int_t gKK_g_mid;
Int_t R3q_taudecay_mid;
Int_t R2q_qq_taudecay_mid;
Int_t R2q_qtau_taudecay_mid;
Int_t R2q_tautau_taudecay_mid;
Int_t Rlqq_emu_taudecay_mid;
Int_t Rlqq_tau_taudecay_mid;
Int_t Rlq_taudecay_mid;
Int_t w_taudecay_mid;
Int_t u_taudecay_mid;
Int_t R3q_tauhad_mid;
Int_t R2q_qtau_tauhad_mid;
Int_t R2q_tautau_tauhad_mid;
Int_t Rlqq_emu_tauhad_mid;
Int_t Rlq_tauhad_mid;
Int_t w_tauhad_mid;
Int_t u_tauhad_mid;
Int_t R3q_td_mid;
Int_t rest_td_mid;
Int_t R2q_Rlqq_td_mid;

Int_t R4q_a , R4q_b , R4q_c;
Int_t R3q_a , R3q_b , R3q_c;
Int_t R2q_a , R2q_b , R2q_c;
Int_t w_a , w_b , w_c;
Int_t t_a , t_b , t_c;
Int_t tlqq_a, tlqq_b, tlqq_c; // Add tlqq matching
Int_t z_a , z_b , z_c;
Int_t Rlqq_a , Rlqq_b , Rlqq_c;
Int_t Rlq_a , Rlq_b , Rlq_c;
Int_t gKK_g_a , gKK_g_b , gKK_g_c;
Int_t u_a , u_b , u_c;
Int_t R3q_taudecay_a , R3q_taudecay_b , R3q_taudecay_c;

Int_t           z_max,t_max,t_max_tag,g_max,q_max,z_mid,t_mid,t_mid_tag,g_mid,q_mid,z_min,t_min,t_min_tag,g_min,q_min,z_4,t_4,t_4_tag,w_4,g_4,q_4,u_4;
Int_t           tlqq_max, tlqq_mid, tlqq_min;
Int_t           t34_max_tag,t34_mid_tag,t34_min_tag,t34_4_tag;

float FatJet_pt_1;
float FatJet_pt_2;
float FatJet_pt_3;
float FatJet_pt_4;
    
float FatJet_eta_1;
float FatJet_eta_2;
float FatJet_eta_3;
float FatJet_eta_4;
    
float FatJet_phi_1;
float FatJet_phi_2;
float FatJet_phi_3;
float FatJet_phi_4;
    
float FatJet_msoftdrop_1;
float FatJet_msoftdrop_2;
float FatJet_msoftdrop_3;
float FatJet_msoftdrop_4;

float gen_gKK_g_pt_f;
float gen_gKK_g_eta_f;
float gen_gKK_g_phi_f;
float gen_gKK_g_mass_f;

int gen_tau_decay_2;
int gen_tau_decay_3;

std::vector<float> Jet_mass_nom_out;
std::vector<float> Jet_pt_nom_out;

// define flat branch
Float_t MET_T1Smear_pt;
Float_t MET_T1Smear_phi;

Float_t MET_phi_NoXYCorr;
Float_t MET_et_NoXYCorr;

TBranch        *b_MET_T1Smear_pt;
TBranch        *b_MET_T1Smear_phi;

bool Flag_ecalBadCalibFilter;
TBranch        *b_Flag_ecalBadCalibFilter;



TBranch        *b_HLT_PFHT1050;
bool HLT_PFHT1050;
TBranch        *b_HLT_AK8PFJet380_TrimMass30;
bool HLT_AK8PFJet380_TrimMass30;
TBranch        *b_HLT_AK8PFJet400_TrimMass30;
bool HLT_AK8PFJet400_TrimMass30;
TBranch        *b_HLT_AK8PFJet420_TrimMass30;
bool HLT_AK8PFJet420_TrimMass30;
TBranch        *b_HLT_AK8PFHT750_TrimMass50;
bool HLT_AK8PFHT750_TrimMass50;
TBranch        *b_HLT_AK8PFHT800_TrimMass50;
bool HLT_AK8PFHT800_TrimMass50;
TBranch        *b_HLT_AK8PFHT850_TrimMass50;
bool HLT_AK8PFHT850_TrimMass50;
TBranch        *b_HLT_AK8PFHT900_TrimMass50;
bool HLT_AK8PFHT900_TrimMass50;

TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;
TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;
TBranch        *b_HLT_PFMET130_PFMHT130_IDTight;
TBranch        *b_HLT_PFMET140_PFMHT140_IDTight;
TBranch        *b_HLT_Mu50;
TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;
TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;

bool        HLT_PFMET110_PFMHT110_IDTight;
bool        HLT_PFMET120_PFMHT120_IDTight;
bool        HLT_PFMET130_PFMHT130_IDTight;
bool        HLT_PFMET140_PFMHT140_IDTight;
bool        HLT_Mu50;
bool        HLT_Ele115_CaloIdVT_GsfTrkIdT;
bool        HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;




Int_t PV_npvs;
TBranch *b_PV_npvs;

TBranch        *b_MET_T1Smear_phi_XYcorr;
Float_t MET_T1Smear_phi_XYcorr;
TBranch        *b_MET_T1Smear_pt_XYcorr;
Float_t MET_T1Smear_pt_XYcorr;

std::vector<float> Jet_pt_out;
std::vector<float> Jet_eta_out;
std::vector<float> Jet_phi_out;
std::vector<float> Jet_mass_out;
std::vector<float> Jet_btagDeepFlavB_out;
std::vector<int> Jet_jetId_out;
std::vector<int> Jet_hadronFlavour_out;
//Load genH information.


// vector branches
float Jet_pt_nom_[NJET_MAX];
vector<float> v_Jet_pt_nom_;
TBranch *b_Jet_pt_nom_;

float Jet_mass_nom_[NJET_MAX];
vector<float> v_Jet_mass_nom_;
TBranch *b_Jet_mass_nom_;



float GenPart_eta_[NGENPART_MAX];
vector<float> v_GenPart_eta_;
TBranch *b_GenPart_eta_;
    
int GenPart_genPartIdxMother_[NGENPART_MAX];
vector<int> v_GenPart_genPartIdxMother_;
TBranch *b_GenPart_genPartIdxMother_;
    
float GenPart_mass_[NGENPART_MAX];
vector<float> v_GenPart_mass_;
TBranch *b_GenPart_mass_;
    
int GenPart_pdgId_[NGENPART_MAX];
vector<int> v_GenPart_pdgId_;
TBranch *b_GenPart_pdgId_;
    
float GenPart_phi_[NGENPART_MAX];
vector<float> v_GenPart_phi_;
TBranch *b_GenPart_phi_;
    
float GenPart_pt_[NGENPART_MAX];
vector<float> v_GenPart_pt_;
TBranch *b_GenPart_pt_;
    
int GenPart_status_[NGENPART_MAX];
vector<int> v_GenPart_status_;
TBranch *b_GenPart_status_;
    
int GenPart_statusFlags_[NGENPART_MAX];
vector<int> v_GenPart_statusFlags_;
TBranch *b_GenPart_statusFlags_;


// for fatJets

float FatJet_msoftdrop_raw_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_raw_;
TBranch *b_FatJet_msoftdrop_raw_;

float FatJet_msoftdrop_nom_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_nom_;
TBranch *b_FatJet_msoftdrop_nom_;

float FatJet_msoftdrop_corr_JMR_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_corr_JMR_;
TBranch *b_FatJet_msoftdrop_corr_JMR_;

float FatJet_msoftdrop_corr_JMS_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_corr_JMS_;
TBranch *b_FatJet_msoftdrop_corr_JMS_;

float FatJet_msoftdrop_corr_PUPPI_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_corr_PUPPI_;
TBranch *b_FatJet_msoftdrop_corr_PUPPI_;

float FatJet_ParticleNetMDraw_probQCDb_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probQCDb_;
TBranch *b_FatJet_ParticleNetMDraw_probQCDb_;

float FatJet_ParticleNetMDraw_probQCDbb_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probQCDbb_;
TBranch *b_FatJet_ParticleNetMDraw_probQCDbb_;

float FatJet_ParticleNetMDraw_probQCDc_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probQCDc_;
TBranch *b_FatJet_ParticleNetMDraw_probQCDc_;

float FatJet_ParticleNetMDraw_probQCDcc_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probQCDcc_;
TBranch *b_FatJet_ParticleNetMDraw_probQCDcc_;

float FatJet_ParticleNetMDraw_probQCDothers_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probQCDothers_;
TBranch *b_FatJet_ParticleNetMDraw_probQCDothers_;

float FatJet_ParticleNetMDraw_probXbb_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probXbb_;
TBranch *b_FatJet_ParticleNetMDraw_probXbb_;

float FatJet_ParticleNetMDraw_probXcc_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probXcc_;
TBranch *b_FatJet_ParticleNetMDraw_probXcc_;

float FatJet_ParticleNetMDraw_probXqq_[NFATJET_MAX];
vector<float> v_FatJet_ParticleNetMDraw_probXqq_;
TBranch *b_FatJet_ParticleNetMDraw_probXqq_;

float FatJet_pt_nom_[NFATJET_MAX];
vector<float> v_FatJet_pt_nom_;
TBranch *b_FatJet_pt_nom_;



int FatJet_jetId_[NFATJET_MAX];
vector<int> v_FatJet_jetId_;
TBranch *b_FatJet_jetId_ = 0;

float FatJet_pt_[NFATJET_MAX];
vector<float> v_FatJet_pt_;
TBranch *b_FatJet_pt_ = 0;
    
float FatJet_eta_[NFATJET_MAX];
vector<float> v_FatJet_eta_;
TBranch *b_FatJet_eta_;
    
float FatJet_phi_[NFATJET_MAX];
vector<float> v_FatJet_phi_;
TBranch *b_FatJet_phi_;
    
float FatJet_msoftdrop_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_;
TBranch *b_FatJet_msoftdrop_;

// Add JES, JER up and down branch on 26/2/2024
float FatJet_msoftdrop_jesTotalUp_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_jesTotalUp_;
TBranch *b_FatJet_msoftdrop_jesTotalUp_;

float FatJet_msoftdrop_jesTotalDown_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_jesTotalDown_;
TBranch *b_FatJet_msoftdrop_jesTotalDown_;

float FatJet_msoftdrop_jerUp_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_jerUp_;
TBranch *b_FatJet_msoftdrop_jerUp_;

float FatJet_msoftdrop_jerDown_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_jerDown_;
TBranch *b_FatJet_msoftdrop_jerDown_;


// Add JES, JER up and down branch on 26/2/2024, over


float FatJet_deepTagMD_probHbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHbb_;
TBranch *b_FatJet_deepTagMD_probHbb_;
    
float FatJet_deepTagMD_probHcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHcc_;
TBranch *b_FatJet_deepTagMD_probHcc_;
    
float FatJet_deepTagMD_probHqqqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHqqqq_;
TBranch *b_FatJet_deepTagMD_probHqqqq_;
    
float FatJet_deepTagMD_probQCDb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDb_;
TBranch *b_FatJet_deepTagMD_probQCDb_;
    
float FatJet_deepTagMD_probQCDbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDbb_;
TBranch *b_FatJet_deepTagMD_probQCDbb_;
    
float FatJet_deepTagMD_probQCDc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDc_;
TBranch *b_FatJet_deepTagMD_probQCDc_;
    
float FatJet_deepTagMD_probQCDcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDcc_;
TBranch *b_FatJet_deepTagMD_probQCDcc_;
    
float FatJet_deepTagMD_probQCDothers_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDothers_;
TBranch *b_FatJet_deepTagMD_probQCDothers_;
    
float FatJet_deepTagMD_probTbc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbc_;
TBranch *b_FatJet_deepTagMD_probTbc_;
    
float FatJet_deepTagMD_probTbcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbcq_;
TBranch *b_FatJet_deepTagMD_probTbcq_;
    
float FatJet_deepTagMD_probTbq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbq_;
TBranch *b_FatJet_deepTagMD_probTbq_;
    
float FatJet_deepTagMD_probTbqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbqq_;
TBranch *b_FatJet_deepTagMD_probTbqq_;
    
float FatJet_deepTagMD_probWcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probWcq_;
TBranch *b_FatJet_deepTagMD_probWcq_;
    
float FatJet_deepTagMD_probWqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probWqq_;
TBranch *b_FatJet_deepTagMD_probWqq_;
    
float FatJet_deepTagMD_probZbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZbb_;
TBranch *b_FatJet_deepTagMD_probZbb_;
    
float FatJet_deepTagMD_probZcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZcc_;
TBranch *b_FatJet_deepTagMD_probZcc_;
    
float FatJet_deepTagMD_probZqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZqq_;
TBranch *b_FatJet_deepTagMD_probZqq_;
    
float FatJet_deepTag_probHbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHbb_;
TBranch *b_FatJet_deepTag_probHbb_;
    
float FatJet_deepTag_probHcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHcc_;
TBranch *b_FatJet_deepTag_probHcc_;
    
float FatJet_deepTag_probHqqqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHqqqq_;
TBranch *b_FatJet_deepTag_probHqqqq_;
    
float FatJet_deepTag_probQCDb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDb_;
TBranch *b_FatJet_deepTag_probQCDb_;
    
float FatJet_deepTag_probQCDbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDbb_;
TBranch *b_FatJet_deepTag_probQCDbb_;
    
float FatJet_deepTag_probQCDc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDc_;
TBranch *b_FatJet_deepTag_probQCDc_;
    
float FatJet_deepTag_probQCDcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDcc_;
TBranch *b_FatJet_deepTag_probQCDcc_;
    
float FatJet_deepTag_probQCDothers_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDothers_;
TBranch *b_FatJet_deepTag_probQCDothers_;
    
float FatJet_deepTag_probTbc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbc_;
TBranch *b_FatJet_deepTag_probTbc_;
    
float FatJet_deepTag_probTbcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbcq_;
TBranch *b_FatJet_deepTag_probTbcq_;
    
float FatJet_deepTag_probTbq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbq_;
TBranch *b_FatJet_deepTag_probTbq_;
    
float FatJet_deepTag_probTbqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbqq_;
TBranch *b_FatJet_deepTag_probTbqq_;
    
float FatJet_deepTag_probWcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probWcq_;
TBranch *b_FatJet_deepTag_probWcq_;
    
float FatJet_deepTag_probWqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probWqq_;
TBranch *b_FatJet_deepTag_probWqq_;
    
float FatJet_deepTag_probZbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZbb_;
TBranch *b_FatJet_deepTag_probZbb_;
    
float FatJet_deepTag_probZcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZcc_;
TBranch *b_FatJet_deepTag_probZcc_;
    
float FatJet_deepTag_probZqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZqq_;
TBranch *b_FatJet_deepTag_probZqq_;



// particle-net 

float FatJet_particleNetMD_QCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_QCD_;
TBranch *b_FatJet_particleNetMD_QCD_;
    
float FatJet_particleNetMD_Xbb_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xbb_;
TBranch *b_FatJet_particleNetMD_Xbb_;
    
float FatJet_particleNetMD_Xcc_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xcc_;
TBranch *b_FatJet_particleNetMD_Xcc_;
    
float FatJet_particleNetMD_Xqq_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xqq_;
TBranch *b_FatJet_particleNetMD_Xqq_;
    
float FatJet_particleNet_H4qvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_H4qvsQCD_;
TBranch *b_FatJet_particleNet_H4qvsQCD_;
    
float FatJet_particleNet_HbbvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_HbbvsQCD_;
TBranch *b_FatJet_particleNet_HbbvsQCD_;
    
float FatJet_particleNet_HccvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_HccvsQCD_;
TBranch *b_FatJet_particleNet_HccvsQCD_;
    
float FatJet_particleNet_QCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_QCD_;
TBranch *b_FatJet_particleNet_QCD_;
    
float FatJet_particleNet_TvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_TvsQCD_;
TBranch *b_FatJet_particleNet_TvsQCD_;
    
float FatJet_particleNet_WvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_WvsQCD_;
TBranch *b_FatJet_particleNet_WvsQCD_;
    
float FatJet_particleNet_ZvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_ZvsQCD_;
TBranch *b_FatJet_particleNet_ZvsQCD_;
    
float FatJet_particleNet_mass_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_mass_;
TBranch *b_FatJet_particleNet_mass_;

float FatJet_tau1_[NFATJET_MAX];
vector<float> v_FatJet_tau1_;
TBranch *b_FatJet_tau1_;

float FatJet_tau2_[NFATJET_MAX];
vector<float> v_FatJet_tau2_;
TBranch *b_FatJet_tau2_;

float FatJet_tau3_[NFATJET_MAX];
vector<float> v_FatJet_tau3_;
TBranch *b_FatJet_tau3_;

float FatJet_tau4_[NFATJET_MAX];
vector<float> v_FatJet_tau4_;
TBranch *b_FatJet_tau4_;



float Jet_btagDeepB_[NJET_MAX];
vector<float> v_Jet_btagDeepB_;
TBranch *b_Jet_btagDeepB_;
    
float Jet_btagDeepFlavB_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavB_;
TBranch *b_Jet_btagDeepFlavB_;
    
float Jet_btagDeepFlavCvB_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavCvB_;
TBranch *b_Jet_btagDeepFlavCvB_;
    
float Jet_btagDeepFlavCvL_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavCvL_;
TBranch *b_Jet_btagDeepFlavCvL_;
    
float Jet_btagDeepFlavQG_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavQG_;
TBranch *b_Jet_btagDeepFlavQG_;
    
float Jet_eta_[NJET_MAX];
vector<float> v_Jet_eta_;
TBranch *b_Jet_eta_;
    
int Jet_hadronFlavour_[NJET_MAX];
vector<int> v_Jet_hadronFlavour_;
TBranch *b_Jet_hadronFlavour_;
    
int Jet_jetId_[NJET_MAX];
vector<int> v_Jet_jetId_;
TBranch *b_Jet_jetId_;
    
float Jet_mass_[NJET_MAX];
vector<float> v_Jet_mass_;
TBranch *b_Jet_mass_;
    
float Jet_partonFlavour_[NJET_MAX];
vector<float> v_Jet_partonFlavour_;
TBranch *b_Jet_partonFlavour_;
    
float Jet_phi_[NJET_MAX];
vector<float> v_Jet_phi_;
TBranch *b_Jet_phi_;
    
float Jet_pt_[NJET_MAX];
vector<float> v_Jet_pt_;
TBranch *b_Jet_pt_;
    
float Jet_puId_[NJET_MAX];
vector<float> v_Jet_puId_;
TBranch *b_Jet_puId_;
    
float Jet_puIdDisc_[NJET_MAX];
vector<float> v_Jet_puIdDisc_;
TBranch *b_Jet_puIdDisc_;
    
float Jet_qgl_[NJET_MAX];
vector<float> v_Jet_qgl_;
TBranch *b_Jet_qgl_;
    
float Jet_rawFactor_[NJET_MAX];
vector<float> v_Jet_rawFactor_;
TBranch *b_Jet_rawFactor_;
    



//Added Tagger and Raw score developed by Dawei.

float FatJet_deepHWWMDV1_probHww3q_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHww3q_;
TBranch *b_FatJet_deepHWWMDV1_probHww3q_;

float FatJet_deepHWWMDV1_probHww4q_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHww4q_;
TBranch *b_FatJet_deepHWWMDV1_probHww4q_;

float FatJet_deepHWWMDV1_probHww4qvsQCD_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHww4qvsQCD_;
TBranch *b_FatJet_deepHWWMDV1_probHww4qvsQCD_;

float FatJet_deepHWWMDV1_probHww4q3qvsQCD_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_;
TBranch *b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_;


float FatJet_deepHWWMDV1_probHwwevqq_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHwwevqq_;
TBranch *b_FatJet_deepHWWMDV1_probHwwevqq_;

float FatJet_deepHWWMDV1_probHwwmvqq_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHwwmvqq_;
TBranch *b_FatJet_deepHWWMDV1_probHwwmvqq_;

float FatJet_deepHWWMDV1_probHwwhadtauvqq_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHwwhadtauvqq_;
TBranch *b_FatJet_deepHWWMDV1_probHwwhadtauvqq_;

float FatJet_deepHWWMDV1_probHwwleptauevqq_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHwwleptauevqq_;
TBranch *b_FatJet_deepHWWMDV1_probHwwleptauevqq_;

float FatJet_deepHWWMDV1_probHwwleptaumvqq_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probHwwleptaumvqq_;
TBranch *b_FatJet_deepHWWMDV1_probHwwleptaumvqq_;

float FatJet_deepHWWMDV1_probQCDb_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probQCDb_;
TBranch *b_FatJet_deepHWWMDV1_probQCDb_;

float FatJet_deepHWWMDV1_probQCDbb_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probQCDbb_;
TBranch *b_FatJet_deepHWWMDV1_probQCDbb_;

float FatJet_deepHWWMDV1_probQCDc_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probQCDc_;
TBranch *b_FatJet_deepHWWMDV1_probQCDc_;

float FatJet_deepHWWMDV1_probQCDcc_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probQCDcc_;
TBranch *b_FatJet_deepHWWMDV1_probQCDcc_;

float FatJet_deepHWWMDV1_probQCDothers_[NFATJET_MAX];
vector<float>v_FatJet_deepHWWMDV1_probQCDothers_;
TBranch *b_FatJet_deepHWWMDV1_probQCDothers_;


float FatJet_inclParTMDV1_probHWqqWqq0c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWqq1c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWqq2c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWq0c_    [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWq1c_    [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWq2c_    [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWev0c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWev1c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWmv0c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWmv1c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtauev0c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtauev1c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtaumv0c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtaumv1c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtauhv0c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHWqqWtauhv1c_[NFATJET_MAX];
float FatJet_inclParTMDV1_probHbb_         [NFATJET_MAX];
float FatJet_inclParTMDV1_probHcc_         [NFATJET_MAX];
float FatJet_inclParTMDV1_probHss_         [NFATJET_MAX];
float FatJet_inclParTMDV1_probHqq_         [NFATJET_MAX];
float FatJet_inclParTMDV1_probHtauhtaue_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHtauhtaum_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probHtauhtauh_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probQCDbb_       [NFATJET_MAX];
float FatJet_inclParTMDV1_probQCDcc_       [NFATJET_MAX];
float FatJet_inclParTMDV1_probQCDb_        [NFATJET_MAX];
float FatJet_inclParTMDV1_probQCDc_        [NFATJET_MAX];
float FatJet_inclParTMDV1_probQCDothers_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWqq0c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWqq1c_   [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWq0c_    [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWq1c_    [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWev_     [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWmv_     [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWtauhv_  [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWtauev_  [NFATJET_MAX];
float FatJet_inclParTMDV1_probTopbWtaumv_  [NFATJET_MAX];

 //Define hidden neurons.

vector<float> v_FatJet_inclParTMDV1_probHWqqWqq0c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWqq1c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWqq2c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWq0c_    ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWq1c_    ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWq2c_    ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWev0c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWev1c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWmv0c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWmv1c_   ;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtauev0c_;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtauev1c_;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtaumv0c_;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtaumv1c_;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtauhv0c_;
vector<float> v_FatJet_inclParTMDV1_probHWqqWtauhv1c_;
vector<float> v_FatJet_inclParTMDV1_probHbb_         ;
vector<float> v_FatJet_inclParTMDV1_probHcc_         ;
vector<float> v_FatJet_inclParTMDV1_probHss_         ;
vector<float> v_FatJet_inclParTMDV1_probHqq_         ;
vector<float> v_FatJet_inclParTMDV1_probHtauhtaue_   ;
vector<float> v_FatJet_inclParTMDV1_probHtauhtaum_   ;
vector<float> v_FatJet_inclParTMDV1_probHtauhtauh_   ;
vector<float> v_FatJet_inclParTMDV1_probQCDbb_       ;
vector<float> v_FatJet_inclParTMDV1_probQCDcc_       ;
vector<float> v_FatJet_inclParTMDV1_probQCDb_        ;
vector<float> v_FatJet_inclParTMDV1_probQCDc_        ;
vector<float> v_FatJet_inclParTMDV1_probQCDothers_   ;
vector<float> v_FatJet_inclParTMDV1_probTopbWqq0c_   ;
vector<float> v_FatJet_inclParTMDV1_probTopbWqq1c_   ;
vector<float> v_FatJet_inclParTMDV1_probTopbWq0c_    ;
vector<float> v_FatJet_inclParTMDV1_probTopbWq1c_    ;
vector<float> v_FatJet_inclParTMDV1_probTopbWev_     ;
vector<float> v_FatJet_inclParTMDV1_probTopbWmv_     ;
vector<float> v_FatJet_inclParTMDV1_probTopbWtauhv_  ;
vector<float> v_FatJet_inclParTMDV1_probTopbWtauev_  ;
vector<float> v_FatJet_inclParTMDV1_probTopbWtaumv_  ;



TBranch *b_FatJet_inclParTMDV1_probHWqqWqq0c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWqq1c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWqq2c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWq0c_     ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWq1c_     ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWq2c_     ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWev0c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWev1c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWmv0c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWmv1c_    ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtauev0c_ ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtauev1c_ ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtaumv0c_ ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtaumv1c_ ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtauhv0c_ ;
TBranch *b_FatJet_inclParTMDV1_probHWqqWtauhv1c_ ;
TBranch *b_FatJet_inclParTMDV1_probHbb_          ;
TBranch *b_FatJet_inclParTMDV1_probHcc_          ;
TBranch *b_FatJet_inclParTMDV1_probHss_          ;
TBranch *b_FatJet_inclParTMDV1_probHqq_          ;
TBranch *b_FatJet_inclParTMDV1_probHtauhtaue_    ;
TBranch *b_FatJet_inclParTMDV1_probHtauhtaum_    ;
TBranch *b_FatJet_inclParTMDV1_probHtauhtauh_    ;
TBranch *b_FatJet_inclParTMDV1_probQCDbb_        ;
TBranch *b_FatJet_inclParTMDV1_probQCDcc_        ;
TBranch *b_FatJet_inclParTMDV1_probQCDb_         ;
TBranch *b_FatJet_inclParTMDV1_probQCDc_         ;
TBranch *b_FatJet_inclParTMDV1_probQCDothers_    ;
TBranch *b_FatJet_inclParTMDV1_probTopbWqq0c_    ;
TBranch *b_FatJet_inclParTMDV1_probTopbWqq1c_    ;
TBranch *b_FatJet_inclParTMDV1_probTopbWq0c_     ;
TBranch *b_FatJet_inclParTMDV1_probTopbWq1c_     ;
TBranch *b_FatJet_inclParTMDV1_probTopbWev_      ;
TBranch *b_FatJet_inclParTMDV1_probTopbWmv_      ;
TBranch *b_FatJet_inclParTMDV1_probTopbWtauhv_   ;
TBranch *b_FatJet_inclParTMDV1_probTopbWtauev_   ;
TBranch *b_FatJet_inclParTMDV1_probTopbWtaumv_   ;

//Ended Dawei's tagger part.

float FatJet_particleNetMD_QCD_1;
float FatJet_particleNetMD_QCD_2;
float FatJet_particleNetMD_QCD_3;
    
float FatJet_particleNetMD_Xbb_1;
float FatJet_particleNetMD_Xbb_2;
float FatJet_particleNetMD_Xbb_3;
    
float FatJet_particleNetMD_Xcc_1;
float FatJet_particleNetMD_Xcc_2;
float FatJet_particleNetMD_Xcc_3;
    
float FatJet_particleNetMD_Xqq_1;
float FatJet_particleNetMD_Xqq_2;
float FatJet_particleNetMD_Xqq_3;
    
float FatJet_particleNet_H4qvsQCD_1;
float FatJet_particleNet_H4qvsQCD_2;
float FatJet_particleNet_H4qvsQCD_3;
    
float FatJet_particleNet_HbbvsQCD_1;
float FatJet_particleNet_HbbvsQCD_2;
float FatJet_particleNet_HbbvsQCD_3;
    
float FatJet_particleNet_HccvsQCD_1;
float FatJet_particleNet_HccvsQCD_2;
float FatJet_particleNet_HccvsQCD_3;
    
float FatJet_particleNet_QCD_1;
float FatJet_particleNet_QCD_2;
float FatJet_particleNet_QCD_3;
    
float FatJet_particleNet_TvsQCD_1;
float FatJet_particleNet_TvsQCD_2;
float FatJet_particleNet_TvsQCD_3;
    
float FatJet_particleNet_WvsQCD_1;
float FatJet_particleNet_WvsQCD_2;
float FatJet_particleNet_WvsQCD_3;
    
float FatJet_particleNet_ZvsQCD_1;
float FatJet_particleNet_ZvsQCD_2;
float FatJet_particleNet_ZvsQCD_3;
    
float FatJet_particleNet_mass_1;
float FatJet_particleNet_mass_2;
float FatJet_particleNet_mass_3;

//Strat hidden neurons.


//End hidden neurons.


float FatJet_deepTagMD_probHbb_1;
float FatJet_deepTagMD_probHbb_2;
float FatJet_deepTagMD_probHbb_3;
float FatJet_deepTagMD_probHcc_1;
float FatJet_deepTagMD_probHcc_2;
float FatJet_deepTagMD_probHcc_3;
float FatJet_deepTagMD_probHqqqq_1;
float FatJet_deepTagMD_probHqqqq_2;
float FatJet_deepTagMD_probHqqqq_3;
float FatJet_deepTagMD_probQCDb_1;
float FatJet_deepTagMD_probQCDb_2;
float FatJet_deepTagMD_probQCDb_3;
float FatJet_deepTagMD_probQCDbb_1;
float FatJet_deepTagMD_probQCDbb_2;
float FatJet_deepTagMD_probQCDbb_3;
float FatJet_deepTagMD_probQCDc_1;
float FatJet_deepTagMD_probQCDc_2;
float FatJet_deepTagMD_probQCDc_3;
float FatJet_deepTagMD_probQCDcc_1;
float FatJet_deepTagMD_probQCDcc_2;
float FatJet_deepTagMD_probQCDcc_3;
float FatJet_deepTagMD_probQCDothers_1;
float FatJet_deepTagMD_probQCDothers_2;
float FatJet_deepTagMD_probQCDothers_3;
float FatJet_deepTagMD_probTbc_1;
float FatJet_deepTagMD_probTbc_2;
float FatJet_deepTagMD_probTbc_3;
float FatJet_deepTagMD_probTbcq_1;
float FatJet_deepTagMD_probTbcq_2;
float FatJet_deepTagMD_probTbcq_3;
float FatJet_deepTagMD_probTbq_1;
float FatJet_deepTagMD_probTbq_2;
float FatJet_deepTagMD_probTbq_3;
float FatJet_deepTagMD_probTbqq_1;
float FatJet_deepTagMD_probTbqq_2;
float FatJet_deepTagMD_probTbqq_3;
float FatJet_deepTagMD_probWcq_1;
float FatJet_deepTagMD_probWcq_2;
float FatJet_deepTagMD_probWcq_3;
float FatJet_deepTagMD_probWqq_1;
float FatJet_deepTagMD_probWqq_2;
float FatJet_deepTagMD_probWqq_3;
float FatJet_deepTagMD_probZbb_1;
float FatJet_deepTagMD_probZbb_2;
float FatJet_deepTagMD_probZbb_3;
float FatJet_deepTagMD_probZcc_1;
float FatJet_deepTagMD_probZcc_2;
float FatJet_deepTagMD_probZcc_3;
float FatJet_deepTagMD_probZqq_1;
float FatJet_deepTagMD_probZqq_2;
float FatJet_deepTagMD_probZqq_3;
float FatJet_deepTag_probHbb_1;
float FatJet_deepTag_probHbb_2;
float FatJet_deepTag_probHbb_3;
float FatJet_deepTag_probHcc_1;
float FatJet_deepTag_probHcc_2;
float FatJet_deepTag_probHcc_3;
float FatJet_deepTag_probHqqqq_1;
float FatJet_deepTag_probHqqqq_2;
float FatJet_deepTag_probHqqqq_3;
float FatJet_deepTag_probQCDb_1;
float FatJet_deepTag_probQCDb_2;
float FatJet_deepTag_probQCDb_3;
float FatJet_deepTag_probQCDbb_1;
float FatJet_deepTag_probQCDbb_2;
float FatJet_deepTag_probQCDbb_3;
float FatJet_deepTag_probQCDc_1;
float FatJet_deepTag_probQCDc_2;
float FatJet_deepTag_probQCDc_3;
float FatJet_deepTag_probQCDcc_1;
float FatJet_deepTag_probQCDcc_2;
float FatJet_deepTag_probQCDcc_3;
float FatJet_deepTag_probQCDothers_1;
float FatJet_deepTag_probQCDothers_2;
float FatJet_deepTag_probQCDothers_3;
float FatJet_deepTag_probTbc_1;
float FatJet_deepTag_probTbc_2;
float FatJet_deepTag_probTbc_3;
float FatJet_deepTag_probTbcq_1;
float FatJet_deepTag_probTbcq_2;
float FatJet_deepTag_probTbcq_3;
float FatJet_deepTag_probTbq_1;
float FatJet_deepTag_probTbq_2;
float FatJet_deepTag_probTbq_3;
float FatJet_deepTag_probTbqq_1;
float FatJet_deepTag_probTbqq_2;
float FatJet_deepTag_probTbqq_3;
float FatJet_deepTag_probWcq_1;
float FatJet_deepTag_probWcq_2;
float FatJet_deepTag_probWcq_3;
float FatJet_deepTag_probWqq_1;
float FatJet_deepTag_probWqq_2;
float FatJet_deepTag_probWqq_3;
float FatJet_deepTag_probZbb_1;
float FatJet_deepTag_probZbb_2;
float FatJet_deepTag_probZbb_3;
float FatJet_deepTag_probZcc_1;
float FatJet_deepTag_probZcc_2;
float FatJet_deepTag_probZcc_3;
float FatJet_deepTag_probZqq_1;
float FatJet_deepTag_probZqq_2;
float FatJet_deepTag_probZqq_3;





// Declaration of leaf types
// gKK 21.9.25
float DPhi_MET_j1;
float DPhi_MET_j2;
float DPhi_MET_j3;

float Mc_j1;
float Mc_j2;
float Mc_j3;

float Mc2_j1;
float Mc2_j2;

float MT1;
float MT2;
float MT3;
float MTdPhi_1;
float MTdPhi_2;

float Max_ptO_AK8;
float Min_ptO_AK8;
float Mid_ptO_AK8;
float Wa_ptO_AK8;
float Wc_ptO_AK8;
float Wb_ptO_AK8;
float WHa_ptO_AK8;
float WHc_ptO_AK8;
float WHb_ptO_AK8;
float Wa_MO_AK8;
float Wc_MO_AK8;
float Wb_MO_AK8;
float WHa_MO_AK8;
float WHc_MO_AK8;
float WHb_MO_AK8;

float DPhi_j12;
float DPhi_j13;
float DPhi_j23;
float DEta_j12;
float DEta_j13;
float DEta_j23;
float DR_j12;
float DR_j13;
float DR_j23;
float M2J_j12;
float M2J_j13;
float M2J_j23;

float DPhi_jmaxmin;
float DPhi_jmaxmid;
float DPhi_jmidmin;
float DEta_jmaxmin;
float DEta_jmaxmid;
float DEta_jmidmin;
float DR_jmaxmin;
float DR_jmaxmid;
float DR_jmidmin;
float M2J_jmaxmin;
float M2J_jmaxmid;
float M2J_jmidmin;

// define output var
Float_t Mj_corr_Pneta;
Float_t Mj_corr_Pnetb;
Float_t Mj_corr_Pnetc;
Float_t Mj_corr_a;
Float_t Mj_corr_b;
Float_t Mj_corr_c;
Float_t Mj_corr_HWWa;
Float_t Mj_corr_HWWb;
Float_t Mj_corr_HWWc;
Float_t Mj_corr_max;
Float_t Mj_corr_mid;
Float_t Mj_corr_min;
Float_t Mj_corr;
Float_t Mj_corr_2;
Float_t Mj_corr_3;


float Mj_a , Mj_b , Mj_c;
float PTj_a, PTj_b, PTj_c;
float Etaj_a, Etaj_b, Etaj_c;
float Phij_a, Phij_b, Phij_c;

float Mj_HWWa , Mj_HWWb , Mj_HWWc;
float PTj_HWWa, PTj_HWWb, PTj_HWWc;
float Etaj_HWWa, Etaj_HWWb, Etaj_HWWc;
float Phij_HWWa, Phij_HWWb, Phij_HWWc;

float Mj_Pneta , Mj_Pnetb , Mj_Pnetc;
float PTj_Pneta, PTj_Pnetb, PTj_Pnetc;
float Etaj_Pneta, Etaj_Pnetb, Etaj_Pnetc;
float Phij_Pneta, Phij_Pnetb, Phij_Pnetc;

float PartNet_MD_W_Pneta, PartNet_MD_W_Pnetb, PartNet_MD_W_Pnetc;

Float_t dnnDecorr_probTbcq_Pnetc;
Float_t dnnDecorr_probTbqq_Pnetc;
Float_t dnnDecorr_probTbc_Pnetc;
Float_t dnnDecorr_probTbq_Pnetc;
Float_t dnnDecorr_probWcq_Pnetc;
Float_t dnnDecorr_probWqq_Pnetc;
Float_t dnnDecorr_probZbb_Pnetc;
Float_t dnnDecorr_probZcc_Pnetc;
Float_t dnnDecorr_probZqq_Pnetc;
Float_t dnnDecorr_probHbb_Pnetc;
Float_t dnnDecorr_probHcc_Pnetc;
Float_t dnnDecorr_probHqqqq_Pnetc;
Float_t dnnDecorr_probQCDbb_Pnetc;
Float_t dnnDecorr_probQCDcc_Pnetc;
Float_t dnnDecorr_probQCDb_Pnetc;
Float_t dnnDecorr_probQCDc_Pnetc;
Float_t dnnDecorr_probQCDothers_Pnetc;


Float_t FatJet_tau1_Pneta;
Float_t FatJet_tau2_Pneta;
Float_t FatJet_tau3_Pneta;
Float_t FatJet_tau4_Pneta;
Float_t FatJet_tau1_Pnetb;
Float_t FatJet_tau2_Pnetb;
Float_t FatJet_tau3_Pnetb;
Float_t FatJet_tau4_Pnetb;
Float_t FatJet_tau1_Pnetc;
Float_t FatJet_tau2_Pnetc;
Float_t FatJet_tau3_Pnetc;
Float_t FatJet_tau4_Pnetc;





float dnn_probTbcq_a, dnn_probTbcq_b, dnn_probTbcq_c;
float dnn_probTbqq_a, dnn_probTbqq_b, dnn_probTbqq_c;
float dnn_probTbc_a, dnn_probTbc_b, dnn_probTbc_c;
float dnn_probTbq_a, dnn_probTbq_b, dnn_probTbq_c;
float dnn_probWcq_a, dnn_probWcq_b, dnn_probWcq_c;
float dnn_probWqq_a, dnn_probWqq_b, dnn_probWqq_c;
float dnn_probZbb_a, dnn_probZbb_b, dnn_probZbb_c;
float dnn_probZcc_a, dnn_probZcc_b, dnn_probZcc_c;
float dnn_probZqq_a, dnn_probZqq_b, dnn_probZqq_c;
float dnn_probHbb_a, dnn_probHbb_b, dnn_probHbb_c;
float dnn_probHcc_a, dnn_probHcc_b, dnn_probHcc_c;
float dnn_probHqqqq_a, dnn_probHqqqq_b, dnn_probHqqqq_c;
float dnn_probQCDbb_a, dnn_probQCDbb_b, dnn_probQCDbb_c;
float dnn_probQCDcc_a, dnn_probQCDcc_b, dnn_probQCDcc_c;
float dnn_probQCDb_a, dnn_probQCDb_b, dnn_probQCDb_c;
float dnn_probQCDc_a, dnn_probQCDc_b, dnn_probQCDc_c;
float dnn_probQCDothers_a, dnn_probQCDothers_b, dnn_probQCDothers_c;
float dnnDecorr_probTbcq_a, dnnDecorr_probTbcq_b, dnnDecorr_probTbcq_c;
float dnnDecorr_probTbqq_a, dnnDecorr_probTbqq_b, dnnDecorr_probTbqq_c;
float dnnDecorr_probTbc_a, dnnDecorr_probTbc_b, dnnDecorr_probTbc_c;
float dnnDecorr_probTbq_a, dnnDecorr_probTbq_b, dnnDecorr_probTbq_c;
float dnnDecorr_probWcq_a, dnnDecorr_probWcq_b, dnnDecorr_probWcq_c;
float dnnDecorr_probWqq_a, dnnDecorr_probWqq_b, dnnDecorr_probWqq_c;
float dnnDecorr_probZbb_a, dnnDecorr_probZbb_b, dnnDecorr_probZbb_c;
float dnnDecorr_probZcc_a, dnnDecorr_probZcc_b, dnnDecorr_probZcc_c;
float dnnDecorr_probZqq_a, dnnDecorr_probZqq_b, dnnDecorr_probZqq_c;
float dnnDecorr_probHbb_a, dnnDecorr_probHbb_b, dnnDecorr_probHbb_c;
float dnnDecorr_probHcc_a, dnnDecorr_probHcc_b, dnnDecorr_probHcc_c;
float dnnDecorr_probHqqqq_a, dnnDecorr_probHqqqq_b, dnnDecorr_probHqqqq_c;
float dnnDecorr_probQCDbb_a, dnnDecorr_probQCDbb_b, dnnDecorr_probQCDbb_c;
float dnnDecorr_probQCDcc_a, dnnDecorr_probQCDcc_b, dnnDecorr_probQCDcc_c;
float dnnDecorr_probQCDb_a, dnnDecorr_probQCDb_b, dnnDecorr_probQCDb_c;
float dnnDecorr_probQCDc_a, dnnDecorr_probQCDc_b, dnnDecorr_probQCDc_c;
float dnnDecorr_probQCDothers_a, dnnDecorr_probQCDothers_b, dnnDecorr_probQCDothers_c;


float dnnTop_a, dnnTop_b, dnnTop_c;
float dnnW_a, dnnW_b, dnnW_c;
float dnnH4q_a, dnnH4q_b, dnnH4q_c;
float dnnZ_a, dnnZ_b, dnnZ_c;
float dnnZbb_a, dnnZbb_b, dnnZbb_c;
float dnnHbb_a, dnnHbb_b, dnnHbb_c;
float dnnDecorrTop_a, dnnDecorrTop_b, dnnDecorrTop_c;
float dnnDecorrW_a, dnnDecorrW_b, dnnDecorrW_c;
float dnnDecorrH4q_a, dnnDecorrH4q_b, dnnDecorrH4q_c;
float dnnDecorrZ_a, dnnDecorrZ_b, dnnDecorrZ_c;
float dnnDecorrZbb_a, dnnDecorrZbb_b, dnnDecorrZbb_c;
float dnnDecorrHbb_a, dnnDecorrHbb_b, dnnDecorrHbb_c;
float dnnDecorrbb_a, dnnDecorrbb_b, dnnDecorrbb_c;
float dnnDecorrcc_a, dnnDecorrcc_b, dnnDecorrcc_c;
float dnnDecorrbbnog_a, dnnDecorrbbnog_b, dnnDecorrbbnog_c;
float dnnDecorrccnog_a, dnnDecorrccnog_b, dnnDecorrccnog_c;
float dnnqcd_a, dnnqcd_b, dnnqcd_c;
float dnntop_a, dnntop_b, dnntop_c;
float dnnw_a, dnnw_b, dnnw_c;
float dnnz_a, dnnz_b, dnnz_c;
float dnnzbb_a, dnnzbb_b, dnnzbb_c;
float dnnhbb_a, dnnhbb_b, dnnhbb_c;
float dnnh4q_a, dnnh4q_b, dnnh4q_c;
float dnnDecorrqcd_a, dnnDecorrqcd_b, dnnDecorrqcd_c;
float dnnDecorrtop_a, dnnDecorrtop_b, dnnDecorrtop_c;
float dnnDecorrw_a, dnnDecorrw_b, dnnDecorrw_c;
float dnnDecorrz_a, dnnDecorrz_b, dnnDecorrz_c;
float dnnDecorrzbb_a, dnnDecorrzbb_b, dnnDecorrzbb_c;
float dnnDecorrhbb_a, dnnDecorrhbb_b, dnnDecorrhbb_c;
float dnnDecorrh4q_a, dnnDecorrh4q_b, dnnDecorrh4q_c;


//HWW tagger.
float    deepHWW_probHww3q_a;    
float    deepHWW_probHww4q_a;    
float    deepHWW_probHww4q3qvsQCD_a ;
float    deepHWW_probHww4qvsQCD_a;   
float    deepHWW_probHwwevqq_a;
float    deepHWW_probHwwmvqq_a;  
float    deepHWW_probHwwhadtauvqq_a;
float    deepHWW_probHwwleptauevqq_a;
float    deepHWW_probHwwleptaumvqq_a;
float    deepHWW_probQCDc_a;          
float    deepHWW_probQCDcc_a;        
float    deepHWW_probQCDb_a;          
float    deepHWW_probQCDbb_a;         
float    deepHWW_probQCDothers_a;     
float    deepHWW_H4q_a;               
float    FatJet_tau1_HWW_a;           
float    FatJet_tau2_HWW_a;           
float    FatJet_tau3_HWW_a;          
float    FatJet_tau4_HWW_a;       

float    deepHWW_probHww3q_b;    
float    deepHWW_probHww4q_b;    
float    deepHWW_probHww4q3qvsQCD_b ;
float    deepHWW_probHww4qvsQCD_b;   
float    deepHWW_probHwwevqq_b;
float    deepHWW_probHwwmvqq_b;  
float    deepHWW_probHwwhadtauvqq_b;
float    deepHWW_probHwwleptauevqq_b;
float    deepHWW_probHwwleptaumvqq_b;
float    deepHWW_probQCDc_b;          
float    deepHWW_probQCDcc_b;        
float    deepHWW_probQCDb_b;          
float    deepHWW_probQCDbb_b;         
float    deepHWW_probQCDothers_b;     
float    deepHWW_H4q_b;               
float    FatJet_tau1_HWW_b;           
float    FatJet_tau2_HWW_b;           
float    FatJet_tau3_HWW_b;          
float    FatJet_tau4_HWW_b;       

float    deepHWW_probHww3q_c;    
float    deepHWW_probHww4q_c;    
float    deepHWW_probHww4q3qvsQCD_c ;
float    deepHWW_probHww4qvsQCD_c;   
float    deepHWW_probHwwevqq_c;
float    deepHWW_probHwwmvqq_c;  
float    deepHWW_probHwwhadtauvqq_c;
float    deepHWW_probHwwleptauevqq_c;
float    deepHWW_probHwwleptaumvqq_c;
float    deepHWW_probQCDc_c;          
float    deepHWW_probQCDcc_c;        
float    deepHWW_probQCDb_c;          
float    deepHWW_probQCDbb_c;         
float    deepHWW_probQCDothers_c;     
float    deepHWW_H4q_c;               
float    FatJet_tau1_HWW_c;           
float    FatJet_tau2_HWW_c;           
float    FatJet_tau3_HWW_c;          
float    FatJet_tau4_HWW_c;       

float deepHWWMDV1_H4qvsQCD_a,deepHWWMDV1_H4q3qvsQCD_a,deepHWWMDV1_HevqqvsQCD_a,deepHWWMDV1_HmvqqvsQCD_a,deepHWWMDV1_HtauevqqvsQCD_a,deepHWWMDV1_HtaumvqqvsQCD_a,deepHWWMDV1_HhadtauvqqvsQCD_a;
float deepHWWMDV1_H4qvsQCD_b,deepHWWMDV1_H4q3qvsQCD_b,deepHWWMDV1_HevqqvsQCD_b,deepHWWMDV1_HmvqqvsQCD_b,deepHWWMDV1_HtauevqqvsQCD_b,deepHWWMDV1_HtaumvqqvsQCD_b,deepHWWMDV1_HhadtauvqqvsQCD_b;
float deepHWWMDV1_H4qvsQCD_c,deepHWWMDV1_H4q3qvsQCD_c,deepHWWMDV1_HevqqvsQCD_c,deepHWWMDV1_HmvqqvsQCD_c,deepHWWMDV1_HtauevqqvsQCD_c,deepHWWMDV1_HtaumvqqvsQCD_c,deepHWWMDV1_HhadtauvqqvsQCD_c;
float deepHWWMDV1_HallvsQCD_a,deepHWWMDV1_HallvsQCD_b,deepHWWMDV1_HallvsQCD_c;

   // gKK deepW ordered
double Maxpt_AK4_deepflavor_probb;
double Maxpt_AK4_deepflavor_probc;
double Maxpt_AK4_deepflavor_probg;
double Maxpt_AK4_deepflavor_problepb;
double Maxpt_AK4_deepflavor_probbb;
double Maxpt_AK4_deepflavor_probuds;

Double_t        ak4jet_deepflavor_probb[15];
Double_t        ak4jet_deepflavor_probc[15];
Double_t        ak4jet_deepflavor_probg[15];
Double_t        ak4jet_deepflavor_problepb[15];
Double_t        ak4jet_deepflavor_probbb[15];
Double_t        ak4jet_deepflavor_probuds[15];


double    Pt_tag1;
double    Pt_tag2;
double    Pt_tag3;
double    Eta_tag1;
double    Eta_tag2;
double    Eta_tag3;
double    Phi_tag1;
double    Phi_tag2;
double    Phi_tag3;
double    Mass_tag1;
double    Mass_tag2;
double    Mass_tag3;
double    deepW_tag1;
double    deepW_tag2;
double    deepW_tag3;

double jetAK8puppi_dnn_probTbcq_tag1;
double jetAK8puppi_dnn_probTbcq_tag2;
double jetAK8puppi_dnn_probTbcq_tag3;
double jetAK8puppi_dnn_probTbqq_tag1;
double jetAK8puppi_dnn_probTbqq_tag2;
double jetAK8puppi_dnn_probTbqq_tag3;
double jetAK8puppi_dnn_probTbc_tag1;
double jetAK8puppi_dnn_probTbc_tag2;
double jetAK8puppi_dnn_probTbc_tag3;
double jetAK8puppi_dnn_probTbq_tag1;
double jetAK8puppi_dnn_probTbq_tag2;
double jetAK8puppi_dnn_probTbq_tag3;
double jetAK8puppi_dnn_probWcq_tag1;
double jetAK8puppi_dnn_probWcq_tag2;
double jetAK8puppi_dnn_probWcq_tag3;
double jetAK8puppi_dnn_probWqq_tag1;
double jetAK8puppi_dnn_probWqq_tag2;
double jetAK8puppi_dnn_probWqq_tag3;
double jetAK8puppi_dnn_probZbb_tag1;
double jetAK8puppi_dnn_probZbb_tag2;
double jetAK8puppi_dnn_probZbb_tag3;
double jetAK8puppi_dnn_probZcc_tag1;
double jetAK8puppi_dnn_probZcc_tag2;
double jetAK8puppi_dnn_probZcc_tag3;
double jetAK8puppi_dnn_probZqq_tag1;
double jetAK8puppi_dnn_probZqq_tag2;
double jetAK8puppi_dnn_probZqq_tag3;
double jetAK8puppi_dnn_probHbb_tag1;
double jetAK8puppi_dnn_probHbb_tag2;
double jetAK8puppi_dnn_probHbb_tag3;
double jetAK8puppi_dnn_probHcc_tag1;
double jetAK8puppi_dnn_probHcc_tag2;
double jetAK8puppi_dnn_probHcc_tag3;
double jetAK8puppi_dnn_probHqqqq_tag1;
double jetAK8puppi_dnn_probHqqqq_tag2;
double jetAK8puppi_dnn_probHqqqq_tag3;
double jetAK8puppi_dnn_probQCDbb_tag1;
double jetAK8puppi_dnn_probQCDbb_tag2;
double jetAK8puppi_dnn_probQCDbb_tag3;
double jetAK8puppi_dnn_probQCDcc_tag1;
double jetAK8puppi_dnn_probQCDcc_tag2;
double jetAK8puppi_dnn_probQCDcc_tag3;
double jetAK8puppi_dnn_probQCDb_tag1;
double jetAK8puppi_dnn_probQCDb_tag2;
double jetAK8puppi_dnn_probQCDb_tag3;
double jetAK8puppi_dnn_probQCDc_tag1;
double jetAK8puppi_dnn_probQCDc_tag2;
double jetAK8puppi_dnn_probQCDc_tag3;
double jetAK8puppi_dnn_probQCDothers_tag1;
double jetAK8puppi_dnn_probQCDothers_tag2;
double jetAK8puppi_dnn_probQCDothers_tag3;
double jetAK8puppi_dnnDecorr_probTbcq_tag1;
double jetAK8puppi_dnnDecorr_probTbcq_tag2;
double jetAK8puppi_dnnDecorr_probTbcq_tag3;
double jetAK8puppi_dnnDecorr_probTbqq_tag1;
double jetAK8puppi_dnnDecorr_probTbqq_tag2;
double jetAK8puppi_dnnDecorr_probTbqq_tag3;
double jetAK8puppi_dnnDecorr_probTbc_tag1;
double jetAK8puppi_dnnDecorr_probTbc_tag2;
double jetAK8puppi_dnnDecorr_probTbc_tag3;
double jetAK8puppi_dnnDecorr_probTbq_tag1;
double jetAK8puppi_dnnDecorr_probTbq_tag2;
double jetAK8puppi_dnnDecorr_probTbq_tag3;
double jetAK8puppi_dnnDecorr_probWcq_tag1;
double jetAK8puppi_dnnDecorr_probWcq_tag2;
double jetAK8puppi_dnnDecorr_probWcq_tag3;
double jetAK8puppi_dnnDecorr_probWqq_tag1;
double jetAK8puppi_dnnDecorr_probWqq_tag2;
double jetAK8puppi_dnnDecorr_probWqq_tag3;
double jetAK8puppi_dnnDecorr_probZbb_tag1;
double jetAK8puppi_dnnDecorr_probZbb_tag2;
double jetAK8puppi_dnnDecorr_probZbb_tag3;
double jetAK8puppi_dnnDecorr_probZcc_tag1;
double jetAK8puppi_dnnDecorr_probZcc_tag2;
double jetAK8puppi_dnnDecorr_probZcc_tag3;
double jetAK8puppi_dnnDecorr_probZqq_tag1;
double jetAK8puppi_dnnDecorr_probZqq_tag2;
double jetAK8puppi_dnnDecorr_probZqq_tag3;
double jetAK8puppi_dnnDecorr_probHbb_tag1;
double jetAK8puppi_dnnDecorr_probHbb_tag2;
double jetAK8puppi_dnnDecorr_probHbb_tag3;
double jetAK8puppi_dnnDecorr_probHcc_tag1;
double jetAK8puppi_dnnDecorr_probHcc_tag2;
double jetAK8puppi_dnnDecorr_probHcc_tag3;
double jetAK8puppi_dnnDecorr_probHqqqq_tag1;
double jetAK8puppi_dnnDecorr_probHqqqq_tag2;
double jetAK8puppi_dnnDecorr_probHqqqq_tag3;
double jetAK8puppi_dnnDecorr_probQCDbb_tag1;
double jetAK8puppi_dnnDecorr_probQCDbb_tag2;
double jetAK8puppi_dnnDecorr_probQCDbb_tag3;
double jetAK8puppi_dnnDecorr_probQCDcc_tag1;
double jetAK8puppi_dnnDecorr_probQCDcc_tag2;
double jetAK8puppi_dnnDecorr_probQCDcc_tag3;
double jetAK8puppi_dnnDecorr_probQCDb_tag1;
double jetAK8puppi_dnnDecorr_probQCDb_tag2;
double jetAK8puppi_dnnDecorr_probQCDb_tag3;
double jetAK8puppi_dnnDecorr_probQCDc_tag1;
double jetAK8puppi_dnnDecorr_probQCDc_tag2;
double jetAK8puppi_dnnDecorr_probQCDc_tag3;
double jetAK8puppi_dnnDecorr_probQCDothers_tag1;
double jetAK8puppi_dnnDecorr_probQCDothers_tag2;
double jetAK8puppi_dnnDecorr_probQCDothers_tag3;

   // gKK Mass ordered
double jetAK8puppi_dnn_probTbcq_max;
double jetAK8puppi_dnn_probTbcq_mid;
double jetAK8puppi_dnn_probTbcq_min;
double jetAK8puppi_dnn_probTbqq_max;
double jetAK8puppi_dnn_probTbqq_mid;
double jetAK8puppi_dnn_probTbqq_min;
double jetAK8puppi_dnn_probTbc_max;
double jetAK8puppi_dnn_probTbc_mid;
double jetAK8puppi_dnn_probTbc_min;
double jetAK8puppi_dnn_probTbq_max;
double jetAK8puppi_dnn_probTbq_mid;
double jetAK8puppi_dnn_probTbq_min;
double jetAK8puppi_dnn_probWcq_max;
double jetAK8puppi_dnn_probWcq_mid;
double jetAK8puppi_dnn_probWcq_min;
double jetAK8puppi_dnn_probWqq_max;
double jetAK8puppi_dnn_probWqq_mid;
double jetAK8puppi_dnn_probWqq_min;
double jetAK8puppi_dnn_probZbb_max;
double jetAK8puppi_dnn_probZbb_mid;
double jetAK8puppi_dnn_probZbb_min;
double jetAK8puppi_dnn_probZcc_max;
double jetAK8puppi_dnn_probZcc_mid;
double jetAK8puppi_dnn_probZcc_min;
double jetAK8puppi_dnn_probZqq_max;
double jetAK8puppi_dnn_probZqq_mid;
double jetAK8puppi_dnn_probZqq_min;
double jetAK8puppi_dnn_probHbb_max;
double jetAK8puppi_dnn_probHbb_mid;
double jetAK8puppi_dnn_probHbb_min;
double jetAK8puppi_dnn_probHcc_max;
double jetAK8puppi_dnn_probHcc_mid;
double jetAK8puppi_dnn_probHcc_min;
double jetAK8puppi_dnn_probHqqqq_max;
double jetAK8puppi_dnn_probHqqqq_mid;
double jetAK8puppi_dnn_probHqqqq_min;
double jetAK8puppi_dnn_probQCDbb_max;
double jetAK8puppi_dnn_probQCDbb_mid;
double jetAK8puppi_dnn_probQCDbb_min;
double jetAK8puppi_dnn_probQCDcc_max;
double jetAK8puppi_dnn_probQCDcc_mid;
double jetAK8puppi_dnn_probQCDcc_min;
double jetAK8puppi_dnn_probQCDb_max;
double jetAK8puppi_dnn_probQCDb_mid;
double jetAK8puppi_dnn_probQCDb_min;
double jetAK8puppi_dnn_probQCDc_max;
double jetAK8puppi_dnn_probQCDc_mid;
double jetAK8puppi_dnn_probQCDc_min;
double jetAK8puppi_dnn_probQCDothers_max;
double jetAK8puppi_dnn_probQCDothers_mid;
double jetAK8puppi_dnn_probQCDothers_min;
double jetAK8puppi_dnnDecorr_probTbcq_max;
double jetAK8puppi_dnnDecorr_probTbcq_mid;
double jetAK8puppi_dnnDecorr_probTbcq_min;
double jetAK8puppi_dnnDecorr_probTbqq_max;
double jetAK8puppi_dnnDecorr_probTbqq_mid;
double jetAK8puppi_dnnDecorr_probTbqq_min;
double jetAK8puppi_dnnDecorr_probTbc_max;
double jetAK8puppi_dnnDecorr_probTbc_mid;
double jetAK8puppi_dnnDecorr_probTbc_min;
double jetAK8puppi_dnnDecorr_probTbq_max;
double jetAK8puppi_dnnDecorr_probTbq_mid;
double jetAK8puppi_dnnDecorr_probTbq_min;
double jetAK8puppi_dnnDecorr_probWcq_max;
double jetAK8puppi_dnnDecorr_probWcq_mid;
double jetAK8puppi_dnnDecorr_probWcq_min;
double jetAK8puppi_dnnDecorr_probWqq_max;
double jetAK8puppi_dnnDecorr_probWqq_mid;
double jetAK8puppi_dnnDecorr_probWqq_min;
double jetAK8puppi_dnnDecorr_probZbb_max;
double jetAK8puppi_dnnDecorr_probZbb_mid;
double jetAK8puppi_dnnDecorr_probZbb_min;
double jetAK8puppi_dnnDecorr_probZcc_max;
double jetAK8puppi_dnnDecorr_probZcc_mid;
double jetAK8puppi_dnnDecorr_probZcc_min;
double jetAK8puppi_dnnDecorr_probZqq_max;
double jetAK8puppi_dnnDecorr_probZqq_mid;
double jetAK8puppi_dnnDecorr_probZqq_min;
double jetAK8puppi_dnnDecorr_probHbb_max;
double jetAK8puppi_dnnDecorr_probHbb_mid;
double jetAK8puppi_dnnDecorr_probHbb_min;
double jetAK8puppi_dnnDecorr_probHcc_max;
double jetAK8puppi_dnnDecorr_probHcc_mid;
double jetAK8puppi_dnnDecorr_probHcc_min;
double jetAK8puppi_dnnDecorr_probHqqqq_max;
double jetAK8puppi_dnnDecorr_probHqqqq_mid;
double jetAK8puppi_dnnDecorr_probHqqqq_min;
double jetAK8puppi_dnnDecorr_probQCDbb_max;
double jetAK8puppi_dnnDecorr_probQCDbb_mid;
double jetAK8puppi_dnnDecorr_probQCDbb_min;
double jetAK8puppi_dnnDecorr_probQCDcc_max;
double jetAK8puppi_dnnDecorr_probQCDcc_mid;
double jetAK8puppi_dnnDecorr_probQCDcc_min;
double jetAK8puppi_dnnDecorr_probQCDb_max;
double jetAK8puppi_dnnDecorr_probQCDb_mid;
double jetAK8puppi_dnnDecorr_probQCDb_min;
double jetAK8puppi_dnnDecorr_probQCDc_max;
double jetAK8puppi_dnnDecorr_probQCDc_mid;
double jetAK8puppi_dnnDecorr_probQCDc_min;
double jetAK8puppi_dnnDecorr_probQCDothers_max;
double jetAK8puppi_dnnDecorr_probQCDothers_mid;
double jetAK8puppi_dnnDecorr_probQCDothers_min;


// gKK 21.7.19
// deep H
double jetAK8puppi_dnnDecorrhbb_tag1;
double jetAK8puppi_dnnDecorrhbb_tag2;
double jetAK8puppi_dnnDecorrhbb_tag3;
double jetAK8puppi_dnnDecorrh4q_tag1;
double jetAK8puppi_dnnDecorrh4q_tag2;
double jetAK8puppi_dnnDecorrh4q_tag3;
   
// DR
double DR_j1j2 ;
double DR_j1j3 ;
double DR_j2j3 ;

double DR_j1j2_MassOrdered;
double DR_j1j3_MassOrdered;
double DR_j2j3_MassOrdered;

double DR_j1j2_deepwOrdered;
double DR_j1j3_deepwOrdered;
double DR_j2j3_deepwOrdered;

// DPhi
double     DPhi_j1j2;
double     DPhi_j1j3;
double     DPhi_j2j3;

double DPhi_j1j2_Massordered;
double DPhi_j1j3_Massordered;
double DPhi_j2j3_Massordered;

double DPhi_j1j2_deepwordered;
double DPhi_j1j3_deepwordered;
double DPhi_j2j3_deepwordered;

// MJJ
double Mass_j1j2_deepwordered;
double Mass_j1j3_deepwordered;
double Mass_j2j3_deepwordered;
double Mass_j1j2;
double Mass_j1j3;
double Mass_j2j3;
double Mass_j1j2_Massordered;
double Mass_j1j3_Massordered;
double Mass_j2j3_Massordered;

double PT_j1j2_deepwordered;
double Eta_j1j2_deepwordered;
double Phi_j1j2_deepwordered;
double PT_j1j3_deepwordered;
double Eta_j1j3_deepwordered;
double Phi_j1j3_deepwordered;
double PT_j2j3_deepwordered;
double Eta_j2j3_deepwordered;
double Phi_j2j3_deepwordered;
double PT_j1j2_Massordered;
double Eta_j1j2_Massordered;
double Phi_j1j2_Massordered;
double PT_j1j3_Massordered;
double Eta_j1j3_Massordered;
double Phi_j1j3_Massordered;
double PT_j2j3_Massordered;
double Eta_j2j3_Massordered;
double Phi_j2j3_Massordered;
double PT_j1j2;
double Eta_j1j2;
double Phi_j1j2;
double PT_j1j3;
double Eta_j1j3;
double Phi_j1j3;
double PT_j2j3;
double Eta_j2j3;
double Phi_j2j3;
double DR_jj12_j3;
double DR_jj13_j2;
double DR_jj23_j1;
double DPhi_jj12_j3;
double DPhi_jj13_j2;
double DPhi_jj23_j1;
double DR_jj12_j3_Massordered;
double DR_jj13_j2_Massordered;
double DR_jj23_j1_Massordered;
double DPhi_jj12_j3_Massordered;
double DPhi_jj13_j2_Massordered;
double DPhi_jj23_j1_Massordered;
double DR_jj12_j3_deepwordered;
double DR_jj13_j2_deepwordered;
double DR_jj23_j1_deepwordered;
double DPhi_jj12_j3_deepwordered;
double DPhi_jj13_j2_deepwordered;
double DPhi_jj23_j1_deepwordered;

// gKK raw scores
double jetAK8puppi_dnn_probTbcq;
double jetAK8puppi_dnn_probTbqq;
double jetAK8puppi_dnn_probTbc;
double jetAK8puppi_dnn_probTbq;
double jetAK8puppi_dnn_probWcq;
double jetAK8puppi_dnn_probWqq;
double jetAK8puppi_dnn_probZbb;
double jetAK8puppi_dnn_probZcc;
double jetAK8puppi_dnn_probZqq;
double jetAK8puppi_dnn_probHbb;
double jetAK8puppi_dnn_probHcc;
double jetAK8puppi_dnn_probHqqqq;
double jetAK8puppi_dnn_probQCDbb;
double jetAK8puppi_dnn_probQCDcc;
double jetAK8puppi_dnn_probQCDb;
double jetAK8puppi_dnn_probQCDc;
double jetAK8puppi_dnn_probQCDothers;
double jetAK8puppi_dnnDecorr_probTbcq;
double jetAK8puppi_dnnDecorr_probTbqq;
double jetAK8puppi_dnnDecorr_probTbc;
double jetAK8puppi_dnnDecorr_probTbq;
double jetAK8puppi_dnnDecorr_probWcq;
double jetAK8puppi_dnnDecorr_probWqq;
double jetAK8puppi_dnnDecorr_probZbb;
double jetAK8puppi_dnnDecorr_probZcc;
double jetAK8puppi_dnnDecorr_probZqq;
double jetAK8puppi_dnnDecorr_probHbb;
double jetAK8puppi_dnnDecorr_probHcc;
double jetAK8puppi_dnnDecorr_probHqqqq;
double jetAK8puppi_dnnDecorr_probQCDbb;
double jetAK8puppi_dnnDecorr_probQCDcc;
double jetAK8puppi_dnnDecorr_probQCDb;
double jetAK8puppi_dnnDecorr_probQCDc;
double jetAK8puppi_dnnDecorr_probQCDothers;
double jetAK8puppi_dnn_probTbcq_2;
double jetAK8puppi_dnn_probTbqq_2;
double jetAK8puppi_dnn_probTbc_2;
double jetAK8puppi_dnn_probTbq_2;
double jetAK8puppi_dnn_probWcq_2;
double jetAK8puppi_dnn_probWqq_2;
double jetAK8puppi_dnn_probZbb_2;
double jetAK8puppi_dnn_probZcc_2;
double jetAK8puppi_dnn_probZqq_2;
double jetAK8puppi_dnn_probHbb_2;
double jetAK8puppi_dnn_probHcc_2;
double jetAK8puppi_dnn_probHqqqq_2;
double jetAK8puppi_dnn_probQCDbb_2;
double jetAK8puppi_dnn_probQCDcc_2;
double jetAK8puppi_dnn_probQCDb_2;
double jetAK8puppi_dnn_probQCDc_2;
double jetAK8puppi_dnn_probQCDothers_2;
double jetAK8puppi_dnnDecorr_probTbcq_2;
double jetAK8puppi_dnnDecorr_probTbqq_2;
double jetAK8puppi_dnnDecorr_probTbc_2;
double jetAK8puppi_dnnDecorr_probTbq_2;
double jetAK8puppi_dnnDecorr_probWcq_2;
double jetAK8puppi_dnnDecorr_probWqq_2;
double jetAK8puppi_dnnDecorr_probZbb_2;
double jetAK8puppi_dnnDecorr_probZcc_2;
double jetAK8puppi_dnnDecorr_probZqq_2;
double jetAK8puppi_dnnDecorr_probHbb_2;
double jetAK8puppi_dnnDecorr_probHcc_2;
double jetAK8puppi_dnnDecorr_probHqqqq_2;
double jetAK8puppi_dnnDecorr_probQCDbb_2;
double jetAK8puppi_dnnDecorr_probQCDcc_2;
double jetAK8puppi_dnnDecorr_probQCDb_2;
double jetAK8puppi_dnnDecorr_probQCDc_2;
double jetAK8puppi_dnnDecorr_probQCDothers_2;
double jetAK8puppi_dnn_probTbcq_3;
double jetAK8puppi_dnn_probTbqq_3;
double jetAK8puppi_dnn_probTbc_3;
double jetAK8puppi_dnn_probTbq_3;
double jetAK8puppi_dnn_probWcq_3;
double jetAK8puppi_dnn_probWqq_3;
double jetAK8puppi_dnn_probZbb_3;
double jetAK8puppi_dnn_probZcc_3;
double jetAK8puppi_dnn_probZqq_3;
double jetAK8puppi_dnn_probHbb_3;
double jetAK8puppi_dnn_probHcc_3;
double jetAK8puppi_dnn_probHqqqq_3;
double jetAK8puppi_dnn_probQCDbb_3;
double jetAK8puppi_dnn_probQCDcc_3;
double jetAK8puppi_dnn_probQCDb_3;
double jetAK8puppi_dnn_probQCDc_3;
double jetAK8puppi_dnn_probQCDothers_3;
double jetAK8puppi_dnnDecorr_probTbcq_3;
double jetAK8puppi_dnnDecorr_probTbqq_3;
double jetAK8puppi_dnnDecorr_probTbc_3;
double jetAK8puppi_dnnDecorr_probTbq_3;
double jetAK8puppi_dnnDecorr_probWcq_3;
double jetAK8puppi_dnnDecorr_probWqq_3;
double jetAK8puppi_dnnDecorr_probZbb_3;
double jetAK8puppi_dnnDecorr_probZcc_3;
double jetAK8puppi_dnnDecorr_probZqq_3;
double jetAK8puppi_dnnDecorr_probHbb_3;
double jetAK8puppi_dnnDecorr_probHcc_3;
double jetAK8puppi_dnnDecorr_probHqqqq_3;
double jetAK8puppi_dnnDecorr_probQCDbb_3;
double jetAK8puppi_dnnDecorr_probQCDcc_3;
double jetAK8puppi_dnnDecorr_probQCDb_3;
double jetAK8puppi_dnnDecorr_probQCDc_3;
double jetAK8puppi_dnnDecorr_probQCDothers_3;
double jetAK8puppi_dnn_probTbcq_4;
double jetAK8puppi_dnn_probTbqq_4;
double jetAK8puppi_dnn_probTbc_4;
double jetAK8puppi_dnn_probTbq_4;
double jetAK8puppi_dnn_probWcq_4;
double jetAK8puppi_dnn_probWqq_4;
double jetAK8puppi_dnn_probZbb_4;
double jetAK8puppi_dnn_probZcc_4;
double jetAK8puppi_dnn_probZqq_4;
double jetAK8puppi_dnn_probHbb_4;
double jetAK8puppi_dnn_probHcc_4;
double jetAK8puppi_dnn_probHqqqq_4;
double jetAK8puppi_dnn_probQCDbb_4;
double jetAK8puppi_dnn_probQCDcc_4;
double jetAK8puppi_dnn_probQCDb_4;
double jetAK8puppi_dnn_probQCDc_4;
double jetAK8puppi_dnn_probQCDothers_4;
double jetAK8puppi_dnnDecorr_probTbcq_4;
double jetAK8puppi_dnnDecorr_probTbqq_4;
double jetAK8puppi_dnnDecorr_probTbc_4;
double jetAK8puppi_dnnDecorr_probTbq_4;
double jetAK8puppi_dnnDecorr_probWcq_4;
double jetAK8puppi_dnnDecorr_probWqq_4;
double jetAK8puppi_dnnDecorr_probZbb_4;
double jetAK8puppi_dnnDecorr_probZcc_4;
double jetAK8puppi_dnnDecorr_probZqq_4;
double jetAK8puppi_dnnDecorr_probHbb_4;
double jetAK8puppi_dnnDecorr_probHcc_4;
double jetAK8puppi_dnnDecorr_probHqqqq_4;
double jetAK8puppi_dnnDecorr_probQCDbb_4;
double jetAK8puppi_dnnDecorr_probQCDcc_4;
double jetAK8puppi_dnnDecorr_probQCDb_4;
double jetAK8puppi_dnnDecorr_probQCDc_4;
double jetAK8puppi_dnnDecorr_probQCDothers_4;


TLorentzVector AK41,AK42,AK43,AK44,AK45,AK46;
TLorentzVector AK81,AK82,AK83,AK84;
   
Int_t           ls;
UInt_t           run;
UInt_t           luminosityBlock;
Int_t           nLooseEle;
Int_t           nLooseMu;

Double_t        weight_top_up;
Double_t        weight_top_down;
Double_t        weight_center_top_up;
Double_t        weight_center_top_down;

Float_t pfMET;
Float_t pfMETPhi;
Float_t l_pt;
Float_t mtVlepnew;
Float_t MTVlep;
Float_t l_eta;
Float_t l_phi;
Float_t jet_pt;
Float_t PTj;
Float_t jet_eta;
Float_t jet_phi;
Float_t jet_mass_pruned;
Float_t Mj_un;
//   Float_t jet_mass_softdrop;
Float_t jet_tau2tau1;
Float_t tau21;
Float_t jet_tau1_puppi;
Float_t jet_tau2_puppi;
Float_t jet_tau3_puppi;
Float_t jet_tau4_puppi;
Float_t tau31;
Float_t tau41;
Float_t tau32;
Float_t tau43;
Float_t W_pt;
Float_t W_eta;
Float_t W_phi;
Float_t MJJJ;
Float_t MJJJ_JEC_up ;
Float_t MJJJ_JEC_down ;
Float_t MJJJ_JER_up ;
Float_t MJJJ_JER_down ;

//   Float_t M_ww;
Float_t fjet2_pt;
Float_t fjet2_btag;
Float_t fjet3_pt;
Float_t fjet3_btag; 
Double_t MJ_j_18;
Double_t MJJ_j_18;
Double_t MJ_j_10;
Double_t MJJ_j_10;
Double_t MJ_j_12;
Double_t MJJ_j_12;
Double_t MJ_j_14;
Double_t MJJ_j_14;
Double_t MJ_j_16;
Double_t MJJ_j_16;
//JEC
//   Double_t corr_AK8;
Double_t jetAK8_pt;
Double_t jetAK8_mass;
Double_t jetAK8_jec;
//   Double_t jetAK8_e;
//   Double_t corr;
Double_t METraw_et;
Double_t METraw_phi;
Double_t METraw_sumEt;
Float_t MET_phi;
Float_t RawMET_phi;
Double_t MET_sumEt;
Double_t MET_eta;
Double_t Mj_maxc;
Double_t Mj_minc;
Double_t MJJc;

Double_t Mj_max2;
Double_t Mj_mid2;
Double_t Mj_min2;
Double_t Mj_mostmin2;
Double_t PTj_max2;
Double_t PTj_mid2;
Double_t PTj_min2;
Double_t PTj_mostmin2;
Double_t tau21_max2;
Double_t tau21_mid2;
Double_t tau21_min2;
Double_t tau21_mostmin2;
Double_t tau41_max2;
Double_t tau41_mid2;
Double_t tau41_min2;
Double_t tau41_mostmin2;
Double_t tau42_max2;
Double_t tau42_mid2;
Double_t tau42_min2;
Double_t tau42_mostmin2;
Double_t jetAK8puppi_dnnTop, jetAK8puppi_dnnW,jetAK8puppi_dnnH4q,jetAK8puppi_dnnTop_2, jetAK8puppi_dnnW_2,jetAK8puppi_dnnH4q_2,jetAK8puppi_dnnTop_3, jetAK8puppi_dnnW_3,jetAK8puppi_dnnH4q_3, jetAK8puppi_dnnTop_4, jetAK8puppi_dnnW_4,jetAK8puppi_dnnH4q_4; //DeepAK8
Double_t jetAK8puppi_dnnZ,jetAK8puppi_dnnZbb,jetAK8puppi_dnnHbb,jetAK8puppi_dnnZ_2,jetAK8puppi_dnnZbb_2,jetAK8puppi_dnnHbb_2,jetAK8puppi_dnnZ_3,jetAK8puppi_dnnZbb_3,jetAK8puppi_dnnHbb_3,jetAK8puppi_dnnZ_4,jetAK8puppi_dnnZbb_4,jetAK8puppi_dnnHbb_4;
Double_t jetAK8puppi_dnnDecorrTop, jetAK8puppi_dnnDecorrW,jetAK8puppi_dnnDecorrH4q,jetAK8puppi_dnnDecorrTop_2, jetAK8puppi_dnnDecorrW_2, jetAK8puppi_dnnDecorrH4q_2,jetAK8puppi_dnnDecorrTop_3, jetAK8puppi_dnnDecorrW_3, jetAK8puppi_dnnDecorrH4q_3,jetAK8puppi_dnnDecorrTop_4, jetAK8puppi_dnnDecorrW_4,jetAK8puppi_dnnDecorrH4q_4; //Decorrelated DeepAK8
Double_t jetAK8puppi_dnnDecorrZ,jetAK8puppi_dnnDecorrZbb,jetAK8puppi_dnnDecorrHbb,jetAK8puppi_dnnDecorrZ_2,jetAK8puppi_dnnDecorrZbb_2,jetAK8puppi_dnnDecorrHbb_2,jetAK8puppi_dnnDecorrZ_3,jetAK8puppi_dnnDecorrZbb_3,jetAK8puppi_dnnDecorrHbb_3,jetAK8puppi_dnnDecorrZ_4,jetAK8puppi_dnnDecorrZbb_4,jetAK8puppi_dnnDecorrHbb_4;
Double_t jetAK8puppi_dnnDecorrbb,jetAK8puppi_dnnDecorrcc,jetAK8puppi_dnnDecorrbbnog,jetAK8puppi_dnnDecorrccnog,jetAK8puppi_dnnDecorrbb_2,jetAK8puppi_dnnDecorrcc_2,jetAK8puppi_dnnDecorrbbnog_2,jetAK8puppi_dnnDecorrccnog_2,jetAK8puppi_dnnDecorrbb_3,jetAK8puppi_dnnDecorrcc_3,jetAK8puppi_dnnDecorrbbnog_3,jetAK8puppi_dnnDecorrccnog_3,jetAK8puppi_dnnDecorrbb_4,jetAK8puppi_dnnDecorrcc_4,jetAK8puppi_dnnDecorrbbnog_4,jetAK8puppi_dnnDecorrccnog_4;
Double_t jetAK8puppi_dnnqcd,jetAK8puppi_dnntop,jetAK8puppi_dnnw,jetAK8puppi_dnnz,jetAK8puppi_dnnzbb,jetAK8puppi_dnnhbb,jetAK8puppi_dnnh4q,jetAK8puppi_dnnqcd_2,jetAK8puppi_dnntop_2,jetAK8puppi_dnnw_2,jetAK8puppi_dnnz_2,jetAK8puppi_dnnzbb_2,jetAK8puppi_dnnhbb_2,jetAK8puppi_dnnh4q_2,jetAK8puppi_dnnqcd_3,jetAK8puppi_dnntop_3,jetAK8puppi_dnnw_3,jetAK8puppi_dnnz_3,jetAK8puppi_dnnzbb_3,jetAK8puppi_dnnhbb_3,jetAK8puppi_dnnh4q_3,jetAK8puppi_dnnqcd_4,jetAK8puppi_dnntop_4,jetAK8puppi_dnnw_4,jetAK8puppi_dnnz_4,jetAK8puppi_dnnzbb_4,jetAK8puppi_dnnhbb_4,jetAK8puppi_dnnh4q_4;
Double_t jetAK8puppi_dnnDecorrqcd,jetAK8puppi_dnnDecorrtop,jetAK8puppi_dnnDecorrw,jetAK8puppi_dnnDecorrz,jetAK8puppi_dnnDecorrzbb,jetAK8puppi_dnnDecorrhbb,jetAK8puppi_dnnDecorrh4q,jetAK8puppi_dnnDecorrqcd_2,jetAK8puppi_dnnDecorrtop_2,jetAK8puppi_dnnDecorrw_2,jetAK8puppi_dnnDecorrz_2,jetAK8puppi_dnnDecorrzbb_2,jetAK8puppi_dnnDecorrhbb_2,jetAK8puppi_dnnDecorrh4q_2,jetAK8puppi_dnnDecorrqcd_3,jetAK8puppi_dnnDecorrtop_3,jetAK8puppi_dnnDecorrw_3,jetAK8puppi_dnnDecorrz_3,jetAK8puppi_dnnDecorrzbb_3,jetAK8puppi_dnnDecorrhbb_3,jetAK8puppi_dnnDecorrh4q_3,jetAK8puppi_dnnDecorrqcd_4,jetAK8puppi_dnnDecorrtop_4,jetAK8puppi_dnnDecorrw_4,jetAK8puppi_dnnDecorrz_4,jetAK8puppi_dnnDecorrzbb_4,jetAK8puppi_dnnDecorrhbb_4,jetAK8puppi_dnnDecorrh4q_4;
Double_t jetAK8puppi_dnnTop_max, jetAK8puppi_dnnW_max, jetAK8puppi_dnnH4q_max, jetAK8puppi_dnnTop_mid, jetAK8puppi_dnnW_mid, jetAK8puppi_dnnH4q_mid, jetAK8puppi_dnnTop_min, jetAK8puppi_dnnW_min, jetAK8puppi_dnnH4q_min, jetAK8puppi_dnnZ_max, jetAK8puppi_dnnZbb_max, jetAK8puppi_dnnHbb_max, jetAK8puppi_dnnZ_mid, jetAK8puppi_dnnZbb_mid, jetAK8puppi_dnnHbb_mid, jetAK8puppi_dnnZ_min, jetAK8puppi_dnnZbb_min, jetAK8puppi_dnnHbb_min, jetAK8puppi_dnnDecorrTop_max, jetAK8puppi_dnnDecorrW_max, jetAK8puppi_dnnDecorrH4q_max, jetAK8puppi_dnnDecorrTop_mid, jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrH4q_mid, jetAK8puppi_dnnDecorrTop_min, jetAK8puppi_dnnDecorrW_min, jetAK8puppi_dnnDecorrH4q_min, jetAK8puppi_dnnDecorrZ_max, jetAK8puppi_dnnDecorrZbb_max, jetAK8puppi_dnnDecorrHbb_max, jetAK8puppi_dnnDecorrZ_mid, jetAK8puppi_dnnDecorrZbb_mid, jetAK8puppi_dnnDecorrHbb_mid, jetAK8puppi_dnnDecorrZ_min, jetAK8puppi_dnnDecorrZbb_min, jetAK8puppi_dnnDecorrHbb_min, jetAK8puppi_dnnDecorrbb_max, jetAK8puppi_dnnDecorrcc_max, jetAK8puppi_dnnDecorrbbnog_max, jetAK8puppi_dnnDecorrccnog_max, jetAK8puppi_dnnDecorrbb_mid, jetAK8puppi_dnnDecorrcc_mid, jetAK8puppi_dnnDecorrbbnog_mid, jetAK8puppi_dnnDecorrccnog_mid, jetAK8puppi_dnnDecorrbb_min, jetAK8puppi_dnnDecorrcc_min, jetAK8puppi_dnnDecorrbbnog_min, jetAK8puppi_dnnDecorrccnog_min, jetAK8puppi_dnnqcd_max, jetAK8puppi_dnntop_max, jetAK8puppi_dnnw_max, jetAK8puppi_dnnz_max, jetAK8puppi_dnnzbb_max, jetAK8puppi_dnnhbb_max, jetAK8puppi_dnnh4q_max, jetAK8puppi_dnnqcd_mid, jetAK8puppi_dnntop_mid, jetAK8puppi_dnnw_mid, jetAK8puppi_dnnz_mid, jetAK8puppi_dnnzbb_mid, jetAK8puppi_dnnhbb_mid, jetAK8puppi_dnnh4q_mid, jetAK8puppi_dnnqcd_min, jetAK8puppi_dnntop_min, jetAK8puppi_dnnw_min, jetAK8puppi_dnnz_min, jetAK8puppi_dnnzbb_min, jetAK8puppi_dnnhbb_min, jetAK8puppi_dnnh4q_min, jetAK8puppi_dnnDecorrqcd_max, jetAK8puppi_dnnDecorrtop_max, jetAK8puppi_dnnDecorrw_max, jetAK8puppi_dnnDecorrz_max, jetAK8puppi_dnnDecorrzbb_max, jetAK8puppi_dnnDecorrhbb_max, jetAK8puppi_dnnDecorrh4q_max, jetAK8puppi_dnnDecorrqcd_mid, jetAK8puppi_dnnDecorrtop_mid, jetAK8puppi_dnnDecorrw_mid, jetAK8puppi_dnnDecorrz_mid, jetAK8puppi_dnnDecorrzbb_mid, jetAK8puppi_dnnDecorrhbb_mid, jetAK8puppi_dnnDecorrh4q_mid, jetAK8puppi_dnnDecorrqcd_min, jetAK8puppi_dnnDecorrtop_min, jetAK8puppi_dnnDecorrw_min, jetAK8puppi_dnnDecorrz_min, jetAK8puppi_dnnDecorrzbb_min, jetAK8puppi_dnnDecorrhbb_min, jetAK8puppi_dnnDecorrh4q_min;

float PartNet_MD_W_a;
float PartNet_MD_W_b;
float PartNet_MD_W_c;

float FatJet_tau1_a;
float FatJet_tau1_b;
float FatJet_tau1_c;
float FatJet_tau2_a;
float FatJet_tau2_b;
float FatJet_tau2_c;
float FatJet_tau3_a;
float FatJet_tau3_b;
float FatJet_tau3_c;
float FatJet_tau4_a;
float FatJet_tau4_b;
float FatJet_tau4_c;

Int_t CategoryID;
Int_t vTagID;//1: tau21<0.45; 0: tau21>0.45 <0.75; -1: tau21 >0.75
Double_t isMatch;
Double_t        weight;
Double_t        TriggerSF;
Double_t        weight_center;
Double_t        weight_bias_up;
Double_t        weight_ps_up;

Double_t        weight_deep;
Double_t        weight_nobtag;
Double_t        IDweight;
Double_t        IDweightISO;
Double_t        IDweighttrk;
Double_t        ToppTweight;
Double_t        trigger_eff;
Double_t        btagweight_center;
Double_t        btagweight_up;
Double_t        btagweight_down;
Double_t        btagweight_center_deep;
Double_t        btagweight_up_deep;
Double_t        btagweight_down_deep;

Long64_t           event;
Int_t           nVtx;
Int_t           numCands;
Double_t        ptVlep;
Double_t        ptVhad;
Double_t        yVlep;
Double_t        yVhad;
Double_t        yVhadJEC;
Double_t        phiVlep;
Double_t        phiVhad;
Double_t        massVlep;
Double_t        mtVlep;
Double_t        massVhad;
//   Double_t        massVhad_gen;
Double_t        tau1;
Double_t        tau2;
Double_t        tau3;
//  Double_t        tau21;
//   Double_t        sdrop;
Int_t           lep;
Int_t           channel;
Double_t        candMass;
Double_t        ptlep1;
Double_t        ptlep2;
Double_t        etalep1;
Double_t        etalep2;
Double_t        philep1;
Double_t        philep2;
Double_t        met;
Double_t        metPhi;
Double_t        theWeight;
Double_t        nump;
Double_t        numm;
Double_t        npT;
Double_t        npIT;
Int_t           nBX;
Double_t        triggerWeight;
Double_t        lumiWeight;
Double_t        pileupWeight;

Float_t        puWeight;
Float_t        puWeightDown;
Float_t        puWeightUp;

Double_t        delPhilepmet;
Double_t        deltaRlepjet;
Double_t        delPhijetmet;
Double_t        delPhijetlep;
Int_t           vbftag;
Bool_t          IDLoose;
Bool_t          IDTight;
//Bool_t          isHighPt;
//Bool_t          isHEEP;
Double_t        trackIso;
Double_t        muchaiso;
Double_t        muneuiso;
Double_t        muphoiso;
Double_t        muPU;
Double_t        muisolation;
//Double_t        METraw_et;
//Double_t        METraw_phi;
//Double_t        METraw_sumEt;
//Double_t        MET_et;
//Double_t        MET_phi;
//Double_t        MET_sumEt;
//Double_t        jetAK8_pt;
//Double_t        jetAK8_mass;
//Double_t        jetAK8_jec;
Double_t      pweight[254];

Double_t        jetAK8_pt1[3];
Double_t        jetAK8_eta1[3];
Double_t        jetAK8_mass1[3];
Double_t        jetAK8_SF_mass1[3];
Double_t        jetAK8_SF_mass2[3];
Double_t        jetAK8_jec1[3];
Double_t        jetAK8_eta;
Double_t        jetAK8_phi;
Double_t        candMassJEC;
Double_t        ptVlepJEC;
Double_t        yVlepJEC;
Double_t        phiVlepJEC;
Double_t        massVlepJEC;
Double_t        massVhadJEC;
Double_t        jetAK8puppi_sdJEC;
Double_t        jetAK8puppi_tau21;
Double_t        jetAK8puppi_tau1;
Double_t        jetAK8puppi_tau2;
Double_t        jetAK8puppi_tau3;
Double_t        jetAK8puppi_tau4;
Double_t        jetAK8puppi_ptJEC;
Float_t         Etaj;
Float_t         Phij;
Double_t        jetAK8puppi_sdcorr;
Double_t        candMasspuppiJEC;
Double_t        candMasspuppiJEC_new;
Double_t        candMasspuppiJEC_JEC_up;
Double_t        candMasspuppiJEC_JEC_down;
Double_t        candMasspuppiJEC_JER_up;
Double_t        candMasspuppiJEC_JER_down;

Double_t        jetAK8puppi_sdJEC_2;
Double_t        jetAK8puppi_tau21_2;
Double_t        jetAK8puppi_tau42_2;
Double_t        jetAK8puppi_tau1_2;
Double_t        jetAK8puppi_tau2_2;
Double_t        jetAK8puppi_tau3_2;
Double_t        jetAK8puppi_tau4_2;
Double_t        jetAK8puppi_tau42;
Double_t        jetAK8puppi_ptJEC_2;
Float_t         Etaj_2;
Float_t         Phij_2;
Double_t        jetAK8puppi_sdcorr_2;
//Double_t MassVV[3];
Double_t        MJJ_midmin;
Double_t        Mj_un_2;
Double_t        PTj_2;
Float_t         PTj_23;
Float_t         ST;
Float_t         HT;
Int_t         Nj4;
Double_t        tau21_2;
Float_t        ak4Ptex1;
Float_t        ak4Etaex1;
Float_t        ak4Phiex1;
Float_t        ak4Eex1;
Float_t        ak4Ptex2;
Float_t        ak4Etaex2;
Float_t        ak4Phiex2;
Float_t        ak4Eex2;
Float_t        Mj_max;
Float_t        Mj_mid; 
Float_t        Mj_min;
Float_t        PTj_max;
Float_t        PTj_mid;
Float_t        PTj_min;
Float_t        Etaj_max;
Float_t        Etaj_mid;
Float_t        Etaj_min;
Float_t        Phij_max;
Float_t        Phij_mid;
Float_t        Phij_min;
Float_t        DPhi_max_mid;
Float_t        DPhi_mid_min;
Float_t        DPhi_min_max;

Float_t        deepHWWMDV1_HallvsQCD_max;
Float_t        deepHWWMDV1_HallvsQCD_mid;
Float_t        deepHWWMDV1_HallvsQCD_min;




Float_t        DEta_max_mid;
Float_t        DEta_mid_min;
Float_t        DEta_min_max;
Float_t        DEta_12;
Float_t        DEta_13;
Float_t        DEta_23;
Float_t        DEta_max;
Float_t        DEta_min;

Float_t        DR_max_mid;
Float_t        DR_mid_min;
Float_t        DR_min_max;
Float_t        DR_max;
Float_t        DR_min;
Float_t        MJJj;
Float_t        MJJjj;
Float_t        MJJJj;
Float_t        MJJJJ;
Float_t        t21t31t41_max;
Float_t        t21t31t41_mid;
Float_t        t21t31t41_min;
Float_t        S_t21t31t41_max;
Float_t        S_t21t31t41_mid;
Float_t        S_t21t31t41_min;
Float_t jet_tau1_puppi_2;
Float_t jet_tau2_puppi_2;
Float_t jet_tau3_puppi_2;
Float_t jet_tau4_puppi_2;
Float_t tau31_2;
Float_t tau41_2;
Float_t tau32_2;
Float_t tau43_2;
Double_t       tau42;
Double_t        tau42_2;
Float_t      t21t31t41;
Float_t      t21t31t41_2;
Float_t      t21t31t41_3;

Float_t      tau21_max;
Float_t      tau31_max;
Float_t      tau41_max;
Float_t      tau32_max;
Float_t      tau42_max;
Float_t      tau43_max;
Float_t      tau21_mid;
Float_t      tau31_mid;
Float_t      tau41_mid;
Float_t      tau32_mid;
Float_t      tau42_mid;
Float_t      tau43_mid;
Float_t      tau21_min;
Float_t      tau31_min;
Float_t      tau41_min;
Float_t      tau32_min;
Float_t      tau42_min;
Float_t      tau43_min;

Float_t      pt1pt2pt3;


Double_t Mrad_j; 
Double_t Mrad;
Double_t Mw; 
Double_t Mww_j;
Double_t massww[3];
Double_t        jetAK8puppi_sdJEC_3;
Double_t        jetAK8puppi_sdJC_3;
Double_t        jetAK8puppi_tau21_3;
Double_t        jetAK8puppi_tau1_3;
Double_t        jetAK8puppi_tau2_3;
Double_t        jetAK8puppi_tau3_3;
Double_t        jetAK8puppi_tau4_3;
Double_t        jetAK8puppi_tau42_3;
Double_t        jetAK8puppi_tau42_4;
Double_t        jetAK8puppi_tau41_4;
Double_t        jetAK8puppi_tau21_4;

Double_t        jetAK8puppi_ptJEC_3;
Float_t         Etaj_3;
Float_t         Etaj_4;
Float_t         Phij_3;
Float_t         Phij_4;
Double_t        jetAK8puppi_sdcorr_3;
Double_t        Mj_4;
Double_t        Mj_un_3;
Double_t        PTj_3;
Double_t        tau21_3;
Double_t        tau42_3;
Double_t        tau21_4;
Double_t        tau42_4;
Double_t        tau41_4;

Double_t        jetAK8puppi_sd_4;
Double_t        jetAK8puppi_phi_4;
Double_t        jetAK8puppi_ptJEC_4;
Double_t        jetAK8puppi_ptJEC_5;
Double_t        jetAK8puppi_ptJEC_6;
Double_t        jetAK8puppi_ptJEC_7;
Double_t        jetAK8puppi_ptJEC_8;
Double_t        jetAK8puppi_sdJEC_4;
Double_t        jetAK8puppi_sdJEC_5;
Double_t        jetAK8puppi_sdJEC_6;
Double_t        jetAK8puppi_sdJEC_7;
Double_t        jetAK8puppi_sdJEC_8;
Double_t        gen_gra_m;
Double_t        gen_gra_pt;
Double_t        gen_gra_eta;
Double_t        gen_gra_phi;
Double_t        gen_rad_m;
Double_t        gen_rad_pt;
Double_t        gen_rad_eta;
Double_t        gen_rad_phi;
//Double_t MJR,MJW,MJR_j,MJJRW_j;
Double_t        gen_tau_e;
Double_t        gen_tau_pt;
Double_t        gen_tau_eta;
Double_t        gen_tau_phi;
Double_t        gen_tau_e_2;
Double_t        gen_tau_pt_2;
Double_t        gen_tau_eta_2;
Double_t        gen_tau_phi_2;
Double_t        gen_tau_e_3;
Double_t        gen_tau_pt_3;
Double_t        gen_tau_eta_3;
Double_t        gen_tau_phi_3;
Double_t        ptGenVhad;
Double_t        etaGenVhad;
Double_t        phiGenVhad;
Double_t        massGenVhad;
Double_t        etaGenVhad_2;
Double_t        phiGenVhad_2;
Double_t        etaGenVhad_3;
Double_t        phiGenVhad_3;
Double_t        ptGenV_2;
Double_t        etaGenV_2;
Double_t        phiGenV_2;
Double_t        massGenV_2;
Double_t        ptGenV_3;
Double_t        etaGenV_3;
Double_t        phiGenV_3;
Double_t        massGenV_3;
Double_t        ptGenVlep;
Double_t        etaGenVlep;
Double_t        phiGenVlep;
Double_t        massGenVlep;
Double_t        ptGenVlep_2;
Double_t        etaGenVlep_2;
Double_t        phiGenVlep_2;
Double_t        massGenVlep_2;
Double_t        ptGenVlep_3;
Double_t        etaGenVlep_3;
Double_t        phiGenVlep_3;
Double_t        massGenVlep_3;
Double_t        ptq11;
Double_t        etaq11;
Double_t        phiq11;
Double_t        massq11;
Double_t        ptq21;
Double_t        etaq21;
Double_t        phiq21;
Double_t        massq21;
Double_t        ptq31;
Double_t        etaq31;
Double_t        phiq31;
Double_t        massq31;
Double_t        ptq12;
Double_t        etaq12;
Double_t        phiq12;
Double_t        massq12;
Double_t        ptq22;
Double_t        etaq22;
Double_t        phiq22;
Double_t        massq22;
Double_t        ptq32;
Double_t        etaq32;
Double_t        phiq32;
Double_t        massq32;
Int_t        status_1;
Int_t        status_2;
Int_t        status_3;
Float_t      PTj_4;
Float_t      PTj_5;
Float_t      PTj_6;
Float_t      PTj_7;
Float_t      PTj_8;
Float_t      newgen_gra_m;
Float_t      newgen_gra_pt;
Float_t      newgen_gra_eta;
Float_t      newgen_gra_phi;
Float_t      newgen_rad_m;
Float_t      newgen_rad_pt;
Float_t      newgen_rad_eta;
Float_t      newgen_rad_phi;
Float_t      newgen_tau_e;
Float_t      newgen_tau_pt;
Float_t      newgen_tau_eta;
Float_t      newgen_tau_phi;
Float_t      newgen_tau_e_2;
Float_t      newgen_tau_pt_2;
Float_t      newgen_tau_eta_2;
Float_t      newgen_tau_phi_2;
Float_t      newgen_tau_e_3;
Float_t      newgen_tau_pt_3;
Float_t      newgen_tau_eta_3;
Float_t      newgen_tau_phi_3;
Float_t      newptGenVhad;
Float_t      newetaGenVhad;
Float_t      newphiGenVhad;
Float_t      newmassGenVhad;
Float_t      newptGenV_2;
Float_t      newetaGenV_2;
Float_t      newphiGenV_2;
Float_t      newmassGenV_2;
Float_t      newptGenV_3;
Float_t      newetaGenV_3;
Float_t      newphiGenV_3;
Float_t      newmassGenV_3;
Float_t      newptGenVlep;
Float_t      newetaGenVlep;
Float_t      newphiGenVlep;
Float_t      newmassGenVlep;
Float_t      newptGenVlep_2;
Float_t      newetaGenVlep_2;
Float_t      newphiGenVlep_2;
Float_t      newmassGenVlep_2;
Float_t      newptGenVlep_3;
Float_t      newetaGenVlep_3;
Float_t      newphiGenVlep_3;
Float_t      newmassGenVlep_3;
Float_t      newptq11;
Float_t      newetaq11;
Float_t      newphiq11;
Float_t      newmassq11;
Float_t      newptq21;
Float_t      newetaq21;
Float_t      newphiq21;
Float_t      newmassq21; 
Float_t      newptq31;
Float_t      newetaq31;
Float_t      newphiq31;
Float_t      newmassq31;
Float_t      newptq12;
Float_t      newetaq12;
Float_t      newphiq12; 
Float_t      newmassq12;
Float_t      newptq22;
Float_t      newetaq22; 
Float_t      newphiq22;
Float_t      newmassq22;
Float_t      newptq32;
Float_t      newetaq32;
Float_t      newphiq32;
Float_t      newmassq32;
Float_t      Mass2j1j2;
Float_t      Mass2j3j1;
Float_t      Mass2j2j3;
Double_t      MJJ;
Double_t      MJJ_JEC_up;
Double_t      MJJ_JEC_down;
Double_t      MJJ_JER_up;
Double_t      MJJ_JER_down;

Double_t weight_center_pdf_up;
Double_t weight_center_pdf_down;

Double_t weight_pdf_up;
Double_t weight_pdf_down;

Float_t      Mw1w2;
Float_t      Mw1w3;
Float_t      Mw2w3;
Float_t      Pt2dPt1;
Float_t      Pt3dPt1;

Float_t Phij_12;
Float_t Phij_13;
Float_t Phij_23;
Float_t DR_12;
Float_t DR_13;
Float_t DR_23;
Float_t DPhi_max;
Float_t DPhi_min;
Float_t DPhi_max2;
Float_t DPhi_min2;
Float_t DPhi_max3;
Float_t DPhi_min3;
Float_t jet_tau1_puppi_3;
Float_t jet_tau2_puppi_3;
Float_t jet_tau3_puppi_3;
Float_t jet_tau4_puppi_3;
Float_t tau31_3;
Float_t tau41_3;
Float_t tau32_3;
Float_t tau43_3;
Float_t Mj_mean;
//   Double_t        candMasspuppicorr;
//   Double_t        sdropJEC;
Double_t        mtVlepJEC;
//   Double_t        delPhilepmetJEC;
//   Double_t        delPhijetmetJEC;
//   Double_t        delPhijetlepJEC;
Int_t           HLT_Ele1;
Int_t           HLT_Ele2;
Int_t           HLT_Ele3;
Int_t           HLT_Ele4;
Int_t           HLT_Ele5;
Int_t           HLT_Ele6;
Int_t           HLT_Ele7;
Int_t           HLT_Ele8;
Int_t           HLT_Mu1;
Int_t           HLT_Mu2;
Int_t           HLT_Mu3;
Int_t           HLT_Mu4;
Int_t           HLT_Mu5;
Int_t           HLT_Mu6;
Int_t           HLT_Mu7;
Int_t           HLT_Mu8;
Int_t           HLT_Mu9;
Int_t           HLT_Mu10;
Int_t           HLT_Mu11;
Int_t           HLT_Mu12;
Int_t           HLT_Mu13;
Int_t           HLT_Mu14;
Int_t           HLT_Mu15;
Int_t           HLT_Mu16;
Int_t           HLT_Mu17;
Int_t num_ak4jetsex;
Int_t num_ak4jetsin;
/*  Bool_t          passFilter_HBHE;
Bool_t          passFilter_HBHEIso;
Bool_t          passFilter_GlobalHalo;
Bool_t          passFilter_ECALDeadCell;
Bool_t          passFilter_GoodVtx;
Bool_t          passFilter_EEBadSc;
Bool_t          passFilter_badMuon;
Bool_t          passFilter_badChargedHadron;
*/
Double_t        ex_ak4jet_pt[15];
Double_t        ex_ak4jet_eta[15];

Int_t           ak4jet_hf[15];
Int_t           ak4jet_pf[15];
Double_t        ak4jet_pt[15];
Double_t        ak4jet_pt_uncorr[15];
Double_t        ak4jet_eta[15];
Double_t        ak4jet_phi[15];
Double_t        ak4jet_e[15];
Double_t        ak4jet_dr[15];
Double_t        ak4jet_csv[15];
Double_t        ak4jet_icsv[15];
Double_t        ak4jet_deepcsvb[15];  
Double_t        ak4jet_deepcsvbb[15];

Double_t        deltaRAK4AK8_new[15];

Double_t        deltaRAK4AK8[15];
Double_t        ak4jet_IDLoose[15];
Double_t        ak4jet_IDTight[15];

Double_t        genw_q1_eta[5];
Double_t        genw_q1_phi[5];
Double_t        genw_q2_eta[5];
Double_t        genw_q2_phi[5];

Double_t        genw_q1W_eta[5];
Double_t        genw_q1W_phi[5];

Double_t        genw_q1Wq1_eta[5];
Double_t        genw_q1Wq1_phi[5];

Double_t        genw_q1Wq2_eta[5];
Double_t        genw_q1Wq2_phi[5];


Double_t        genw_q2W_eta[5];
Double_t        genw_q2W_phi[5];

Double_t        genw_q2Wq1_eta[5];
Double_t        genw_q2Wq1_phi[5];

Double_t        genw_q2Wq2_eta[5];
Double_t        genw_q2Wq2_phi[5];





Double_t        gent_b_eta[5];
Double_t        gent_b_phi[5];
Double_t        gent_b_pt;
Double_t        gent_b_mass;

Double_t        genantit_b_eta;
Double_t        genantit_b_phi;
Double_t        genantit_b_pt;
Double_t        genantit_b_mass;

Double_t        gent_w_eta;
Double_t        gent_w_phi;
Double_t        gent_w_pt;

Double_t        genantit_w_eta;
Double_t        genantit_w_phi;
Double_t        genantit_w_pt;

Double_t        gent_w_q1_eta;
Double_t        gent_w_q1_phi;
Double_t        gent_w_q1_pt;

Double_t        genantit_w_q1_eta;
Double_t        genantit_w_q1_phi;
Double_t        genantit_w_q1_pt;

Double_t        gent_w_q2_eta;
Double_t        gent_w_q2_phi;
Double_t        gent_w_q2_pt;

Double_t        genantit_w_q2_eta;
Double_t        genantit_w_q2_phi;
Double_t        genantit_w_q2_pt;

Double_t        etagengl[15];
Double_t        phigengl[15];
Double_t        ptgengl[15];
Double_t        egengl[15];

Double_t        etagenwl[5];
Double_t        phigenwl[5];
Double_t        ptgenwl[5];
Double_t        ptgenwf[5];



Double_t        gent_w_tag;
Double_t        genantit_w_tag;
Double_t        gent_w_q1_pdg;
Double_t        gent_w_q2_pdg;
Double_t        genantit_w_q1_pdg;
Double_t        genantit_w_q2_pdg;
Double_t        taggenwl[5];
Double_t        genw_q1_pdg[5];
Double_t        genw_q2_pdg[5];

Double_t        etagenzl[5];
Double_t        phigenzl[5];
Double_t        ptgenzl[5];
Double_t        genz_q1_eta[5];
Double_t        genz_q1_phi[5];
Double_t        genz_q2_eta[5];
Double_t        genz_q2_phi[5];
Int_t           taggenzl[5];

Double_t        etagentl[5];
Double_t        phigentl[5];
Double_t        gent_W_eta[5];
Double_t        gent_W_phi[5];
Double_t        gent_W_q1_eta[5];
Double_t        gent_W_q1_phi[5];
Double_t        gent_W_q2_eta[5];
Double_t        gent_W_q2_phi[5];
Int_t           taggentwl[5];
Int_t           gent_b_tag[5];


Double_t        etagenq1l[5];
Double_t        phigenq1l[5];
Double_t        ptgenq1l[5];
Double_t        egenq1l[5];

Double_t        etagenq2l[5];
Double_t        phigenq2l[5];
Double_t        ptgenq2l[5];
Double_t        egenq2l[5];

Double_t        etagenq3l[5];
Double_t        phigenq3l[5];
Double_t        ptgenq3l[5];
Double_t        egenq3l[5];

Double_t        etagenq4l[5];
Double_t        phigenq4l[5];
Double_t        ptgenq4l[5];
Double_t        egenq4l[5];

Double_t        etagenq5l[5];
Double_t        phigenq5l[5];
Double_t        ptgenq5l[5];
Double_t        egenq5l[5];

/*   Double_t        gen_gra_m;
Double_t        gen_gra_pt;
Double_t        gen_ele_pt;
Double_t        gen_ele_eta;
Double_t        gen_ele_phi;
Double_t        gen_ele_e;
Double_t        gen_mu_pt;
Double_t        gen_mu_eta;
Double_t        gen_mu_phi;
Double_t        gen_mu_e;
Double_t        genmatch_ele_pt;
Double_t        genmatch_ele_eta;
Double_t        genmatch_ele_phi;
Double_t        genmatch_ele_e;
Double_t        genmatch_ele_dr;
*/
Double_t        gentop_pt;
Double_t        gentop_eta;
Double_t        gentop_phi;
Double_t        gentop_mass;
Double_t        genantitop_pt;
Double_t        genantitop_eta;
Double_t        genantitop_phi;
Double_t        genantitop_mass;
/*   Double_t        genmatch_mu_pt;
Double_t        genmatch_mu_eta;
Double_t        genmatch_mu_phi;
Double_t        genmatch_mu_e;
Double_t        genmatch_mu_dr;
Double_t        ptGenVlep;
Double_t        etaGenVlep;
Double_t        phiGenVlep;
Double_t        massGenVlep;
Double_t        ptGenVhad;
Double_t        etaGenVhad;
Double_t        phiGenVhad;
Double_t        massGenVhad;
*/
Double_t        L1prefiring;
Double_t        L1prefiringup;
Double_t        L1prefiringdown;

bool Flag_METFilters;
bool Flag_goodVertices;
bool Flag_globalSuperTightHalo2016Filter;
bool Flag_HBHENoiseFilter;
bool Flag_HBHENoiseIsoFilter;
bool Flag_EcalDeadCellTriggerPrimitiveFilter;
bool Flag_BadPFMuonFilter;
bool Flag_eeBadScFilter;

bool HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;
bool HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;
bool HLT_PFHT800;
bool HLT_PFHT900;
bool HLT_PFJet450;
bool HLT_AK8PFJet400;
bool HLT_AK8PFJet450;
bool HLT_AK8PFJet500;
bool HLT_PFJet500;
bool HLT_AK8PFJet360_TrimMass30;
bool HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;

// for 1lepton VVV EFT

float Lep1fatJet2_LeptonPt;
float Lep1fatJet2_LeptonEta;
float Lep1fatJet2_LeptonPhi;
float Lep1fatJet2_LeptonE;
int Lep1fatJet2_LeptonPDGID;
float Lep1fatJet2_Muon_pfRelIso04_all;

    // MET
float Lep1fatJet2_MET_pt;
float Lep1fatJet2_MET_phi;
float Common_MET_pt_JER;
float Common_MET_phi_JER;

    // neutrino
float Lep1fatJet2_NeutrinoPt;
float Lep1fatJet2_NeutrinoEta;
float Lep1fatJet2_Neutrinophi;
float Lep1fatJet2_NeutrinoE;

    // Leptonic W
float Lep1fatJet2_LeptonicWPt;
float Lep1fatJet2_LeptonicWEta;
float Lep1fatJet2_LeptonicWPhi;
float Lep1fatJet2_LeptonicWM;
float Lep1fatJet2_LeptonicWMt;

    
// fatJet
float Lep1fatJet2_FatJet_pt;
float Lep1fatJet2_FatJet_eta;
float Lep1fatJet2_FatJet_phi;
float Lep1fatJet2_FatJet_msoftdrop;
int Lep1fatJet2_FatJet_jetId;
float Lep1fatJet2_FatJet_tau1;
float Lep1fatJet2_FatJet_tau2;
float Lep1fatJet2_FatJet_tau3;
float Lep1fatJet2_FatJet_tau4;
float Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_TvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_WvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_bbvsLight;
float Lep1fatJet2_FatJet_deepTagMD_ccvsLight;
float Lep1fatJet2_FatJet_deepTag_H;
float Lep1fatJet2_FatJet_deepTag_QCD;
float Lep1fatJet2_FatJet_deepTag_QCDothers;
float Lep1fatJet2_FatJet_deepTag_TvsQCD;
float Lep1fatJet2_FatJet_deepTag_WvsQCD;
float Lep1fatJet2_FatJet_deepTag_ZvsQCD;
float Lep1fatJet2_FatJet_particleNetMD_QCD;
float Lep1fatJet2_FatJet_particleNetMD_Xbb;
float Lep1fatJet2_FatJet_particleNetMD_Xcc;
float Lep1fatJet2_FatJet_particleNetMD_Xqq;
float Lep1fatJet2_FatJet_particleNet_H4qvsQCD;
float Lep1fatJet2_FatJet_particleNet_HbbvsQCD;
float Lep1fatJet2_FatJet_particleNet_HccvsQCD;
float Lep1fatJet2_FatJet_particleNet_QCD;
float Lep1fatJet2_FatJet_particleNet_TvsQCD;
float Lep1fatJet2_FatJet_particleNet_WvsQCD;
float Lep1fatJet2_FatJet_particleNet_ZvsQCD;

float Lep1fatJet2_FatJet_pt_2;
float Lep1fatJet2_FatJet_eta_2;
float Lep1fatJet2_FatJet_phi_2;
float Lep1fatJet2_FatJet_msoftdrop_2;
int Lep1fatJet2_FatJet_jetId_2;
float Lep1fatJet2_FatJet_tau1_2;
float Lep1fatJet2_FatJet_tau2_2;
float Lep1fatJet2_FatJet_tau3_2;
float Lep1fatJet2_FatJet_tau4_2;
float Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2;
float Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2;
float Lep1fatJet2_FatJet_deepTag_H_2;
float Lep1fatJet2_FatJet_deepTag_QCD_2;
float Lep1fatJet2_FatJet_deepTag_QCDothers_2;
float Lep1fatJet2_FatJet_deepTag_TvsQCD_2;
float Lep1fatJet2_FatJet_deepTag_WvsQCD_2;
float Lep1fatJet2_FatJet_deepTag_ZvsQCD_2;
float Lep1fatJet2_FatJet_particleNetMD_QCD_2;
float Lep1fatJet2_FatJet_particleNetMD_Xbb_2;
float Lep1fatJet2_FatJet_particleNetMD_Xcc_2;
float Lep1fatJet2_FatJet_particleNetMD_Xqq_2;
float Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_HccvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_QCD_2;
float Lep1fatJet2_FatJet_particleNet_TvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_WvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_ZvsQCD_2;

// Gen


// weight, HLT
float Lep1fatJet2_Pileup_nTrueInt;
float Lep1fatJet2_Pileup_nPU;

int Lep1fatJet2_HLT_Mu50;
int Lep1fatJet2_HLT_IsoMu24;
int Lep1fatJet2_HLT_OldMu100;
int Lep1fatJet2_HLT_TkMu100;
int Lep1fatJet2_HLT_IsoMu27;
int Lep1fatJet2_HLT_Ele27_WPTight_Gsf;
int Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG;
int Lep1fatJet2_HLT_Ele35_WPTight_Gsf;
int Lep1fatJet2_HLT_Photon200;
int Lep1fatJet2_HLT_Ele32_WPTight_Gsf;

bool Common_passGoodRun;
bool Common_noiseFlag;
bool Common_noiseFlagMC;

int Common_nb_tight;
int Common_nb_medium;
int Common_nb_loose;

float Common_event_lepSF;
float Common_event_tightBtagSF;
float Common_event_mediumBtagSF;
float Common_event_looseBtagSF;
float Common_eventweight_fatjet_SFVLoose;
float Common_eventweight_fatjet_SFLoose;
float Common_eventweight_fatjet_SFMedium;
float Common_eventweight_fatjet_SFTight;

float Weight_btagtight;
float weight_btagmediun;
float Weight_btagloose;
float Weight_FJVL;
float Weight_FJL;
float Weight_FJM;
float Weight_FJT;

// Gen matching
int matchingt_1;
int matchingW_1;
int matchingg_1;
int matchingZ_1;
int matchingu_1;
int matchingd_1;
int matchings_1;
int matchingc_1;
int matching_gq_1;

int matchingt_2;
int matchingW_2;
int matchingg_2;
int matchingZ_2;
int matchingu_2;
int matchingd_2;
int matchings_2;
int matchingc_2;
int matching_gq_2;

// calculated variables
Int_t Nj4_ex;
Int_t Nj4_in;

int nb_l_deep_ex;
int nb_m_deep_ex;
int nb_t_deep_ex;
int nb_l_deep_in;
int nb_m_deep_in;
int nb_t_deep_in;

float MJJlv;

float leptonicWMT;

// vector branches
std::vector<float> *  Common_LHEReweightingWeight=0;

std::vector<float> *  Lep1fatJet2_Jet_btagDeepB=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepC=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepFlavC=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepFlavB=0;
std::vector<float> *  Lep1fatJet2_Jet_qgl=0;
std::vector<float> *  Lep1fatJet2_Jet_jetId=0;
std::vector<float> *  Lep1fatJet2_Jet_hadronFlavour=0;
std::vector<float> *  Lep1fatJet2_Jet_partonFlavour=0;
std::vector<float> *  Lep1fatJet2_Jet_pt=0;
std::vector<float> *  Lep1fatJet2_Jet_eta=0;
std::vector<float> *  Lep1fatJet2_Jet_phi=0;
std::vector<float> *  Lep1fatJet2_Jet_e=0;

std::vector<float> *  Lep1fatJet2_GenPart_eta=0;
std::vector<int> *  Lep1fatJet2_GenPart_genPartIdxMother=0;
std::vector<float> *  Lep1fatJet2_GenPart_mass=0;
std::vector<int> *  Lep1fatJet2_GenPart_pdgId=0;
std::vector<float> *  Lep1fatJet2_GenPart_phi=0;
std::vector<float> *  Lep1fatJet2_GenPart_pt=0;
std::vector<int> *  Lep1fatJet2_GenPart_status=0;
std::vector<int> *  Lep1fatJet2_GenPart_statusFlags=0;



TBranch        *b_Lep1fatJet2_LeptonPt;
TBranch        *b_Lep1fatJet2_LeptonEta;
TBranch        *b_Lep1fatJet2_LeptonPhi;
TBranch        *b_Lep1fatJet2_LeptonE;
TBranch        *b_Lep1fatJet2_LeptonPDGID;
TBranch        *b_Lep1fatJet2_Muon_pfRelIso04_all;

    // MET
TBranch        *b_Lep1fatJet2_MET_pt;
TBranch        *b_Lep1fatJet2_MET_phi;
TBranch        *b_Common_MET_pt_JER;
TBranch        *b_Common_MET_phi_JER;

    // neutrino
TBranch        *b_Lep1fatJet2_NeutrinoPt;
TBranch        *b_Lep1fatJet2_NeutrinoEta;
TBranch        *b_Lep1fatJet2_Neutrinophi;
TBranch        *b_Lep1fatJet2_NeutrinoE;

    // Leptonic W
TBranch        *b_Lep1fatJet2_LeptonicWPt;
TBranch        *b_Lep1fatJet2_LeptonicWEta;
TBranch        *b_Lep1fatJet2_LeptonicWPhi;
TBranch        *b_Lep1fatJet2_LeptonicWM;
TBranch        *b_Lep1fatJet2_LeptonicWMt;

    
   
// fatJet

TBranch        *b_Lep1fatJet2_FatJet_pt;
TBranch        *b_Lep1fatJet2_FatJet_eta;
TBranch        *b_Lep1fatJet2_FatJet_phi;
TBranch        *b_Lep1fatJet2_FatJet_msoftdrop;
TBranch        *b_Lep1fatJet2_FatJet_jetId;
TBranch        *b_Lep1fatJet2_FatJet_tau1;
TBranch        *b_Lep1fatJet2_FatJet_tau2;
TBranch        *b_Lep1fatJet2_FatJet_tau3;
TBranch        *b_Lep1fatJet2_FatJet_tau4;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_H;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCDothers;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_ZvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_QCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xbb;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xcc;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xqq;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HccvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_QCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_ZvsQCD;

TBranch        *b_Lep1fatJet2_FatJet_pt_2;
TBranch        *b_Lep1fatJet2_FatJet_eta_2;
TBranch        *b_Lep1fatJet2_FatJet_phi_2;
TBranch        *b_Lep1fatJet2_FatJet_msoftdrop_2;
TBranch        *b_Lep1fatJet2_FatJet_jetId_2;
TBranch        *b_Lep1fatJet2_FatJet_tau1_2;
TBranch        *b_Lep1fatJet2_FatJet_tau2_2;
TBranch        *b_Lep1fatJet2_FatJet_tau3_2;
TBranch        *b_Lep1fatJet2_FatJet_tau4_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_H_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCDothers_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_ZvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xbb_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xcc_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xqq_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HccvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_ZvsQCD_2;


// weight, HLT
TBranch        *b_Lep1fatJet2_Pileup_nTrueInt;
TBranch        *b_Lep1fatJet2_Pileup_nPU;

TBranch        *b_Lep1fatJet2_HLT_Mu50;
TBranch        *b_Lep1fatJet2_HLT_IsoMu24;
TBranch        *b_Lep1fatJet2_HLT_OldMu100;
TBranch        *b_Lep1fatJet2_HLT_TkMu100;
TBranch        *b_Lep1fatJet2_HLT_IsoMu27;
TBranch        *b_Lep1fatJet2_HLT_Ele27_WPTight_Gsf;
TBranch        *b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG;
TBranch        *b_Lep1fatJet2_HLT_Ele35_WPTight_Gsf;
TBranch        *b_Lep1fatJet2_HLT_Photon200;
TBranch        *b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf;

TBranch        *b_Common_passGoodRun;
TBranch        *b_Common_noiseFlag;
TBranch        *b_Common_noiseFlagMC;

TBranch        *b_Common_nb_tight;
TBranch        *b_Common_nb_medium;
TBranch        *b_Common_nb_loose;


TBranch        *b_Common_event_lepSF;
TBranch        *b_Common_event_tightBtagSF;
TBranch        *b_Common_event_mediumBtagSF;
TBranch        *b_Common_event_looseBtagSF;
TBranch        *b_Common_eventweight_fatjet_SFVLoose;
TBranch        *b_Common_eventweight_fatjet_SFLoose;
TBranch        *b_Common_eventweight_fatjet_SFMedium;
TBranch        *b_Common_eventweight_fatjet_SFTight;

// end of for VVV EFT 1lepton 


TBranch        *b_jetAK8puppi_pt;
TBranch        *b_jetAK8puppi_pt_2;
TBranch        *b_jetAK8puppi_pt_3;
TBranch        *b_jetAK8puppi_eta;
TBranch        *b_jetAK8puppi_eta_2;
TBranch        *b_jetAK8puppi_eta_3;
TBranch        *b_jetAK8puppi_phi;
TBranch        *b_jetAK8puppi_phi_2;
TBranch        *b_jetAK8puppi_phi_3;
TBranch        *b_jetAK8puppi_sd;
TBranch        *b_jetAK8puppi_sd_2;
TBranch        *b_jetAK8puppi_sd_3;

TBranch        *b_MET_pt;   //!
TBranch        *b_genH_pt;


TBranch        *b_genWeight;


TBranch        *b_Flag_METFilters;
TBranch        *b_Flag_goodVertices;
TBranch        *b_Flag_globalSuperTightHalo2016Filter;
TBranch        *b_Flag_HBHENoiseFilter;
TBranch        *b_Flag_HBHENoiseIsoFilter;
TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;
TBranch        *b_Flag_BadPFMuonFilter;
TBranch        *b_Flag_eeBadScFilter;

TBranch        *b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;
TBranch        *b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;
TBranch        *b_HLT_PFHT800;
TBranch        *b_HLT_PFHT900;
TBranch        *b_HLT_PFJet450;
TBranch        *b_HLT_AK8PFJet450;
TBranch        *b_HLT_AK8PFJet500;
TBranch        *b_HLT_PFJet500;
TBranch        *b_HLT_AK8PFJet400;
TBranch        *b_HLT_AK8PFJet360_TrimMass30;
TBranch        *b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;


//Subjet
TLorentzVector  *ak8sj11;
TLorentzVector  *ak8sj21;
TLorentzVector  *ak8sj31;
TLorentzVector  *ak8sj12;
TLorentzVector  *ak8sj22;
TLorentzVector  *ak8sj32;
TLorentzVector  *ak8sj13;
TLorentzVector  *ak8sj23;
TLorentzVector  *ak8sj33;
TLorentzVector  *ak8sj14;
TLorentzVector  *ak8sj24;
TLorentzVector  *ak8sj34;
TLorentzVector  *ak8sj15;
TLorentzVector  *ak8sj25;
TLorentzVector  *ak8sj35;
// List of branches
TBranch        *b_L1prefiring;
TBranch        *b_L1prefiringup;
TBranch        *b_L1prefiringdown;  
TBranch        *b_ak8sj11;   //!
TBranch        *b_ak8sj21;   //!
TBranch        *b_ak8sj31;   //!
TBranch        *b_ak8sj12;   //!
TBranch        *b_ak8sj22;   //!
TBranch        *b_ak8sj32;   //!
TBranch        *b_ak8sj13;   //!
TBranch        *b_ak8sj23;   //!
TBranch        *b_ak8sj33;   //!
TBranch        *b_ak8sj14;   //!
TBranch        *b_ak8sj24;   //!
TBranch        *b_ak8sj34;   //!
TBranch        *b_ak8sj15;   //!
TBranch        *b_ak8sj25;   //!
TBranch        *b_ak8sj35;   //!
TBranch        *b_run;   //!
TBranch        *b_luminosityBlock;   //!

TBranch        *b_ls;   //!
TBranch        *b_event;   //!
TBranch        *b_nVtx;   //!
TBranch        *b_theWeight;   //!
TBranch        *b_nump;   //!
TBranch        *b_numm;   //!
TBranch        *b_npT;   //!
TBranch        *b_pweight;   //!

TBranch        *b_nLooseEle;   //!
TBranch        *b_nLooseMu;   //!
TBranch        *b_lep;   //!
TBranch        *b_ptlep1;   //!
TBranch        *b_etalep1;   //!
TBranch        *b_philep1;   //!
TBranch        *b_trackIso;   //!
TBranch        *b_muisolation;   //add
TBranch        *b_muchaiso;   //add
TBranch        *b_muneuiso;   //add
TBranch        *b_MET_phi;   //!
TBranch        *b_RawMET_phi;   //!

TBranch        *b_ptVlepJEC;   //!
TBranch        *b_yVlepJEC;   //!
TBranch        *b_phiVlepJEC;   //!
TBranch        *b_mtVlepJEC;   //!
TBranch        *b_massVlepJEC;   //!
TBranch        *b_jetAK8puppi_sdJEC;   //!
TBranch        *b_jetAK8puppi_tau21;   //!
TBranch        *b_jetAK8puppi_tau1;   //!
TBranch        *b_jetAK8puppi_tau2;   //!
TBranch        *b_jetAK8puppi_tau3;   //!
TBranch        *b_jetAK8puppi_tau4;   //!   
TBranch        *b_jetAK8puppi_ptJEC;   //!
TBranch        *b_jetAK8puppi_eta_4;   //!
TBranch        *b_jetAK8puppi_phi_4;   //!
TBranch        *b_jetAK8puppi_sdcorr;   //!
TBranch        *b_IDLoose;   //!
TBranch        *b_delPhilepmet;   //!
TBranch        *b_deltaRlepjet;   //!
TBranch        *b_delPhijetmet;   //!
TBranch        *b_delPhijetlep;   //!
TBranch        *b_vbftag;   //add
TBranch        *b_candMasspuppiJEC;   //!
TBranch        *b_candMasspuppiJEC_new;   //!
TBranch        *b_candMasspuppiJEC_JEC_up;   //!
TBranch        *b_candMasspuppiJEC_JEC_down;   //!
TBranch        *b_candMasspuppiJEC_JER_up;   //!
TBranch        *b_candMasspuppiJEC_JER_down;   //!

TBranch        *b_MJJ_JEC_up;   //!
TBranch        *b_MJJ_JEC_down;   //!
TBranch        *b_MJJ_JER_up;   //!
TBranch        *b_MJJ_JER_down;   //!

TBranch        *b_gentop_pt; //add old
TBranch        *b_gentop_eta; //add old
TBranch        *b_genantitop_pt; //add old
TBranch        *b_genantitop_eta; //add old
TBranch        *b_HLT_Ele1;
TBranch        *b_HLT_Ele2;
TBranch        *b_HLT_Ele3;   //!
TBranch        *b_HLT_Ele4;
TBranch        *b_HLT_Ele5;
TBranch        *b_HLT_Ele6;   //!
TBranch        *b_HLT_Ele7;
TBranch        *b_HLT_Ele8;
TBranch        *b_HLT_Mu1;
TBranch        *b_HLT_Mu2;   //!
TBranch        *b_HLT_Mu3;
TBranch        *b_HLT_Mu4;   //!
TBranch        *b_HLT_Mu5;
TBranch        *b_HLT_Mu6;   //!
TBranch        *b_HLT_Mu7;
TBranch        *b_HLT_Mu8;   //!
TBranch        *b_HLT_Mu9;
TBranch        *b_HLT_Mu10;   //!
TBranch        *b_HLT_Mu11;
TBranch        *b_HLT_Mu12;   //!
TBranch        *b_HLT_Mu13;
TBranch        *b_HLT_Mu14;   //!
TBranch        *b_HLT_Mu15;
TBranch        *b_HLT_Mu16;   //!
TBranch        *b_HLT_Mu17;   //!
TBranch        *b_ak4jet_hf;
TBranch        *b_ak4jet_pf;
TBranch        *b_ak4jet_pt;   //!
TBranch        *b_ak4jet_pt_uncorr;   //!
TBranch        *b_ak4jet_eta;   //!
TBranch        *b_ak4jet_phi;   //!
TBranch        *b_ak4jet_e;   //!
TBranch        *b_ak4jet_dr;   //!
TBranch        *b_ak4jet_csv;   //!
TBranch        *b_ak4jet_icsv;   //!
TBranch        *b_ak4jet_deepcsvb;   //!
TBranch        *b_ak4jet_deepcsvbb;   //!
TBranch        *b_deltaRAK4AK8;   //!
TBranch        *b_ak4jet_IDLoose;   //!
TBranch        *b_ak4jet_IDTight;   //!
/*   TBranch        *b_passFilter_HBHE_;   //!
TBranch        *b_passFilter_HBHEIso_;   //!
TBranch        *b_passFilter_GlobalHalo_;   //!
TBranch        *b_passFilter_ECALDeadCell_;   //!
TBranch        *b_passFilter_GoodVtx_;   //!
TBranch        *b_passFilter_EEBadSc_;   //!
TBranch        *b_passFilter_badMuon_;   //!
TBranch        *b_passFilter_badChargedHadron_;   //!
*/
TBranch        *b_muphoiso;  //add
TBranch        *b_muPU;  //add
TBranch        *b_IDTight;   //!
TBranch        *b_vbfeta;   //add
TBranch        *b_vbfmjj;   //add
TBranch        *b_nj1;   //add
TBranch        *b_nj2;   //add
//TBranch        *b_isHighPt;   //!
//TBranch        *b_isHEEP;   //!
TBranch        *b_ptVlep;   //!
TBranch        *b_yVlep;   //!
TBranch        *b_phiVlep;   //!
TBranch        *b_massVlep;   //!
TBranch        *b_mtVlep;   //! 
TBranch        *b_ptVhad;   //!
TBranch        *b_jetAK8_pt;   //!
TBranch        *b_yVhad;   //!
TBranch        *b_yVhadJEC;   //!
TBranch        *b_phiVhad;   //!
TBranch        *b_massVhad;   //!
TBranch        *b_massVhadJEC;   //!
TBranch        *b_tau1;   //!
TBranch        *b_tau2;   //!
TBranch        *b_tau3;   //!
//  TBranch        *b_tau21;   //!
//   TBranch        *b_sdrop;   //!
//   TBranch        *b_sdropJEC;   //!
TBranch        *b_candMass;   //!
TBranch        *b_numCands;   //!
TBranch        *b_channel;   //!
TBranch        *b_ptlep2;   //!
TBranch        *b_etalep2;   //!
TBranch        *b_philep2;   //!
TBranch        *b_met;   //!
TBranch        *b_metPhi;   //!
TBranch        *b_npIT;   //!
TBranch        *b_nBX;   //!
TBranch        *b_triggerWeight;   //!
TBranch        *b_lumiWeight;   //!
TBranch        *b_pileupWeight;   //!

TBranch        *b_puWeight;   //!
TBranch        *b_puWeightDown;   //!
TBranch        *b_puWeightUp;   //!

TBranch        *b_METraw_et;   //!
TBranch        *b_METraw_phi;   //!
TBranch        *b_METraw_sumEt;   //!
TBranch        *b_MET_sumEt;   //!
TBranch        *b_jetAK8_mass;   //!
TBranch        *b_jetAK8_jec;   //!
TBranch        *b_jetAK8_pt1;   //!
TBranch        *b_jetAK8_eta1;   //!
TBranch        *b_jetAK8_mass1;   //!
TBranch        *b_jetAK8_SF_mass1;   //!
TBranch        *b_jetAK8_SF_mass2;   //!
TBranch        *b_jetAK8_jec1;   //!
TBranch        *b_jetAK8_eta;   //!
TBranch        *b_jetAK8_phi;   //!
TBranch        *b_candMassJEC;   //!
TBranch        *b_etagengl;
TBranch        *b_phigengl;
TBranch        *b_ptgengl;
TBranch        *b_egengl;

TBranch        *b_etagenwl;
TBranch        *b_phigenwl;
TBranch        *b_ptgenwl;
TBranch        *b_ptgenwf;

TBranch        *b_etagenzl;
TBranch        *b_phigenzl;
TBranch        *b_ptgenzl;
TBranch        *b_etagenq1l;
TBranch        *b_phigenq1l;
TBranch        *b_ptgenq1l;
TBranch        *b_egenq1l;

TBranch        *b_etagenq2l;
TBranch        *b_phigenq2l;
TBranch        *b_ptgenq2l;
TBranch        *b_egenq2l;

TBranch        *b_etagenq3l;
TBranch        *b_phigenq3l;
TBranch        *b_ptgenq3l;
TBranch        *b_egenq3l;

TBranch        *b_etagenq4l;
TBranch        *b_phigenq4l;
TBranch        *b_ptgenq4l;
TBranch        *b_egenq4l;

TBranch        *b_etagenq5l;
TBranch        *b_phigenq5l;
TBranch        *b_ptgenq5l;
TBranch        *b_egenq5l;

TBranch        *b_gent_w_tag;
TBranch        *b_genantit_w_tag;
TBranch        *b_gent_w_q1_pdg;
TBranch        *b_gent_w_q2_pdg;
TBranch        *b_genantit_w_q1_pdg;
TBranch        *b_genantit_w_q2_pdg;
TBranch        *b_taggenwl;
TBranch        *b_genw_q1_pdg;
TBranch        *b_genw_q2_pdg;
TBranch        *b_jetAK8puppi_dnnTop, *b_jetAK8puppi_dnnW,*b_jetAK8puppi_dnnH4q,*b_jetAK8puppi_dnnTop_2, *b_jetAK8puppi_dnnW_2,*b_jetAK8puppi_dnnH4q_2,*b_jetAK8puppi_dnnTop_3, *b_jetAK8puppi_dnnW_3,*b_jetAK8puppi_dnnH4q_3,*b_jetAK8puppi_dnnTop_4, *b_jetAK8puppi_dnnW_4,*b_jetAK8puppi_dnnH4q_4; //DeepAK8
TBranch        *b_jetAK8puppi_dnnZ,*b_jetAK8puppi_dnnZbb,*b_jetAK8puppi_dnnHbb,*b_jetAK8puppi_dnnZ_2,*b_jetAK8puppi_dnnZbb_2,*b_jetAK8puppi_dnnHbb_2,*b_jetAK8puppi_dnnZ_3,*b_jetAK8puppi_dnnZbb_3,*b_jetAK8puppi_dnnHbb_3,*b_jetAK8puppi_dnnZ_4,*b_jetAK8puppi_dnnZbb_4,*b_jetAK8puppi_dnnHbb_4;
TBranch        *b_jetAK8puppi_dnnDecorrTop, *b_jetAK8puppi_dnnDecorrW,*b_jetAK8puppi_dnnDecorrH4q,*b_jetAK8puppi_dnnDecorrTop_2, *b_jetAK8puppi_dnnDecorrW_2, *b_jetAK8puppi_dnnDecorrH4q_2,*b_jetAK8puppi_dnnDecorrTop_3, *b_jetAK8puppi_dnnDecorrW_3, *b_jetAK8puppi_dnnDecorrH4q_3,*b_jetAK8puppi_dnnDecorrTop_4, *b_jetAK8puppi_dnnDecorrW_4,*b_jetAK8puppi_dnnDecorrH4q_4; //Decorrelated DeepAK8
TBranch        *b_jetAK8puppi_dnnDecorrZ,*b_jetAK8puppi_dnnDecorrZbb,*b_jetAK8puppi_dnnDecorrHbb,*b_jetAK8puppi_dnnDecorrZ_2,*b_jetAK8puppi_dnnDecorrZbb_2,*b_jetAK8puppi_dnnDecorrHbb_2,*b_jetAK8puppi_dnnDecorrZ_3,*b_jetAK8puppi_dnnDecorrZbb_3,*b_jetAK8puppi_dnnDecorrHbb_3,*b_jetAK8puppi_dnnDecorrZ_4,*b_jetAK8puppi_dnnDecorrZbb_4,*b_jetAK8puppi_dnnDecorrHbb_4;
TBranch        *b_jetAK8puppi_dnnDecorrbb,*b_jetAK8puppi_dnnDecorrcc,*b_jetAK8puppi_dnnDecorrbbnog,*b_jetAK8puppi_dnnDecorrccnog,*b_jetAK8puppi_dnnDecorrbb_2,*b_jetAK8puppi_dnnDecorrcc_2,*b_jetAK8puppi_dnnDecorrbbnog_2,*b_jetAK8puppi_dnnDecorrccnog_2,*b_jetAK8puppi_dnnDecorrbb_3,*b_jetAK8puppi_dnnDecorrcc_3,*b_jetAK8puppi_dnnDecorrbbnog_3,*b_jetAK8puppi_dnnDecorrccnog_3,*b_jetAK8puppi_dnnDecorrbb_4,*b_jetAK8puppi_dnnDecorrcc_4,*b_jetAK8puppi_dnnDecorrbbnog_4,*b_jetAK8puppi_dnnDecorrccnog_4;
TBranch        *b_jetAK8puppi_dnnqcd,*b_jetAK8puppi_dnntop,*b_jetAK8puppi_dnnw,*b_jetAK8puppi_dnnz,*b_jetAK8puppi_dnnzbb,*b_jetAK8puppi_dnnhbb,*b_jetAK8puppi_dnnh4q,*b_jetAK8puppi_dnnqcd_2,*b_jetAK8puppi_dnntop_2,*b_jetAK8puppi_dnnw_2,*b_jetAK8puppi_dnnz_2,*b_jetAK8puppi_dnnzbb_2,*b_jetAK8puppi_dnnhbb_2,*b_jetAK8puppi_dnnh4q_2,*b_jetAK8puppi_dnnqcd_3,*b_jetAK8puppi_dnntop_3,*b_jetAK8puppi_dnnw_3,*b_jetAK8puppi_dnnz_3,*b_jetAK8puppi_dnnzbb_3,*b_jetAK8puppi_dnnhbb_3,*b_jetAK8puppi_dnnh4q_3,*b_jetAK8puppi_dnnqcd_4,*b_jetAK8puppi_dnntop_4,*b_jetAK8puppi_dnnw_4,*b_jetAK8puppi_dnnz_4,*b_jetAK8puppi_dnnzbb_4,*b_jetAK8puppi_dnnhbb_4,*b_jetAK8puppi_dnnh4q_4;
TBranch        *b_jetAK8puppi_dnnDecorrqcd,*b_jetAK8puppi_dnnDecorrtop,*b_jetAK8puppi_dnnDecorrw,*b_jetAK8puppi_dnnDecorrz,*b_jetAK8puppi_dnnDecorrzbb,*b_jetAK8puppi_dnnDecorrhbb,*b_jetAK8puppi_dnnDecorrh4q,*b_jetAK8puppi_dnnDecorrqcd_2,*b_jetAK8puppi_dnnDecorrtop_2,*b_jetAK8puppi_dnnDecorrw_2,*b_jetAK8puppi_dnnDecorrz_2,*b_jetAK8puppi_dnnDecorrzbb_2,*b_jetAK8puppi_dnnDecorrhbb_2,*b_jetAK8puppi_dnnDecorrh4q_2,*b_jetAK8puppi_dnnDecorrqcd_3,*b_jetAK8puppi_dnnDecorrtop_3,*b_jetAK8puppi_dnnDecorrw_3,*b_jetAK8puppi_dnnDecorrz_3,*b_jetAK8puppi_dnnDecorrzbb_3,*b_jetAK8puppi_dnnDecorrhbb_3,*b_jetAK8puppi_dnnDecorrh4q_3,*b_jetAK8puppi_dnnDecorrqcd_4,*b_jetAK8puppi_dnnDecorrtop_4,*b_jetAK8puppi_dnnDecorrw_4,*b_jetAK8puppi_dnnDecorrz_4,*b_jetAK8puppi_dnnDecorrzbb_4,*b_jetAK8puppi_dnnDecorrhbb_4,*b_jetAK8puppi_dnnDecorrh4q_4;

// gKK raw score
TBranch        *b_ak4jet_deepflavor_probb;
TBranch        *b_ak4jet_deepflavor_probc;
TBranch        *b_ak4jet_deepflavor_probg;
TBranch        *b_ak4jet_deepflavor_problepb;
TBranch        *b_ak4jet_deepflavor_probbb;
TBranch        *b_ak4jet_deepflavor_probuds;

TBranch        *b_jetAK8puppi_dnn_probTbcq;
TBranch        *b_jetAK8puppi_dnn_probTbqq;
TBranch        *b_jetAK8puppi_dnn_probTbc;
TBranch        *b_jetAK8puppi_dnn_probTbq;
TBranch        *b_jetAK8puppi_dnn_probWcq;
TBranch        *b_jetAK8puppi_dnn_probWqq;
TBranch        *b_jetAK8puppi_dnn_probZbb;
TBranch        *b_jetAK8puppi_dnn_probZcc;
TBranch        *b_jetAK8puppi_dnn_probZqq;
TBranch        *b_jetAK8puppi_dnn_probHbb;
TBranch        *b_jetAK8puppi_dnn_probHcc;
TBranch        *b_jetAK8puppi_dnn_probHqqqq;
TBranch        *b_jetAK8puppi_dnn_probQCDbb;
TBranch        *b_jetAK8puppi_dnn_probQCDcc;
TBranch        *b_jetAK8puppi_dnn_probQCDb;
TBranch        *b_jetAK8puppi_dnn_probQCDc;
TBranch        *b_jetAK8puppi_dnn_probQCDothers;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers;
TBranch        *b_jetAK8puppi_dnn_probTbcq_2;
TBranch        *b_jetAK8puppi_dnn_probTbqq_2;
TBranch        *b_jetAK8puppi_dnn_probTbc_2;
TBranch        *b_jetAK8puppi_dnn_probTbq_2;
TBranch        *b_jetAK8puppi_dnn_probWcq_2;
TBranch        *b_jetAK8puppi_dnn_probWqq_2;
TBranch        *b_jetAK8puppi_dnn_probZbb_2;
TBranch        *b_jetAK8puppi_dnn_probZcc_2;
TBranch        *b_jetAK8puppi_dnn_probZqq_2;
TBranch        *b_jetAK8puppi_dnn_probHbb_2;
TBranch        *b_jetAK8puppi_dnn_probHcc_2;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_2;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_2;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_2;
TBranch        *b_jetAK8puppi_dnn_probQCDb_2;
TBranch        *b_jetAK8puppi_dnn_probQCDc_2;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_2;
TBranch        *b_jetAK8puppi_dnn_probTbcq_3;
TBranch        *b_jetAK8puppi_dnn_probTbqq_3;
TBranch        *b_jetAK8puppi_dnn_probTbc_3;
TBranch        *b_jetAK8puppi_dnn_probTbq_3;
TBranch        *b_jetAK8puppi_dnn_probWcq_3;
TBranch        *b_jetAK8puppi_dnn_probWqq_3;
TBranch        *b_jetAK8puppi_dnn_probZbb_3;
TBranch        *b_jetAK8puppi_dnn_probZcc_3;
TBranch        *b_jetAK8puppi_dnn_probZqq_3;
TBranch        *b_jetAK8puppi_dnn_probHbb_3;
TBranch        *b_jetAK8puppi_dnn_probHcc_3;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_3;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_3;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_3;
TBranch        *b_jetAK8puppi_dnn_probQCDb_3;
TBranch        *b_jetAK8puppi_dnn_probQCDc_3;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_3;
TBranch        *b_jetAK8puppi_dnn_probTbcq_4;
TBranch        *b_jetAK8puppi_dnn_probTbqq_4;
TBranch        *b_jetAK8puppi_dnn_probTbc_4;
TBranch        *b_jetAK8puppi_dnn_probTbq_4;
TBranch        *b_jetAK8puppi_dnn_probWcq_4;
TBranch        *b_jetAK8puppi_dnn_probWqq_4;
TBranch        *b_jetAK8puppi_dnn_probZbb_4;
TBranch        *b_jetAK8puppi_dnn_probZcc_4;
TBranch        *b_jetAK8puppi_dnn_probZqq_4;
TBranch        *b_jetAK8puppi_dnn_probHbb_4;
TBranch        *b_jetAK8puppi_dnn_probHcc_4;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_4;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_4;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_4;
TBranch        *b_jetAK8puppi_dnn_probQCDb_4;
TBranch        *b_jetAK8puppi_dnn_probQCDc_4;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_4;


TBranch        *b_jetAK8puppi_tau42;   //!
TBranch        *b_jetAK8puppi_sdJEC_2;   //!
TBranch        *b_jetAK8puppi_tau21_2;   //!
TBranch        *b_jetAK8puppi_tau1_2;   //!
TBranch        *b_jetAK8puppi_tau2_2;   //!
TBranch        *b_jetAK8puppi_tau3_2;   //!
TBranch        *b_jetAK8puppi_tau4_2;   //!  
TBranch        *b_jetAK8puppi_tau42_2;   //!
TBranch        *b_jetAK8puppi_ptJEC_2;   //!
TBranch        *b_jetAK8puppi_sdcorr_2;   //!
TBranch        *b_jetAK8puppi_sdJEC_3;   //!
TBranch         *b_status_1;
TBranch         *b_status_2;
TBranch         *b_status_3;
TBranch        *b_jetAK8puppi_tau21_3;   //!
TBranch        *b_jetAK8puppi_tau1_3;   //!
TBranch        *b_jetAK8puppi_tau2_3;   //!
TBranch        *b_jetAK8puppi_tau3_3;   //!
TBranch        *b_jetAK8puppi_tau4_3;   //!  
TBranch        *b_jetAK8puppi_tau42_3;   //!
TBranch        *b_jetAK8puppi_tau42_4;   //!
TBranch        *b_jetAK8puppi_tau41_4;   //!
TBranch        *b_jetAK8puppi_tau21_4;   //!
TBranch        *b_jetAK8puppi_ptJEC_3;   //!
TBranch        *b_jetAK8puppi_sdcorr_3;   //!
TBranch        *b_massww;   //!

TBranch        *b_gentop_phi;   //add old
TBranch        *b_gentop_mass;   //add old
TBranch        *b_genantitop_phi;   //add old
TBranch        *b_genantitop_mass;   //add old

TBranch        *b_jetAK8puppi_sd_4;   //!
TBranch  *b_jetAK8puppi_ptJEC_4;
TBranch  *b_jetAK8puppi_ptJEC_5;
TBranch  *b_jetAK8puppi_ptJEC_6;
TBranch  *b_jetAK8puppi_ptJEC_7;
TBranch  *b_jetAK8puppi_ptJEC_8;
TBranch  *b_jetAK8puppi_sdJEC_4;
TBranch  *b_jetAK8puppi_sdJEC_5;
TBranch  *b_jetAK8puppi_sdJEC_6;
TBranch  *b_jetAK8puppi_sdJEC_7;
TBranch  *b_jetAK8puppi_sdJEC_8;
TBranch  *b_gen_gra_m;
TBranch  *b_gen_gra_pt;
TBranch  *b_gen_gra_eta;
TBranch  *b_gen_gra_phi;
TBranch  *b_gen_rad_m;
TBranch  *b_gen_rad_pt;
TBranch  *b_gen_rad_eta;
TBranch  *b_gen_rad_phi;
TBranch  *b_gen_tau_e;
TBranch  *b_gen_tau_pt;
TBranch  *b_gen_tau_eta;
TBranch  *b_gen_tau_phi;
TBranch  *b_gen_tau_e_2;
TBranch  *b_gen_tau_pt_2;
TBranch  *b_gen_tau_eta_2;
TBranch  *b_gen_tau_phi_2;
TBranch  *b_gen_tau_e_3;
TBranch  *b_gen_tau_pt_3;
TBranch  *b_gen_tau_eta_3;
TBranch  *b_gen_tau_phi_3;
TBranch  *b_ptGenVhad;
TBranch  *b_etaGenVhad;
TBranch  *b_phiGenVhad;
TBranch  *b_etaGenVhad_2;
TBranch  *b_phiGenVhad_2;
TBranch  *b_etaGenVhad_3;
TBranch  *b_phiGenVhad_3;
TBranch  *b_massGenVhad;
TBranch  *b_ptGenV_2;
TBranch  *b_etaGenV_2;
TBranch  *b_phiGenV_2;
TBranch  *b_massGenV_2;
TBranch  *b_ptGenV_3;
TBranch  *b_etaGenV_3;
TBranch  *b_phiGenV_3;
TBranch  *b_massGenV_3;
TBranch  *b_ptGenVlep;
TBranch  *b_etaGenVlep;
TBranch  *b_phiGenVlep;
TBranch  *b_massGenVlep;
TBranch  *b_ptGenVlep_2;
TBranch  *b_etaGenVlep_2;
TBranch  *b_phiGenVlep_2;
TBranch  *b_massGenVlep_2;
TBranch  *b_ptGenVlep_3;
TBranch  *b_etaGenVlep_3;
TBranch  *b_phiGenVlep_3;
TBranch  *b_massGenVlep_3;
TBranch  *b_ptq11;
TBranch  *b_etaq11;
TBranch  *b_phiq11;
TBranch  *b_massq11;
TBranch  *b_ptq21;
TBranch  *b_etaq21;
TBranch  *b_phiq21;
TBranch  *b_massq21;
TBranch  *b_ptq31;
TBranch  *b_etaq31;
TBranch  *b_phiq31;
TBranch  *b_massq31;
TBranch  *b_ptq12;
TBranch  *b_etaq12;
TBranch  *b_phiq12;
TBranch  *b_massq12;
TBranch  *b_ptq22;
TBranch  *b_etaq22;
TBranch  *b_phiq22;
TBranch  *b_massq22;
TBranch  *b_ptq32;
TBranch  *b_etaq32;
TBranch  *b_phiq32;
TBranch  *b_massq32; 

TBranch  *b_genw_q1_eta;
TBranch  *b_genw_q1_phi;
TBranch  *b_genw_q2_eta;
TBranch  *b_genw_q2_phi;

TBranch  *b_gent_b_eta;
TBranch  *b_gent_b_phi;
TBranch  *b_gent_b_pt;
TBranch  *b_gent_b_mass;

TBranch  *b_genantit_b_eta;
TBranch  *b_genantit_b_phi;
TBranch  *b_genantit_b_pt;
TBranch  *b_genantit_b_mass;

TBranch  *b_gent_w_eta;
TBranch  *b_gent_w_phi;
TBranch  *b_gent_w_pt;

TBranch  *b_genantit_w_eta;
TBranch  *b_genantit_w_phi;
TBranch  *b_genantit_w_pt;

TBranch  *b_gent_w_q1_eta;
TBranch  *b_gent_w_q1_phi;
TBranch  *b_gent_w_q1_pt;

TBranch  *b_genantit_w_q1_eta;
TBranch  *b_genantit_w_q1_phi;
TBranch  *b_genantit_w_q1_pt;

TBranch  *b_gent_w_q2_eta;
TBranch  *b_gent_w_q2_phi;
TBranch  *b_gent_w_q2_pt;

TBranch  *b_genantit_w_q2_eta;
TBranch  *b_genantit_w_q2_phi;
TBranch  *b_genantit_w_q2_pt;


// =============== Nano ===============
// =============== Nano ===============

// =============== vector ==============
// ele
int Electron_charge_[NLEPTON_MAX];
vector<int> v_Electron_charge_;
TBranch *b_Electron_charge_;

int Electron_jetIdx_[NLEPTON_MAX];
vector<int> v_Electron_jetIdx_;
TBranch *b_Electron_jetIdx_;

int Electron_pdgId_[NLEPTON_MAX];
vector<int> v_Electron_pdgId_;
TBranch *b_Electron_pdgId_;

float Electron_jetRelIso_[NLEPTON_MAX];
vector<float> v_Electron_jetRelIso_;
TBranch *b_Electron_jetRelIso_;

float Electron_eta_[NLEPTON_MAX];
vector<float> v_Electron_eta_;
TBranch *b_Electron_eta_;

float Electron_mass_[NLEPTON_MAX];
vector<float> v_Electron_mass_;
TBranch *b_Electron_mass_;

float Electron_pfRelIso03_all_[NLEPTON_MAX];
vector<float> v_Electron_pfRelIso03_all_;
TBranch *b_Electron_pfRelIso03_all_;

float Electron_phi_[NLEPTON_MAX];
vector<float> v_Electron_phi_;
TBranch *b_Electron_phi_;

float Electron_pt_[NLEPTON_MAX];
vector<float> v_Electron_pt_;
TBranch *b_Electron_pt_;

// mu
int Muon_charge_[NLEPTON_MAX];
vector<int> v_Muon_charge_;
TBranch *b_Muon_charge_;

int Muon_highPtId_[NLEPTON_MAX];
vector<int> v_Muon_highPtId_;
TBranch *b_Muon_highPtId_;

int Muon_jetIdx_[NLEPTON_MAX];
vector<int> v_Muon_jetIdx_;
TBranch *b_Muon_jetIdx_;

int Muon_pdgId_[NLEPTON_MAX];
vector<int> v_Muon_pdgId_;
TBranch *b_Muon_pdgId_;

float Muon_eta_[NLEPTON_MAX];
vector<float> v_Muon_eta_;
TBranch *b_Muon_eta_;

float Muon_jetRelIso_[NLEPTON_MAX];
vector<float> v_Muon_jetRelIso_;
TBranch *b_Muon_jetRelIso_;

float Muon_mass_[NLEPTON_MAX];
vector<float> v_Muon_mass_;
TBranch *b_Muon_mass_;

float Muon_pfRelIso03_all_[NLEPTON_MAX];
vector<float> v_Muon_pfRelIso03_all_;
TBranch *b_Muon_pfRelIso03_all_;

float Muon_pfRelIso04_all_[NLEPTON_MAX];
vector<float> v_Muon_pfRelIso04_all_;
TBranch *b_Muon_pfRelIso04_all_;

float Muon_phi_[NLEPTON_MAX];
vector<float> v_Muon_phi_;
TBranch *b_Muon_phi_;

float Muon_pt_[NLEPTON_MAX];
vector<float> v_Muon_pt_;
TBranch *b_Muon_pt_;

float Muon_tkRelIso_[NLEPTON_MAX];
vector<float> v_Muon_tkRelIso_;
TBranch *b_Muon_tkRelIso_;


// =============== vector ==============

// =============== number ==============
float usenumber1;
TBranch  *b_usenumber1;

float usenumber2;
TBranch  *b_usenumber2;

float usenumber3;
TBranch  *b_usenumber3;

float leptonid;
TBranch  *b_leptonid;

float leptonpgdid;
TBranch  *b_leptonpgdid;

// =============== number ==============

// =============== Nano ===============
// =============== Nano ===============

// =============== added branches =============
// ========= Common ========
Int_t         Nj8;



// =========== B2G SF ==========
Int_t NLepton;
Int_t LeptonID;

float PT_l;
float Eta_l;
float Phi_l;
float M_l;
// =========== B2G SF ==========

// =============== added branches =============

// =============== Looper ===============





   TString m_dataset;
   EDBR2PKUTree(TTree *tree=0, TString dataset="", Int_t IsData = 1, std::vector<std::string> outputbranches_ = std::vector<std::string>({}), TString channel_ = "" );
   // EDBR2PKUTree(TChain *tree=0, TString dataset="", Int_t IsData = 1, std::vector<std::string> outputbranches_ = std::vector<std::string>({}), TString channel_ = "" );

   virtual ~EDBR2PKUTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree, Int_t IsData);
   // virtual void     Init(TChain *tree, Int_t IsData);
   virtual void     Loop(TString channelname, Double_t XS, Int_t IsData, Float_t Nevents, Double_t LUMI, TString YEAR);// channelname= "mu" or "el"
   virtual Bool_t   Notify(Long64_t entry);
   virtual void     Show(Long64_t entry = -1);
   virtual void     endJob() ;

   private:
   TTree *ExTree;
   TFile *fout; 
   ofstream *file_cutflow;

};

#endif

#ifdef EDBR2PKUTree_cxx
// EDBR2PKUTree::EDBR2PKUTree(TChain *tree, TString dataset, Int_t IsData, std::vector<std::string> outputbranches_, TString channel_) : fChain(0) 
EDBR2PKUTree::EDBR2PKUTree(TTree *tree, TString dataset, Int_t IsData_, std::vector<std::string> outputbranches_, TString channel_) : fChain(0) 
{
   channelName = channel_;
   cout << "channelName : " << channelName << endl;
   m_dataset = dataset;
   IsData    = IsData_;
   Init(tree, IsData);
   outputbranches = outputbranches_;
   Outputbranches();
}

EDBR2PKUTree::~EDBR2PKUTree()
{
   if (!fChain) return;
   //delete fChain->GetCurrentFile();
}

Int_t EDBR2PKUTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EDBR2PKUTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify(entry);
   }
   return centry;
}

void EDBR2PKUTree::Outputbranches(){
   if(outputbranches.size() > 0){
      ExTree->SetBranchStatus("*",0);
      for(size_t i ; i < outputbranches.size(); i++){
         ExTree->SetBranchStatus(outputbranches[i].c_str(),1);
      }
   }
}

void EDBR2PKUTree::Init(TTree *tree, Int_t IsData)
// void EDBR2PKUTree::Init(TChain *tree, Int_t IsData)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fout = new TFile(m_dataset, "RECREATE");
   ExTree = new TTree("PKUTree","PKUTree");
   // ExTree->SetAutoSave(0);
   file_cutflow =new ofstream(m_dataset+"_eventnum.txt");

   loadVectorBranches();

   if( channelName.EqualTo("had") ){
      OutputBranches_GKK_0Lepton();
   }

   if(channelName.EqualTo("HWW")) {
      OutputBranches_HWW(); 
   }

   if( channelName.EqualTo("B2GSF_1lepton") ){
      OutputBranches_B2GSF();
   }

   if ( channelName.Contains("VVV_EFT_1lepton") ){
      OutputBranches_VVV_EFT_1lepton();
   }


   // Notify();
}

Bool_t EDBR2PKUTree::Notify(Long64_t jentry)
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.
   
   return kTRUE;
}

void EDBR2PKUTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

void EDBR2PKUTree::endJob() {
   fout->cd();
   ExTree->Write();
   // ExTree->Write("",TObject::kWriteDelete); // 21.9.7 : in order to solve the problem for write the backup trees
   // ExTree->Write("",TObject::kOverwrite); // 21.9.7 : in order to solve the problem for write the backup trees
   
   fout->Write();
   fout->Close();
}

Int_t EDBR2PKUTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EDBR2PKUTree_cxx
