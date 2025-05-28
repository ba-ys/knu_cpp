#include <iostream>
using namespace std;

template <class T>
void reverseArray(T data[], int n) {
	T tmp;
	for (int i = 0; i < n / 2; i++) {
		tmp = data[i];
		data[i] = data[n - 1 - i];
		data[n - 1 - i] = tmp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}