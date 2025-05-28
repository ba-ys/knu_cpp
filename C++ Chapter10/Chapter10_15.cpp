#include <iostream>
#include <vector>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius, string name) {
        this->radius = radius; this->name = name;
    }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return name; }
};

int main() {
    vector<Circle*> v;
    vector<Circle*>::iterator it;
    int choice = 0, r = 0;
    string n;
    cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
    for (;;) {
        cout << "����:1. ����:2, ��κ���:3. ����:4 >> ";
        cin >> choice;
        if (choice == 1) {
            cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
            cin >> r >> n;
            v.push_back(new Circle(r, n));
        }
        if (choice == 2) {
            cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
            cin >> n;
            for (auto it = v.begin(); it != v.end(); it++) {
                if ((*it)->getName() == n)
                    delete* it;
                    it = v.erase(it);
            }
        }
        if (choice == 3) {
            for (auto it = v.begin(); it != v.end(); it++)
                cout << (*it)->getName() << endl;
            cout << endl;
        }
        if (choice == 4) {
            for (auto it = v.begin(); it != v.end(); it++) {
                delete* it;
            }
            v.clear();
            break;
        }
        else if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            cout << "1, 2, 3, 4�߿��� ���ڸ� �ٽ� �Է����ּ���." << endl;
        }
    }
}