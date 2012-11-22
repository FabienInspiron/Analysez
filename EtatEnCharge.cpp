#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "EtatEnCharge.h"
#include "Robot.h"

EtatEnCharge* EtatEnCharge::instance = NULL;

EtatEnCharge::EtatEnCharge(){}

void EtatEnCharge::avancer(Robot* rob){
	rob->setEtat(*EtatEnCharge::getInstance());
    return;
}

void EtatEnCharge::tourner(Robot* rob){
	rob->setEtat(*EtatEnCharge::getInstance());
    return;
}

void EtatEnCharge::peser(Robot* rob){
	rob->setEtat(*EtatEnCharge::getInstance());
    return;
}

void EtatEnCharge::rencontrerObstacle(Robot* rob){
	rob->setEtat(*EtatEnChargeFO::getInstance());
    return;
}

EtatEnCharge* EtatEnCharge::getInstance(){
	if(!instance) instance = new EtatEnCharge;
	return instance;
}
