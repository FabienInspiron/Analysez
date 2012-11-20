#ifndef ETATENCHARGEFO_H_INCLUDED
#define ETATENCHARGEFO_H_INCLUDED

class EtatEnRoute;

class EtatEnChargeFO : public EtatEnRoute {
    public :
                EtatEnChargeFO      ();
        void    poser               (Robot* r);
        void    peser               (Robot* r);
        void    tourner             (Robot* r);

};

#endif // ETATENCHARGEFO_H_INCLUDED
