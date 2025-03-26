#include <iostream>
using namespace std;

class Add {
    int a = 0, b = 0;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub {
    int a = 0, b = 0;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul {
    int a = 0, b = 0;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div {
    int a = 0, b = 0;
public:
    void setValue(int x, int y);
    int calculate();
};

void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

int Add::calculate() {
    return a + b;
}

void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

int Sub::calculate() {
    return a - b;
}

void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}

int Mul::calculate() {
    return a * b;
}

void Div::setValue(int x, int y) {
    a = x;
    b = y;
}

int Div::calculate() {
    return a / b;
}

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    int x = 0, y = 0;
    char c = 0;
    for (int i = 0; i < 3; i++) {
        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> x >> y >> c;
        if (c == '+') {
            a.setValue(x, y);
            cout << a.calculate() << endl;
        }
        else if (c == '-') {
            s.setValue(x, y);
            cout << s.calculate() << endl;
        }
        else if (c == '*') {
            m.setValue(x, y);
            cout << m.calculate() << endl;
        }
        else if (c == '/') {
            d.setValue(x, y);
            cout << d.calculate() << endl;
        }
    } 
}