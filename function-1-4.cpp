#include <iostream>
#include "Person.h"
/*
1-4 In a file called function-1-4.cpp, include Person.h and write a function
called shallowCopyPersonList that takes a PersonList struct and returns a new
PersonList struct that is a shallow copy of the original. That is, the people
field of the new struct should point to the same array of n Person structs as
the original.

*/

PersonList shallowCopyPersonList(PersonList pl){
    PersonList shallow_copy;
    
    shallow_copy.numPeople = pl.numPeople;
    shallow_copy.people = pl.people;
    
    return shallow_copy;
    
}