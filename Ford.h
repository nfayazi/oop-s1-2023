#include "Car.h"

class Ford : public Car {
    private:
    int badgeNumber;
    float litresOfFuel;      // Initially 60L


    public:
    Ford();            
    Ford(int badgeNumber, int price);
    void set_fuel(float f);
    float get_fuel();
    void set_badgeNumber(int n);
    int get_badgeNumber();
    void refuel(int litres);
    void drive(int kms);       
};