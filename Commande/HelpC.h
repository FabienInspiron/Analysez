/*
 * HELP.h
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#ifndef HELP_H_
#define HELP_H_

#include "CommandeRobot.h"

class HelpC : public CommandeRobot{
public:
	static HelpC instance;

	HelpC(Robot&);
	HelpC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new HelpC(rob);}
};

#endif /* HELP_H_ */
