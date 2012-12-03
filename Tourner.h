/*
 * Tourner.h
 *
 *  Created on: 2 déc. 2012
 *      Author: belli
 */

#ifndef TOURNER_H_
#define TOURNER_H_
#include "CommandeRobot.h"

class Tourner : public CommandeRobot{
private :
	string direction;

public:
	static Tourner instance;

	Tourner(Robot&);
	Tourner(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new Tourner(rob);}
};

#endif /* TOURNER_H_ */
