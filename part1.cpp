#include <iostream>
using namespace std;

/* 
Part 1: Create a simple program that declares a double (double) and a
   character (char). Then declare a pointer for each of these variables
   (double*, char*), assign their addresses to the respective pointers, and
   print out the value of each variable using its corresponding pointer.

*/

int main(){

double a = 20;
double* address1;
address1= &a;
char b = 'o';
char* address2;
address2= &b;

cout << "a is: " << a << endl;
cout << "the address of a is: " << (address1) << endl;
cout << "b is: " << b << endl;
cout << "the address of b is: " << *(address2) << endl;

return 0;

}