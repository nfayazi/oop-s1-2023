#include <iostream>
#include "Person.h"

using namespace std;
extern PersonList createPersonList(int n);

/*1-2 Now, suppose you have another struct called PersonList that looks like
this:

struct PersonList {
    Person* people;
    int numPeople;
};
Note: Add the above struct to the file Person.h

In a file called function-1-2.cpp,  include Person.h and write a function called
createPersonList that takes an integer argument n and returns a PersonList
struct. The numPeople field of the struct should be set to n, and the people
field should be set to an array of n Person structs. The name and age fields of
each struct should be set to "Jane Doe" and 1, respectively.

*/

int main() {
    int n;
    cout << "Enter the number of people on this list: ";
    cin >> n;
    cout << endl;
    
    PersonList list = createPersonList(n);

    cout << "The list has " << list.numPeople << " people." << endl;
    
    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1 << " is: " << list.people[i].name;
        cout << ", " << list.people[i].age << " years old" << endl;
    }
        delete[] list.people;

    return 0;
}