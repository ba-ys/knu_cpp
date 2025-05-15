#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
	int a;
	int b;

public:
	Calculator();

	int add(int a, int b);
	int minus(int a, int b);
	int multiply(int a, int b);
	float divide(int a, int b);

};

Calculator::Calculator() {
	a = 0;
	b = 0;
}

int Calculator::add(int a, int b) {
	int result;
	result = a + b;
	cout << "add; " << result << endl;

	return result;
}

int Calculator::minus(int a, int b) {
	int result;

	result = a - b;
	cout << "minus; " << result << endl;

	return result;
}

int Calculator::multiply(int a, int b) {
	int result;

	result = a * b;
	cout << "multiply; " << result << endl;

	return result;
}

float Calculator::divide(int a, int b) {
	float result;

	result = float(a) / float(b);
	cout << "divide; " << result << endl;

	return result;
}

class upgareded_Calculator : public Calculator {
public:
	int exponential(int a, int b);
	double log_(int a, int b);
};

int upgareded_Calculator::exponential(int a, int b) {
	int result;
	result = pow(a,b);
	cout << "exponential; " << result << endl;

	return result;
}

double upgareded_Calculator::log_(int a, int b) {
	double result;
	if (a <= 0 || a == 1 || b <= 0) {
		cerr << "변수가 로그의 조건에 부합하지 않습니다." << endl;
		return NAN;
	}
	result = log(b) / log(a);
	cout << "log; " << result << endl;

	return result;
}

int main() {

	Calculator cal;
	upgareded_Calculator cal2;

	cal.add(3, 4);
	cal.minus(3, 4);
	cal.multiply(3, 4);
	cal.divide(3, 4);
	cal2.exponential(3, 4);
	cal2.log_(3, 4);

	return 0;
}