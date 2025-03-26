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
    cout << "홀수로 할지, 짝수로 할지 각각 선택해주세요.(홀수는 1을, 짝수는 2를 입력하세요.) : ";
    cin >> n1 >> n2;

    if (n1 == 1) {
        w1 = "홀수";
    }
    else if (n1 == 2) {
        w1 = "짝수";
    }
    if (n2 == 1) {
        w2 = "홀수";
    }
    else if (n2 == 2) {
        w2 = "짝수";
    }
    cout << "-- 0에서 " << RAND_MAX << "까지의 "<< w1 <<" 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "9 까지의 "<< w2 <<" 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9);
        cout << n << ' ';
    }
    return 0;
}*/