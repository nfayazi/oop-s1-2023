#include "Car.h"

class Tesla : public Car {
    private:
    char model;
    float batteryPercentage;   // Initially 100%


    public:
    Tesla();            
    Tesla(char model, int price);
    void chargeBattery(int mins);            
    void drive(int kms);


};