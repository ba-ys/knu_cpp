/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
    int next();
    int nextInRange(int a, int b);
};

int Random::next() {
    int n = rand();
    return n;
}
int Random::nextInRange(int a, int b) {
    int n = rand() % (b - a + 1) + a;
    return n;
}

int main() {
    srand((unsigned)time(0));

    Random r;
    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    return 0;
}*/