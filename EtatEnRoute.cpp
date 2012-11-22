#include "EtatAVide.h"
#include "EtatEnRoute.h"
#include "EtatFiger.h"
#include "Robot.h"

EtatEnRoute::EtatEnRoute(){}

void EtatEnRoute::figer(Robot* r) {
	r->saveEtat();
	r->setEtat(*new EtatFiger());
}
