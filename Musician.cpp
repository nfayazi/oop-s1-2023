#include "Musician.h"
using namespace std;

void Musician::setInstrument(string instrument){
    Instrument = instrument;
};
void Musician::setYearsExperience(int yearsOfExperience) {
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