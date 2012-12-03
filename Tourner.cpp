/*
 * Avancer.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "Avancer.h"
#include "Tourner.h"

Tourner::Tourner(string s) : CommandeRobot(s) {}

Tourner::Tourner(Robot& rob) : CommandeRobot(rob) {}

void Tourner::execute(){
	robot->tourner(Console::getString("direction"));
	return;
}
