#include <iostream>
using namespace std;

int main() {
	char name[100], adress[100], age[100];
	cout << "이름은?";
	cin.getline(name, 100, '\n');
	cout << "주소는?";
	cin.getline(adress, 100, '\n');
	cout << "나이는?";
	cin.getline(age, 100, '\n');
	cout << name << ", " << adress << ", " << age << "세";
	return 0;
}