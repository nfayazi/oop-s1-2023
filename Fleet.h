#include "Car.h"

class Fleet : public Car {
    private:
    Car **fleet;

    public:
    Fleet();                       
    Car** get_fleet();
    //~Fleet();

};