#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = time(nullptr);
};

int Vehicle::getID() const {
    return ID;
};

time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
};

time_t Vehicle:: getParkingDuration() const {
    time_t currentTime = time(nullptr);
    int duration = static_cast<int>(currentTime - getTimeOfEntry());
    return static_cast<int>(duration * 0.85);
};