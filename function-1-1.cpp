#include <iostream>

#include "Person.h"
using namespace std;

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
Person* createPersonArray(int n) {
  Person* person_array = new Person[n];

  for (int i = 0; i < n; i++) {
    person_array[i].name = "John Doe";
    person_array[i].age = 0;
  }
  return person_array;
}