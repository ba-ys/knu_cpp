#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n = 1, cnt = 0;
	double sum = 0;
	for (;;) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n == 0)break;
		v.push_back(n);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";	
		}
		sum += v[cnt];
		cnt++;
		cout << "\n평균 = " << sum / v.size() << endl;
	}
}