#ifndef ETATAVIDEFO_H_INCLUDED
#define ETATAVIDEFO_H_INCLUDED

#include "EtatEnRoute.h"
class Robot;

class EtatAVideFO : public EtatEnRoute {
    public :
                EtatAVideFO();
        void    evaluerObstacle (Robot* r);
        void    tourner         (Robot* r);
        void    saisir          (Robot* r);
};

#endif // ETATAVIDEFO_H_INCLUDED
