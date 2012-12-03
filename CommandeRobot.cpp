/*
 * CommandeRobot.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "CommandeRobot.h"
#include <iostream>
using namespace std;

map<string, CommandeRobot*> CommandeRobot::CommandesInscrites;

CommandeRobot* CommandeRobot::nouvelleCommandeRobot(string s, Robot& rob){
	return CommandesInscrites[s]->constructeurVirtuel(rob);
}

CommandeRobot::CommandeRobot(string d) {
	cout << "Ajout de " << d << endl;
	CommandesInscrites[d] = this;
}

CommandeRobot::CommandeRobot(Robot& rob) : robot(&rob) {}
