#ifndef ETATR_H_INCLUDED
#define ETATR_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

class Robot;

class EtatR {
    public :
        virtual void poser(Robot*){ throw ErreurEtat();}
        virtual void avancer(Robot*){ throw ErreurEtat();}
        virtual void saisir(Robot*){ throw ErreurEtat();}
        virtual void tourner(Robot*){ throw ErreurEtat();}
        virtual void peser(Robot*){ throw ErreurEtat();}
        virtual void rencontrerObstacle(Robot*){ throw ErreurEtat();}
        virtual void evaluerObstacle(Robot*){ throw ErreurEtat();}

        virtual void figer(Robot* r);
        virtual void repartir(Robot*){ throw ErreurEtat();}

        virtual string getEtat(){}

        class ErreurEtat{};
};

#endif // ETATR_H_INCLUDED
