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
}