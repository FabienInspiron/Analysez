/*
 * Tourner.h
 *
 *  Created on: 2 déc. 2012
 *      Author: belli
 */

#ifndef TOURNER_H_
#define TOURNER_H_
#include "CommandeRobot.h"

class TournerC : public CommandeRobot{
private :
	string direction;

public:
	static TournerC instance;

	TournerC(Robot&);
	TournerC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new TournerC(rob);}
};

#endif /* TOURNER_H_ */
