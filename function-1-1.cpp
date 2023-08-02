#include <iostream>

using namespace std;

// 1-1. Given a matrix of integers, return the sum of the elements along the
// main diagonal (top left bottom right)

int sum_diagonal(int array[4][4]) {
    int sum = 0;

    for (int r = 0; r < sizeof(array, 1); r++){
        for (int c = 0; r < sizeof(array, 2); c++ ){
            if (r == c){
                sum += array[r,c];
            }
        }
    }
    
    
     return sum; 
     
     }