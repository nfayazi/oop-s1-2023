#include <iostream>

using namespace std;

// 1-2. Given a matrix of integers with 10 rows and 10 columns, write a function
// and program to determine if the matrix is an identity matrix or not. Return a
// 1 if it is an identity matrix and a 0 if not. (Definition: An identity matrix
// is one with 1's down the main diagonal and 0's elsewhere)

extern int is_identity(int array[10][10]);

int main(){
    int array[10][10];
    
    for (int r = 0; r < 10; r++){
        for (int c = 0; c < 10; c++){
             if (r==c){
                array[r][r] = 1;
             } else {
                array[r][c] = 0;
             }
        }
    }

    cout << "If this is an identity matrix, this program will return 1." << endl << "If not, it will return 0." << endl;
    cout << "The result is: " << is_identity(array) << endl;




    return 0;
}