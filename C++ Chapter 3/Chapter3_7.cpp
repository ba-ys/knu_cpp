/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n1, n2 =0;

class SelectableRandom {
    
public:
    int next();
    int nextInRange(int a, int b);
};

int SelectableRandom::next() {
    int n = 0;
    if (n1 == 1) {
        for (;;) {
            n = rand();
            if (n % 2 == 1)
                break;
        }
    }
    if (n1 == 2) {
        for (;;) {
            n = rand();
            if (n % 2 == 0)
                break;
        }
    }
    return n;
}
int SelectableRandom::nextInRange(int a, int b) {
    int n = 0;
    if (n2 == 1) {
        for (;;) {
            n = rand() % (b - a + 1) + a;
            if (n % 2 == 1)
                break;
        }
    }
    if (n2 == 2) {
        for (;;) {
            n = rand() % (b - a + 1) + a;
            if (n % 2 == 0)
                break;
        }
    }
    return n;
}

int main() {
    srand((unsigned)time(0));

    string w1, w2;
    SelectableRandom r;
    cout << "Ȧ���� ����, ¦���� ���� ���� �������ּ���.(Ȧ���� 1��, ¦���� 2�� �Է��ϼ���.) : ";
    cin >> n1 >> n2;

    if (n1 == 1) {
        w1 = "Ȧ��";
    }
    else if (n1 == 2) {
        w1 = "¦��";
    }
    if (n2 == 1) {
        w2 = "Ȧ��";
    }
    else if (n2 == 2) {
        w2 = "¦��";
    }
    cout << "-- 0���� " << RAND_MAX << "������ "<< w1 <<" ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2���� " << "9 ������ "<< w2 <<" ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9);
        cout << n << ' ';
    }
    return 0;
}*/