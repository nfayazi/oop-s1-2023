#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};