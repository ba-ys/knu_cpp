#include <iostream>
#include <string>
using namespace std;

class Color {
	int r;
	int g;
	int b;
public:
	Color() {
		this->r = 0; this->g = 0; this->b = 0;
	}

	Color(int r, int g, int b) {
		this->r = r; this->g = g; this->b = b;
	}

	void show() {
		cout << r << ' ' << g << ' ' << b << endl;
	}

	Color operator +(Color c) {
		Color tmp;
		tmp.r = this->r + c.r;
		tmp.g = this->g + c.g;
		tmp.b = this->b + c.b;
		return tmp;
	}

	bool operator ==(Color c) {
		if (this->r == c.r && this->g == c.g && this->b == c.b) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}