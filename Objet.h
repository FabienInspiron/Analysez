#ifndef OBJET_H_INCLUDED
#define OBJET_H_INCLUDED

class Objet{
    private :
        int poids;

    public :
        Objet(int pds) : poids(pds){}
        int getPoids(){return poids;}
};

#endif // OBJET_H_INCLUDED
