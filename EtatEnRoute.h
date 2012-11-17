#ifndef ETATENROUTE_H_INCLUDED
#define ETATENROUTE_H_INCLUDED

#include "EtatR.h"

class EtatAVide;

class EtatEnRoute : EtatR {
    private :
        //EtatEnChargeFO  enChargeFO;
        EtatAVide       *aVide;
    public :
                    EtatEnRoute();
        void        figer();
        string      getEtat();
};

#endif // ETATENROUTE_H_INCLUDED
