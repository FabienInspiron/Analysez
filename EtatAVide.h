#ifndef ETATAVIDE_H_INCLUDED
#define ETATAVIDE_H_INCLUDED

#include "EtatEnRoute.h"
class Robot;

class EtatAVide : public EtatEnRoute {
    public :
        EtatAVide();
        void    avancer(Robot* r);
        void    tourner(Robot* r);
        void    recontrerObstacle(Robot* r);
};

#endif // ETATAVIDE_H_INCLUDED
