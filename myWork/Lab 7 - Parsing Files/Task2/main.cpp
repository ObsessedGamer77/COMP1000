#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("data.json");
    string line;
    
    while (getline(inputFile, line)) {
        string name, grades, grade;
        istringstream ss(line);
        
        getline(ss, name, ',');
        name = name.substr(name.find(":") + 3, name.length() - name.find(":") -4);
        cout << "Name: " << name;

        getline(ss, grades, '}');
        grades = grades.substr(grades.find(":") + 3, grades.length() - grades.find(":") - 4);
        istringstream gradesStream(grades);
        cout << ", Grades: ";

        while (getline(gradesStream, grade, ','))
            cout << grade << ",";
        cout << endl;
    }
    return 0;
}