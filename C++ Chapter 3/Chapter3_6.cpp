/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
    int next();
    int nextInRange(int a, int b);
};

int EvenRandom::next() {
    int n = 0;
    for(;;){
        n = rand();
        if (n % 2 == 0)
            break;
    }
    return n;
}
int EvenRandom::nextInRange(int a, int b) {
    int n = 0;
    for (;;) {
        n = rand() % (b - a + 1) + a;
        if (n % 2 == 0)
            break;
    }
    return n;
}

int main() {
    srand((unsigned)time(0));

    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    return 0;
}*/