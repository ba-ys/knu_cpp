#include <iostream>
using namespace std;

int main() {
	char pw[100], chck[100];
	int cnt = 0;
	cout << "새 암호를 입력하세요>>";
	cin.getline(pw, 100, '\n');
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin.getline(chck, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (pw[i] == chck[i])
			cnt++;
	}
	if (cnt == 100)
		cout << "같습니다.";
	else
		cout << "다릅니다.";

	return 0;
}