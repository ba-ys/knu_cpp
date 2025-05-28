#include <iostream>
using namespace std;

template <class T>
T *concat(T a[], int sizea, T b[], int sizeb) {
	T* arr = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		arr[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		arr[i + sizea] = b[i];

	return arr;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	double c[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double d[] = { 6.6, 7.7, 8.8, 9.9, 10.1 };
	char e[] = { 'a', 'b', 'c'};
	char f[] = { 'd', 'e', 'f' };

	int* n1 = concat(a, 5, b, 5);
	for (int i = 0; i < 10; i++) {
		cout << n1[i] << '\t';
	}
	cout << endl;
	delete[] n1;

	double* n2 = concat(c, 5, d, 5);
	for (int i = 0; i < 10; i++) {
		cout << n2[i] << '\t';
	}
	cout << endl;
	delete[] n2;

	char* n3 = concat(e, 3, f, 3);
	for (int i = 0; i < 6; i++) {
		cout << n3[i] << '\t';
	}
	cout << endl;
	delete[] n3;
}