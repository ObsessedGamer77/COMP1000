#include <iostream>
using namespace std;

class Car {
    private:
        string make;
        int year;

    public:
        Car() {
            make = "Unknown";
            year = 0;
        }
        Car(string m, int y) {
            make = m;
            year = y;
        }
        ~Car() {
          cout << "This Car is being destroyed." << endl;
        }

        void getCarDetails() {
            cout << "Car Make: " << make << ", Year: " << year << endl;
        }
};

int main() {
    Car c1;
    Car c2("Toyota", 2021);
    c1.getCarDetails();
    c2.getCarDetails();
}