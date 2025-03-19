#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string menu = "짬뽕:1, 짜짱:2, 군만두:3, 종료:4>>  ";
	string m1 = "짬뽕 ", m2 = "짜장 ", m3 = "군만두 ", Qnum = "몇인분?";
	int a, num = 0;
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
		for (;;) {
			cout << menu;
			cin >> a;
			if (a == 1) {
				cout << Qnum;
				cin >> num;
				cout << m1 << num << "인분 나왔습니다\n";
			}
			else if (a == 2) {
				cout << Qnum;
				cin >> num;
				cout << m2 << num << "인분 나왔습니다\n";
			}
			else if (a == 3) {
				cout << Qnum;
				cin >> num;
				cout << m3 << num << "인분 나왔습니다\n";
			}
			else if (a == 4) {
				cout << "오늘 영업은 끝났습니다.\n";
				break;
			}
			else {
				cout << "다시 주문하세요!!\n";
			}
		}
	return 0;
}