/*
 * Saisir.cpp
 *
 *  Created on: 3 déc. 2012
 *      Author: belli
 */

#include "Saisir.h"
#include "Robot.h"
#include "CommandeRobot.h"
#include "Console.h"
#include "Objet.h"

Saisir::Saisir(string s) : CommandeRobot(s) {}

Saisir::Saisir(Robot& rob) : CommandeRobot(rob) {}

void Saisir::execute(){
	robot->saisir(*new Objet(5));
	return;
}
