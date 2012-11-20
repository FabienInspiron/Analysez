#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "Robot.h"

EtatAVideFO::EtatAVideFO(){}

void EtatAVideFO::evaluerObstacle(Robot* rob){
    rob->setEtat(*(new EtatAVideFO()));
    return;
}

void EtatAVideFO::saisir(Robot* rob){
    rob->setEtat(*(new EtatEnChargeFO()));
    return;
}
void EtatAVideFO::tourner(Robot* rob){
    rob->setEtat(*(new EtatAVide()));
    return;
}
