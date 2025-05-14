#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string n;
public:
    NamedCircle(int r, string n);
    void show();
};

NamedCircle::NamedCircle(int r, string n)
    : Circle(r) {
    this->n = n;
}

void NamedCircle::show() {
    cout << "반지름이 " << getRadius() << "인 " << n << endl;
}

int main() {
    NamedCircle waffle(3, "waffle");
    waffle.show();
}