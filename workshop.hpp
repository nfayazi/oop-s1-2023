#include <iostream>
using namespace std;

/*

Part 2: Create a function named changeValue with signature void
changeValue(double*) that accepts a pointer to a double and changes the value of
the double it points at to 42. Call this function from your main function and
verify that the original double value was indeed changed.

Can you explain how passing a pointer to a function can be used to modify the
original variable value?
Answer: A pointer points to the address of a variable. When a function is called
and operations are performed on the data, it can essentially be visualised as
travelling to the location at which the variable is stored, and changing the
original data located there.


What would happen if we passed the double directly to
the function rather than a pointer?
Answer: the changes made to the double would be saved into the stack, as all
variables in a function are. However, once the function has terminated, the
stack will release all the memory stored from the function and return to the
main function. This means the value double would not have changed outside of the
called function.

*/

void changeValue(double* val) {
  *(val) = 42;
  cout << *(val) << endl;
}

/*
Part 3: Create a double array (double[]) in your main function. Create a
function named printArray with signature void printArray(double*, int) that
accepts a pointer to an array and its size as arguments, and prints out the
content of the array. Call this function from your main function and verify the
correct output.

How do you pass an array to a function in C++ and why is it done this way?
Answer: Arrays can be passed to a function by using a pointer to point to the
first element of the array. Interestingly, the variable name used when declaring
the array is actually already a pointer to the first element of the array. So,
when we make an array such as: int a[3] = {...}; when we call a by itself, say,
cout << a << endl;  ///this will actually print the address of a[0]
cout << *a << endl;     // and this will print the value of a[0]
cout << *(a+1) << endl;     //will print the address of [a[1] and so on


What does the size argument represent and why is it necessary?
Answer: The size argument represents the number of elements within the array.
This is necessary so that when accessing the elements inside the array using,
for example, a for-loop, we do not access memory outside of what has been
allocated to the array. This could cause garbage data and unexpected program
behaviours that the compiler will not warn us about.

*/

void printArray(double* a, int size) {
  for (int i = 0; i < size; i++) {
    cout << *(a + i) << " " << endl;
  }
}

/*

Part 4: Create a function named arrayMax with signature double arrayMax(double*,
int) that accepts a pointer to a double array and its size as arguments, and
returns the maximum value in the array. Call this function from your main
function and verify the correct output.

Why does the function need to return a double, and not a pointer?

*/

double arrayMax(double* a, int size) {
  int max = a[0];

  for (int i = 0; i < size; i++) {
    if (*(a + 1) > max) {
      max = *(a + 1);
    }
  }
  return max;
}

/*

Part 5: Create a function named dynamicArray with signature double*
dynamicArray(int) that accepts an integer N as an argument, dynamically
allocates a double array of size N, initializes the array with values (for
instance, array index or a random number), and returns the pointer to the array.

Why do we need to return a pointer from the dynamicArray function?
Answer: Arrays do not work like variables. We can not simply say
return [name of array]; and expect all the values of the array to be sent back
to the main function. Instead, we return a pointer that points to the first
element of the array, so that the program compiler knows where the array is
located and can use the data of the array outside of the function.
*/

double* dynamicArray(int N, double M) {
  double* array = new double[N];

  for (int i = 0; i < N; i++) {
    array[i] = M;
  }
  
  return array;
}

/*

Part 6: In your main function, call dynamicArray to create a dynamic array
(double*), call arrayMax to find the maximum value, print the maximum value, and
then deallocate the dynamic array using delete[].

What is the purpose of the delete[] keyword and why is it important to use it?
Answer: the delete[] keyword is used to free the allocated memory of the array
in the heap. This is done so that once the array and, consequently, its memory
is no longer needed, the memory within the heap can be used to store other
meaningful data.

What might happen if you forget to deallocate the dynamic array?
Answer: if dynamic memory is not deleted, this can lead to memory leaks which
will cause the program to access memory outside of its allocated memory, and
thus causes unexpected behaviour.
*/

/*

Part 7: Modify the dynamicArray function to accept an additional double argument
M, with updated signature double* dynamicArray(int, double), and initialize the
array elements with the value M. Call this function from your main function and
verify the correct output.

Can you explain what happens when you initialize the array elements with the
value M in the dynamicArray function?
Answer: within the loop, the address of the array is incremented by one each iteration. As this
is an array, the data for each element of the array is aligned horizontally right next to each other.
Each element is 8 bits long, so each incrementation, the address moves exactly 8 bits and assigns
M to the next element.

What might be a practical application of
initializing an array with a specific value?
Answer: This is useful for many different things, for example, grading. For loops and if-statements
(or switch) can be used to initialise arrays with specific grading scores. Another use is for 

*/