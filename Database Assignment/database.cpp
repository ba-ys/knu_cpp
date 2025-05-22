#include <iostream>
using namespace std;

class Client {
public:
	string name;
	char level;
	string address;
	int phone;
	int sex;
	int birthday;

};

class Clientmanager : public Client {
public:
	Client* clientlist[1024];
	int ClientIndex = 0;
	//Clientmanager(string n, char l, string a, int p, int s, int b);
	Clientmanager();
	void show();
	void addClient(Client* guest);

};
/*Clientmanager::Clientmanager(string n, char l, string a, int p, int s, int b) {
	name = n;
	level = l;
	address = a;
	phone = p;
	sex = s;
	birthday = b;
}*/
Clientmanager::Clientmanager() {}

void Clientmanager::show() {
	for (int i = 0; i < ClientIndex; i++) {
		cout << "client : " << i << endl;
		cout << clientlist[i]->name << endl;
		cout << clientlist[i]->level << endl;
		cout << clientlist[i]->address << endl;
		cout << clientlist[i]->phone << endl;
		cout << clientlist[i]->sex << endl;
		cout << clientlist[i]->birthday << endl;
	}
}

void Clientmanager::addClient(Client* guest) {
	clientlist[ClientIndex++] = guest;
	cout << "to add clients" << endl;

}

int main() {
	Clientmanager cmanager;
	cmanager.addClient(new Client("cherlhee", 'a', "서울", 01011112222, 0, 0101));
	cmanager.addClient(new Client("cherlhee", 'b', "부산", 01011112222, 0, 0101));
	cmanager.addClient(new Client("cherlhee", 'c', "대구", 01011112222, 0, 0101));



	return 0;
}