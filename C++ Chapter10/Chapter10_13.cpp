#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****" << endl;
    map<string, int> grd;
    string n;
    int choice = 0, g = 0;
    for (;;) {
        cout << "�Է�:1. ��ȸ:2, ����:3 >> ";
        cin >> choice;
        if (choice == 1) {
            cout << "�̸��� ����>> ";
            cin >> n >> g;
            grd.insert(make_pair(n, g));
        }
        if (choice == 2) {
            cout << "�̸�>> ";
            cin >> n;
            if (grd.find(n) == grd.end()) 
                cout << "��ϵ� �̸��� �����ϴ�." << endl;
            else
                cout << n << "�� ������ " << grd[n] << endl;
        }
        if (choice == 3) {
            cout << "���α׷��� �����մϴ�..." << endl;
            break;
        }
        else if (choice != 1 && choice != 2 && choice != 3) {
            cout << "1, 2, 3�߿��� ���ڸ� �ٽ� �Է����ּ���." << endl;
        }
    }
}