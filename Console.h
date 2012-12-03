/*
 * Console.h
 *
 *  Created on: 1 déc. 2012
 *      Author: belli
 */

#ifndef CONSOLE_H_
#define CONSOLE_H_
#include <iostream>
using namespace std;

class Console {
public:
	Console();
	static int getint(string message){cout << message<< ": " ; int v; cin >> v; return v;}
	static string getString(string message){cout << message<< ": " ; string v; cin >> v; return v;}
	virtual ~Console();
};

#endif /* CONSOLE_H_ */
