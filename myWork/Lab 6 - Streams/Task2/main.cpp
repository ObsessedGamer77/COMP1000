/*
 Reading Data from Files Using ifstream
Objective: Develop skills in reading data from files using ifstream.
Instructions:
1. Open an existing file and read various data types from it. Try reading integers, floating
points, strings, and using getline() for whole lines.
2. Display each read item to the console, formatting output appropriately.
3. Check if the file is opened successfully and handle end of file (EOF) correctly using a
while loop.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ifstream aaa("data.txt");
    if (!aaa.is_open()) {
        cerr << "Unable to open file" << endl;
    }

    string nextLine;
    getline(aaa, nextLine);
    while (!aaa.eof()) {
        cout << nextLine << endl;
        getline(aaa, nextLine);
    aaa.close();
}