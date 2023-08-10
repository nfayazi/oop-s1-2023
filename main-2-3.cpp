#include <iostream>
using namespace std;

/*

2-3: Palindrome Array [5 marks]
Definition: A palindrome is a sequence that reads the same backwards as it does
forwards. Hence, 101, 120021, and 1 are all numerical palindromes. The number
1234 is NOT a palindrome. A palindrome array would be of the form [-1,2,2,-1]
for example.

Given an array of integers, write a function to calculate the sum of the
elements if it is a palindrome array. If it is not a palindrome array, your
function must return -2. Your function must call separate functions to check
whether or not the array is a palindrome and to calculate the sum of its
elements.  If the length is 0 or negative each function must return -1 or false
as its result. The function must be placed in a file named function-2-3.cpp. You
must also write a main function and place it in a file named main-2-3.cpp.

*/

int sum_integers(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);

int main(){
    int length = 4;
    int integers[] = {1, 2, 2, 1};

if (is_array_palindrome(integers, length) != true){
    cout << "This array is not a palindrome." << endl;
} else if (is_array_palindrome(integers, length) == true){
    cout << "The sum of this palindrome is: " << palindrome_sum(integers, length) << endl;
}


    return 0;
}