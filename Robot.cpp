#include <iostream>
#include "EtatR.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatFiger.h"

#include "Robot.h"

using namespace std;

Robot::Robot() : ElementARepresenter() {
    etat = EtatAVide::getInstance();

    pos  = new Position();
    obstacle = NULL;
    objet = NULL;
}

Robot::~Robot(){}

void Robot::avancer(int x, int y){
    try{
        etat->avancer(this);
        avancerE(x, y);
        notifier(this);
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas avancer !!" << endl;
    }
}

void Robot::avancerE(int x, int y){
    pos->setx(x);
    pos->sety(y);
    cout << "Nouvelle position [x=" << x << ",y=" << y << "]" <<endl;
}

void Robot::tourner(string dir){
    try{
        etat->tourner(this);
        tournerE(dir);
        notifier(this);
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas tourner !!" << endl;
    }
}

void Robot::tournerE(string dir){
    direction = dir;
    cout << "Tourner vers " << dir << endl;
}

void Robot::saisir(Objet& e){
    try{
        etat->saisir(this);
        saisirE(e);
        notifier(this);
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas saisir !!" << endl;
    }
}

void Robot::saisirE(Objet& e){
    objet = &e;
}

void Robot::poser(){
    try{
        etat->poser(this);
        poserE();
        notifier(this);
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas poser !!" << endl;
    }
}

void Robot::poserE(){
    objet = NULL;
}

int Robot::peser(){
    try{
        etat->peser(this);
        notifier(this);
        return peserE();
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas peser !!" << endl;
    }
    return -1;
}

int Robot::peserE(){
    if(objet != NULL){
        return objet->getPoids();
    }
    return -1;
}

void Robot::rencontrerObstacle(Obstacle& o){
    try{
        etat->rencontrerObstacle(this);
        rencontrerObstacleE(o);
        notifier(this);
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas rencontrer obstacle !!" << endl;
    }
}

void Robot::rencontrerObstacleE(Obstacle& o){
    obstacle = &o;
}

int Robot::evaluerOstacle(){
    try{
        etat->evaluerObstacle(this);
        notifier(this);
        return evaluerOstacleE();
    } catch (EtatR::ErreurEtat e){
    	cout << "!! Ne peut pas evaluer obstacle !!" << endl;
    }
    return -1;
}

int Robot::evaluerOstacleE(){
    if(obstacle != NULL){
        return obstacle->getHauteur();
    }
	return -1;
}

void Robot::figer(){
	try{
		etat->figer(this);
		notifier(this);
	}catch (EtatR::ErreurEtat e){
		cout << "!! Ne peut pas se figer !!" << endl;
	}
}

void Robot::repartir(){
	try{
		etat->repartir(this);
		notifier(this);
	}catch (EtatR::ErreurEtat e){
		cout << "!! Ne peut pas repartir !!" << endl;
	}
}

void Robot::setEtat(EtatR& e){
    etat = &e;
}

EtatR& Robot::getEtat(){
    return *etat;
}

string Robot::getStringEtat() {
	return etat->getEtat();
}
