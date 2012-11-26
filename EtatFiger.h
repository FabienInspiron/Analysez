#ifndef ETATFIGER_H_INCLUDED
#define ETATFIGER_H_INCLUDED

#include "EtatR.h"
#include <iostream>
#include <map>
using namespace std;

class Robot;

class EtatFiger: public EtatR {
private:
	static EtatFiger* instance;
	map<Robot*, EtatR*> hists;

public:
	EtatFiger();
	void repartir(Robot*);
	void save(Robot*);
	string getEtat() {
		return "Figer";
	}
	static EtatFiger& getInstance();

	class ErreurEtat {};
};

#endif // ETATFIGER_H_INCLUDED
