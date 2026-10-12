/*Create a C++ program that simulates a basic calculator. 
The program should ask the user to input two numbers and then select an operation 
(1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division). 
Use a switch statement to execute the corresponding operation and print the result.*/

#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    int operation;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter the operation 1-4: ";
    cin >> operation;

    switch (operation) {
        case 1:
            result = number1 + number2;
            cout << "The result is: " << result;
            break;
        case 2:
            result = number1 - number2;
            cout << "The result is: " << result;
            break;
        case 3:
            result = number1 * number2;
            cout << "The result is: " << result;
            break;
        case 4:
            result = number1 / number2;
            cout << "The result is: " << result;
            break;
        default:
            cout << "Invalid operation. Try again." << endl;
    }
    return 0;
}
