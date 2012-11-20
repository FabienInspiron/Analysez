#ifndef ETATFIGER_H_INCLUDED
#define ETATFIGER_H_INCLUDED

class EtatFiger : public EtatR {

    void poser(Robot*){ throw ErreurEtat();}
    void avancer(Robot*){ throw ErreurEtat();}
    void saisir(Robot*){ throw ErreurEtat();}
    void tourner(Robot*){ throw ErreurEtat();}
    void peser(Robot*){ throw ErreurEtat();}
    void rencontrerObstacle(Robot*){ throw ErreurEtat();}
    void evaluerObstacle(Robot*){ throw ErreurEtat();}

    virtual void figer(Robot*){throw ErreurEtat();}
    virtual void repartir(Robot*){ throw ErreurEtat();}

    string  getEtat()   {return "Figer";}

    class ErreurEtat{};
};

#endif // ETATFIGER_H_INCLUDED
