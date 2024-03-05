#ifndef _VVVUtils_
#define _VVVUtils_

bool Exclusive_Collection(TLorentzVector object, vector<TLorentzVector> collectionP4 , float deltaR_  ){
    bool exclusive = true;
    for ( Int_t i = 0 ; i < collectionP4.size() ; i++ ) {
        float deltaR = object.DeltaR(collectionP4[i]);
        if( deltaR < deltaR_  ){ exclusive = false; }
    }
    return exclusive;
}



#endif
