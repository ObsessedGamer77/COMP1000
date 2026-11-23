#include <iostream>
using namespace std;

class Counter {
    private:
        static int count;
    
    public:
        Counter() {
            ++count;
        }
        static void getCount() {
            cout << "There are " << count << " objects of this type." << endl;
        }
        ~Counter() {
            --count;
        }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter::getCount();
    Counter c2;
    Counter::getCount();
    Counter c3;
    Counter::getCount();
    c3.~Counter();
    Counter::getCount();
    Counter c4;
    c1.getCount();
}