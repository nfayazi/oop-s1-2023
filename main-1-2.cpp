#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
using namespace std;

int main() {
    ParkingLot parkingLot(5);

    while (parkingLot.getCount() < 5){
        int id;
        cout << "Enter the ID of the vehicle to park: ";
        cin >> id;
        Vehicle* vehicle = new Vehicle(id);
        parkingLot.parkVehicle(vehicle);
    }

    int unparkID;
    cout << "Please enter unparked vehicle's ID: ";
    cin >> unparkID;
    parkingLot.unparkVehicle(unparkID);

    return 0;
}




