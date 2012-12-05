/*
 * Saisir.h
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#ifndef SAISIR_H_
#define SAISIR_H_

#include "CommandeRobot.h"

class SaisirC : public CommandeRobot{
public:
	static SaisirC instance;

	SaisirC(Robot&);
	SaisirC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new SaisirC(rob);}
};
#endif /* SAISIR_H_ */
