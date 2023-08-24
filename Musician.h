#include <iostream>
#include <string>
using namespace std;
class Musician {
    private:
    string Instrument;
    int yearsExperience;

    public:
void setInstrument(string instrument);
void setYearsExperience(int yearsOfExperience);
Musician();
Musician(string instrument, int experience);

};