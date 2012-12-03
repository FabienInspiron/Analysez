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
#include "Saisir.h"
#include "Help.h"
using namespace std;

map<string, CommandeRobot*> CommandeRobot::CommandesInscrites;
Avancer Avancer::instance("AVANCER");
Tourner Tourner::instance("TOURNER");
Saisir Saisir::instance("SAISIR");
Help Help::instance("HELP");


CommandeRobot* CommandeRobot::nouvelleCommandeRobot(string s, Robot& rob){
	if(CommandeRobot::inMap(s))
		return CommandesInscrites[s]->constructeurVirtuel(rob);
	else
		cout << "*** Commande " << s << " indisponible *** \n";
}

CommandeRobot::CommandeRobot(string d) {
	CommandesInscrites[d] = this;
}

CommandeRobot::CommandeRobot(Robot& rob) : robot(&rob) {}

bool CommandeRobot::inMap(string s){
	map<string,CommandeRobot*>::const_iterator
		    mit (CommandeRobot::CommandesInscrites.find(s)),
		    mend(CommandeRobot::CommandesInscrites.end());
		return mit!=mend;
}
