#include <iostream>
#include "Robot.h"

// Ajout d'un commentaire

int main()
{
    Robot r;
    cout << "Cr�ation du robot reussit";
    r.avancer(5, 6);
    cout << "Position : x=" << r.getPos().getx() << " y=" << r.getPos().gety();
    r.avancer(10, 20);
    cout << "Position : x=" << r.getPos().getx() << " y=" << r.getPos().gety();
}
