#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
	T sum = a + b;
	return sum;
}

int main() {
	int a = 3, b = 7;
	double c = 3.3, d = 7.1;
	cout << "a + b = " << add(a, b) << endl;
	cout << "c + d = " << add(c, d) << endl;
}