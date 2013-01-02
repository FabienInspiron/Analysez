/*
 * RepartirC.cpp
 *
 *  Created on: 2 janv. 2013
 *      Author: belli
 */

#include "RepartirC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

RepartirC::RepartirC(string s) : CommandeRobot(s) {}

RepartirC::RepartirC(Robot& rob) : CommandeRobot(rob) {}

void RepartirC::execute(){
	robot->repartir();
	return;
}
