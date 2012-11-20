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
        EtatR       *Etathist;
        Position    *pos;
        Obstacle    *obstacle;
        Objet       *objet;

    public :
                    Robot();

        void        avancer(int x, int y);
        void        avancerE(int x, int y);

        void        tourner(string direct);
        void        tournerE(string direct);

        void        saisir(Objet& e);
        void        saisirE(Objet& e);

        void        poser();
        void        poserE();

        int         peser();
        int         peserE ();

        void        rencontrerObstacle(Obstacle& o);
        void        rencontrerObstacleE(Obstacle& o);

        int         evaluerOstacle();
        int         evaluerOstacleE();

        void        figer();
        void        repartir();

        void        setEtat(EtatR& e);
                    //~Robot();
        Position    getPos(){return *pos;}

};

#endif // ROBOT_H_INCLUDED
