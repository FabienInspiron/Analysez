#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position{
    private :
        int _x;
        int _y;

    public :
        void setx(int x){ _x = x; }
        void sety(int y){ _y = y; }
        int getx(){ return _x; }
        int gety(){ return _y; }
};

#endif // POSITION_H_INCLUDED
