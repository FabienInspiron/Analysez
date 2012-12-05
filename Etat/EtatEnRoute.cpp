#include "EtatEnRoute.h"
#include "EtatFiger.h"
#include "../Robot.h"

EtatEnRoute::EtatEnRoute(){}

void EtatEnRoute::figer(Robot* r) {
	EtatFiger::getInstance().save(r);
	r->setEtat(EtatFiger::getInstance());
}
