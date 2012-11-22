#ifndef ETATAVIDEFO_H_INCLUDED
#define ETATAVIDEFO_H_INCLUDED

#include "EtatEnRoute.h"
class Robot;

class EtatAVideFO : public EtatEnRoute {
    public :
		static EtatAVideFO*	instance;
                EtatAVideFO();
        void    evaluerObstacle (Robot* r);
        void    tourner         (Robot* r);
        void    saisir          (Robot* r);
        static 	EtatAVideFO* 	getInstance		();
};

#endif // ETATAVIDEFO_H_INCLUDED
