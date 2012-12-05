/*
 * PoserC.cpp
 *
 *  Created on: 5 déc. 2012
 *      Author: belli
 */

#include "PoserC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

PoserC::PoserC(string s) : CommandeRobot(s) {}

PoserC::PoserC(Robot& rob) : CommandeRobot(rob) {}

void PoserC::execute(){
	robot->poser();
	return;
}
