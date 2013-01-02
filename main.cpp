#include <iostream>
#include "Robot.h"
#include "Afficheur/AfficheurText.h"
#include "Commande/Commande.h"
#include "Commande/CommandeRobot.h"
#include "Commande/Console.h"

// Ajout d'un commentaire

int main()
{
	Robot r;
	string ligne;

	AfficheurText aft;
	r.attacherAfficheur(aft);

	cout << Console::getCommandes();

	while(1){
		string commandeString;
		cout << "Que faire ? : ";
		cin >> commandeString;

		Commande *com =  CommandeRobot::nouvelleCommandeRobot(commandeString, r);
		com->execute();
	}
}
