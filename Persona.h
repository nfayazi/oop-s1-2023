#include "Spot.h"

#ifndef PERSONA_H
#define PERSONA_H

class Persona : public Spot {


    public:
    Persona(int x, int y): Spot(x,y, 'P'){}

    void shift(int dx, int dy)
    {
        dx = std::get<0>(loc1) - std::get<0> (pos2);
        dy = std::get<1> (pos1) - std::get<1>(pos2);
        location = std::make_tuple(dx, dy);
    }


};

#endif // PERSONA_H