/*#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

class Date {
    int year, month, day;
public:
    Date(int y, int m, int d);
    Date(string s);
    void show();
    int getYear(), getMonth(), getDay();
};

Date::Date(string s) {
    char c = '/'; 
    stringstream ss(s);
    string token;

    getline(ss, token, c);
    year = stoi(token);
    getline(ss, token, c);
    month = stoi(token);
    getline(ss, token, c);
    day = stoi(token);
}

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void Date::show() {
    cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}*/
