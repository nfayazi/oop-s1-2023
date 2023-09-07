#include "Car.h"

class Tesla : public Car {
    private:
    char model;
    float batteryPercentage;   // Initially 100%


    public:
    Tesla();            
    Tesla(char m, int p);
    void set_model(char M);
    char get_model();
    void set_batteryPercentage(float B);
    float get_batteryPercentage();
    void chargeBattery(int mins);            
    void drive(int kms);
};