/*
 * Saisir.cpp
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#include "SaisirC.h"
#include "../Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "../Objet.h"

SaisirC::SaisirC(string s) : CommandeRobot(s) {}

SaisirC::SaisirC(Robot& rob) : CommandeRobot(rob) {}

void SaisirC::execute(){
	robot->saisir(*new Objet(5));
	return;
}
