#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char n[100];
	for (;;) {	
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(n, 100);

		if(strcmp(n,"yes") == 0){
			cout << "종료합니다...";
			break;
		}
	}
	return 0;
}