#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int cnt = 0, price = 0, ben = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n" ;
	for (;;) {
		cout << "주문>> ";
		cin >> coffee >> cnt;
		if (strcmp(coffee, "에스프레소") == 0) {
			price = cnt * 2000;
			ben += price;
			cout << price << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			price = cnt * 2300;
			ben += price;
			cout << price << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			price = cnt * 2500;
			ben += price;
			cout << price << "원입니다. 맛있게 드세요\n";
		}
		if (ben >= 20000) {
			cout << "오늘 " << ben << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}
	return 0;
}