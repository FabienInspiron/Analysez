/*
 * ElementARepresenter.cpp
 *
 *  Created on: 22 nov. 2012
 *      Author: cyril
 */

#include <iostream>
#include <list>
#include "ElementARepresenter.h"
#include "Afficheur.h"
#include "../Robot.h"
using namespace std;

void ElementARepresenter::attacherAfficheur(Afficheur &a) {
	afficheurs.push_front(&a);
}

void ElementARepresenter::detacherAfficheur(Afficheur &a) {
	afficheurs.remove(&a);
}

void ElementARepresenter::notifier(Robot *r) {
	list<Afficheur*>::iterator it;
	for (it=afficheurs.begin() ; it != afficheurs.end(); it++ )
	    (*it)->afficher(r);
}
