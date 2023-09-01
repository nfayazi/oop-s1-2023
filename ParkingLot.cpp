#include "ParkingLot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int capacity) {
capacity = capacity;
count = 0;
{
    vehicles = new Vehicle*[capacity];
}
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < capacity) {
        vehicles[count++] = vehicle;
        cout << "Number of vehicles parked: " << count << endl;
        } else{
        cout << "The lot is full" << endl;
    }
    }

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = nullptr;
            for (int j = i; j < count - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            vehicles[count - 1] = nullptr;
            --count;
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}
ParkingLot::~ParkingLot() {
}