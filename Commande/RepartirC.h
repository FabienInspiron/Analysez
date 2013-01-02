/*
 * RepartirC.h
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#ifndef REPARTIRC_H_
#define REPARTIRC_H_

#include "CommandeRobot.h"

class RepartirC : public CommandeRobot {
public:
	static RepartirC instance;

	RepartirC(Robot&);
	RepartirC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new RepartirC(rob);}
};

#endif /* REPARTIRC_H_ */
