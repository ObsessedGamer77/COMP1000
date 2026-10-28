/*Write a C++ program that takes a temperature value as input from the user. 
Use nested if-else statements to print whether the temperature is:
Below 0: "It's freezing."
Between 0 and 15: "It's cold."
Between 15 and 30: "It's warm."
Above 30: "It's hot."
*/

#include <iostream>
using namespace std;

/* Using elif ladder(?)
int main() {
    int temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature < 0) {
        cout << "It's freezing.";
    } else if (temperature < 15) {
        cout << "It's cold." << endl;
    } else if (temperature < 30) {
        cout << "It's warm." << endl;
    } else {
        cout << "It's hot." << endl;
    }
    return 0;
}
*/

// Using nested if-else
int main() {
    int temperature;
    
    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature < 0) {
        cout << "It's freezing.";
    } else {
        if (temperature < 15) {
            cout << "It's cold." << endl;
        } else {
            if (temperature < 30) {
                cout << "It's warm." << endl;
            } else {
                cout << "It's hot." << endl;
            }
        }
    }
}