#include "Car.h"

class Fleet : public Car {
    private:
    Car** fleet[5];

    public:
    Fleet();                       
    Car** get_fleet();

};