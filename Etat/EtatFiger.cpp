#include <iostream>
#include <map>
#include "EtatFiger.h"
#include "../Robot.h"
using namespace std;


class EtatEnRoute;

EtatFiger* EtatFiger::instance = NULL;

EtatFiger::EtatFiger() : hists() {

}

void EtatFiger::repartir(Robot *r) {
	r->setEtat(*(hists.find(r)->second));
}

void EtatFiger::save(Robot *r) {
	hists.insert(pair<Robot*, EtatR*>(r, &(r->getEtat())));
}

EtatFiger& EtatFiger::getInstance(){
	if(!instance) instance = new EtatFiger();
	return *instance;
}
