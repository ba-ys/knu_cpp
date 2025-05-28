#include <iostream>
using namespace std;

template <class T>
int biggest(T data[], int n) {
	T big = data[0];
	for (int i = 1; i < n; i++) {
		if (data[i] > big) big = data[i];
	}
	return big;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	int y[] = { 2, 5, 113, 53, 41, 35};
	cout << biggest(y, 6) << endl;
	int z[] = { -4, 2, 0 };
	cout << biggest(z, 0) << endl;
}