/*
 * CommandeRobot.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#include "CommandeRobot.h"
#include <iostream>
#include "AvancerC.h"
#include "TournerC.h"
#include "SaisirC.h"
#include "HelpC.h"
using namespace std;

map<string, CommandeRobot*> CommandeRobot::CommandesInscrites;
Avancer Avancer::instance("AVANCER");
TournerC TournerC::instance("TOURNER");
SaisirC SaisirC::instance("SAISIR");
HelpC HelpC::instance("HELP");

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
