#include <iostream>
#include <iomanip>
using namespace std;

class NumberBase {
public:
    int num;
    virtual void show() = 0;
};

class Decimal : public NumberBase {
public:
    Decimal(int n) { num = n; }
    void show() { cout << "Decimal: " << dec << num << endl; }
};

class Hexadecimal : public NumberBase {
public:
    Hexadecimal(int n) { num = n; }
    void show() { cout << "Hexadecimal: " << hex << num << endl; }
};

class Octal : public NumberBase {
public:
    Octal(int n) { num = n; }
    void show() { cout << "Octal: " << oct << num << endl; }
};

int main() {
    Decimal d(255);
    Hexadecimal h(255);
    Octal o(255);
    NumberBase* ptr;

    ptr = &d; ptr->show();
    ptr = &h; ptr->show();
    ptr = &o; ptr->show();

    return 0;
}
