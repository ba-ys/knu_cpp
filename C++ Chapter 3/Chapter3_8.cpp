/*#include <iostream>
#include <string>
using namespace std;

class Integer {
    int num = 0;
public:
    Integer(int a);
    Integer(string c);
    int get();
    void set(int s);
    int isEven();
};

Integer::Integer(int a) {
    num = a;
}

Integer::Integer(string c) {
    num = stoi(c);
}

int Integer::get() {
    int n = num;
    return n;
}

void Integer::set(int s) {
    num = s;
}

int Integer::isEven() {
    if (num % 2 == 0) {
        return 1;
    }
    else if (num % 1 == 0) {
        return 0;
    }
}

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}*/