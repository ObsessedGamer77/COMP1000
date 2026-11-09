/*
Handling File I/O Errors and Stream Flags
Objective: Practice using stream flags to manage file I/O operations and errors.
Instructions:
1. Write a function to open a file and perform several operations (read or write), checking
stream flags (failbit, eofbit) after each operation.
2. If an error is detected, use the appropriate method to clear the error state and attempt a
recovery or appropriate error handling.
3. Discuss how different flags can be used to diagnose and recover from various I/O
issues.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

void checkStreamState(ios& stream, const string& label) {
    cout << "\n--- " << label << " ---\n";
    cout << "good() = " << stream.good() << "\n";
    cout << "fail() = " << stream.fail() << "\n";
    cout << "eof() = " << stream.eof() << "\n";
    cout << "bad() = " << stream.bad() << "\n";
}

void demonstrateFileErrors() {
    const string filename = "demo_file.txt";

    ofstream writeFile(filename);
    if (!writeFile) {
        cerr << "Could not open " << filename << " for writing.\n";
        return;
    }

    writeFile << "42 17 99\n";
    writeFile.close();

    ifstream readFile(filename);
    if (!readFile) {
        cerr << "Could not open " << filename << " for reading.\n";
        return;
    }

    int value = 0;

    readFile >> value;
    checkStreamState(readFile, "After reading first number");
    cout << "Read value: " << value << "\n";

    readFile >> value;
    checkStreamState(readFile, "After reading second number");
    cout << "Read value: " << value << "\n";

    readFile >> value;
    checkStreamState(readFile, "After reading third number");
    cout << "Read value: " << value << "\n";

    readFile >> value;
    checkStreamState(readFile, "After reading past end of file");

    if (readFile.eof()) {
        cout << "EOF reached. Clearing the EOF state so the stream can recover.\n";
        readFile.clear();
        checkStreamState(readFile, "After clear()");
    }

    const string badFilename = "bad_data.txt";
    ofstream badWrite(badFilename);
    if (!badWrite) {
        cerr << "Could not open " << badFilename << " for writing.\n";
        return;
    }

    badWrite << "abc 123\n";
    badWrite.close();

    ifstream badRead(badFilename);
    if (!badRead) {
        cerr << "Could not open " << badFilename << " for reading.\n";
        return;
    }

    int invalidValue = 0;
    badRead >> invalidValue;
    checkStreamState(badRead, "After invalid numeric conversion");

    if (badRead.fail()) {
        cout << "failbit set: invalid data type for integer conversion.\n";
        badRead.clear();
        string recoveredWord;
        badRead >> recoveredWord;
        cout << "Recovered word after clear(): " << recoveredWord << "\n";
        checkStreamState(badRead, "After recovery read");
    }

    cout << "\nSummary:\n";
    cout << "- failbit means the last operation failed, such as trying to read a non-numeric value into an int.\n";
    cout << "- eofbit means the stream reached the end of the file.\n";
    cout << "- badbit indicates a serious stream failure.\n";
    cout << "- clear() resets the stream state so you can recover and continue processing.\n";
}

int main() {
    demonstrateFileErrors();
    return 0;
}