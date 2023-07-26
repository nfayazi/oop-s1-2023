#include <iostream>

using namespace std;
extern int array_sum(int array[], int n);

int main(){
    int elements[5] = {1,2,3,4,5};

cout << "The sum is: " << array_sum(elements, 5) << endl;
cout << endl;

    return 0;
}