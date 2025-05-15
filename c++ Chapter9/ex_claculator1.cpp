#include <iostream>
using namespace std;

class Cadd {
	int a, b;
public:
	Cadd(int a, int b);
	int add();
	int subtract();
};

Cadd::Cadd(int a, int b) {
	this->a = a;
	this->b = b;

	//return result;
}

int Cadd::add() {
	int result;
	result = a + b;
	cout << result << endl;

	return 0;
}

int Cadd::subtract() {
	int result;
	result = a - b;
	cout << result << endl;

	return 0;
}



int main() {

	Cadd a(3, 4);
	a.add();
	a.subtract();

	return 0;
}