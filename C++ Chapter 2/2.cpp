#include <iostream>
using namespace std;

int main() {
	for (int j = 1; j < 10; j++) {
		for (int i = 1; i < 10; i++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << '\n';
	}
	return 0;
}