/*
 * CommandeRobot.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "CommandeRobot.h"
#include <iostream>
#include "Avancer.h"
#include "Tourner.h"
using namespace std;

map<string, CommandeRobot*> CommandeRobot::CommandesInscrites;
Avancer Avancer::instance("AVANCER");
Tourner Tourner::instance("TOURNER");

CommandeRobot* CommandeRobot::nouvelleCommandeRobot(string s, Robot& rob){
	return CommandesInscrites[s]->constructeurVirtuel(rob);
}

CommandeRobot::CommandeRobot(string d) {
	CommandesInscrites[d] = this;
}

CommandeRobot::CommandeRobot(Robot& rob) : robot(&rob) {}
