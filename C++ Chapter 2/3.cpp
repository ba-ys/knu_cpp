#include <iostream>
using namespace std;

int main() {
	int a, b, num;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;
	if (a > b)
		num = a;
	else
		num = b;

	cout << "큰 수 = " << num;
	
	return 0;
}