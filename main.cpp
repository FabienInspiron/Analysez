#include <iostream>
#include "Robot.h"
#include "AfficheurText.h"
#include "Commande.h"
#include "CommandeRobot.h"

// Ajout d'un commentaire

int main()
{
	Robot r;
	string ligne;

	AfficheurText aft;
	r.attacherAfficheur(aft);

	string commandeString;
	cout << "Que faire ? : ";
	cin >> commandeString;

	Commande *com =  CommandeRobot::nouvelleCommandeRobot(commandeString, r);
	com->execute();

	/*
	r.avancer(5, 6);
    r.avancer(10, 20);

    r.tourner("E");
    Obstacle obs(10);
    Objet O(5);

    r.rencontrerObstacle(obs);
    r.peser();

    r.figer();
    r.tourner("O");
    r.avancer(10, 20);
    r.repartir();

    cout << "Hauteur de l'obstacle " << r.evaluerOstacle() << endl;
    r.saisir(O);

    r.figer();
    cout << "Poids de l'objet : " << r.peser() << endl;
    r.avancer(10, 59);
    r.tourner("N");

    r.repartir();
    cout << "Poids de l'objet : " << r.peser() << endl;
    r.avancer(10, 59);
    r.tourner("N");

    return 0;
    */
}
