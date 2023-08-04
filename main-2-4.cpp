#include <iostream>
using namespace std;

// 2-2: Write a function that returns the maximum element in an integer array.
// The function should return 0 if the size parameter, n, is less than 1.

// function for min number
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main(){
    int integers[] = {11, 2, 3};
    int length = 3;

    cout << "The min of this array is: " << array_min(integers, length) << endl;
    cout << "The max of this array is: " << array_max(integers, length) << endl;
    cout << "The sum of the min and max is: " << sum_min_max(integers, length) << endl;


    return 0;
}