#include <iostream>
using namespace std;

int main() {
    int inNumber = 0;
    while (inNumber >= 0) {
        cout << "Enter a negative number: ";
        cin >> inNumber;
    }
    cout << "The negative number you entered was: " << inNumber << endl;
}