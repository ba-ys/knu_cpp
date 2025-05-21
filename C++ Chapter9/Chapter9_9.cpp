#include <iostream>
using namespace std;

class Print {
public:
    virtual void print(int pages) = 0;
    virtual void show() = 0;
};

class InkJetPrinter : public Print {
protected:
    string model, manufacturer;
    int printedCount, availableCount, availableInk;
public:
    InkJetPrinter(string mo, string ma, int aC, int aI);
    virtual void print(int pages);
    virtual void show();

};

InkJetPrinter::InkJetPrinter(string mo, string ma, int aC, int aI) {
    model = mo;
    manufacturer = ma;
    availableCount = aC;
    availableInk = aI;
}

void InkJetPrinter::print(int pages) {
    printedCount = pages;
    if (availableCount < printedCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    }
    else if (availableInk < printedCount) {
        cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
    }
    else {
        availableCount -= printedCount;
        availableInk -= printedCount;
        cout << "프린트하였습니다." << endl;
    }
}

void InkJetPrinter::show() {
    cout << model << " ," << manufacturer << " ," << "남은 종이 ";
    cout << availableCount << "장" << " ," << "남은 잉크 " << availableInk << endl;
}

class LaserPrinter : public Print {
protected:
    string model, manufacturer;
    int printedCount, availableCount, availableToner;
public:
    LaserPrinter(string mo, string ma, int aC, int aT);
    virtual void print(int pages);
    virtual void show();
};

LaserPrinter::LaserPrinter(string mo, string ma, int aC, int aT) {
    model = mo;
    manufacturer = ma;
    availableCount = aC;
    availableToner = aT;
}

void LaserPrinter::print(int pages) {
    printedCount = pages;
    if (availableCount < printedCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    }
    else if (availableToner < printedCount) {
        cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
    }
    else {
        availableCount -= printedCount;
        availableToner -= 1;
        cout << "프린트하였습니다." << endl;
    }
}

void LaserPrinter::show() {
    cout << model << " ," << manufacturer << " ," << "남은 종이 ";
    cout << availableCount << "장" << " ," << "남은토너 " << availableToner << endl;
}

int main() {
    int select, pages, chk = 0;
    char cont;
    InkJetPrinter p1("Officejet V40", "HP", 5, 10);
    LaserPrinter p2("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 : ";
    p1.show();
    cout << "레이저 : ";
    p2.show();
    
    for (;;) {
        for (;;) {
            cout << "\n프린터(1:잉크넷, 2:레이저)와 매수 입력>>";
            cin >> select >> pages;
            if (select == 1) {
                p1.print(pages);
                p1.show();
                p2.show();
                break;
            }
            else if (select == 2) {
                p2.print(pages);
                p1.show();
                p2.show();
                break;
            }
            else if (select != 1 && select != 2) {
                cout << "잘못된 프린터 번호입니다. 다시 입력해주세요." << endl;
            }
        }

        cout << "계속 프린트 하시겠습니까(y/n)>>";

        for (;;) {
            cin >> cont;
            if (cont == 'y') break;
            else if (cont == 'n') {
                chk = 1;
                break;
            }
            else {
                cout << "y나 n 둘 중 하나로 다시 입력해주세요.>>";
            }
        }
        if (chk == 1) {
            break;
        }
    }
}