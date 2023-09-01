#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    time_t getTimeOfEntry() const;
};

#endif 