#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n = 1, cnt = 0;
	double sum = 0;
	for (;;) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> n;
		if (n == 0)break;
		v.push_back(n);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";	
		}
		sum += v[cnt];
		cnt++;
		cout << "\n��� = " << sum / v.size() << endl;
	}
}