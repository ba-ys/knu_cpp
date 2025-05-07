#include <iostream>
using namespace std;

class Statistics {
    int* n1; 
    int size;  

public:
    Statistics() {
        n1 = 0; 
        size = 0;
    }

    bool operator!();
    Statistics& operator<<(int op1);
    Statistics& operator>>(int& avg);
    void operator~();
};

bool Statistics::operator!() {
    if (size == 0) return true;
    else return false;
}

Statistics& Statistics::operator<<(int op1) {
    int* n2 = new int[size + 1];
    for (int i = 0; i < size; i++) {
        n2[i] = n1[i];
    }
    n2[size] = op1;
    delete[] n1;
    n1 = n2;
    size++;

    return *this;
}

Statistics& Statistics::operator>>(int& avg) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += n1[i];
    }
    avg = sum / size;

    return *this;
}

void Statistics::operator~() {
    for (int i = 0; i < size; i++) {
        cout << n1[i] << " ";
    }
    cout << endl;
}

int main() {
    Statistics stat;
    if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5개의 정수를 입력하라>>";
    for (int i = 0; i < 5; i++) cin >> x[i];

    for (int i = 0; i < 5; i++) stat << x[i];
    stat << 100 << 200;
    ~stat;

    int avg;
    stat >> avg;
    cout << "avg=" << avg << endl;
}