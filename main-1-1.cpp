#include <iostream>
using namespace std;

/*

1-1: Print Elements [8 marks]
Given a multi-dimensional array of integers, print all its elements. You may
assume that the dimensions are 10x10, as in the signature. Elements should be
printed by row, with a space separating elements on a row, and a newline
separating rows (use `std::endl`). The function must be placed in a file named
function-1-1.cpp. You must also write a main function and place it in a file
named main-1-1.cpp.

Signature: void print_matrix(int array[10][10])

*/

void print_matrix(int array[10][10]);

int main(){
int array[10][10];

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        array[i][j] = j;
    }
}

print_matrix(array);


    return 0;
}