#include <iostream>
#include "Person.h"
/*
1-4 In a file called function-1-4.cpp, include Person.h and write a function
called shallowCopyPersonList that takes a PersonList struct and returns a new
PersonList struct that is a shallow copy of the original. That is, the people
field of the new struct should point to the same array of n Person structs as
the original.

Signature: PersonList shallowCopyPersonList(PersonList pl)
*/
using namespace std;
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList og_list;
    og_list.numPeople = 2;
    og_list.people = new Person[og_list.numPeople];
    
    og_list.people[0].name = "Sasuke";
    og_list.people[0].age = 9;
    
    og_list.people[1].name = "Naruto";
    og_list.people[1].age = 10;
    
    PersonList copy = shallowCopyPersonList(og_list);
    
    cout << "The original list is: " << endl;
    for (int i = 0; i < og_list.numPeople; i++) {
        cout << "Person " << i + 1;
        cout << "is: " << og_list.people[i].name;
        cout << "and " << og_list.people[i].age << " years old." << endl;
    }
    
    cout << "The copied list is: " << endl;
    for (int i = 0; i < copy.numPeople; i++) {
        cout << "Person " << i + 1 << ":" << endl;;
        cout << "is: " << copy.people[i].name;
        cout << "and " << copy.people[i].age << " years old." << endl;
    }
    
    return 0;
}