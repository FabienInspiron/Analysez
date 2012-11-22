#include "EtatFiger.h"
#include "Robot.h"

void EtatFiger::repartir(Robot* r) {
	r->setEtat(r->getHistEtat());
}
