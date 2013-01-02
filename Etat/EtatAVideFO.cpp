#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "../Robot.h"

EtatAVideFO* EtatAVideFO::instance = NULL;

EtatAVideFO::EtatAVideFO(){}

void EtatAVideFO::evaluerObstacle(Robot* rob){
	rob->setEtat(*EtatAVideFO::getInstance());
    return;
}

void EtatAVideFO::saisir(Robot* rob){
	rob->setEtat(*EtatEnChargeFO::getInstance());
    return;
}

void EtatAVideFO::tourner(Robot* rob){
	rob->setEtat(*EtatAVide::getInstance());
    return;
}

EtatAVideFO* EtatAVideFO::getInstance(){
	if(!instance) instance = new EtatAVideFO;
	return instance;
}

string EtatAVideFO::getEtat(){
	return  EtatEnRoute::getEtat() +"/ A vide face à obstacle";
}
