// Pointer to String and Memory Allocation
/*Objective: Practice dynamic memory allocation and working with character arrays (C-strings).
Instructions:
1. Dynamically allocate memory for a C-style string (character array) of size 20.
2. Store a user-inputted string into this dynamically allocated memory.
3. Print the string and its length.
4. Deallocate the memory after use.*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* greeting = new char[20];
    cout << "Enter a string to store in a C-style string: ";
    cin.getline(greeting, 20);
    cout << "String: " << greeting << endl;
    cout << "Length: " << strlen(greeting) << endl;
    delete[] greeting;
}
