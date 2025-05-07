#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }

	friend Circle& operator ++(Circle& op);
	friend Circle operator ++(Circle& op1, int op2);
};

Circle& operator ++(Circle& op) {
	op.radius++;
	return op;
}

Circle operator ++(Circle& op1, int op2) {
	Circle tmp = op1;
	op1.radius++;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}