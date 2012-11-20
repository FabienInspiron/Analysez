#include "EtatR.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"

#include "Robot.h"

Robot::Robot(){
    etat = (EtatR*) new EtatAVide();

    pos  = new Position();
    obstacle = new Obstacle();
    objet = new Objet();

    cout << "Apprès création du robot" << endl;
}

void Robot::avancer(int x, int y){
    try{
        etat->avancer(this);
        avancerE(x, y);
    } catch (EtatR::ErreurEtat e){}
}

void Robot::avancerE(int x, int y){
    pos->setx(x);
    pos->sety(y);
}

void Robot::tourner(string dir){
    try{
        etat->tourner(this);
        tournerE(dir);
    } catch (EtatR::ErreurEtat e){}
}

void Robot::tournerE(string dir){
    direction = dir;
}

void Robot::saisir(Objet& e){
    try{
        etat->saisir(this);
        saisirE(e);
    } catch (EtatR::ErreurEtat e){}
}

void Robot::saisirE(Objet& e){
    objet = &e;
}

void Robot::poser(){
    try{
        etat->poser(this);
        poserE();
    } catch (EtatR::ErreurEtat e){}
}

void Robot::poserE(){
    objet = NULL;
}

int Robot::peser(){
    etat->peser(this);
    return 2;
}

void Robot::setEtat(EtatR& e){
    etat = &e;
}
