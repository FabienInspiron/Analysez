/*
 * Avancer.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "HelpC.h"

HelpC::HelpC(string s) : CommandeRobot(s) {}

HelpC::HelpC(Robot& rob) : CommandeRobot(rob) {}

void HelpC::execute(){
	cout << Console::getCommandes();
	return;
}
