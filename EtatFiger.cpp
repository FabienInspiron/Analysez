#include "EtatFiger.h"
#include "Robot.h"

EtatFiger* EtatFiger::instance = NULL;

void EtatFiger::repartir(Robot* r) {
	r->restaureEtat();
}

EtatFiger* EtatFiger::getInstance(){
	if(!instance) instance = new EtatFiger();
	return instance;
}
