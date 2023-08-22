#include <iostream>
#include <string>
#include "musician.h"
using namespace std;


/*Musician(string instrument, int experience);
string get_instrument();  // returns the instrument played
int get_experience();          // returns the number of years experience*/

int main(){

Musician player1 = Musician("Matilda", "Violin", 12);
Musician player2 = Musician();

cout << "Name: "<< player1.get_name() << " | ";
cout << "Instrument: " << player1.get_instrument() << " | ";
cout << "Years of experience: " << player1.get_experience() << endl;

cout << "Name: "<< player2.get_name() << " | ";
cout << "Instrument: " << player2.get_instrument() << " | ";
cout << "Years of experience: " << player2.get_experience() << endl;


    return 0;
}