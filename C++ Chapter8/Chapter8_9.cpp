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
            cout << "잘못된 좌석 번호입니다. 1~8 사이로 입력하세요." << endl;
            return;
        }

        if (seats[seatNum - 1].reserved == true) {
            cout << "이미 예약된 좌석입니다." << endl;
            return;
        }

        seats[seatNum - 1].Reserve(personName);
    }

    void CancelSeat(int seatNum, string personName) {
        if (seatNum < 1 || seatNum > 8) {
            cout << "잘못된 좌석 번호입니다. 1~8 사이로 입력하세요." << endl;
            return;
        }

        if (seats[seatNum - 1].reserved == false) {
            cout << "예약되지 않은 좌석입니다." << endl;
            return;
        }

        if (seats[seatNum - 1].name != personName) {
            cout << "예약자 이름이 일치하지 않습니다." << endl;
            return;
        }

        seats[seatNum - 1].Cancel();
    }

    void ShowSeats() {
        cout << time << "시: ";
        for (int i = 0; i < 8; i++) {
            cout << "\t" << seats[i].GetName();
        }
        cout << endl;
    }

    void ShowSeatsWithNumber() {
        cout << time << "시: ";
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
        cout << "07시:1, 12시:2, 17시:3>> ";
        cin >> time;

        if (time < 1 || time > 3) {
            cout << "잘못된 시간입니다." << endl;
            return;
        }
        planes[time - 1]->ShowSeatsWithNumber();

        int seatNum;
        string name;
        cout << "좌석 번호>> ";
        cin >> seatNum;
        cout << "이름 입력>> ";
        cin >> name;
        planes[time - 1]->ReserveSeat(seatNum, name);
    }
    void Cancel() {
        int time;
        cout << "07시:1, 12시:2, 17시:3>> ";
        cin >> time;

        if (time < 1 || time > 3) {
            cout << "잘못된 시간입니다." << endl;
            return;
        }
        planes[time - 1]->ShowSeatsWithNumber();

        int seatNum;
        string name;
        cout << "좌석 번호>> ";
        cin >> seatNum;
        cout << "이름 입력>> ";
        cin >> name;
        planes[time - 1]->CancelSeat(seatNum, name);
    }
    void Show() {
        for (int i = 0; i < 3; i++) {
            planes[i]->ShowSeats();
        }
    }
    void Run() {
        cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;

        int choice;
        int n = 0;
        while (true) {
            if (n != 0) cout << endl;
            cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
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
                cout << "예약 시스템을 종료합니다." << endl;
                break; 
            }
            else {
                cout << "잘못된 메뉴 번호입니다." << endl;
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