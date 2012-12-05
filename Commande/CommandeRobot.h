/*
 * CommandeRobot.h
 *
 *  Created on: 30 nov. 2012
 *      Author: belli
 */

#ifndef COMMANDEROBOT_H_
#define COMMANDEROBOT_H_

#include "Commande.h"
#include <map>
#include <string>

using namespace std;

class Robot;

class CommandeRobot : public Commande{
public:
	static map<string, CommandeRobot*> CommandesInscrites;

	Robot* robot;
	CommandeRobot(string);
	CommandeRobot(Robot&);

	static CommandeRobot* nouvelleCommandeRobot(string r, Robot& rob);
	virtual CommandeRobot* constructeurVirtuel(Robot&){};
	static bool inMap(string);
};

#endif /* COMMANDEROBOT_H_ */
