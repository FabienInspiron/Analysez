#include "EtatAVide.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFO.h"
#include "EtatAVideFO.h"

#include "EtatEnRoute.h"
#include "EtatFiger.h"
#include "Robot.h"

EtatEnRoute*	EtatEnRoute::instance = NULL;

EtatEnRoute::EtatEnRoute(){}

void EtatEnRoute::figer(Robot* r) {
	r->saveEtat();
	r->setEtat(*EtatFiger::getInstance());
}

EtatEnRoute*	EtatEnRoute::getInstance(){
	if(!instance) instance = new EtatEnRoute();
	return instance;
}
