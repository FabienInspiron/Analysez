/*
 * PeserC.h
 *
 *  Created on: 5 déc. 2012
 *      Author: belli
 */

#ifndef PESERC_H_
#define PESERC_H_

#include "CommandeRobot.h"

class PeserC : public CommandeRobot{
public:
	static PeserC instance;

	PeserC(Robot&);
	PeserC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new PeserC(rob);}
};

#endif /* PESERC_H_ */
