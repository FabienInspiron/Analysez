/*
 * Saisir.h
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#ifndef SAISIR_H_
#define SAISIR_H_

#include "CommandeRobot.h"

class Saisir : public CommandeRobot{
public:
	static Saisir instance;

	Saisir(Robot&);
	Saisir(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new Saisir(rob);}
};
#endif /* SAISIR_H_ */
