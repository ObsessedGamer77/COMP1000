// String Operations
/*Objective: Practice basic string manipulation using the std::string class.
Instructions:
1. Declare and initialize two std::string variables with different text values.
2. Concatenate these two strings into a new string.
3. Find the length of the concatenated string and print it.
4. Compare the original strings and output whether they are equal or not.*/

#include <iostream>
#include <string>
using namespace std; 

int main() {
    std::string text1 = "Hello"; // String data types
    std::string text2 = " there";

    std::string greeting = text1 + text2; // concatenation of strings (no spaces added)

    cout << "The length of the string is: " << greeting.length() << endl; // print the concatenated version of the strings

    if ( text1 == text2) { // compare if the original strings are the same or not and print out the result
        cout << "They are the same strings." << endl;
    } else {
        cout << "They are not the same strings." << endl;
    }

    return 0; // End the program when program finished
}