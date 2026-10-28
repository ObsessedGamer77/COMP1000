/* Write a C++ program that prompts the user to enter their age. 
The program should use an if-else statement to check if the user is old enough to vote (i.e., age 18 or above). 
If the user is eligible, the program should print a message saying, "You are eligible to vote." 
Otherwise, print "You are not eligible to vote."*/

# include <iostream>
using namespace std;

int main() {
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;

    if (userAge >= 18) {
        cout << "You are elegible to vote." << endl;
    } else {
        cout << "You are not elegible to vote." << endl;
    }
    return 0;
}

