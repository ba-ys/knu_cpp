#include <iostream>
#include <vector>
using namespace std;

class Client {
public:
    int number;
    string id;
    string pw;
    string name;
};

class ClientManager {
public:
    vector<Client> clientVector;

    ClientManager() {
        Client c1;
        c1.number = 1;
        c1.id = "user01";
        c1.pw = "password01";
        c1.name = "cherlhee";

        Client c2;
        c2.number = 2;
        c2.id = "user02";
        c2.pw = "password02";
        c2.name = "jcradar";

        Client c3;
        c3.number = 3;
        c3.id = "user03";
        c3.pw = "password03";
        c3.name = "herta";

        clientVector.push_back(c1);
        clientVector.push_back(c2);
        clientVector.push_back(c3);
    }

    void displayClient() {
        for (const auto& c : clientVector) {
            cout << "number: " << c.number << endl;
            cout << "id: " << c.id << endl;
            cout << "pw: " << c.pw << endl;
            cout << "name: " << c.name << endl;
            cout << "-----------------------------" << endl;
        }
    }
};

class Menu {
private:
    ClientManager& manager; // 참조로 받음

public:
    Menu(ClientManager& cm) : manager(cm) {
        cout << "CLIENT MENU" << endl;
        cout << "---------------------------" << endl;
        cout << "1. plz display clients" << endl;
        cout << "2. plz add clients" << endl;
        cout << "3. plz delete clients" << endl;
        cout << "4. plz insert clients" << endl;
        cout << "5. plz exit" << endl;
        cout << "----------------------------" << endl;
    }

    int menu_selection() {
        int selection;
        cout << "plz number of selection (1~5): ";
        cin >> selection;

        switch (selection) {
        case 1:
            manager.displayClient();
            break;
            // TODO: case 2~5 처리
        default:
            break;
        }

        return selection;
    }
};

int main() {
    ClientManager clientManager;
    Menu menu(clientManager);

    while (true) {
        int sel = menu.menu_selection();
        if (sel == 5) {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}