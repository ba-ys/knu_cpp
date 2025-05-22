#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<double> v; 
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(9);
	v.push_back(30);
	vector<double>::iterator it; 
	for (it = v.begin(); it != v.end(); it++) { 
		double n = *it;
		n = sqrt(n); 
		*it = n; 
	}
	for (it = v.begin(); it != v.end(); it++) 
		cout << *it << " / ";
	cout << endl;
}