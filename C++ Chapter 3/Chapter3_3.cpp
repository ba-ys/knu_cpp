/*#include <iostream>
#include <string>
using namespace std;

class Account {
	string A_owner;
	int A_num, A_money;
public:
	Account(string o, int n, int m);
	int despoit(int a);
	string getOwner();
	int withdraw(int a);
	int inquiry();
};

Account::Account(string o, int n, int m) {
	A_owner = o;
	A_num = n;
	A_money = m;
}

string Account::getOwner() {
	return A_owner;
}

int Account::despoit(int a) {
	A_money += a;
	return 0;
}

int Account::withdraw(int a) {
	A_money -= a;
	return 0;
}

int Account::inquiry() {
	return A_money;
}

int main() {
	Account a("kitae", 1, 5000);
	a.despoit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}*/