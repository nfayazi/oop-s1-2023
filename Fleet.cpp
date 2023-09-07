#include "Fleet.h"


Fleet::Fleet()  {
    fleet[0] = Tesla('S', 10000);
    fleet[1] = Ford(1, 20000);
    fleet[3] = Car(30000);
    fleet[4] = Ford(2, 40000); 
    fleet[5] = Tesla('T', 50000);

}                        
Car Fleet:: **get_fleet(){
    return fleet;

}
