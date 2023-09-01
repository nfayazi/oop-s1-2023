#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;

    cout << "How many cars are there? ";
    cin >> numCars;

    cout << "How many buses are there?";
    cin >> numBuses;

    cout << "How many motorbikes are there?";
    cin >> numMotorbikes;

    Vehicle* vehicles[numCars + numBuses + numMotorbikes];
    int numVehicles = numCars + numBuses + numMotorbikes;

    int id = 1;

for (int i = 0; i < numCars; i++){
    vehicles[i] = new Car(i+1);
}

for (int i = 0; i < numBuses; i++){
    vehicles[i] = new Bus(i+1);
}

for (int i = 0; i < numMotorbikes; i++){
    vehicles[i] = new Motorbike(i+1);
}
    
    for (int i = 0; i < numVehicles; i++) {
        cout << "Vehicle " << vehicles[i]->getID() << " has been parked for "
                  << vehicles[i]->getTimeOfEntry() << " seconds." << endl;
    }

    return 0;
}