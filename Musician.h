#include <iostream>
#include <string>
using namespace std;

/* Musician();  // a default constructor
// a constructor that takes the instrument played and the years of experience

*/

class Musician {
    private:
    string Instrument;
    int yearsExperience;

    public:
void setInstrument(string instrument){
    Instrument = instrument;
}
void setYearsExperience(int yearsOfExperience) {
    yearsExperience = yearsOfExperience;
}
// int get_experience(){ return yearsExperience;};
Musician() {
    Instrument = "null";
    yearsExperience = 0;
};

Musician(string instrument, int experience) {
    Instrument = instrument;
    yearsExperience = experience;
};

};