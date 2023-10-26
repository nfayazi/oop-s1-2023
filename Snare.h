#include "Spot.h"
#include "Influence.h"

#ifndef SNARE_H
#define SNARE_H

class Snare : public Spot, public Influence {
    protected:
    bool operative;

    public:
    Snare(int x, int y): Spot(x, y, 'S'){}
    ~Snare();

    bool isOperative() {return operative;}
    void implement(Spot& spot) override
    {
        operative = false;
        setCategory('S');
    }

};

#endif // SNARE_H