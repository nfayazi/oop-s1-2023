#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(5);

    for (int i = 0; i < 5; i++){
        if (parkingLot.getCount() < 5){
            int id;
            cout << "Enter the ID of the vehicle to park: ";
            cin >> id;
            Vehicle* vehicle = new Vehicle(id);
            parkingLot.parkVehicle(vehicle);
    }
}

    int unparkID;
    cout << "Please enter unparked vehicle's ID: ";
    cin >> unparkID;
    parkingLot.unparkVehicle(unparkID);

    return 0;
}




