#include <iostream>
using namespace std;

// 1-3 Given a matrix of integers, count the number of times each number 0-9
// appears. Print out your results on one line in the following form:


extern void count_digits(int array[4][4]);

int main(){
    int array[4][4];
    int rows = 4;
    int cols = 4;

    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
          array[r][c] = c;

        }
    }

count_digits(array);

    return 0;
}