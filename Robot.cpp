#include "EtatR.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatFiger.h"

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
    cout << "Tourner vers " << dir << endl;
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
    try{
        etat->poser(this);
        return peserE();
    } catch (EtatR::ErreurEtat e){}
}

int Robot::peserE(){
    if(objet != NULL){
        return objet->getPoids();
    }
}

void Robot::rencontrerObstacle(Obstacle& o){
    try{
        etat->rencontrerObstacle(this);
        rencontrerObstacleE(o);
    } catch (EtatR::ErreurEtat e){}
}

void Robot::rencontrerObstacleE(Obstacle& o){
    obstacle = &o;
}

int Robot::evaluerOstacle(){
    try{
        etat->evaluerObstacle(this);
        return evaluerOstacleE();
    } catch (EtatR::ErreurEtat e){}
}

int Robot::evaluerOstacleE(){
    if(obstacle != NULL){
        return obstacle->getHauteur();
    }
}

void Robot::figer(){
    etat->figer();
}

void Robot::repartir(){

}

void Robot::setEtat(EtatR& e){
    etat = &e;
}
