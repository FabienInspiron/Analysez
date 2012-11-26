/*
 * AfficheurText.h
 *
 *  Created on: 23 nov. 2012
 *      Author: cyril
 */

#ifndef AFFICHEURTEXT_H_
#define AFFICHEURTEXT_H_

#include <iostream>
#include "Afficheur.h"
#include "Robot.h"
using namespace std;

class AfficheurText: public Afficheur {
public:
	void afficher(Robot *r) {
		cout << "Etat: " << r->getStringEtat() << endl;
	}
};

#endif /* AFFICHEURTEXT_H_ */
