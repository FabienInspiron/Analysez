/*
 * ElementARepresenter.h
 *
 *  Created on: 22 nov. 2012
 *      Author: cyril
 */

#ifndef ELEMENTAREPRESENTER_H_
#define ELEMENTAREPRESENTER_H_

#include <iostream>
#include <list>
using namespace std;

class Robot;
class Afficheur;

class ElementARepresenter {
private:
	list<Afficheur*> afficheurs;

public:
	void attacherAfficheur(Afficheur &);
	void detacherAfficheur(Afficheur &);
	void notifier(Robot *);
};

#endif /* ELEMENTAREPRESENTER_H_ */
