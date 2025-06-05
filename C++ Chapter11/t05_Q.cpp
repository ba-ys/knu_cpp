#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

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
    unordered_set<string> usedIds;
    unordered_set<string> usedNames;

    ClientManager() {
        Client c1 = { 1, "user01", "password01", "cherlhee" };
        Client c2 = { 2, "user02", "password02", "jcradar" };

        clientVector.push_back(c1);
        clientVector.push_back(c2);

        usedIds.insert(c1.id);
        usedIds.insert(c2.id);
        usedNames.insert(c1.name);
        usedNames.insert(c2.name);
    }

    string generateUniqueId() {
        string newId;
        do {
            newId = "user" + to_string(rand() % 1000);
        } while (usedIds.find(newId) != usedIds.end()); // 중복 체크
        usedIds.insert(newId); // 생성된 ID 저장
        return newId;
    }

    string generateUniqueName() {
        string newName;
        do {
            newName = "client" + to_string(rand() % 1000);
        } while (usedNames.find(newName) != usedNames.end()); // 중복 체크
        usedNames.insert(newName); // 생성된 이름 저장
        return newName;
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

    void addRandomClients() {
        srand(time(0));  // 랜덤 시드 초기화

        for (int i = 0; i < 10; ++i) {
            Client tempClient;
            tempClient.number = clientVector.size() + 1;
            tempClient.id = generateUniqueId();
            tempClient.pw = "password" + to_string(rand() % 1000);
            tempClient.name = generateUniqueName();

            clientVector.push_back(tempClient);
        }

        cout << " 10명의 랜덤 고객을 추가했습니다" << endl;
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
            getline(ss, name);

            Client c;
            c.number = stoi(numstr);
            c.id = id;
            c.pw = pw;
            c.name = name;

            clientVector.push_back(c);
        }

        inFile.close();
    }

    void addClient() {

        Client tempclient;
        string number;
        int c = 0;

        while (c == 0)
        {
            cout << "plz input number : ";
            getline(cin, number);
            try {
                tempclient.number = stoi(number);
                cout << tempclient.number;
                c = 1;
            }
            catch (const exception& e) {
                cerr << "invalid number input.\n";
                //return;
            }
        }


        cout << "plz, input id : ";
        getline(cin, tempclient.id);

        cout << "plz, input pw : ";
        getline(cin, tempclient.pw);

        cout << "plz, input name : ";
        getline(cin, tempclient.name);

        clientVector.push_back(tempclient);
    }
};

// 메뉴 클래스 (변경 X)
class Menu {
private:
    ClientManager& manager;

public:
    Menu(ClientManager& cm) : manager(cm) {
        cout << "CLIENT MENU" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Display clients" << endl;
        cout << "2. Add clients" << endl;
        cout << "3. Add random clients" << endl;
        cout << "4. Save to CSV" << endl;
        cout << "5. Read from CSV" << endl;
        cout << "6. Exit" << endl;
        cout << "---------------------------" << endl;
    }

    int menu_selection() {
        int selection;
        cout << "Select an option (1~6): ";
        cin >> selection;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 입력 버퍼 정리

        switch (selection) {
        case 1:
            manager.displayClient();
            break;
        case 2:
            manager.addClient();
            break;
        case 3:
            manager.addRandomClients();
            break;
        case 4:
            manager.save2csv();
            break;
        case 5:
            manager.read4csv();
            break;
        case 6:
            cout << "종료합니다..." << endl;
            return 6;
        default:
            cout << " Invalid selection" << endl;
        }
        return selection;
    }
};

int main() {
    ClientManager clientManager;
    Menu menu(clientManager);

    while (true) {
        int sel = menu.menu_selection();
        if (sel == 6) break;
    }

    return 0;
}