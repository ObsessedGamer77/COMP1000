// Objective: Practice performing basic arithmetic operations.

// Instructions:
// 1.	Write a C++ program that accepts two integers from the user.
// 2.	Perform addition, subtraction, multiplication, division (using type casting for float division), and modulus on the two integers.
// 3.	Display the results of each operation.

// Example Output:
// Enter the first number: 12
// Enter the second number: 5
// •	Addition: 17
// •	Subtraction: 7
// •	Multiplication: 60
// •	Division: 2.4
// •	Modulus: 2

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float division = static_cast<float>(num1) / num2;
    int modulus = num1 % num2;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
}