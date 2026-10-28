// Pointer Basics
/*Objective: Understand basic pointer operations and their relationship with variables.
Instructions:
1. Declare an integer variable and initialize it with a value.
2. Declare a pointer and store the address of the integer variable.
3. Use the pointer to print the value of the integer.
4. Modify the value of the integer using the pointer and output the new value*/

#include <iostream>
using namespace std;

int main() { 
    int integerOne = 5;
    int* pointerOne = &integerOne;

    cout << "The value of the integer is: " << *pointerOne << endl;

    *pointerOne += 5;

    cout << "The value of the new integer is: " << *pointerOne << endl;
}