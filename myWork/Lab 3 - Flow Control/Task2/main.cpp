/*Write a C++ program that asks the user to input their exam marks. Use an else-if ladder to assign a grade based on the following criteria:
Marks >= 90: Grade A
Marks >= 80: Grade B
Marks >= 70: Grade C
Marks >= 60: Grade D
Marks < 60: Grade F
Print the assigned grade.*/

#include <iostream>
using namespace std;

int main() {
    int userMarks;

    cout << "Enter your exam marks: ";
    cin >> userMarks;

    if (userMarks >= 90) {
        cout << "You got a Grade A." << endl;
    } else if (userMarks >= 80) {
        cout << "You got a Grade B." << endl;
    } else if (userMarks >= 70) {
        cout << "You got a Grade C." << endl;
    } else if (userMarks >= 60) {
        cout << "You got a Grade D." << endl;
    } else {
        cout << "You got a Grade F." << endl;
    }
    return 0;
}
