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

	friend Matrix operator+(Matrix& op1, Matrix& op2);
	friend Matrix& operator+=(Matrix& op1, Matrix& op2);
	friend bool operator==(Matrix op1, Matrix op2);
};

Matrix operator+(Matrix& op1, Matrix& op2) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) {
		tmp.arr[i] = op1.arr[i] + op2.arr[i];
	}
	return tmp;
}

Matrix& operator+=(Matrix& op1, Matrix& op2) {
	for (int i = 0; i < 4; i++) {
		op1.arr[i] += op2.arr[i];
	}
	return op1;
}

bool operator==(Matrix op1, Matrix op2) {
	for (int i = 0; i < 4; i++) {
		if (op1.arr[i] == op2.arr[i])
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