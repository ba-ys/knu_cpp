#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string menu = "«��:1, ¥¯:2, ������:3, ����:4>>  ";
	string m1 = "«�� ", m2 = "¥�� ", m3 = "������ ", Qnum = "���κ�?";
	int a, num = 0;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
		for (;;) {
			cout << menu;
			cin >> a;
			if (a == 1) {
				cout << Qnum;
				cin >> num;
				cout << m1 << num << "�κ� ���Խ��ϴ�\n";
			}
			else if (a == 2) {
				cout << Qnum;
				cin >> num;
				cout << m2 << num << "�κ� ���Խ��ϴ�\n";
			}
			else if (a == 3) {
				cout << Qnum;
				cin >> num;
				cout << m3 << num << "�κ� ���Խ��ϴ�\n";
			}
			else if (a == 4) {
				cout << "���� ������ �������ϴ�.\n";
				break;
			}
			else {
				cout << "�ٽ� �ֹ��ϼ���!!\n";
			}
		}
	return 0;
}