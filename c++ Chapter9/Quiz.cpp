#include <iostream>
using namespace std;

class Calculator {
	int a, b;
public:
	Calculator() { a = 0; b = 0; }
	int add(int a, int b);
};

int Calculator::add(int a, int b) {
	int r;
	r = a + b;
	cout << "add:" << r << endl;
	return r;
}

class upgrade_Calculator : public Calculator {
public:
	double add(double a, double b);
};

double upgrade_Calculator::add(double a, double b) {
	double r;
	r = a + b;
	cout << "add:" << r << endl;
	return r;
}

int main() {
	upgrade_Calculator a1, *pa1;
	pa1 = &a1;
	pa1->add(3.3, 4.4);

	Calculator *pa2;
	pa2 = pa1;
	pa2->add(3, 4);
}