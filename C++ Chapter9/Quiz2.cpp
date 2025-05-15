#include <iostream>
using namespace std;

class Calculator {
public:
	double a, b;
	Calculator() { a = 0; b = 0; }
	int set_num(double a, double b) { this->a = a; this->b = b; return 0; }
	virtual double add();
};

double Calculator::add() {
	int r;
	r = int(a) + int(b);
	cout << "add:" << r << endl;
	return r;
}

class upgrade_Calculator : public Calculator {
public:
	virtual double add();
};

double upgrade_Calculator::add() {
	double r;
	r = a + b;
	cout << "add:" << r << endl;
	return r;
}

int main() {
	upgrade_Calculator a1, * pa1;
	pa1 = &a1;
	a1.set_num(3.3, 4.4);
	pa1->add();

	Calculator* pa2;
	pa2 = pa1;
	pa2->add();
}