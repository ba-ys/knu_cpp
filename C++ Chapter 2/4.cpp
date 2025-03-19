#include <iostream>
using namespace std;

int main() {
	double n[6], ans;
	cout << "5 개의 실수를 입력하라>>";
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
	for (int i = 0; i < 4; i++) {
		if (n[i] > n[i + 1])
			ans = n[i];
		else
			ans = n[i + 1];
	}

	cout << "제일 큰 수 = " << ans;

	return 0;
}