#include <iostream>
using namespace std;
int main() {
	char line[80];
	cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
	int no = 1; // ���� ��ȣ
	cout << "���� " << no << " >> ";
	cin.getline(line, 80); // 79�������� ���� ����
	int n = cin.gcount();
	cout << line << " / " << n;
}