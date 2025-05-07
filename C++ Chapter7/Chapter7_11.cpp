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
            cout << "스택이 가득 찼습니다." << endl;
        }
        return *this;
    }

    Stack& operator>>(int& op2) {
        if (size > 0) {
            size--; 
            op2 = arr[size];
        }
        else {
            cout << "스택이 비어 있습니다." << endl;
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