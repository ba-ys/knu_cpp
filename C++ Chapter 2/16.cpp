#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷����׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
    char buf[10000];
    int total_cnt = 0, pri_cnt = 0;
    cin.getline(buf, 10000, ';');

    for (int l = 0; l < int(strlen(buf)); l++) {
        if (isalpha(buf[l]) == 1 || isalpha(buf[l]) == 2) {
            total_cnt++;
        }
    }
    cout << "�� ���ĺ� �� " << total_cnt << "\n\n";

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