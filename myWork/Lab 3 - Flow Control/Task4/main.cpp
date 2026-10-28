/*Write a C++ program that simulates a simple menu-driven system. 
The menu should display options for the user:
1. Start Game
2. Load Game
3. Quit
Use a switch statement to handle the user's choice. 
For each case, print an appropriate message. 
If the user enters an invalid choice, print "Invalid option. Try again."*/

#include <iostream>
using namespace std;

int main() {
    int userChoice;

    cout << "Main Menu:\n1. Start Game\n2. Load Game\n3. Quit" << endl;
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            cout << "Starting Game..." << endl;
            break;
        case 2:
            cout << "Loading Game..." << endl;
            break;
        case 3:
            cout << "Quitting Game..." << endl;
            break;
        default:
            cout << "Invalid option. Try again." << endl;
    }
    return 0;
}
