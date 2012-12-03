#ifndef ETATAVIDE_H_INCLUDED
#define ETATAVIDE_H_INCLUDED

#include "EtatEnRoute.h"

class Robot;

class EtatAVide : public EtatEnRoute {
	public :
		static EtatAVide* aVide;

					EtatAVide();
        void    	avancer(Robot* r);
        void    	tourner(Robot* r);
        void    	rencontrerObstacle(Robot* r);
        static EtatAVide* getInstance();
};

#endif // ETATAVIDE_H_INCLUDED
