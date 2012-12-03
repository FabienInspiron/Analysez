/*
 * Avancer.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "Help.h"

Help::Help(string s) : CommandeRobot(s) {}

Help::Help(Robot& rob) : CommandeRobot(rob) {}

void Help::execute(){
	cout << Console::getCommandes();
	return;
}
