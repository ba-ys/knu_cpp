#include <iostream>
using namespace std;

int main() {
	char name[100], long_name[100];
	int len = 0;
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요.\n>>";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << ":" << name << "\n";
		
		if (i == 1) {
			len = strlen(name);
			for (int j = 0; j < 100; j++) {
				long_name[j] = name[j];
			}
		}
		if (i > 1 && strlen(name) > len){
			len = strlen(name);
			for (int j = 0; j < 100; j++) {
				long_name[j] = name[j];
			}
		}
	}
	cout << "가장 긴 이름은 " << long_name;
	return 0;
}