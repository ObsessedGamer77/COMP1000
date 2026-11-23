#include <iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        float price;

    public:
        Book() {
            title = "unknown";
            author = "unknown";
            price = 0;
        }

        Book(string t, string a, float p) {
            title = t;
            author = a;
            price = p;
        }

        void displayInfo() {
            cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl;
        }
};

int main() {
    Book b1("The C++ Programming Language", "Bjarne Stroustrup", 39.99);
    b1.displayInfo();
}
