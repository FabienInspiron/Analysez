#include "EtatAVide.h"
#include "EtatAVideFO.h"
#include "Robot.h"

EtatAVide::EtatAVide(){}

void EtatAVide::avancer(Robot* rob){
    rob->setEtat(*(new EtatAVide()));
}

void EtatAVide::tourner(Robot* rob){
    rob->setEtat(*(new EtatAVide()));
}
void EtatAVide::rencontrerObstacle(Robot* rob){
    rob->setEtat(*(new EtatAVideFO()));
}
