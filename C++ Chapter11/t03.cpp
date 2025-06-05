#include <iostream>
#include <vector>
#include <fstream>
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
        c3.id = "Honkai star rail";
        c3.pw = "Genius";
        c3.name = "The herta";

        Client c4;
        c4.number = 4;
        c4.id = "C4";
        c4.pw = "kwaaa";
        c4.name = "Bomb";

        clientVector.push_back(c1);
        clientVector.push_back(c2);
        clientVector.push_back(c3);
        clientVector.push_back(c4);
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

    void save2csv() {
        ofstream outfile("client.csv");


        //to write header column;
        outfile << "number, id, pw, name\n";


        for (const auto& row : clientVector) {
            outfile << row.number << "," << row.id << "," << row.pw << "," << row.name << "\n";
        }
        outfile.close();
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
        cout << "5. plz save to csv file" << endl;
        cout << "6. plz exit" << endl;
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

        case 5:
            manager.save2csv();
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
        if (sel == 6) {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}