/*
 * RencontrerObstacleC.h
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#ifndef RENCONTREROBSTACLEC_H_
#define RENCONTREROBSTACLEC_H_

#include "CommandeRobot.h"

class RencontrerObstacleC : public CommandeRobot{
public:
	static RencontrerObstacleC instance;

		RencontrerObstacleC(Robot&);
		RencontrerObstacleC(string);

		void execute();

		CommandeRobot* constructeurVirtuel(Robot& rob) {return new RencontrerObstacleC(rob);}
};

#endif /* RENCONTREROBSTACLEC_H_ */
