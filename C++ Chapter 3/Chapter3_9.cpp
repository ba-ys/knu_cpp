#include <iostream>
using namespace std;

class Oval {
    int width, height;
    int cnt = 1;
    int w[2] = { 0 }, h[2] = { 0 };
public:
    Oval();
    Oval(int a, int b);
    void set(int s1, int s2);
    void show();
    int getWidth();
    int getHeight();
    ~Oval();
};

Oval::Oval() {
    width = 1;
    height = 1;
}

Oval::Oval(int a, int b) {
    width = a;
    w[cnt - 1] = a;
    height = b;
    h[cnt - 1] = b;
}

void Oval::set(int s1, int s2) {
    width = s1;
    w[cnt - 1] = s1;
    height = s2;
    h[cnt - 1] = s2;
    cnt++;
}

void Oval::show() {
    cout << "width = " << width << ", height : " << height << endl;
}

int Oval::getWidth() {
    int g_W = width;
    return g_W;
}

int Oval::getHeight() {
    int g_H = height;
    return g_H;
}

Oval::~Oval() {
    for (int i = 0; i < cnt; i++) {
        if (w[i] != 0 && h[i] != 0)
        cout << "OVal ¼Ò¸ê : width = " << w[i] << ", height = " << h[i] << endl;
    }
}

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}