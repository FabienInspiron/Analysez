#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "EtatEnCharge.h"
#include "Robot.h"

EtatEnCharge::EtatEnCharge(){}

void EtatEnCharge::avancer(Robot* rob){
    rob->setEtat(*(new EtatEnCharge()));
    return;
}

void EtatEnCharge::tourner(Robot* rob){
    rob->setEtat(*(new EtatEnCharge()));
    return;
}

void EtatEnCharge::peser(Robot* rob){
    rob->setEtat(*(new EtatEnCharge()));
    return;
}

void EtatEnCharge::rencontrerObstacle(Robot* rob){
    rob->setEtat(*(new EtatEnChargeFO()));
    return;
}
