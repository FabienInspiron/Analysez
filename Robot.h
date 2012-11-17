#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include <string>
#include <iostream>

#include "Objet.h"
#include "Obstacle.h"
#include "Position.h"
#include "EtatR.h"

using namespace std;

class EtatR;
class Position;
class Obstacle;
class Objet;

class Robot {
    private :
        int         ordreDonner;
        string      direction;
        EtatR       *etat;
        Position    *pos;
        Obstacle    *obstacle;
        Objet       *objet;

    public :
                    Robot();
        void        poser();
        void        avancer(int x, int y);
        void        avancerE(int x, int y);
        void        setEtat(EtatR& e);
                    //~Robot();

};

#endif // ROBOT_H_INCLUDED
