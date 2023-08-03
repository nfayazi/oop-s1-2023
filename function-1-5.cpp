#include <iostream>
using namespace std;
/*
1-5 Given two two-dimensional arrays, add them together and print the result as
in 1-4 above. What relationship needs to be between the sizes of the two
matrices?
Example:

int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
print_summed(matrix1,matrix2) ;
This should produce the following output:

0 1 2
5 6 7
1 3 16
*/
void print_summed(int array1[3][3],int array2[3][3]){
int sum = 0;
const int rows = 3;
const int cols = 3;

for (int r = 0; r < rows; r++){
    for (int c = 0; c < cols; c++){
        sum += array1[r][c] + array2[r][c];
        cout << sum;
    }
    cout << endl;
}



}
