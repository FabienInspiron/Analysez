/*
 * RencontrerObstacleC.cpp
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#include "RencontrerObstacleC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

RencontrerObstacleC::RencontrerObstacleC(string s) : CommandeRobot(s) {}

RencontrerObstacleC::RencontrerObstacleC(Robot& rob) : CommandeRobot(rob) {}

void RencontrerObstacleC::execute(){
	robot->rencontrerObstacle(*new Obstacle(45));
	return;
}
