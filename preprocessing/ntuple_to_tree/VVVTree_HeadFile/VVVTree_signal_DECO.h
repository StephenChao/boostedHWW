#ifndef _VVVTree_signal_DECO_
#define _VVVTree_signal_DECO_

void EDBR2PKUTree::Radion_Matching() {
    R4q_max=-99,R3q_max=-99,R2q_max=-99,Rlqq_max=-99,Rlq_max=-99,w_max=-99,u_max=-99;
    R4q_min=-99,R3q_min=-99,R2q_min=-99,Rlqq_min=-99,Rlq_min=-99,w_min=-99,u_min=-99;
    gKK_g_max = -99;
    gKK_g_min = -99;
    R3q_taudecay_max = -99;
    R2q_qq_taudecay_max = -99;
    R2q_qtau_taudecay_max = -99;
    R2q_tautau_taudecay_max = -99;
    Rlqq_emu_taudecay_max = -99;
    Rlqq_tau_taudecay_max = -99;
    Rlq_taudecay_max = -99;
    w_taudecay_max = -99;
    u_taudecay_max = -99;
    R3q_taudecay_min = -99;
    R2q_qq_taudecay_min = -99;
    R2q_qtau_taudecay_min = -99;
    R2q_tautau_taudecay_min = -99;
    Rlqq_emu_taudecay_min = -99;
    Rlqq_tau_taudecay_min = -99;
    Rlq_taudecay_min = -99;
    w_taudecay_min = -99;
    u_taudecay_min = -99;
    R3q_tauhad_max = -99;
    R2q_qtau_tauhad_max = -99;
    R2q_tautau_tauhad_max = -99;
    Rlqq_emu_tauhad_max = -99;
    Rlq_tauhad_max = -99;
    w_tauhad_max = -99;
    u_tauhad_max = -99;
    R3q_tauhad_min = -99;
    R2q_qtau_tauhad_min = -99;
    R2q_tautau_tauhad_min = -99;
    Rlqq_emu_tauhad_min = -99;
    Rlq_tauhad_min = -99;
    w_tauhad_min = -99;
    u_tauhad_min = -99;

    R3q_td_max = -99;
    rest_td_max = -99;
    R2q_Rlqq_td_max = -99;
    R3q_td_min = -99;
    rest_td_min = -99;
    R2q_Rlqq_td_min = -99;

    R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
    gKK_g_mid = -99;
    R3q_taudecay_mid = -99;
    R2q_qq_taudecay_mid = -99;
    R2q_qtau_taudecay_mid = -99;
    R2q_tautau_taudecay_mid = -99;
    Rlqq_emu_taudecay_mid = -99;
    Rlqq_tau_taudecay_mid = -99;
    Rlq_taudecay_mid = -99;
    w_taudecay_mid = -99;
    u_taudecay_mid = -99;
    R3q_tauhad_mid = -99;
    R2q_qtau_tauhad_mid = -99;
    R2q_tautau_tauhad_mid = -99;
    Rlqq_emu_tauhad_mid = -99;
    Rlq_tauhad_mid = -99;
    w_tauhad_mid = -99;
    u_tauhad_mid = -99;
    R3q_td_mid = -99;
    rest_td_mid = -99;
    R2q_Rlqq_td_mid = -99;

    gKK_g_max = -99;
    gKK_g_min = -99;
    gKK_g_mid = -99;

    z_max = -99;
    z_mid = -99;
    z_min = -99;

    t_max = -99;
    t_mid = -99;
    t_min = -99;

    
    gKK_g_Matching(); // this has to run first
    Radion_Matching_taulep(); // this has to run second
    Radion_Matching_taudecay();
    Radion_Matching_deepW_Ordered();

}

void EDBR2PKUTree::Higgs_Matching() {
    R4q_max=-99,R3q_max=-99,R2q_max=-99,Rlqq_max=-99,Rlq_max=-99,w_max=-99,u_max=-99;
    R4q_min=-99,R3q_min=-99,R2q_min=-99,Rlqq_min=-99,Rlq_min=-99,w_min=-99,u_min=-99;
    gKK_g_max = -99;
    gKK_g_min = -99;
    R3q_taudecay_max = -99;
    R2q_qq_taudecay_max = -99;
    R2q_qtau_taudecay_max = -99;
    R2q_tautau_taudecay_max = -99;
    Rlqq_emu_taudecay_max = -99;
    Rlqq_tau_taudecay_max = -99;
    Rlq_taudecay_max = -99;
    w_taudecay_max = -99;
    u_taudecay_max = -99;
    R3q_taudecay_min = -99;
    R2q_qq_taudecay_min = -99;
    R2q_qtau_taudecay_min = -99;
    R2q_tautau_taudecay_min = -99;
    Rlqq_emu_taudecay_min = -99;
    Rlqq_tau_taudecay_min = -99;
    Rlq_taudecay_min = -99;
    w_taudecay_min = -99;
    u_taudecay_min = -99;
    R3q_tauhad_max = -99;
    R2q_qtau_tauhad_max = -99;
    R2q_tautau_tauhad_max = -99;
    Rlqq_emu_tauhad_max = -99;
    Rlq_tauhad_max = -99;
    w_tauhad_max = -99;
    u_tauhad_max = -99;
    R3q_tauhad_min = -99;
    R2q_qtau_tauhad_min = -99;
    R2q_tautau_tauhad_min = -99;
    Rlqq_emu_tauhad_min = -99;
    Rlq_tauhad_min = -99;
    w_tauhad_min = -99;
    u_tauhad_min = -99;

    R3q_td_max = -99;
    rest_td_max = -99;
    R2q_Rlqq_td_max = -99;
    R3q_td_min = -99;
    rest_td_min = -99;
    R2q_Rlqq_td_min = -99;

    R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
    gKK_g_mid = -99;
    R3q_taudecay_mid = -99;
    R2q_qq_taudecay_mid = -99;
    R2q_qtau_taudecay_mid = -99;
    R2q_tautau_taudecay_mid = -99;
    Rlqq_emu_taudecay_mid = -99;
    Rlqq_tau_taudecay_mid = -99;
    Rlq_taudecay_mid = -99;
    w_taudecay_mid = -99;
    u_taudecay_mid = -99;
    R3q_tauhad_mid = -99;
    R2q_qtau_tauhad_mid = -99;
    R2q_tautau_tauhad_mid = -99;
    Rlqq_emu_tauhad_mid = -99;
    Rlq_tauhad_mid = -99;
    w_tauhad_mid = -99;
    u_tauhad_mid = -99;
    R3q_td_mid = -99;
    rest_td_mid = -99;
    R2q_Rlqq_td_mid = -99;

    gKK_g_max = -99;
    gKK_g_min = -99;
    gKK_g_mid = -99;

    z_max = -99;
    z_mid = -99;
    z_min = -99;


    t_max = -99;
    t_mid = -99;
    t_min = -99;

    tlqq_max = -99;
    tlqq_mid = -99;
    tlqq_min = -99;

    
    Higgs_g_Matching(); // this has to run first
    Higgs_Matching_taulep(); // this has to run second
    Higgs_Matching_taudecay();
    Higgs_Matching_HWW_Ordered();

}







/////////////////


//subfuntion with DECO.


/////////////////







void EDBR2PKUTree::Radion_Matching_taulep() {

    double dr_WJ=0.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.1;

    // cout << "detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr" << (detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr) << endl;
    // cout << "status_2" << (status_2) << endl;
    // cout << "status_3" << (status_3) << endl;
    // cout << "detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR" << (detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR" << (detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR" << (detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR" << (detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR) << endl;

    if( detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR){
            R4q_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==3&&R4q_max<1){
            R3q_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlqq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlqq_max=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4))&&R4q_max<1&&R3q_max<1&&Rlqq_max<1){
        w_max=1;
    }

    if(((detlaR(etagenzl[0],Etaj_max,phigenzl[0],Phij_max)<dr&&detlaR(genz_q1_eta[0],Etaj_max,genz_q1_phi[0],Phij_max)<dR&&detlaR(genz_q2_eta[0],Etaj_max,genz_q2_phi[0],Phij_max)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_max,phigenzl[1],Phij_max)<dr&&detlaR(genz_q1_eta[1],Etaj_max,genz_q1_phi[1],Phij_max)<dR&&detlaR(genz_q2_eta[1],Etaj_max,genz_q2_phi[1],Phij_max)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_max,phigenzl[2],Phij_max)<dr&&detlaR(genz_q1_eta[2],Etaj_max,genz_q1_phi[2],Phij_max)<dR&&detlaR(genz_q2_eta[2],Etaj_max,genz_q2_phi[2],Phij_max)<dR&&taggenzl[2]==4))&&R4q_max<1&&R3q_max<1&&Rlqq_max<1&&w_max<1){
        z_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&detlaR(etaGenV_2,Etaj_max,phiGenV_2,Phij_max)<dr_WJ&&detlaR(etaGenV_3,Etaj_max,phiGenV_3,Phij_max)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2&&R4q_max<1&&R3q_max<1&&Rlqq_max<1&&w_max<1&&z_max<1){
        R2q_max=1;
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1&&R2q_max<1&&Rlqq_max<1&&w_max<1&&R2q_max<1&&z_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_max=1;
        }
    }

    if(R4q_max<1&&R3q_max<1&&R2q_max<1&&Rlqq_max<1&&Rlq_max<1&&w_max<1&&z_max<1){
        u_max=1;
    }

    
   


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR){
            R4q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==3&&R4q_min<1){
            R3q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlqq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlqq_min=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4))&&R4q_min<1&&R3q_min<1&&Rlqq_min<1){
        w_min=1;
    }

    if(((detlaR(etagenzl[0],Etaj_min,phigenzl[0],Phij_min)<dr&&detlaR(genz_q1_eta[0],Etaj_min,genz_q1_phi[0],Phij_min)<dR&&detlaR(genz_q2_eta[0],Etaj_min,genz_q2_phi[0],Phij_min)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_min,phigenzl[1],Phij_min)<dr&&detlaR(genz_q1_eta[1],Etaj_min,genz_q1_phi[1],Phij_min)<dR&&detlaR(genz_q2_eta[1],Etaj_min,genz_q2_phi[1],Phij_min)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_min,phigenzl[2],Phij_min)<dr&&detlaR(genz_q1_eta[2],Etaj_min,genz_q1_phi[2],Phij_min)<dR&&detlaR(genz_q2_eta[2],Etaj_min,genz_q2_phi[2],Phij_min)<dR&&taggenzl[2]==4))&&R4q_min<1&&R3q_min<1&&Rlqq_min<1&&w_min<1){
        z_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2&&R4q_min<1&&R3q_min<1&&Rlqq_min<1&&w_min<1&&z_min<1){
        R2q_min=1;
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1&&R2q_min<1&&Rlqq_min<1&&w_min<1&&R2q_min<1&&z_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_min=1;
        }
    }

    if(R4q_min<1&&R3q_min<1&&R2q_min<1&&Rlqq_min<1&&Rlq_min<1&&w_min<1&&z_min<1){
        u_min=1;
    }


    g_max=0;
    g_min=0;
    q_max=0;
    q_min=0;

    if(R3q_max==1||R4q_max==1){
        t_max=1;
        t_max_tag=1;
    }
    
    if(R3q_min==1||R4q_min==1){
               t_min=1;
               t_min_tag=1; 
         }
                                  
    if(Nj8==3){
        R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
        
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR){
                R4q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==3&&R4q_mid<1){
                R3q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlqq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlqq_mid=1;
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4))&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1){
            w_mid=1;
        }

        if(((detlaR(etagenzl[0],Etaj_mid,phigenzl[0],Phij_mid)<dr&&detlaR(genz_q1_eta[0],Etaj_mid,genz_q1_phi[0],Phij_mid)<dR&&detlaR(genz_q2_eta[0],Etaj_mid,genz_q2_phi[0],Phij_mid)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_mid,phigenzl[1],Phij_mid)<dr&&detlaR(genz_q1_eta[1],Etaj_mid,genz_q1_phi[1],Phij_mid)<dR&&detlaR(genz_q2_eta[1],Etaj_mid,genz_q2_phi[1],Phij_mid)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_mid,phigenzl[2],Phij_mid)<dr&&detlaR(genz_q1_eta[2],Etaj_mid,genz_q1_phi[2],Phij_mid)<dR&&detlaR(genz_q2_eta[2],Etaj_mid,genz_q2_phi[2],Phij_mid)<dR&&taggenzl[2]==4))&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1&&w_mid<1){
            z_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1&&w_mid<1&&z_mid<1){
            R2q_mid=1;
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1&&R2q_mid<1&&Rlqq_mid<1&&w_mid<1&&R2q_mid<1&&z_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_mid=1;
            }
        }

        if(R4q_mid<1&&R3q_mid<1&&R2q_mid<1&&Rlqq_mid<1&&Rlq_mid<1&&w_mid<1&&z_mid<1){
            u_mid=1;
        }

        
        g_mid=0;
        q_mid=0;
        if(R3q_mid==1||R4q_mid==1){
            t_mid=1;
            t_mid_tag=1;
        }
    }
}

void EDBR2PKUTree::Higgs_Matching_taulep() {

    double dr_WJ=0.6;
    double dr=0.6;
    double dR=0.8;
    double dR_new = 1.1;
    double dRR=1.1;

    // cout << "detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr" << (detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr) << endl;
    // cout << "status_2" << (status_2) << endl;
    // cout << "status_3" << (status_3) << endl;
    // cout << "detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR" << (detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR" << (detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR" << (detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR" << (detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR) << endl;

    if( detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max) < dr && status_2==4 && status_3==4 && detlaR(etaq21,Etaj_max,phiq21,Phij_max) < dR && detlaR(etaq22,Etaj_max,phiq22,Phij_max) < dR && detlaR(etaq31,Etaj_max,phiq31,Phij_max) < dR && detlaR(etaq32,Etaj_max,phiq32,Phij_max) < dR ){
            R4q_max=1;
    }
    //There are 4 quarks inside the jet cone.

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max) < dr && status_2==4 && status_3==4 &&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==3&&R4q_max<1){
            R3q_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR_new){
            Rlqq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR_new){
            Rlqq_max=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4))&&R4q_max<1&&R3q_max<1&&Rlqq_max<1){
        w_max=1;
    }

    if( (w_max == 1) &&  (( detlaR(gent_b_eta[0],Etaj_max, gent_b_phi[0],Phij_max) <dr && gent_b_tag[0]==1) || ( detlaR(gent_b_eta[1],Etaj_max, gent_b_phi[1],Phij_max) < dr && gent_b_tag[1] ==1 )) ){
        t_max = 1;
    } // logic here is: at least W boson in the jet, and also a b quark in the jet

    //Add tlqq matching condition
    //case 1: dR(W1q1,j)<0.8 & dR(W1q2,j)<0.8 & dR(W2l,j)<0.8
    if((w_max == 1) && (detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR && taggenwl[1] < 4) && R4q_max<1 && R3q_max<1 && Rlqq_max<1){
        t_max = 0;
        tlqq_max = 1;
    }
    //case 2: dR(W2q1,j)<0.8 & dR(W2q2,j)<0.8 & dR(W1l,j)<0.8
    if((w_max == 1) && (detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR && taggenwl[0] < 4) && R4q_max<1 && R3q_max<1 && Rlqq_max<1){
        t_max = 0;
        tlqq_max = 1;
    }
    if (t_max == 1 || tlqq_max ==1){
        w_max = 0;
    }

    if(((detlaR(etagenzl[0],Etaj_max,phigenzl[0],Phij_max)<dr&&detlaR(genz_q1_eta[0],Etaj_max,genz_q1_phi[0],Phij_max)<dR&&detlaR(genz_q2_eta[0],Etaj_max,genz_q2_phi[0],Phij_max)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_max,phigenzl[1],Phij_max)<dr&&detlaR(genz_q1_eta[1],Etaj_max,genz_q1_phi[1],Phij_max)<dR&&detlaR(genz_q2_eta[1],Etaj_max,genz_q2_phi[1],Phij_max)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_max,phigenzl[2],Phij_max)<dr&&detlaR(genz_q1_eta[2],Etaj_max,genz_q1_phi[2],Phij_max)<dR&&detlaR(genz_q2_eta[2],Etaj_max,genz_q2_phi[2],Phij_max)<dR&&taggenzl[2]==4))&&R4q_max<1&&R3q_max<1&&Rlqq_max<1&&w_max<1){
        z_max=1;
    }



    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&detlaR(etaGenV_2,Etaj_max,phiGenV_2,Phij_max)<dr_WJ&&detlaR(etaGenV_3,Etaj_max,phiGenV_3,Phij_max)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2&&R4q_max<1&&R3q_max<1&&Rlqq_max<1&&w_max<1&&z_max<1){
        R2q_max=1;
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1&&R2q_max<1&&Rlqq_max<1&&w_max<1&&R2q_max<1&&z_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_max=1;
        }
    }

        
        if( (R4q_max == 1) || (R3q_max == 1) || (R2q_max == 1) || (Rlqq_max == 1) || (Rlq_max == 1) || (w_max == 1)  || (z_max == 1) || (t_max == 1)){
            gKK_g_max = -99;
        }


    if( R4q_max<1 && R3q_max<1 && R2q_max<1 && Rlqq_max<1 && Rlq_max<1 && w_max<1 && z_max<1 && t_max<1 && gKK_g_max<0 && tlqq_max<1){
        u_max=1;
    }

    
   


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR){
            R4q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==3&&R4q_min<1){
            R3q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR_new){
            Rlqq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR_new){
            Rlqq_min=1;
        }
    }



    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4))&&R4q_min<1&&R3q_min<1&&Rlqq_min<1){
        w_min=1;
    }



    if( (w_min == 1) &&  (( detlaR(gent_b_eta[0],Etaj_min, gent_b_phi[0],Phij_min) <dr && gent_b_tag[0]==1) || ( detlaR(gent_b_eta[1],Etaj_min, gent_b_phi[1],Phij_min) < dr && gent_b_tag[1] ==1 )) ){
        t_min = 1;
    }
    //Add tlqq matching condition
    //case 1: dR(W1q1,j)<0.8 & dR(W1q2,j)<0.8 & dR(W2l,j)<0.8
    if((w_min == 1) && (detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR && taggenwl[1] < 4) && R4q_min<1 && R3q_min<1 && Rlqq_min<1){
        t_min = 0;
        tlqq_min = 1;
    }
    //case 2: dR(W2q1,j)<0.8 & dR(W2q2,j)<0.8 & dR(W1l,j)<0.8
    if((w_min == 1) && (detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR && taggenwl[0] < 4) && R4q_min<1 && R3q_min<1 && Rlqq_min<1){
        t_min = 0;
        tlqq_min = 1;
    }
    if(t_min == 1 || tlqq_min ==1){
        w_min = 0;
    }
    

    if(((detlaR(etagenzl[0],Etaj_min,phigenzl[0],Phij_min)<dr&&detlaR(genz_q1_eta[0],Etaj_min,genz_q1_phi[0],Phij_min)<dR&&detlaR(genz_q2_eta[0],Etaj_min,genz_q2_phi[0],Phij_min)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_min,phigenzl[1],Phij_min)<dr&&detlaR(genz_q1_eta[1],Etaj_min,genz_q1_phi[1],Phij_min)<dR&&detlaR(genz_q2_eta[1],Etaj_min,genz_q2_phi[1],Phij_min)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_min,phigenzl[2],Phij_min)<dr&&detlaR(genz_q1_eta[2],Etaj_min,genz_q1_phi[2],Phij_min)<dR&&detlaR(genz_q2_eta[2],Etaj_min,genz_q2_phi[2],Phij_min)<dR&&taggenzl[2]==4))&&R4q_min<1&&R3q_min<1&&Rlqq_min<1&&w_min<1){
        z_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2&&R4q_min<1&&R3q_min<1&&Rlqq_min<1&&w_min<1&&z_min<1){
        R2q_min=1;
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1&&R2q_min<1&&Rlqq_min<1&&w_min<1&&R2q_min<1&&z_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_min=1;
        }
    }

    if( (R4q_min == 1) || (R3q_min == 1) || (R2q_min == 1) || (Rlqq_min == 1) || (Rlq_min == 1) || (w_min == 1)  || (z_min == 1) || (t_min == 1)){
        gKK_g_min = -99;
    }


    if(R4q_min<1 && R3q_min<1 && R2q_min<1 && Rlqq_min<1 && Rlq_min<1 && w_min<1 && z_min<1 && t_min < 1 && gKK_g_min < 1 && tlqq_min < 1){
        u_min=1;
    }

    // if(R3q_max==1||R4q_max==1){
    //     // t_max=1;
    //     // t_max_tag=1;
    // }
    
    // if(R3q_min==1||R4q_min==1){
    //         //    t_min=1;
    //         //    t_min_tag=1; 
    //      }
                                  
    if(Nj8==3){
        R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
        
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR){
                R4q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==3&&R4q_mid<1){
                R3q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR_new){
                Rlqq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR_new){
                Rlqq_mid=1;
            }
        }


        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4))&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1){
            w_mid=1;
        }

 

        if( (w_mid == 1) &&  (( detlaR(gent_b_eta[0],Etaj_mid, gent_b_phi[0],Phij_mid) <dr && gent_b_tag[0]==1) || ( detlaR(gent_b_eta[1],Etaj_mid, gent_b_phi[1],Phij_mid) < dr && gent_b_tag[1] ==1 )) ){
        t_mid = 1;
        }
        //Add tlqq matching condition
        //case 1: dR(W1q1,j)<0.8 & dR(W1q2,j)<0.8 & dR(W2l,j)<0.8
        if((w_mid == 1) && (detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR && taggenwl[1] < 4) && R4q_mid<1 && R3q_mid<1 && Rlqq_mid<1){
            t_mid = 0;
            tlqq_mid = 1;
        }
        //case 2: dR(W2q1,j)<0.8 & dR(W2q2,j)<0.8 & dR(W1l,j)<0.8
        if((w_mid == 1) && (detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR && taggenwl[0] < 4) && R4q_mid<1 && R3q_mid<1 && Rlqq_mid<1){
            t_mid = 0;
            tlqq_mid = 1;
        }
        if (t_mid == 1 || tlqq_mid ==1){
            w_mid = 0;
        }

        if(((detlaR(etagenzl[0],Etaj_mid,phigenzl[0],Phij_mid)<dr&&detlaR(genz_q1_eta[0],Etaj_mid,genz_q1_phi[0],Phij_mid)<dR&&detlaR(genz_q2_eta[0],Etaj_mid,genz_q2_phi[0],Phij_mid)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_mid,phigenzl[1],Phij_mid)<dr&&detlaR(genz_q1_eta[1],Etaj_mid,genz_q1_phi[1],Phij_mid)<dR&&detlaR(genz_q2_eta[1],Etaj_mid,genz_q2_phi[1],Phij_mid)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_mid,phigenzl[2],Phij_mid)<dr&&detlaR(genz_q1_eta[2],Etaj_mid,genz_q1_phi[2],Phij_mid)<dR&&detlaR(genz_q2_eta[2],Etaj_mid,genz_q2_phi[2],Phij_mid)<dR&&taggenzl[2]==4))&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1&&w_mid<1){
            z_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1&&w_mid<1&&z_mid<1){
            R2q_mid=1;
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1&&R2q_mid<1&&Rlqq_mid<1&&w_mid<1&&R2q_mid<1&&z_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_mid=1;
            }
        }


    if( (R4q_mid == 1) || (R3q_mid == 1) || (R2q_mid == 1) || (Rlqq_mid == 1) || (Rlq_mid == 1) || (w_mid == 1)  || (z_mid == 1) || (t_mid == 1)){
        gKK_g_mid = -99;
    }


        if(R4q_mid<1 && R3q_mid<1 && R2q_mid<1 && Rlqq_mid<1 && Rlq_mid<1 && w_mid<1 && z_mid < 1 && t_mid < 1 && gKK_g_mid < 1){
            u_mid=1;
        }


    }

}






void EDBR2PKUTree::gKK_g_Matching() {
    double dr_WJ=0.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    

    if( detlaR(gen_gKK_g_eta_f,Etaj_max,gen_gKK_g_phi_f,Phij_max)<dr ){
        gKK_g_max=1;
    }

    if( detlaR(gen_gKK_g_eta_f,Etaj_min,gen_gKK_g_phi_f,Phij_min)<dr ){
        gKK_g_min=1;
    }

    if(Nj8 == 3){
        if( detlaR(gen_gKK_g_eta_f,Etaj_mid,gen_gKK_g_phi_f,Phij_mid)<dr ){
            gKK_g_mid=1;
        }
    }

}
void EDBR2PKUTree::Higgs_g_Matching() {
    double dr_WJ=0.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    

    if( matchingqg_first_a >0 ){
        gKK_g_max=1;
    }

    if( matchingqg_first_c >0 ){
        gKK_g_min=1;
    }

    if(Nj8 == 3){
        if( matchingqg_first_b>0 ){
            gKK_g_mid=1;
        }
    }

}

void EDBR2PKUTree::Radion_Matching_taudecay() {
    // considering tau decay in this function
    double dr_WJ=0.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.1;

    // use R4q_max for : had W + had W
    // use R3q_max for : had W + had W
    // had W + tau : 
    
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_max=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_max=1;
            }
        }
    }

    // if(status_3 == 3){
    //     cout << "debug :" << endl;
    //     cout << gen_tau_decay_3 << " gen_tau_decay_3" <<endl;
    //     cout << detlaR(etaq21,Etaj_max,phiq21,Phij_max) << " detlaR(etaq21,Etaj_max,phiq21,Phij_max)" <<endl;
    //     cout << detlaR(etaq22,Etaj_max,phiq22,Phij_max) << " detlaR(etaq22,Etaj_max,phiq22,Phij_max)" <<endl;
    //     cout << R3q_taudecay_max << " R3q_taudecay_max" <<endl;
    //     cout << detlaR(etaq31,Etaj_max,phiq31,Phij_max) << " detlaR(etaq31,Etaj_max,phiq31,Phij_max)" <<endl;
    //     cout << etaq31 << " etaq31" <<endl;
    //     cout << phiq31 << " phiq31" <<endl;
    // }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlqq_emu_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlqq_emu_taudecay_max=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_max=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4)) &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1&& Rlqq_tau_taudecay_max<1){
        w_taudecay_max=1;
    }



    // rewrite R2q_max because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2 &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        R2q_qq_taudecay_max=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&w_taudecay_max<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)) == 1 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR)) == 1 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_max=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&w_taudecay_max<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_max=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
    }

    if(R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&Rlq_taudecay_max<1 && w_taudecay_max<1){
        u_taudecay_max=1;
    }



    // min

    // use R4q_min for : had W + had W

    // use R3q_min for : had W + had W

    // had W + tau : 
    
    
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_min=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_min=1;
            }
        }
    }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlqq_emu_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlqq_emu_taudecay_min=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_min=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4)) &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1&& Rlqq_tau_taudecay_min<1){
        w_taudecay_min=1;
    }



    // rewrite R2q_min because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2 &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        R2q_qq_taudecay_min=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&w_taudecay_min<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)) == 1 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR)) == 1 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_min=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&w_taudecay_min<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_min=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
    }

    
    

    if(R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&Rlq_taudecay_min<1 && w_taudecay_min<1){
        u_taudecay_min=1;
    }

    
    if(R3q_max == 1||R3q_taudecay_max ==1){
        R3q_td_max = 1 ;
    }
    if(u_taudecay_max == 1 && gKK_g_max < 1){
        rest_td_max = 1;
    }
    if(Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1 || R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1){
        R2q_Rlqq_td_max= 1;
    }


    if(R3q_min == 1||R3q_taudecay_min ==1){
        R3q_td_min = 1 ;
    }
    if(u_taudecay_min == 1 && gKK_g_min < 1){
        rest_td_min = 1;
    }
    if(Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1 || R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1){
        R2q_Rlqq_td_min= 1;
    }

    R3q_max = R3q_td_max;
    R2q_max = (R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1);
    Rlqq_max = (Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1);
    Rlq_max = Rlq_taudecay_max;
    u_max = ( R4q_max < 1 && R3q_max < 1 && R2q_max < 1 && Rlqq_max < 1 && Rlq_max < 1 && gKK_g_max < 1 && w_max < 1 && z_max < 1 );

    R3q_min = R3q_td_min;
    R2q_min = (R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1);
    Rlqq_min = (Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1);
    Rlq_min = Rlq_taudecay_min;
    u_min = ( R4q_min < 1 && R3q_min < 1 && R2q_min < 1 && Rlqq_min < 1 && Rlq_min < 1 && gKK_g_min < 1 && w_min < 1 && z_min < 1 );


    // for the mid Jet
    if(Nj8 == 3){
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
            if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
        }
        
        // had W + e,mu
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1){
            if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlqq_emu_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlqq_emu_taudecay_mid=1;
            }
        }

        // had W + leptonic tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1){
            if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 == 1  ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 == 1 ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4)) &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&& Rlqq_tau_taudecay_mid<1){
            w_taudecay_mid=1;
        }



        // rewrite R2q_mid because we need to exclude had W + had tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2 &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            R2q_qq_taudecay_mid=1;
        }

        // had W 1q + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&w_taudecay_mid<1){
            if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)) == 1 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
            if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR)) == 1 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
        }
        

        // tau + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR ){
                if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                    R2q_tautau_taudecay_mid=1;
                }
            }
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&w_taudecay_mid<1){
            // had ; e, mu
            if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            // had tau ; e, mu
            if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had ; lep tau
            if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had tau ; lep tau
            if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
        }

        if(R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&Rlq_taudecay_mid<1 && w_taudecay_mid<1){
            u_taudecay_mid=1;
        }



        if(R3q_mid == 1||R3q_taudecay_mid ==1){
            R3q_td_mid = 1 ;
        }
        if(u_taudecay_mid == 1 && gKK_g_mid < 1){
            rest_td_mid = 1;
        }
        if(Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1 || R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1){
            R2q_Rlqq_td_mid= 1;
        }

        R3q_mid = R3q_td_mid;
        R2q_mid = (R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1);
        Rlqq_mid = (Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1);
        Rlq_mid = Rlq_taudecay_mid;
        u_mid = ( R4q_mid < 1 && R3q_mid < 1 && R2q_mid < 1 && Rlqq_mid < 1 && Rlq_mid < 1 && gKK_g_mid < 1 && w_mid < 1 && z_mid < 1  );
    }

    
}


void EDBR2PKUTree::Higgs_Matching_taudecay() {
    // considering tau decay in this function
    double dr_WJ = 0.6;
    double dr = 0.6;
    double dR = 0.8;
    double dR_new = 1.1;
    double dRR = 1.1;

    // use R4q_max for : had W + had W
    // use R3q_max for : had W + had W
    // had W + tau : 
    
    if (detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max) < dr && R4q_max< 1 && R3q_max < 1 ) {
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_max=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_max=1;
            }
        }
    }

    // if(status_3 == 3){
    //     cout << "debug :" << endl;
    //     cout << gen_tau_decay_3 << " gen_tau_decay_3" <<endl;
    //     cout << detlaR(etaq21,Etaj_max,phiq21,Phij_max) << " detlaR(etaq21,Etaj_max,phiq21,Phij_max)" <<endl;
    //     cout << detlaR(etaq22,Etaj_max,phiq22,Phij_max) << " detlaR(etaq22,Etaj_max,phiq22,Phij_max)" <<endl;
    //     cout << R3q_taudecay_max << " R3q_taudecay_max" <<endl;
    //     cout << detlaR(etaq31,Etaj_max,phiq31,Phij_max) << " detlaR(etaq31,Etaj_max,phiq31,Phij_max)" <<endl;
    //     cout << etaq31 << " etaq31" <<endl;
    //     cout << phiq31 << " phiq31" <<endl;
    // }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR_new){
            Rlqq_emu_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR_new){
            Rlqq_emu_taudecay_max=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR_new){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR_new){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_max=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4)) &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1&& Rlqq_tau_taudecay_max<1){
        w_taudecay_max=1;
    }



    // rewrite R2q_max because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2 &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        R2q_qq_taudecay_max=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&w_taudecay_max<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)) == 1 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR)) == 1 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_max=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&w_taudecay_max<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_max=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
    }

    if(R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&Rlq_taudecay_max<1 && w_taudecay_max<1){
        u_taudecay_max=1;
    }



    // min

    // use R4q_min for : had W + had W

    // use R3q_min for : had W + had W

    // had W + tau : 
    
    
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_min=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_min=1;
            }
        }
    }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR_new){
            Rlqq_emu_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR_new){
            Rlqq_emu_taudecay_min=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR_new){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR_new){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_min=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4)) &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1&& Rlqq_tau_taudecay_min<1){
        w_taudecay_min=1;
    }



    // rewrite R2q_min because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2 &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        R2q_qq_taudecay_min=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&w_taudecay_min<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)) == 1 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR)) == 1 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_min=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&w_taudecay_min<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_min=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
    }

    
    

    if(R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&Rlq_taudecay_min<1 && w_taudecay_min<1){
        u_taudecay_min=1;
    }

    
    if(R3q_max == 1||R3q_taudecay_max ==1){
        R3q_td_max = 1 ;
    }
    if(u_taudecay_max == 1 && gKK_g_max < 1){
        rest_td_max = 1;
    }
    if(Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1 || R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1){
        R2q_Rlqq_td_max= 1;
    }


    if(R3q_min == 1||R3q_taudecay_min ==1){
        R3q_td_min = 1 ;
    }
    if(u_taudecay_min == 1 && gKK_g_min < 1){
        rest_td_min = 1;
    }
    if(Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1 || R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1){
        R2q_Rlqq_td_min= 1;
    }

    R3q_max = R3q_td_max;
    R2q_max = (R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1);
    Rlqq_max = (Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1);
    Rlq_max = Rlq_taudecay_max;
    u_max = ( R4q_max < 1 && R3q_max < 1 && R2q_max < 1 && Rlqq_max < 1 && Rlq_max < 1 && gKK_g_max < 1 && w_max < 1 && z_max < 1 && t_max < 1 && tlqq_max < 1);

    R3q_min = R3q_td_min;
    R2q_min = (R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1);
    Rlqq_min = (Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1);
    Rlq_min = Rlq_taudecay_min;
    u_min = ( R4q_min < 1 && R3q_min < 1 && R2q_min < 1 && Rlqq_min < 1 && Rlq_min < 1 && gKK_g_min < 1 && w_min < 1 && z_min < 1 && t_min < 1 && tlqq_min <1);


    // for the mid Jet
    if(Nj8 == 3){
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
            if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
        }
        
        // had W + e,mu
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1){
            if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR_new){
                Rlqq_emu_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR_new){
                Rlqq_emu_taudecay_mid=1;
            }
        }

        // had W + leptonic tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1){
            if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR_new){
                if ( gen_tau_decay_3 == 1  ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR_new){
                if ( gen_tau_decay_2 == 1 ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4)) &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&& Rlqq_tau_taudecay_mid<1){
            w_taudecay_mid=1;
        }



        // rewrite R2q_mid because we need to exclude had W + had tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2 &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            R2q_qq_taudecay_mid=1;
        }

        // had W 1q + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&w_taudecay_mid<1){
            if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)) == 1 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
            if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR)) == 1 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
        }
        

        // tau + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR ){
                if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                    R2q_tautau_taudecay_mid=1;
                }
            }
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&w_taudecay_mid<1){
            // had ; e, mu
            if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            // had tau ; e, mu
            if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had ; lep tau
            if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had tau ; lep tau
            if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
        }

        if(R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&Rlq_taudecay_mid<1 && w_taudecay_mid<1){
            u_taudecay_mid=1;
        }



        if(R3q_mid == 1||R3q_taudecay_mid ==1){
            R3q_td_mid = 1 ;
        }
        if(u_taudecay_mid == 1 && gKK_g_mid < 1){
            rest_td_mid = 1;
        }
        if(Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1 || R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1){
            R2q_Rlqq_td_mid= 1;
        }

        R3q_mid = R3q_td_mid;
        R2q_mid = (R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1);
        Rlqq_mid = (Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1);
        Rlq_mid = Rlq_taudecay_mid;
        u_mid = ( R4q_mid < 1 && R3q_mid < 1 && R2q_mid < 1 && Rlqq_mid < 1 && Rlq_mid < 1 && gKK_g_mid < 1 && w_mid < 1 && z_mid < 1  && t_mid < 1 && tlqq_mid < 1);
    }

    
}


void EDBR2PKUTree::Radion_Matching_deepW_Ordered(){


    R4q_a = -99; R4q_b = -99; R4q_c = -99;
    R3q_a = -99; R3q_b = -99; R3q_c = -99;
    R2q_a = -99; R2q_b = -99; R2q_c = -99;
    w_a = -99; w_b = -99; w_c = -99;
    z_a = -99; z_b = -99; z_c = -99;
    Rlqq_a = -99; Rlqq_b = -99; Rlqq_c = -99;
    Rlq_a = -99; Rlq_b = -99; Rlq_c = -99;
    gKK_g_a = -99; gKK_g_b = -99; gKK_g_c = -99;
    u_a = -99; u_b = -99; u_c = -99;
    R3q_taudecay_a = -99; R3q_taudecay_b = -99; R3q_taudecay_c = -99;

    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_deep_W_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(2, jetAK8puppi_deep_W_sort, indexTag, 1);

        Int_t R4q_sort[2] = { R4q_max , R4q_min }; 
        Int_t R3q_sort[2] = { R3q_max , R3q_min }; 
        Int_t R2q_sort[2] = { R2q_max , R2q_min }; 
        Int_t w_sort[2] = { w_max , w_min }; 
        Int_t z_sort[2] = { z_max , z_min }; 
        Int_t Rlqq_sort[2] = { Rlqq_max , Rlqq_min }; 
        Int_t Rlq_sort[2] = { Rlq_max , Rlq_min }; 
        Int_t gKK_g_sort[2] = { gKK_g_max , gKK_g_min }; 
        Int_t u_sort[2] = { u_max , u_min }; 
        Int_t R3q_taudecay_sort[2] = { R3q_taudecay_max , R3q_taudecay_min }; 

        R4q_a = R4q_sort[indexTag[0]] ; R4q_c = R4q_sort[indexTag[1]] ;
        R3q_a = R3q_sort[indexTag[0]] ; R3q_c = R3q_sort[indexTag[1]] ;
        R2q_a = R2q_sort[indexTag[0]] ; R2q_c = R2q_sort[indexTag[1]] ;
        z_a = z_sort[indexTag[0]] ; z_c = z_sort[indexTag[1]] ;
        w_a = w_sort[indexTag[0]] ; w_c = w_sort[indexTag[1]] ;
        Rlqq_a = Rlqq_sort[indexTag[0]] ; Rlqq_c = Rlqq_sort[indexTag[1]] ;
        Rlq_a = Rlq_sort[indexTag[0]] ; Rlq_c = Rlq_sort[indexTag[1]] ;
        gKK_g_a = gKK_g_sort[indexTag[0]] ; gKK_g_c = gKK_g_sort[indexTag[1]] ;
        u_a = u_sort[indexTag[0]] ; u_c = u_sort[indexTag[1]] ;
        R3q_taudecay_a = R3q_taudecay_sort[indexTag[0]] ; R3q_taudecay_c = R3q_taudecay_sort[indexTag[1]] ;
    }

    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_deep_W_sort[3] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, jetAK8puppi_deep_W_sort, indexTag, 1);

        Int_t R4q_sort[3] = { R4q_max , R4q_mid , R4q_min }; 
        Int_t R3q_sort[3] = { R3q_max , R3q_mid , R3q_min }; 
        Int_t R2q_sort[3] = { R2q_max , R2q_mid , R2q_min }; 
        Int_t w_sort[3] = { w_max , w_mid , w_min }; 
        Int_t z_sort[3] = { z_max , z_mid , z_min }; 
        Int_t Rlqq_sort[3] = { Rlqq_max , Rlqq_mid , Rlqq_min }; 
        Int_t Rlq_sort[3] = { Rlq_max , Rlq_mid , Rlq_min }; 
        Int_t gKK_g_sort[3] = { gKK_g_max , gKK_g_mid , gKK_g_min }; 
        Int_t u_sort[3] = { u_max , u_mid , u_min }; 
        Int_t R3q_taudecay_sort[3] = { R3q_taudecay_max , R3q_taudecay_mid , R3q_taudecay_min }; 

        R4q_a = R4q_sort[indexTag[0]] ; R4q_b = R4q_sort[indexTag[1]] ; R4q_c = R4q_sort[indexTag[2]] ;
        R3q_a = R3q_sort[indexTag[0]] ; R3q_b = R3q_sort[indexTag[1]] ; R3q_c = R3q_sort[indexTag[2]] ;
        R2q_a = R2q_sort[indexTag[0]] ; R2q_b = R2q_sort[indexTag[1]] ; R2q_c = R2q_sort[indexTag[2]] ;
        w_a = w_sort[indexTag[0]] ; w_b = w_sort[indexTag[1]] ; w_c = w_sort[indexTag[2]] ;
        z_a = w_sort[indexTag[0]] ; z_b = w_sort[indexTag[1]] ; z_c = w_sort[indexTag[2]] ;
        Rlqq_a = Rlqq_sort[indexTag[0]] ; Rlqq_b = Rlqq_sort[indexTag[1]] ; Rlqq_c = Rlqq_sort[indexTag[2]] ;
        Rlq_a = Rlq_sort[indexTag[0]] ; Rlq_b = Rlq_sort[indexTag[1]] ; Rlq_c = Rlq_sort[indexTag[2]] ;
        gKK_g_a = gKK_g_sort[indexTag[0]] ; gKK_g_b = gKK_g_sort[indexTag[1]] ; gKK_g_c = gKK_g_sort[indexTag[2]] ;
        u_a = u_sort[indexTag[0]] ; u_b = u_sort[indexTag[1]] ; u_c = u_sort[indexTag[2]] ;
        R3q_taudecay_a = R3q_taudecay_sort[indexTag[0]] ; R3q_taudecay_b = R3q_taudecay_sort[indexTag[1]] ; R3q_taudecay_c = R3q_taudecay_sort[indexTag[2]] ;
    }
}



void EDBR2PKUTree::Higgs_Matching_HWW_Ordered(){


    R4q_a = -99; R4q_b = -99; R4q_c = -99;
    R3q_a = -99; R3q_b = -99; R3q_c = -99;
    R2q_a = -99; R2q_b = -99; R2q_c = -99;
    w_a = -99; w_b = -99; w_c = -99;
    t_a = -99; t_b = -99; t_c = -99;  
    tlqq_a = -99; tlqq_b = -99; tlqq_c = -99; // Update tlqq matching for LP method validation
    z_a = -99; z_b = -99; z_c = -99;
    Rlqq_a = -99; Rlqq_b = -99; Rlqq_c = -99;
    Rlq_a = -99; Rlq_b = -99; Rlq_c = -99;
    gKK_g_a = -99; gKK_g_b = -99; gKK_g_c = -99;
    u_a = -99; u_b = -99; u_c = -99;
    R3q_taudecay_a = -99; R3q_taudecay_b = -99; R3q_taudecay_c = -99;

    if( Nj8==2){
        Int_t *indexTag=new Int_t[2];
        Double_t HWWTagger_sort[2] = { HWW_V2_max , HWW_V2_min };
        TMath::Sort(2, HWWTagger_sort, indexTag, 1);

        Int_t R4q_sort[2] = { R4q_max , R4q_min }; 
        Int_t R3q_sort[2] = { R3q_max , R3q_min }; 
        Int_t R2q_sort[2] = { R2q_max , R2q_min }; 
        Int_t w_sort[2] = { w_max , w_min }; 
        Int_t t_sort[2] = { t_max , t_min }; 
        Int_t tlqq_sort[2] = { tlqq_max , tlqq_min }; // Add tlqq matching
        Int_t z_sort[2] = { z_max , z_min }; 
        Int_t Rlqq_sort[2] = { Rlqq_max , Rlqq_min }; 
        Int_t Rlq_sort[2] = { Rlq_max , Rlq_min }; 
        Int_t gKK_g_sort[2] = { gKK_g_max , gKK_g_min }; 
        Int_t u_sort[2] = { u_max , u_min }; 
        Int_t R3q_taudecay_sort[2] = { R3q_taudecay_max , R3q_taudecay_min }; 

        R4q_a = R4q_sort[indexTag[0]] ; R4q_c = R4q_sort[indexTag[1]] ;
        R3q_a = R3q_sort[indexTag[0]] ; R3q_c = R3q_sort[indexTag[1]] ;
        R2q_a = R2q_sort[indexTag[0]] ; R2q_c = R2q_sort[indexTag[1]] ;
        z_a = z_sort[indexTag[0]] ; z_c = z_sort[indexTag[1]] ;
        w_a = w_sort[indexTag[0]] ; w_c = w_sort[indexTag[1]] ;
        t_a = t_sort[indexTag[0]] ; t_c = t_sort[indexTag[1]] ;
        tlqq_a = tlqq_sort[indexTag[0]] ; tlqq_c = tlqq_sort[indexTag[1]] ; // Add tlqq matching
        // cout<<"tlqq_a is"<<tlqq_a<<endl;
        // cout<<"******"<<endl;

        Rlqq_a = Rlqq_sort[indexTag[0]] ; Rlqq_c = Rlqq_sort[indexTag[1]] ;
        Rlq_a = Rlq_sort[indexTag[0]] ; Rlq_c = Rlq_sort[indexTag[1]] ;
        gKK_g_a = gKK_g_sort[indexTag[0]] ; gKK_g_c = gKK_g_sort[indexTag[1]] ;
        u_a = u_sort[indexTag[0]] ; u_c = u_sort[indexTag[1]] ;
        R3q_taudecay_a = R3q_taudecay_sort[indexTag[0]] ; R3q_taudecay_c = R3q_taudecay_sort[indexTag[1]] ;
    
    }

    if( Nj8==3){
        Int_t *indexTag=new Int_t[3];
        Double_t HWWTagger_sort[3] = { HWW_V2_max , HWW_V2_mid, HWW_V2_min };
        TMath::Sort(3, HWWTagger_sort, indexTag, 1);

        Int_t R4q_sort[3] = { R4q_max , R4q_mid , R4q_min }; 
        Int_t R3q_sort[3] = { R3q_max , R3q_mid , R3q_min }; 
        Int_t R2q_sort[3] = { R2q_max , R2q_mid , R2q_min }; 
        Int_t w_sort[3] = { w_max , w_mid , w_min }; 
        Int_t t_sort[3] = { t_max , t_mid , t_min }; 
        Int_t tlqq_sort[3] = { tlqq_max , tlqq_mid , tlqq_min }; // Add tlqq matching

        Int_t z_sort[3] = { z_max , z_mid , z_min }; 
        Int_t Rlqq_sort[3] = { Rlqq_max , Rlqq_mid , Rlqq_min }; 
        Int_t Rlq_sort[3] = { Rlq_max , Rlq_mid , Rlq_min }; 
        Int_t gKK_g_sort[3] = { gKK_g_max , gKK_g_mid , gKK_g_min }; 
        Int_t u_sort[3] = { u_max , u_mid , u_min }; 
        Int_t R3q_taudecay_sort[3] = { R3q_taudecay_max , R3q_taudecay_mid , R3q_taudecay_min }; 

        R4q_a = R4q_sort[indexTag[0]] ; R4q_b = R4q_sort[indexTag[1]] ; R4q_c = R4q_sort[indexTag[2]] ;
        R3q_a = R3q_sort[indexTag[0]] ; R3q_b = R3q_sort[indexTag[1]] ; R3q_c = R3q_sort[indexTag[2]] ;
        R2q_a = R2q_sort[indexTag[0]] ; R2q_b = R2q_sort[indexTag[1]] ; R2q_c = R2q_sort[indexTag[2]] ;
        w_a = w_sort[indexTag[0]] ; w_b = w_sort[indexTag[1]] ; w_c = w_sort[indexTag[2]] ;
        t_a = t_sort[indexTag[0]] ; t_b = t_sort[indexTag[1]] ; t_c = t_sort[indexTag[2]] ;
        tlqq_a = tlqq_sort[indexTag[0]] ; tlqq_b = tlqq_sort[indexTag[1]] ; tlqq_c = tlqq_sort[indexTag[2]] ;// Add tlqq matching
        // cout<<"*********** tlqq_a is "<<tlqq_a<<" ***********"<<endl; //for test
        z_a = z_sort[indexTag[0]] ; z_b = z_sort[indexTag[1]] ; z_c = z_sort[indexTag[2]] ;
        Rlqq_a = Rlqq_sort[indexTag[0]] ; Rlqq_b = Rlqq_sort[indexTag[1]] ; Rlqq_c = Rlqq_sort[indexTag[2]] ;
        Rlq_a = Rlq_sort[indexTag[0]] ; Rlq_b = Rlq_sort[indexTag[1]] ; Rlq_c = Rlq_sort[indexTag[2]] ;
        gKK_g_a = gKK_g_sort[indexTag[0]] ; gKK_g_b = gKK_g_sort[indexTag[1]] ; gKK_g_c = gKK_g_sort[indexTag[2]] ;
        u_a = u_sort[indexTag[0]] ; u_b = u_sort[indexTag[1]] ; u_c = u_sort[indexTag[2]] ;
        R3q_taudecay_a = R3q_taudecay_sort[indexTag[0]] ; R3q_taudecay_b = R3q_taudecay_sort[indexTag[1]] ; R3q_taudecay_c = R3q_taudecay_sort[indexTag[2]] ;
    }
}





#endif


    // $1_a = -99; $1_b = -99; $1_c = -99;
    // Int_t $1_a , $1_b , $1_c;
    // ExTree->Branch("$1_a",&$1_a,"$1_a/I");
    // ExTree->Branch("$1_b",&$1_b,"$1_b/I");
    // ExTree->Branch("$1_c",&$1_c,"$1_c/I");
        


    

// currently used
// R4q_max
// R3q_max
// R2q_max
// w_max
// Rlqq_max
// Rlq_max
// gKK_g_max
// u_max
// R3q_taudecay_max

// R4q_max
// R3q_max
// R2q_max
// Rlqq_max
// Rlq_max
// w_max
// u_max
// R4q_min
// R3q_min
// R2q_min
// Rlqq_min
// Rlq_min
// w_min
// u_min
// gKK_g_max
// gKK_g_min
// R3q_taudecay_max
// R2q_qq_taudecay_max
// R2q_qtau_taudecay_max
// R2q_tautau_taudecay_max
// Rlqq_emu_taudecay_max
// Rlqq_tau_taudecay_max
// Rlq_taudecay_max
// w_taudecay_max
// u_taudecay_max
// R3q_taudecay_min
// R2q_qq_taudecay_min
// R2q_qtau_taudecay_min
// R2q_tautau_taudecay_min
// Rlqq_emu_taudecay_min
// Rlqq_tau_taudecay_min
// Rlq_taudecay_min
// w_taudecay_min
// u_taudecay_min
// R3q_tauhad_max
// R2q_qtau_tauhad_max
// R2q_tautau_tauhad_max
// Rlqq_emu_tauhad_max
// Rlq_tauhad_max
// w_tauhad_max
// u_tauhad_max
// R3q_tauhad_min
// R2q_qtau_tauhad_min
// R2q_tautau_tauhad_min
// Rlqq_emu_tauhad_min
// Rlq_tauhad_min
// w_tauhad_min
// u_tauhad_min
// R3q_td_max
// rest_td_max
// R2q_Rlqq_td_max
// R3q_td_min
// rest_td_min
// R2q_Rlqq_td_min
// R4q_mid
// R3q_mid
// R2q_mid
// Rlqq_mid
// Rlq_mid
// w_mid
// u_mid
// gKK_g_mid
// R3q_taudecay_mid
// R2q_qq_taudecay_mid
// R2q_qtau_taudecay_mid
// R2q_tautau_taudecay_mid
// Rlqq_emu_taudecay_mid
// Rlqq_tau_taudecay_mid
// Rlq_taudecay_mid
// w_taudecay_mid
// u_taudecay_mid
// R3q_tauhad_mid
// R2q_qtau_tauhad_mid
// R2q_tautau_tauhad_mid
// Rlqq_emu_tauhad_mid
// Rlq_tauhad_mid
// w_tauhad_mid
// u_tauhad_mid
// R3q_td_mid
// rest_td_mid
// R2q_Rlqq_td_mid
// gKK_g_max
// gKK_g_min
// gKK_g_mid