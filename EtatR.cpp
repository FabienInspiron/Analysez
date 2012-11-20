#include "EtatR.h"
#include "Robot.h"

void EtatR::figer(Robot &r){
    *(r.Etathist) = *(r.etat);
    r.etat = new EtatFiger();
}
