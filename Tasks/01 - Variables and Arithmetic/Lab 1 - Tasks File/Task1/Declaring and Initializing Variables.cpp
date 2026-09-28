// Declaring and Initializing Variables

// Objective: Practice declaring and initializing variables of different types in C++.
// Instructions:
// 1.	Write a C++ program that declares and initializes variables of the following types:
// a.	int, float, char, and string.
// 2.	Display the values of these variables on the console.
// 3.	Change the values of the variables after initializing them and display the updated values.
// Example Output:
// Initial values: 
// Name: Alice, Age: 20, Height: 1.65, Grade: B

// Updated values:
// Name: Bob, Age: 22, Height: 1.75, Grade: A

#include <iostream>

using namespace std;

int main() {
    int age = 20;
    float height = 175;
    char grade = 'B';
    string name = "Alice";

    cout << "The person is age " << age << " and they are " << height << "cm tall and achieved grade " << grade << " and their name is " << name << endl;
    return 0;
}