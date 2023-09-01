#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    int capacity;
    int count;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    ~ParkingLot();
};

#endif





