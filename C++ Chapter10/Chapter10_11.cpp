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
        cout << y << "�⵵, " << n << ", " << a << endl;
    }
};

int main() {
    string y, n, a, s_a, s_y;
    vector<Book> v;

    cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
    for (;;) {
        cout << "�⵵>>";
        getline(cin, y);
        if (y == "-1") break;
        cout << "å�̸�>>";
        getline(cin, n);
        cout << "����>>";
        getline(cin, a);
        v.push_back(Book(y, n, a));
    }
    vector<Book>::iterator it;

    cout << "\n�� �԰�� å�� 2���Դϴ�." << endl;

    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
    getline(cin, s_a);
    int tf1 = 0, tf2 = 0;

    for (it = v.begin(); it != v.end(); it++) {
        if (it->r_a() == s_a) {
            it->show();
            tf1 = 1;
        }  
    }
    if(tf1==0)
        cout << "å�� ã�� ���߽��ϴ�." << endl;

    cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
    getline(cin, s_y);
    for (it = v.begin(); it != v.end(); it++) {
        if (it->r_y() == s_y) {
            it->show();
            tf2 = 2;
        }
        if(tf2==0)
            cout << "å�� ã�� ���߽��ϴ�." << endl;
    }
}