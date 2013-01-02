/*
 * FigerC.cpp
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#include "FigerC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

FigerC::FigerC(string s) : CommandeRobot(s) {}

FigerC::FigerC(Robot& rob) : CommandeRobot(rob) {}

void FigerC::execute(){
	robot->figer();
	return;
}
