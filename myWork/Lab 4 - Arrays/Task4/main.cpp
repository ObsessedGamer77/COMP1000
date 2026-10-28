// Array and Pointers
/*Objective: Work with arrays and pointers to understand memory relationships.
Instructions:
1. Declare an array of 5 integers and assign values.
2. Use a pointer to traverse the array and print each element.
3. Modify the array elements by incrementing each value by 2 using pointer arithmetic.
4. Output the modified array.*/

#include <iostream>
using namespace std;

int main() {
    int my_array[5] = {1,2,3,4,5};

    int* my_pointer = my_array;

    for (int i = 0; i < 5; ++i) {
        cout << "Array index: " << i << "\nContains the value: " << *(my_pointer + i) << endl;
    }

    for (int i = 0; i < 5; ++i) {
        *(my_pointer + i) += 2; // pointer arithmetic to add 2 to each element in the array
        cout << "Array index: " << i << "\nContains the value: " << *(my_pointer + i) << endl;
    }
}