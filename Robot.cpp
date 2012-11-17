#include "EtatR.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"

#include "Robot.h"

Robot::Robot(){
    cout << "Création du robot" << endl;

    etat = (EtatR*) new EtatAVide();

    cout << "Création etat en route reussit" << endl;

    pos  = new Position();
    obstacle = new Obstacle();
    objet = new Objet();

    cout << "Apprès création du robot" << endl;
}

void Robot::avancer(int x, int y){
    cout << "Dans la méthode avancer, avant try" << endl;
    try{
        cout << "Dans la méthode avancer de Robot" << endl;
        etat->avancer();
        avancerE(x, y);
    } catch (EtatR::ErreurEtat e){
        cout << "Erreur détecter, je ne peut pas avancer" << endl;
    }
}

void Robot::avancerE(int x, int y){
    pos->setx(x);
    pos->sety(y);
    cout << "Position modifiée [x=" << x << " y= " << y <<"]";
}

void Robot::setEtat(EtatR& e){
    etat = &e;
}
