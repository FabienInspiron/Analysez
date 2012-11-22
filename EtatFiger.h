#ifndef ETATFIGER_H_INCLUDED
#define ETATFIGER_H_INCLUDED

#include "EtatR.h"

class Robot;

class EtatFiger : public EtatR {

public:
	static		EtatFiger*		instance;

    void 		repartir		(Robot*);
    string  	getEtat			(){return "Figer";}
    static		EtatFiger*		getInstance();

    class ErreurEtat{};
};

#endif // ETATFIGER_H_INCLUDED
