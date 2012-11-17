#ifndef ETATR_H_INCLUDED
#define ETATR_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

class EtatR {
    public :
        void poser();
        virtual void avancer(){ throw ErreurEtat();}

    class ErreurEtat{};
};

#endif // ETATR_H_INCLUDED
