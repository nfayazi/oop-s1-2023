#include "Musician.h"
using namespace std;

Musician::Musician() : Instrument("null"), yearsExperience(0){

}

Musician::Musician(string instrument, int experience){
    Instrument = instrument;
    yearsExperience = experience;
};
string Musician::get_instrument() {
    return Instrument;

}
int Musician::get_experience() {
    return yearsExperience;
}