#include <iostream>
using namespace std;

class Calculator {
public:
	double a = 1, b = 1;
	int set(double a, double b) { this->a = a; this->b = b; return 0; }
	virtual double add() = 0;
	virtual double subtract() = 0;
	virtual double multiply() = 0;
	virtual double divide() = 0;
};

class office : public Calculator {
public:
	double add() { return int(a) + int(b); }
	double subtract() { return int(a) - int(b); }
	double multiply() { return int(a) * int(b); }
	double divide();
};

double office::divide() {
	if (b == 0) {
		cout << "0으로는 나눌 수 없습니다.";
		return 0;
	}
	return int(a) / int(b);
}

class industrial : public Calculator {
public:
	double add() { return a + b; }
	double subtract() { return a - b; }
	double multiply() { return a * b; }
	double divide();
};

double industrial::divide() {
	if (b == 0) {
		cout << "0으로는 나눌 수 없습니다.";
		return 0;
	}
	return a / b;
}

int main() {
	Calculator* p = new office();
	p->set(2.1, 3.2);
	cout << "num1 = 2.1, num2 = 3.2" << endl;
	cout << "office add : " << p->add() << endl;
	cout << "office subtract : " << p->subtract() << endl;
	cout << "office multiply : " << p->multiply() << endl;
	cout << "office divide : " << p->divide() << endl;
	delete p;

	Calculator* q = new industrial();
	q->set(2.1, 3.2);
	cout << "\nnum1 = 2.1, num2 = 3.2" << endl;
	cout << "industrial add : " << q->add() << endl;
	cout << "industrial subtract : " << q->subtract() << endl;
	cout << "industrial multiply : " << q->multiply() << endl;
	cout << "industrial divide : " << q->divide() << endl;
	delete q;
}