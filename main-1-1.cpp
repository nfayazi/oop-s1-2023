#include <iostream>
#include "Musician.h"
using namespace std;

int main() {
  Musician m1;
  cout << "Default instrument: " << m1.get_instrument();
  cout << ", Default experience : ";
  cout<< m1.get_experience() << endl;

  Musician m2("guitar", 5);
    cout << "Instrument: " << m2.get_instrument();
    cout << ", Experience: " << m2.get_experience() << std::endl;
  
  
  return 0;
}