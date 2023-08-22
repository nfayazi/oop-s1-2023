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
void setInstrument(string instrument){}
void setYearsExperience(int experience) {}
}
int get_experience(){ return yearsExperience;};
Musician() {
    Name = "Unknown";
    Instrument = "null";
    yearsExperience = 0;
}
*/
Musician(string name, string instrument, int experience) {
    Name = name;
    Instrument = instrument;
    yearsExperience = experience;
};
/*
Musician(string instrument, int experience) {
    Instrument = instrument;
    yearsExperience = experience;
};
*/
};