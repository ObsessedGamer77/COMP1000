/*
 File Copy Using Character-Level Operations
Objective: Understand and implement file copying using character-level operations
with get() and put().
Instructions:
1. Open a source file for reading and a destination file for writing.
2. Copy contents from the source file to the destination file one character at a time.
3. Manage both input and output streams, ensuring all errors are handled and files are
closed properly after operations.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream aaa("data.txt");
    if (!aaa.is_open()) {
        cerr << "Unable to open source file" << endl;
        return 1;
    }

    ofstream bbb("dataCopy.txt");
    if (!bbb.is_open()) {
        cerr << "Unable to open destination file" << endl;
        return 1;
    }

    char nextChar;
    while (aaa.get(nextChar)) {
        bbb.put(nextChar);
        if (!bbb) {
            cerr << "Error writing to destination file" << endl;
            return 1;
        }
    }

    if (!aaa.eof()) {
        cerr << "Error reading from source file" << endl;
        return 1;
    }

    aaa.close();
    bbb.close();
    if (!bbb) {
        cerr << "Error closing destination file" << endl;
        return 1;
    }

    return 0;
}