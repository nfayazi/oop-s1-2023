
#include <iostream>
using namespace std;
/*
1-4. Given a matrix, print out the scaled version of the matrix, where you
multiply every element in the matrix by the same numeric value. Elements should
be printed by row, with a space separating elements on a row, and a newline
character separating rows.

Example:

int scale = 3 ;
int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
print_scaled(threebythree,scale) ;
This should produce the following output:

0 3 6
9 12 15
18 21 24
*/
void print_scaled(int array[3][3],int scale){
    int array_scaled[3][3];

for (int r = 0; r < 3; r++){
    for (int c = 0; c < 3; c++){
        array_scaled[r][c] = array[r][c] * scale;
        cout << array_scaled[r][c] << " ";
    }
    cout << endl;
}
}

