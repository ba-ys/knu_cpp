#include<iostream>
using namespace std;

class Sample;
int f(Sample);
class Test {
public:
    void f(Sample);
    void g(Sample);
};
class Sample {
private:
    int x;
public:
    Sample(int x);
    friend int f(Sample);
    friend void Test::f(Sample);
    friend Test;
};