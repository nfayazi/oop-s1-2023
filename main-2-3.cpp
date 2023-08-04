#include <iostream>
using namespace std;
/*

2-3. Given an array of integers, write a function to calculate the sum of the
elements if it is a palindrome array. If it is not a palindrome array, your
function must return -2. Your function must call separate functions to check
whether or not the array is a palindrome and to calculate the sum of its
elements. If the length is O or negative each function must return -1 or false
as its result.

*/

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main(){
int integers[] = {1, 2, 3, 1};
int length = 4;

cout << "This array is a palindrome: " << is_palindrome(integers, length) << endl;
cout << "If this is a palindrome, the sum is: " << sum_if_palindrome(integers, length) << endl;
cout << "1 indicates palindrome, 0 and -2 indicate not a palindrome." << endl;

    return 0;
}
