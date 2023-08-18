#include <iostream>
#include "Person.h"

/* 1-3
In a file called function-1-3.cpp, include Person.h and write a function
called deepCopyPersonList that takes a PersonList struct and returns a new
PersonList struct that is a deep copy of the original. That is, the people field
of the new struct should point to a new array of n Person structs, each with the
same name and age fields as the original.
*/
using namespace std;
extern PersonList deepCopyPersonList(PersonList pl);


int main(){
    int n = 3;
PersonList og_list;
    og_list.numPeople = 2;
    og_list.people = new Person[og_list.numPeople];
    
    og_list.people[0].name = "Sasuke";
    og_list.people[0].age = 19;
    
    og_list.people[1].name = "Naruto";
    og_list.people[1].age = 18;
    
    PersonList copy = deepCopyPersonList(og_list);
    
    cout << "The original list is:" << endl;
    for (int i = 0; i < og_list.numPeople; i++) {
        cout << "Person " << i + 1;
        cout << " is: " << og_list.people[i].name;
        cout << ", " << og_list.people[i].age << " years old." << endl;
    }
    
    cout << endl;
    cout << "The copied list is:" << endl;
    for (int i = 0; i < copy.numPeople; i++) {
        cout << "Person " << i + 1;
        cout << " is: " << copy.people[i].name;
        cout << ", " << copy.people[i].age << " years old." << endl;
    }
    
    delete[] og_list.people;
    delete[] copy.people;

    return 0;
}



