/*
 * HELP.h
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#ifndef HELP_H_
#define HELP_H_

#include "CommandeRobot.h"

class Help : public CommandeRobot{
public:
	static Help instance;

	Help(Robot&);
	Help(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new Help(rob);}
};

#endif /* HELP_H_ */
