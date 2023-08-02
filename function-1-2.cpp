#include <iostream>

// 1-2. Given a matrix of integers with 10 rows and 10 columns, write a function
// and program to determine if the matrix is an identity matrix or not. Return a
// 1 if it is an identity matrix and a 0 if not. (Definition: An identity matrix
// is one with 1's down the main diagonal and 0's elsewhere)

int is_identity(int array[10][10]) {
    int identity = 0;

    for (int r = 0; r < 10; r++){
        for (int c = 0; c < 10; c++){
            if (r == c){
                if (array[r][c] != 1){
                    identity = 0;
                    return identity;
                } else if (array[r][c] == 1){
                    identity = 1;
                }
            }
            if (r != c){
                if (array[r][c] != 0){
                    identity = 0;
                    return identity;
                } else if (array[r][c] == 0){
                    identity = 1;
                }
            }
        }
    }
    
     return identity;
     
     }