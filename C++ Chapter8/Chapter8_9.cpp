#include <iostream>
#include <string>
using namespace std;

class Seat {
public:
    string name; 
    bool reserved; 

public:
    Seat() {
        name = "---"; 
        reserved = false; 
    }

    void Reserve(string personName) {
        name = personName;
        reserved = true;
    }

    void Cancel() {
        name = "---"; 
        reserved = false;
    }

    string GetName() {
        return name;
    }

    bool IsReserved() {
        return reserved;
    }
};

class Airplane {
private:
    Seat seats[8];
    string time; 

public:
    Airplane(string flightTime) {
        time = flightTime;
        for (int i = 0; i < 8; i++) {
            seats[i].name = "---";
            seats[i].reserved = false;
        }
    }

    void ReserveSeat(int seatNum, string personName) {
        if (seatNum < 1 || seatNum > 8) { 
            cout << "�߸��� �¼� ��ȣ�Դϴ�. 1~8 ���̷� �Է��ϼ���." << endl;
            return;
        }

        if (seats[seatNum - 1].reserved == true) {
            cout << "�̹� ����� �¼��Դϴ�." << endl;
            return;
        }

        seats[seatNum - 1].Reserve(personName);
    }

    void CancelSeat(int seatNum, string personName) {
        if (seatNum < 1 || seatNum > 8) {
            cout << "�߸��� �¼� ��ȣ�Դϴ�. 1~8 ���̷� �Է��ϼ���." << endl;
            return;
        }

        if (seats[seatNum - 1].reserved == false) {
            cout << "������� ���� �¼��Դϴ�." << endl;
            return;
        }

        if (seats[seatNum - 1].name != personName) {
            cout << "������ �̸��� ��ġ���� �ʽ��ϴ�." << endl;
            return;
        }

        seats[seatNum - 1].Cancel();
    }

    void ShowSeats() {
        cout << time << "��: ";
        for (int i = 0; i < 8; i++) {
            cout << "\t" << seats[i].GetName();
        }
        cout << endl;
    }

    void ShowSeatsWithNumber() {
        cout << time << "��: ";
        for (int i = 0; i < 8; i++) {
            cout << "\t" << seats[i].GetName();
        }
        cout << endl;
    }
};

class HansungAir {
public: 
    Airplane* planes[3]; 

public:
    HansungAir() {
        planes[0] = new Airplane("07"); 
        planes[1] = new Airplane("12"); 
        planes[2] = new Airplane("17"); 
    }
    ~HansungAir() {
    }
    void Reserve() {
        int time;
        cout << "07��:1, 12��:2, 17��:3>> ";
        cin >> time;

        if (time < 1 || time > 3) {
            cout << "�߸��� �ð��Դϴ�." << endl;
            return;
        }
        planes[time - 1]->ShowSeatsWithNumber();

        int seatNum;
        string name;
        cout << "�¼� ��ȣ>> ";
        cin >> seatNum;
        cout << "�̸� �Է�>> ";
        cin >> name;
        planes[time - 1]->ReserveSeat(seatNum, name);
    }
    void Cancel() {
        int time;
        cout << "07��:1, 12��:2, 17��:3>> ";
        cin >> time;

        if (time < 1 || time > 3) {
            cout << "�߸��� �ð��Դϴ�." << endl;
            return;
        }
        planes[time - 1]->ShowSeatsWithNumber();

        int seatNum;
        string name;
        cout << "�¼� ��ȣ>> ";
        cin >> seatNum;
        cout << "�̸� �Է�>> ";
        cin >> name;
        planes[time - 1]->CancelSeat(seatNum, name);
    }
    void Show() {
        for (int i = 0; i < 3; i++) {
            planes[i]->ShowSeats();
        }
    }
    void Run() {
        cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****" << endl;

        int choice;
        int n = 0;
        while (true) {
            if (n != 0) cout << endl;
            cout << "����:1, ���:2, ����:3, ������:4>> ";
            cin >> choice;
            if (choice == 1) {
                Reserve();
            }
            else if (choice == 2) {
                Cancel();
            }
            else if (choice == 3) {
                Show();
            }
            else if (choice == 4) {
                cout << "���� �ý����� �����մϴ�." << endl;
                break; 
            }
            else {
                cout << "�߸��� �޴� ��ȣ�Դϴ�." << endl;
            }
            n = 1;
        }
    }
};

int main() {
    int i;
    string str;
    HansungAir hansungAir;
    i = 0;
    str = "";
    hansungAir.Run();
    return 0;
}