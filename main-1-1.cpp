#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <unistd.h>

int main() {
    int cars, motorbikes, vehicles, bus;

    cout << "How many cars: ";
    cin >> cars;

    cout << "How many buses? ";
    cin >> bus;

    cout << "How many motorbikes: ";
    cin >> motorbikes;

    vehicles = cars + motorbikes + bus;

    Vehicle **vehicle = new Vehicle*[vehicles];
    int id = 1;


    for (int i = 0; i < cars; i++) {
        vehicle[i] = new Car(i + 1);
        sleep(i);
    }

    for (int buses = cars; buses < cars + bus; buses++) {
        vehicle[buses] = new Bus(buses + 1);
        sleep(buses);
    }

    for (int bikes = cars + bus; bikes < vehicles; bikes++) {
        vehicle[bikes] = new Motorbike(bikes + 1);
        sleep(bikes);
    }


    for (int i = 0; i < vehicles; i++){
        for (int i = 0; i < vehicles; i++){
            cout << "Vehicle ID: " << vehicle[i]->getID();
            cout << " - Duration: " << vehicle[i]->getParkingDuration() << " seconds" << endl;
        }

        delete[] vehicle;

        return 0;
    }
}