/*
Writing Data to Files Using ofstream
Objective: Practice using ofstream to write data to files.
Instructions:
1. Create a new file and write multiple types of data to it. Use different data types like
integers, floating points, and strings.
2. Format the output using stream manipulators (setw, setprecision).
3. Ensure to handle file opening errors using is_open() and close the file after writing
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("data.txt");
    
    if (outputFile.is_open()) {
        outputFile << setw(12) << "Name: " << setw(10) << "John" << endl;
        outputFile << setw(12) << "Age: " << setw(10) << 21 << endl;
        outputFile << setw(12) << "Attendance: " << setw(10) << 80.76 << endl;

        outputFile.close();
    } else {
        cerr << "Unable to open file" << endl;
    }
}