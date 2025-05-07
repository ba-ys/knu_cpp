#include <iostream>
using namespace std;

class Stack {
    int arr[100]; 
    int size; 
public:
    Stack() {
        arr[100] = { 0 };
        size = 0;
    }

    Stack& operator<<(int op2) {
        if (size < 100) {
            arr[size] = op2; 
            size++; 
        }
        else {
            cout << "������ ���� á���ϴ�." << endl;
        }
        return *this;
    }

    Stack& operator>>(int& op2) {
        if (size > 0) {
            size--; 
            op2 = arr[size];
        }
        else {
            cout << "������ ��� �ֽ��ϴ�." << endl;
            op2 = -1; 
        }
        return *this; 
    }

    bool operator!() const {
        return size == 0;
    }
};

int main() {
    Stack stack;
    stack << 3 << 5 << 10;
    while (true) {
        if (!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}