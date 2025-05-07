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

	Matrix operator+(Matrix matrix);
	Matrix& operator+=(Matrix matrix);
	bool operator==(Matrix matrix);
};

Matrix Matrix::operator+(Matrix matrix) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) {
		tmp.arr[i] = arr[i] + matrix.arr[i];
	}
	return tmp;
}

Matrix& Matrix::operator+=(Matrix matrix) {
	for (int i = 0; i < 4; i++){
		arr[i] += matrix.arr[i];
	}
	return *this;
}

bool Matrix::operator==(Matrix matrix) {
	for (int i = 0; i < 4; i++) {
		if (arr[i] == matrix.arr[i])
			return true;
	}
	return false;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); 	b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}