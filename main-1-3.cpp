#include "Vehicle.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(5);

    while (parkingLot.getCount() < 5){
        int id;
        cout << "Which vehicle would you like to park?: ";
        cin >> id;
        Vehicle* vehicle = new Vehicle(id);
        parkingLot.parkVehicle(vehicle);
    }

    int unparkID;
    cout << "Which vehicle would you like to unpark?: ";
    cin >> unparkID;
    parkingLot.unparkVehicle(unparkID);

    int overstaying;
    cout << "How many vehicles are overstaying tonight?";
    cin >> overstaying;
    parkingLot.countOverstayingVehicles(overstaying);
    cout << "Number of vehicles overstaying: " << overstaying << endl;

    return 0;
}