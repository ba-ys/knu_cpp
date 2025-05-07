#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix() { arr[0] = 0; arr[1] = 0; arr[2] = 0; arr[3] = 0; }

	Matrix(int op1, int op2, int op3, int op4) {
		arr[0] = op1;
		arr[1] = op2;
		arr[2] = op3;
		arr[3] = op4;
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << arr[i] << ' ';
		}
		cout << "}" << endl;
	}

	Matrix operator>>(int matrix[4]);
	Matrix operator<<(int matrix[4]);
};

Matrix Matrix::operator>>(int matrix[4]) {
	for (int i = 0; i < 4; i++) {
		matrix[i] = arr[i];
	}
	return *this;
}

Matrix Matrix::operator<<(int matrix[4]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = matrix[i];
	}
	return *this;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}