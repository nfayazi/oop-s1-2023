#include "Spot.h"
#include "Influence.h"

#ifndef SNARE_H
#define SNARE_H

class Snare : public Spot, public Influence {
    protected:
    bool operative;

    public:
    Snare(int x, int y): Spot(x, y, 'S'){}

    bool isOperative() {return operative}
    void implement()
    {
        operative = false;
        setCategory('S');
    }

};

#endif // SNARE_H