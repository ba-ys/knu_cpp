#include <iostream>
using namespace std;
int main() {
	char line[80];
	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	int no = 1; // 라인 번호
	cout << "라인 " << no << " >> ";
	cin.getline(line, 80); // 79개까지의 문자 읽음
	int n = cin.gcount();
	cout << line << " / " << n;
}