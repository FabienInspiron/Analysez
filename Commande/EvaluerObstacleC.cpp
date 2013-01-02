/*
 * EvaluerObstacleC.cpp
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#include "EvaluerObstacleC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

EvaluerObstacleC::EvaluerObstacleC(string s) : CommandeRobot(s) {}

EvaluerObstacleC::EvaluerObstacleC(Robot& rob) : CommandeRobot(rob) {}

void EvaluerObstacleC::execute(){
	robot->evaluerOstacle();
	return;
}
