/*
 * FigerC.h
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#ifndef FIGERC_H_
#define FIGERC_H_

#include "CommandeRobot.h"

class FigerC : public CommandeRobot{
public:
	static FigerC instance;

	FigerC(Robot&);
	FigerC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new FigerC(rob);}
};

#endif /* FIGERC_H_ */
