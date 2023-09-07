#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"



Fleet::Fleet()  {
    fleet[0] = new Tesla('S', 10000);
    fleet[1] = new Ford(1, 20000);
    fleet[3] = new Car(30000);
    fleet[4] = new Ford(2, 40000); 
    fleet[5] = new Tesla('T', 50000);

}                        
Car** Fleet::get_fleet(){
    return fleet;
}
/*Fleet::~Fleet(){
    for (int i = 0; i < 5; i++){
        delete[] fleet[i];
    }
}; */