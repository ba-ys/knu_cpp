#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
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

        clientVector.push_back(c1);
        clientVector.push_back(c2);
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

    void read4csv() {
        cout << "welcome to read4csv" << endl;

        ifstream inFile("client.csv");
        string line;

        //to clear vecotr;
        clientVector.clear();

        bool isFirstline = true;
        //to read a csv file;
        while (getline(inFile, line)) {
            if (isFirstline) {
                isFirstline = false;
                continue;
            }

            stringstream ss(line);
            string numstr, id, pw, name;

            getline(ss, numstr, ',');
            getline(ss, id, ',');
            getline(ss, pw, ',');
            getline(ss, name, ',');

            Client c;
            c.number = stoi(numstr);
            c.id = id;
            c.pw = pw;
            c.name = name;

            clientVector.push_back(c);
        }

        inFile.close();

        Client c5;
        c5.number = 5;
        c5.id = "user05";
        c5.pw = "password05";
        c5.name = "ai";

        clientVector.push_back(c5);

    }

}; //end of clientManager;





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
        cout << "6. plz read from csv file" << endl;
        cout << "7. plz exit" << endl;
        cout << "----------------------------" << endl;
    }

    int menu_selection() {
        int selection;
        cout << "plz number of selection (1~7): ";
        cin >> selection;

        switch (selection) {
        case 1:
            manager.displayClient();
            break;

        case 5:
            manager.save2csv();
            break;

        case 6:
            manager.read4csv();
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
        if (sel == 7) {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}