/*
 * PeserC.cpp
 *
 *  Created on: 5 déc. 2012
 *      Author: belli
 */

#include "PeserC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

PeserC::PeserC(string s) : CommandeRobot(s) {}

PeserC::PeserC(Robot& rob) : CommandeRobot(rob) {}

void PeserC::execute(){
	robot->peser();
	return;
}
