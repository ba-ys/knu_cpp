#include <iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	string e = "hello", f = "kitty";
	myswap(e, f);
	cout << "e = " << e << ", " << "f = " << f << endl;
}