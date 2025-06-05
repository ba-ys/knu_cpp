#include <iostream>
#include <vector>
using namespace std;

class Client {
public:
	int number;
	string id;
	string pw;
	string name;
	string email;
};

class Menu {
public:
	Menu() {
		cout << "CLIENT MENU" << endl;
		cout << "---------------------------" << endl;
		cout << "1. plz display clients" << endl;
		cout << "2. plz add clients" << endl;
		cout << "3. plz delete clients" << endl;
		cout << "4. plz insert clients" << endl;
		cout << "5. plz save to csv" << endl;
		cout << "6. plz exit" << endl;
		cout << "----------------------------" << endl;


	}

	int menu_selection() {
		int menu_selection;
		cout << "plz number of selection (1~5): ";
		cin >> menu_selection;

		return menu_selection;


	}
};

class Clientmanager {
public:

};

int main() {

	Menu menus;
	menus.menu_selection();

	return 0;

}