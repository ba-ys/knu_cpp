/*#include <iostream>
using namespace std;

class CoffeeMachine {
    int coffee = 0, water = 0, sugar = 0;
public:
    CoffeeMachine(int a, int b, int c);
    void show();
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
};

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
    coffee = a;
    water = b;
    sugar = c;
}

void CoffeeMachine::show(){
    cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << "\n";
}

void CoffeeMachine::drinkEspresso() {
    coffee -= 1;
    water -= 1;
}

void CoffeeMachine::drinkAmericano() {
    coffee -= 1;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}

void CoffeeMachine::fill() {
    coffee = 10;
    water = 10;
    sugar = 10;
}

int main() {
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}*/