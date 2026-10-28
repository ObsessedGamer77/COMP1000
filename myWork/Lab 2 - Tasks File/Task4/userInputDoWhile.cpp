// Dealing with user input with a do-while loop

#include <iostream>
using namespace std;

int main() {
    int enteredNumber = 0;
    do {
        cout << "Enter a positive number: ";
        cin >> enteredNumber;
    } while (enteredNumber < 0);
    cout << "The positive number entered was: " << enteredNumber << endl;
}