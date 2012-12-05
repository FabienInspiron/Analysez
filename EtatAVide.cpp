#include "EtatAVide.h"
#include "EtatAVideFO.h"
#include "EtatEnRoute.h"

#include "Robot.h"

EtatAVide* EtatAVide::aVide = NULL;

EtatAVide::EtatAVide(){}

void EtatAVide::avancer(Robot* rob){
	rob->setEtat(*EtatAVide::getInstance());
}

void EtatAVide::tourner(Robot* rob){
	rob->setEtat(*EtatAVide::getInstance());
}

void EtatAVide::rencontrerObstacle(Robot* rob){
	rob->setEtat(*EtatAVideFO::getInstance());
}

EtatAVide* EtatAVide::getInstance(){
	if(!aVide) aVide = new EtatAVide();
	return aVide;
}

string EtatAVide::getEtat(){
	return  EtatEnRoute::getEtat() +"/ A vide";
}
