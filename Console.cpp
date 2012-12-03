/*
 * Console.cpp
 *
 *  Created on: 1 déc. 2012
 *      Author: belli
 */

#include "Console.h"
#include <map>
#include "CommandeRobot.h"
#include <iostream>
using namespace std;


Console::Console() {}

Console::~Console() {}

string Console::getCommandes() {
	string retour;
	map<string,CommandeRobot*>::const_iterator
	    mit (CommandeRobot::CommandesInscrites.begin()),
	    mend(CommandeRobot::CommandesInscrites.end());
	 for(;mit!=mend;++mit) retour += mit->first + "\n";
	return retour;
}
