#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		char n1[100], sym[100], n2[100];
		int ans = 0;
		cout << "? ";
		cin.getline(n1, 100, ' ');
		cin.getline(sym, 100, ' ');
		cin.getline(n2, 100, '\n');
	
		if (strcmp(sym, "+") == 0) {
			ans = atoi(n1) + atoi(n2);
		}
		else if (strcmp(sym, "-") == 0) {
			ans = atoi(n1) - atoi(n2);
		}
		else if (strcmp(sym, "*") == 0) {
			ans = atoi(n1) * atoi(n2);
		}
		else if (strcmp(sym, "/") == 0) {
			ans = atoi(n1) / atoi(n2);
		}
		else if (strcmp(sym, "%") == 0) {
			ans = atoi(n1) % atoi(n2);
		}
		cout << n1 << " " << sym << " " << n2 << " " << "=" << " " << ans << "\n";
	}
	return 0;
}