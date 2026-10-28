// Type Casting and Conversion

// Objective: Understand implicit and explicit type casting in arithmetic operations.
// Instructions:
// 1.	Write a program that accepts two integers and performs the following operations:
// a.	Implicit type conversion in division.
// b.	Explicit type conversion (using static_cast) to cast one of the integers to a float before division.
// 2.	Display the results of both operations and explain the difference in your comments.

// Example Output:
// Enter the first number: 15
// Enter the second number: 2
// •	Result without type casting (integer division): 7
// •	Result with type casting (float division): 7.5

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Input integer 1: ";
    cin >> num1;
    cout << "Input integer 2: ";
    cin >> num2;

    // Implicit conversin in divisiion:
    float implicitDivision = num1 / num2;

    // Ecplicit conversion using static_cast
    float explicitDivision = static_cast<float>(num1) / num2;

    cout << "Implicit division = " << implicitDivision << endl;
    cout << "Explicit division = " << explicitDivision << endl;
}