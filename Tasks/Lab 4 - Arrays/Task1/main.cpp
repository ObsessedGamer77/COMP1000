// Array Initialization and Manipulation
/*Objective: Initialize an array of integers, fill it with values, and perform basic operations.
Instructions:
1. Declare an integer array with 10 elements.
2. Initialize the array with values from 1 to 10 using a loop.
3. Write a function to compute the sum of all elements in the array.
4. Output the sum and the average of the array*/

#include <iostream>
using namespace std;

int sumOfElements(int the_array[]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += the_array[i];
    }
    return sum;
}

int main() {
    int my_array[10] = {};
    for (int i = 0; i < 10; i++) {
        my_array[i] = i + 1;
    }
    int sum = sumOfElements(my_array);
    cout << "The sum of the array is: " << sum << endl;
    double my_average = sum / 10.0;
    cout << "The average of the array is: " << my_average << endl;
}