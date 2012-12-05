/*
 * Avancer.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "AvancerC.h"
#include "TournerC.h"

TournerC::TournerC(string s) : CommandeRobot(s) {}

TournerC::TournerC(Robot& rob) : CommandeRobot(rob) {}

void TournerC::execute(){
	robot->tourner(Console::getString("direction"));
	return;
}
