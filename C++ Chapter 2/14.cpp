#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int cnt = 0, price = 0, ben = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n" ;
	for (;;) {
		cout << "�ֹ�>> ";
		cin >> coffee >> cnt;
		if (strcmp(coffee, "����������") == 0) {
			price = cnt * 2000;
			ben += price;
			cout << price << "���Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			price = cnt * 2300;
			ben += price;
			cout << price << "���Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			price = cnt * 2500;
			ben += price;
			cout << price << "���Դϴ�. ���ְ� �弼��\n";
		}
		if (ben >= 20000) {
			cout << "���� " << ben << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}
	return 0;
}