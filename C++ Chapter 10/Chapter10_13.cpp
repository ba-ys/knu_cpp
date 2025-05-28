#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
    map<string, int> grd;
    string n;
    int choice = 0, g = 0;
    for (;;) {
        cout << "입력:1. 조회:2, 종료:3 >> ";
        cin >> choice;
        if (choice == 1) {
            cout << "이름과 점수>> ";
            cin >> n >> g;
            grd.insert(make_pair(n, g));
        }
        if (choice == 2) {
            cout << "이름>> ";
            cin >> n;
            if (grd.find(n) == grd.end()) 
                cout << "등록된 이름이 없습니다." << endl;
            else
                cout << n << "의 점수는 " << grd[n] << endl;
        }
        if (choice == 3) {
            cout << "프로그램을 종료합니다..." << endl;
            break;
        }
        else if (choice != 1 && choice != 2 && choice != 3) {
            cout << "1, 2, 3중에서 숫자를 다시 입력해주세요." << endl;
        }
    }
}