#include <iostream>
#include <string>
using namespace std;

/* Musician();  // a default constructor
// a constructor that takes the instrument played and the years of experience

*/

class Musician {
    private:
    string Name;
    string Instrument;
    int yearsExperience;

    public:
void setName(string name) { 
    Name = name;
};
string get_name(){ return Name;}
void setInstrument(string instrument){
    Instrument = instrument;
}
string get_instrument() { return Instrument;}
void setYearsExperience(int yearsOfExperience) {
    yearsExperience = yearsOfExperience;
}
int get_experience(){ return yearsExperience;};
Musician() {
    Name = "Unknown";
    Instrument = "null";
    yearsExperience = 0;
}
Musician(string name, string instrument, int experience) {
    Name = name;
    Instrument = instrument;
    yearsExperience = experience;
};


};