#include <iostream>
using namespace std;

int main() {
	char pw[100], chck[100];
	int cnt = 0;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin.getline(pw, 100, '\n');
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin.getline(chck, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (pw[i] == chck[i])
			cnt++;
	}
	if (cnt == 100)
		cout << "�����ϴ�.";
	else
		cout << "�ٸ��ϴ�.";

	return 0;
}