#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char n[100];
	for (;;) {	
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(n, 100);

		if(strcmp(n,"yes") == 0){
			cout << "�����մϴ�...";
			break;
		}
	}
	return 0;
}