#include "Fleet.h"
#include <iostream>
using namespace std;

int main(){
    Fleet f1 = Fleet();
    
    for (int i = 0; i < 5; i++){
        cout << "Car: " << f1[i].get_name() << endl;

    }


    return 0;
}