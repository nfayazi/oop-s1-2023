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
    int n;
    cout << "Enter the number of people on this list: ";
    cin >> n;
    cout << endl;

PersonList og_list;
    og_list.numPeople = n;
    og_list.people = new Person[og_list.numPeople];
    
    for (int i = 0; i < n; i++){
        cout << "Enter Person" << i + 1 << "'s name: ";
        cin >> og_list.people[i].name;
        cout << "Enter their age: ";
        cin >> og_list.people[i].age;
        cout << endl;
    }
    
    PersonList copy = shallowCopyPersonList(og_list);
    
    cout << "The original list is: " << endl;
    for (int i = 0; i < og_list.numPeople; i++) {
        cout << "Person " << i + 1;
        cout << " is: " << og_list.people[i].name;
        cout << ", " << og_list.people[i].age << " years old." << endl;
    }
    cout << endl;
    cout << "The copied list is: " << endl;
    for (int i = 0; i < copy.numPeople; i++) {
        cout << "Person " << i + 1;
        cout << " is: " << copy.people[i].name;
        cout << ", " << copy.people[i].age << " years old." << endl;
    }
    delete[] og_list.people;

    return 0;
}