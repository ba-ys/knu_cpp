#include <iostream>
using namespace std;

int main() {
	char str[100];
	int cnt = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(str, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x')
			cnt++;
	}

	cout << "x�� ������ " << cnt;

	return 0;
}