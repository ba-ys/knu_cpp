#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    string y, n, a;
public:
    Book(string y, string n, string a) {
        this->y = y;
        this->n = n;
        this->a = a;
    }
    string r_a() {
        return a;
    }
    string r_y() {
        return y;
    }
    void show() {
        cout << y << "년도, " << n << ", " << a << endl;
    }
};

int main() {
    string y, n, a, s_a, s_y;
    vector<Book> v;

    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
    for (;;) {
        cout << "년도>>";
        getline(cin, y);
        if (y == "-1") break;
        cout << "책이름>>";
        getline(cin, n);
        cout << "저자>>";
        getline(cin, a);
        v.push_back(Book(y, n, a));
    }
    vector<Book>::iterator it;

    cout << "\n총 입고된 책은 2권입니다." << endl;

    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    getline(cin, s_a);
    int tf1 = 0, tf2 = 0;

    for (it = v.begin(); it != v.end(); it++) {
        if (it->r_a() == s_a) {
            it->show();
            tf1 = 1;
        }  
    }
    if(tf1==0)
        cout << "책을 찾지 못했습니다." << endl;

    cout << "검색하고자 하는 년도를 입력하세요>>";
    getline(cin, s_y);
    for (it = v.begin(); it != v.end(); it++) {
        if (it->r_y() == s_y) {
            it->show();
            tf2 = 2;
        }
        if(tf2==0)
            cout << "책을 찾지 못했습니다." << endl;
    }
}