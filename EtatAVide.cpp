#include "EtatAVide.h"
#include "EtatAVideFO.h"
#include "Robot.h"

EtatAVide::EtatAVide(){}

void EtatAVide::avancer(Robot* rob){
    rob->setEtat(*(new EtatAVide()));
    cout << "passe dans Etat a vide" << endl;
}

void EtatAVide::tourner(Robot* rob){
    rob->setEtat(*(new EtatAVide()));
    cout << "passe dans Etat a vide" << endl;
}
void EtatAVide::rencontrerObstacle(Robot* rob){
    rob->setEtat(*(new EtatAVideFO()));
    cout << "passe dans Etat a vide face obstacle" << endl;
}
