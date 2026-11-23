#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    ifstream inputFile("data.csv");
    if (!inputFile.is_open()) {
        cerr << "An error occured while opening 'data.csv'" << endl;
    }

    string line;
    getline(inputFile, line);       // bypass Header

    while (getline(inputFile, line)) {
        istringstream ss(line);
        while (getline(ss, line)) {
            istringstream ss(line);
            string name, age, city;
            getline(ss, name, ',');
            getline(ss, age, ',');
            getline(ss, city, ',');

            cout << "Name: " << setw(10) << left << name+"," << "Age: " << setw(4) << age+"," << "City: " << city << endl;
        }
    }
    return 0;
}