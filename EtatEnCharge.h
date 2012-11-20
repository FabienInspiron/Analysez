#ifndef ETATENCHARGE_H_INCLUDED
#define ETATENCHARGE_H_INCLUDED

class EtatEnRoute;

class EtatEnCharge : public EtatEnRoute {
    public :
                EtatEnCharge        ();
        void    avancer             (Robot* r);
        void    tourner             (Robot* r);
        void    peser               (Robot* r);
        void    rencontrerObstacle  (Robot* r);
};

#endif // ETATENCHARGE_H_INCLUDED
