#ifndef OBSTACLE_H_INCLUDED
#define OBSTACLE_H_INCLUDED

class Obstacle{
    private :
        int hauteur;

    public :
        Obstacle(int hau) : hauteur(hau){};
        int getHauteur() { return hauteur; }

};

#endif // OBSTACLE_H_INCLUDED
