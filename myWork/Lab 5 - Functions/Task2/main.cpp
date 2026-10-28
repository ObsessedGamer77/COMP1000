#include <iostream>
using namespace std;

void swapNumbers(int &numOne, int &numTwo);

int main() {
    int numOne;
    int numTwo;
    cout << "Enter the first number: ";
    cin >> numOne;
    cout << "Enter the second number: ";
    cin >> numTwo;
    swapNumbers(numOne, numTwo);
    cout << "numOne: " << numOne << endl;
    cout << "numTwo: " << numTwo << endl;
    return 0;
}

void swapNumbers(int &numOne, int &numTwo) {
    int tempStore = numOne;
    numOne = numTwo;
    numTwo = tempStore;
}