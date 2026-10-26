#include <iostream>
using namespace std;

int addTwoNumbers(int numOne, int numTwo);

int main() {
    int numOne;
    int numTwo;
    cout << "Enter the first number: ";
    cin >> numOne;
    cout << "Enter the second number: ";
    cin >> numTwo;
    cout << "The sum of these numbers is: " << addTwoNumbers(numOne, numTwo);
    return 0;
}

int addTwoNumbers(int numOne, int numTwo) {
    return numOne + numTwo;
}