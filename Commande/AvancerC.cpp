/*
 * Avancer.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "AvancerC.h"
#include <iostream>

using namespace std;
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "TournerC.h"

Avancer::Avancer(string s) : CommandeRobot(s) {}

Avancer::Avancer(Robot& rob) : CommandeRobot(rob) {}

void Avancer::execute(){
	robot->avancer(Console::getint("x"), Console::getint("y"));
	return;
}
