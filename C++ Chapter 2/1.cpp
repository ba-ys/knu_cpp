#include <iostream>
using namespace std;

int main() {
	for (int j = 0; j < 10; j++) {
		for (int i = 1; i <= 10; i++) {
			if (j == 0)
				cout << i << "   ";
			else
			cout << j*10 + i << "  ";
		}
		cout << '\n';
	}
	return 0;
}