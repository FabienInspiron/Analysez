#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "EtatEnCharge.h"
#include "../Robot.h"

EtatEnChargeFO* EtatEnChargeFO::instance = NULL;

EtatEnChargeFO::EtatEnChargeFO(){}

void EtatEnChargeFO::poser(Robot* rob){
	rob->setEtat(*EtatAVideFO::getInstance());
    return;
}

void EtatEnChargeFO::tourner(Robot* rob){
	rob->setEtat(*EtatEnCharge::getInstance());
    return;
}

void EtatEnChargeFO::peser(Robot* rob){
	rob->setEtat(*EtatEnChargeFO::getInstance());
    return;
}

EtatEnChargeFO* EtatEnChargeFO::getInstance(){
	if(!instance) instance = new EtatEnChargeFO;
	return instance;
}

string EtatEnChargeFO::getEtat(){
	return  EtatEnRoute::getEtat() +"/ En charge face à obstacle";
}
