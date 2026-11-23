#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        char grade;
    
    public:
        void setName(string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setGrade(char g) {
            grade = g;
        }

        void getName() {
            cout << "Student Name: " << name << endl;
        }
        void getAge() {
            cout << "Age: " << age << endl;
        }
        void getGrade() {
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student s1;

    s1.setName("Alice");
    s1.setAge(30);
    s1.setGrade('A');

    s1.getName();
    s1.getAge();
    s1.getGrade();
}