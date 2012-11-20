#ifndef ETATENROUTE_H_INCLUDED
#define ETATENROUTE_H_INCLUDED

#include "EtatR.h"

class EtatAVide;
class EtatAVideFO;
class EtatEnCharge;
class EtatEnChargeFO;

class EtatEnRoute : public EtatR {
    private :
        static EtatEnChargeFO  *enChargeFO;
        static EtatAVide       *aVide;
        static EtatEnCharge    *enCharge;
        static EtatAVideFO     *videFO;

    public :
                    EtatEnRoute();
        void        figer();
        string getEtat(){ return "En route";}

};

#endif // ETATENROUTE_H_INCLUDED
