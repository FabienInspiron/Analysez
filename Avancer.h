/*
 * Avancer.h
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#ifndef AVANCER_H_
#define AVANCER_H_
#include "CommandeRobot.h"

class Avancer : public CommandeRobot{
private:
	int x;
	int y;


public:
	static Avancer instance;

	Avancer(Robot&);
	Avancer(string d);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new Avancer(rob);}
};

#endif /* AVANCER_H_ */
