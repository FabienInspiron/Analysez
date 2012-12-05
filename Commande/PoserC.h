/*
 * PoserC.h
 *
 *  Created on: 5 déc. 2012
 *      Author: belli
 */

#ifndef POSERC_H_
#define POSERC_H_

#include "CommandeRobot.h"

class PoserC : public CommandeRobot{
public:
	static PoserC instance;

	PoserC(Robot&);
	PoserC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new PoserC(rob);}
};
#endif /* POSERC_H_ */
