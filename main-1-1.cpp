#include <iostream>

#include "Person.h"
using namespace std;
extern Person* createPersonArray(int n);

/* 1-1 Suppose you have a struct called Person that looks like this:

struct Person {
    std::string name;
    int age;
};

In a file called function-1-1.cpp, include Person.h and write a function called
createPersonArray that takes an integer argument n and returns an array of n
Person structs. The name and age fields of each struct should be set to "John
Doe" and 0, respectively.
 */

int main() {
  int n = 4;
  Person* person_array = createPersonArray(n);

  for (int i = 0; i < n; ++i) {
    cout << "Person " << i + 1 << " is: " << person_array[i].name;
    cout << " and " << person_array[i].age << " years old." << endl;
  }

  delete[] person_array;

  return 0;
}