#include <iostream>
using namespace std;

void showWidth() {
	string s1, s2;
	cout << "주민번호 앞부분을 입력>> ";
	cin >> s1;
	cout << "주민번호 뒷부분을 입력>> ";
	cin >> s2;
	cout.width(6);
	if (s1.length() > 6) {
		s1 = s1.substr(0, 6);
	}
	cout << s1;
	cout << "-";
	cout.width(7);
	if (s2.length() > 7) {
		s2 = s2.substr(0, 7);
	}
	cout << s2 << endl;
}int main() {
	showWidth();
	cout << endl;}