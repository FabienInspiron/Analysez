/*
 * EvaluerObstacleC.h
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#ifndef EVALUEROBSTACLEC_H_
#define EVALUEROBSTACLEC_H_

#include "CommandeRobot.h"

class EvaluerObstacleC : public CommandeRobot{
public:
	static EvaluerObstacleC instance;

	EvaluerObstacleC(Robot&);
	EvaluerObstacleC(string);

	void execute();

	CommandeRobot* constructeurVirtuel(Robot& rob) {return new EvaluerObstacleC(rob);}
};

#endif /* EVALUEROBSTACLEC_H_ */
