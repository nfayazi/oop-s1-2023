#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;

    cout << "How many cars are there? ";
    cin >> numCars;

    cout << "How many buses are there? ";
    cin >> numBuses;

    cout << "How many motorbikes are there? ";
    cin >> numMotorbikes;

    int numVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[numVehicles];
    int id = 1;

    int carIndex = 0;
    int busIndex = 0;
    int motorbikeIndex = 0;

    for (int i = 0; i < numCars; i++) {
        vehicles[i] = new Car(id++);
        carIndex++;
    }

    for (int i = carIndex; i < carIndex + numBuses; i++) {
        vehicles[i] = new Bus(id++);
        busIndex++;
    }

    for (int i = carIndex + busIndex; i < numVehicles; i++) {
        vehicles[i] = new Motorbike(id++);
        motorbikeIndex++;
    }

    for (int i = 0; i < numVehicles; i++) {
        cout << "Vehicle " << vehicles[i]->getID() << " has been parked for "
                  << vehicles[i]->getTimeOfEntry() << " seconds." << endl;
    }
    return 0;
}
