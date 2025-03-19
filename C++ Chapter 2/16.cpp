#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "영문 텍스트를 입력하세요. 히스토그램을그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    char buf[10000];
    int total_cnt = 0, pri_cnt = 0;
    cin.getline(buf, 10000, ';');

    for (int l = 0; l < int(strlen(buf)); l++) {
        if (isalpha(buf[l]) == 1 || isalpha(buf[l]) == 2) {
            total_cnt++;
        }
    }
    cout << "총 알파벳 수 " << total_cnt << "\n\n";

    for (int j = 0; j < 26; j++) {
        for (int i = 0; i < 10000; i++) {
            if (int(tolower(buf[i])) == (97 + j)) {
                pri_cnt++;
            }        
        }
        cout << char(97 + j) << " (" << pri_cnt << ")\t: ";
        for (int k = 0; k < pri_cnt; k++) {
            cout << '*';
        }
            cout << '\n';
            pri_cnt = 0;
    }
    return 0;
}