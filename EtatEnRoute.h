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
		static			EtatEnRoute*		instance;
        void        	figer(Robot*);

        EtatEnRoute*	getInstance();
        string getEtat(){ return "En route";}

};

#endif // ETATENROUTE_H_INCLUDED
