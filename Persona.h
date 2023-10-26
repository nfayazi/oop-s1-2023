#include "Spot.h"

#ifndef PERSONA_H
#define PERSONA_H

class Persona : public Spot {


    public:
    Persona(int x, int y): Spot(x,y,'P'){}
    ~Persona(){}

    std::tuple<int, int> shift(int dx, int dy)
    {
    location = make_tuple(get<0>(location) + dx, get<1>(location) + dy);
    return location;
    }


};

#endif // PERSONA_H