#include <iostream>

class Counter {
private:
	static int count;

public:
	Counter() {
		++count;
	}

	~Counter() {
		--count;
	}

	static int getCount() {
		return count;
	}
};

int Counter::count = 0;

int main() {
	Counter* first = new Counter();
	std::cout << "Current Count: " << Counter::getCount() << '\n';

	Counter* second = new Counter();
	std::cout << "Current Count: " << Counter::getCount() << '\n';

	Counter* third = new Counter();
	std::cout << "Current Count: " << Counter::getCount() << '\n';

	delete second;
	std::cout << "[After deleting one object]\n";
	std::cout << "Current Count: " << Counter::getCount() << '\n';

	delete first;
	delete third;
	return 0;
}
