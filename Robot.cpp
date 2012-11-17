#include "EtatR.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"

#include "Robot.h"

Robot::Robot(){
    cout << "Cr�ation du robot" << endl;

    etat = (EtatR*) new EtatAVide();

    cout << "Cr�ation etat en route reussit" << endl;

    pos  = new Position();
    obstacle = new Obstacle();
    objet = new Objet();

    cout << "Appr�s cr�ation du robot" << endl;
}

void Robot::avancer(int x, int y){
    cout << "Dans la m�thode avancer, avant try" << endl;
    try{
        cout << "Dans la m�thode avancer de Robot" << endl;
        etat->avancer();
        avancerE(x, y);
    } catch (EtatR::ErreurEtat e){
        cout << "Erreur d�tecter, je ne peut pas avancer" << endl;
    }
}

void Robot::avancerE(int x, int y){
    pos->setx(x);
    pos->sety(y);
    cout << "Position modifi�e [x=" << x << " y= " << y <<"]";
}

void Robot::setEtat(EtatR& e){
    etat = &e;
}
