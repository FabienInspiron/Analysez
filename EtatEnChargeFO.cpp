#include "EtatAVideFO.h"
#include "EtatAVide.h"
#include "EtatEnChargeFO.h"
#include "EtatEnCharge.h"
#include "Robot.h"

EtatEnChargeFO::EtatEnChargeFO(){}

void EtatEnChargeFO::poser(Robot* rob){
    rob->setEtat(*(new EtatAVideFO()));
    return;
}

void EtatEnChargeFO::tourner(Robot* rob){
    rob->setEtat(*(new EtatEnCharge()));
    return;
}

void EtatEnChargeFO::peser(Robot* rob){
    rob->setEtat(*(new EtatEnChargeFO()));
    return;
}
