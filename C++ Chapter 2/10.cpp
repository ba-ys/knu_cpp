#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char n[100], a[100] = {};
	cout << "문자열입력>>";
	cin.getline(n, 100, '\n');
	for (int i = 0; i < strlen(n); i++) {
		a[i] = n[i];
		cout << a << "\n";
	}
	return 0;
}