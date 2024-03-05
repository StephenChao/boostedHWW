void EDBR2PKUTree::NAK4() {

    AK41.SetPtEtaPhiM(0,-99,-99,-99);
    AK42.SetPtEtaPhiM(0,-99,-99,-99);
    AK43.SetPtEtaPhiM(0,-99,-99,-99);
    AK44.SetPtEtaPhiM(0,-99,-99,-99);
    AK45.SetPtEtaPhiM(0,-99,-99,-99);
    AK46.SetPtEtaPhiM(0,-99,-99,-99);

for(Int_t i=0;i<15;i++){
deltaRak4sj[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij),2*Pi-fabs(ak4jet_phi[i]-Phij)),2));
deltaRak4sj2[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_2),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_2),2*Pi-fabs(ak4jet_phi[i]-Phij_2)),2));
       if(Nj8==3){
deltaRak4sj3[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_3),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_3),2*Pi-fabs(ak4jet_phi[i]-Phij_3)),2));
           }
       else{
deltaRak4sj3[i]=10000;
           }     
       if(Nj8==4){
deltaRak4sj4[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_4),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_4),2*Pi-fabs(ak4jet_phi[i]-Phij_4)),2));
           }
       else{
deltaRak4sj4[i]=10000;
           }
}

num_ak4jetsex=0;
num_ak4jetsin=0;

Double_t DR=0.8;

for(Int_t i=0; i<15; i++) {

ex_ak4jet_pt[i]=-99;
ex_ak4jet_eta[i]=-99;

}

for(Int_t ii=0; ii<15; ii++) {
bool cutsj=0;
bool cutsj2=0;
bool cutsj3=0;
bool cutsj4=0;
bool cutsjin=0; 
bool cutsjin2=0;
bool cutsjin3=0;
bool cutsjin4=0;
bool sjout=1,sjin=0;

cutsj=(ak4jet_pt[ii]>0)&&(deltaRak4sj[ii]>DR);
cutsjin=(ak4jet_pt[ii]>0)&&(deltaRak4sj[ii]<DR);

cutsj2=(ak4jet_pt[ii]>0)&&(deltaRak4sj2[ii]>DR);
cutsjin2=(ak4jet_pt[ii]>0)&&(deltaRak4sj2[ii]<DR);

cutsj3=(ak4jet_pt[ii]>0)&&(deltaRak4sj3[ii]>DR);
cutsjin3=(ak4jet_pt[ii]>0)&&(deltaRak4sj3[ii]<DR);

cutsj4=(ak4jet_pt[ii]>0)&&(deltaRak4sj4[ii]>DR);
cutsjin4=(ak4jet_pt[ii]>0)&&(deltaRak4sj4[ii]<DR);

sjout*=cutsj*cutsj2*cutsj3*cutsj4;
sjin+=cutsjin+cutsjin2+cutsjin3+cutsjin4;

if(sjout==1) 
              {num_ak4jetsex++;
                   if(num_ak4jetsex==1) {
         AK41.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[0]=ak4jet_pt[ii];
                               ex_ak4jet_eta[0]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==2) {
         AK42.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[1]=ak4jet_pt[ii];
                               ex_ak4jet_eta[1]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==3) {
         AK43.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[2]=ak4jet_pt[ii];
                               ex_ak4jet_eta[2]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==4) {
         AK44.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[3]=ak4jet_pt[ii];
                               ex_ak4jet_eta[3]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==5) {
         AK45.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[4]=ak4jet_pt[ii];
                               ex_ak4jet_eta[4]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==6) {
         AK46.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[5]=ak4jet_pt[ii];
                               ex_ak4jet_eta[5]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==7) {
                               ex_ak4jet_pt[6]=ak4jet_pt[ii];
                               ex_ak4jet_eta[6]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==8) {
                               ex_ak4jet_pt[7]=ak4jet_pt[ii];
                               ex_ak4jet_eta[7]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==9) {
                               ex_ak4jet_pt[8]=ak4jet_pt[ii];
                               ex_ak4jet_eta[8]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==10) {
                               ex_ak4jet_pt[9]=ak4jet_pt[ii];
                               ex_ak4jet_eta[9]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==11) {
                               ex_ak4jet_pt[10]=ak4jet_pt[ii];
                               ex_ak4jet_eta[10]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==12) {
                               ex_ak4jet_pt[11]=ak4jet_pt[ii];
                               ex_ak4jet_eta[11]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==13) {
                               ex_ak4jet_pt[12]=ak4jet_pt[ii];
                               ex_ak4jet_eta[12]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==14) {
                               ex_ak4jet_pt[13]=ak4jet_pt[ii];
                               ex_ak4jet_eta[13]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==15) {
                               ex_ak4jet_pt[14]=ak4jet_pt[ii];
                               ex_ak4jet_eta[14]=ak4jet_eta[ii];
                                        }
              }
if(sjin>=1) num_ak4jetsin++;
}


}

void EDBR2PKUTree::Nbtagf() {
    //number of bjet calculation
    num_bJet=0.;
    num_bJet_loose=0.;
    num_bJet_tight=0.;
    num_bJet_deep=0.;
    num_bJet_loose_deep=0.;
    num_bJet_tight_deep=0.;

    num_bJet_in = 0;
    num_bJet_loose_in = 0;
    num_bJet_tight_in = 0;
    num_bJet_deep_in = 0;
    num_bJet_loose_deep_in = 0;
    num_bJet_tight_deep_in = 0;
            
    for(size_t i=0; i < v_Jet_pt_.size(); i++)  {
        if ( !(v_Jet_pt_.at(i) > 30) ) { continue; }
        if ( !(fabs(Double_t(v_Jet_eta_.at(i))) < 2.4) ) { continue; }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.6324 ) {
            num_bJet_deep_in = num_bJet_deep_in+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.2219 ) {
            num_bJet_loose_deep_in = num_bJet_loose_deep_in+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.8958 ) {
            num_bJet_tight_deep_in = num_bJet_tight_deep_in+1;
        }
        if(Nj8>=1) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if(Nj8>=2) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij_2);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij_2);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj_2),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if(Nj8>=3) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij_3);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij_3);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj_3),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.6324 ) {
            num_bJet_deep = num_bJet_deep+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.2219 ) {
            num_bJet_loose_deep = num_bJet_loose_deep+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.8958 ) {
            num_bJet_tight_deep = num_bJet_tight_deep+1;
        }
    }

    nbtag=num_bJet;
    nbtag_deep=num_bJet_deep;
    nbtag_deep_loose=num_bJet_loose_deep;
    nbtag_deep_tight=num_bJet_tight_deep;

}