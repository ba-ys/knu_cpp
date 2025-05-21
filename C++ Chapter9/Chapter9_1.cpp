#include <iostream>
using namespace std;

class Converter {
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter() { ratio = 1000; }
    Converter(double ratio) { this->ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
        cout << getDestString() << "�� �Է��ϼ���>> ";
        cin >> src;
        cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
    }
};

class WonToDollar : public Converter {
protected:
    virtual double convert(double src) { return src / ratio; }
    virtual string getSourceString();
    virtual string getDestString();
public:
    WonToDollar(double ratio) : Converter(ratio) {}
};

string WonToDollar::getSourceString() {
    return "��";
}

string WonToDollar::getDestString() {
    return "�޷�";
}

int main() {
    WonToDollar wd(1010);
    wd.run();
}