#ifndef ETATENROUTE_H_INCLUDED
#define ETATENROUTE_H_INCLUDED

#include "EtatR.h"

class EtatAVide;
class EtatAVideFO;
class EtatEnCharge;
class EtatEnChargeFO;

class EtatEnRoute : public EtatR {
public :
						EtatEnRoute();
        void        	figer(Robot*);

        EtatEnRoute*	getInstance();
        virtual string  getEtat(){ return "En route";}
};

#endif // ETATENROUTE_H_INCLUDED
