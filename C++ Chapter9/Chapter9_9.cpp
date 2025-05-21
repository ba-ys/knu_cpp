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
        cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else if (availableInk < printedCount) {
        cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else {
        availableCount -= printedCount;
        availableInk -= printedCount;
        cout << "����Ʈ�Ͽ����ϴ�." << endl;
    }
}

void InkJetPrinter::show() {
    cout << model << " ," << manufacturer << " ," << "���� ���� ";
    cout << availableCount << "��" << " ," << "���� ��ũ " << availableInk << endl;
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
        cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else if (availableToner < printedCount) {
        cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else {
        availableCount -= printedCount;
        availableToner -= 1;
        cout << "����Ʈ�Ͽ����ϴ�." << endl;
    }
}

void LaserPrinter::show() {
    cout << model << " ," << manufacturer << " ," << "���� ���� ";
    cout << availableCount << "��" << " ," << "������� " << availableToner << endl;
}

int main() {
    int select, pages, chk = 0;
    char cont;
    InkJetPrinter p1("Officejet V40", "HP", 5, 10);
    LaserPrinter p2("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
    cout << "��ũ�� : ";
    p1.show();
    cout << "������ : ";
    p2.show();
    
    for (;;) {
        for (;;) {
            cout << "\n������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
                cout << "�߸��� ������ ��ȣ�Դϴ�. �ٽ� �Է����ּ���." << endl;
            }
        }

        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";

        for (;;) {
            cin >> cont;
            if (cont == 'y') break;
            else if (cont == 'n') {
                chk = 1;
                break;
            }
            else {
                cout << "y�� n �� �� �ϳ��� �ٽ� �Է����ּ���.>>";
            }
        }
        if (chk == 1) {
            break;
        }
    }
}