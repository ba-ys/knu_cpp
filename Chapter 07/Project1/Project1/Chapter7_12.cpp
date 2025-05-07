#include <iostream>
using namespace std;

class SortedArray {
    int size;
    int* p;
    void sort();
public:
    SortedArray();
    SortedArray(SortedArray& src);
    SortedArray(int p[], int size);
    ~SortedArray();
    SortedArray operator + (SortedArray& op2);
    SortedArray& operator = (const SortedArray& op2);
    void show();
};

SortedArray::SortedArray() {
    size = 0;
    p = NULL;
}

SortedArray::SortedArray(SortedArray& src) {
    size = src.size;
    if (size == 0) {
        p = NULL;
        return;
    }
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = src.p[i];
    }
}

SortedArray::SortedArray(int arr[], int s) {
    size = s;
    if (size == 0) {
        p = NULL;
        return;
    }
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = arr[i];
    }
    sort();
}

SortedArray::~SortedArray() {
    if (p != NULL) {
        delete[] p;
    }
}

void SortedArray::sort() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (p[j] > p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

SortedArray SortedArray::operator + (SortedArray& op2) {
    int newSize = size + op2.size;
    int* newArray = new int[newSize];
    for (int i = 0; i < size; i++) {
        newArray[i] = p[i];
    }
    for (int j = 0; j < op2.size; j++) {
        newArray[size + j] = op2.p[j];
    }
    SortedArray result(newArray, newSize);
    delete[] newArray;

    return result;
}

SortedArray& SortedArray::operator = (const SortedArray& op2) {
    if (this == &op2) {
        return *this;
    }
    if (p != NULL) {
        delete[] p;
    }
    size = op2.size;
    if (size == 0) {
        p = NULL;
        return *this;
    }
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = op2.p[i];
    }

    return *this;
}

void SortedArray::show() {
    cout << "배열 출력 : ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };

    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    a.show();
    b.show();
    c.show();
}