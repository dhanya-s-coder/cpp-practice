#include <iostream>
using namespace std;

class Test {
public:
    void show() {
        cout << "Test::show() called\n";
    }
};

class Wrapper {
    Test t;
public:
    Test* operator->() {
        return &t;   // Test class ka pointer return karo
    }
};

int main() {
    Wrapper w;
    w->show();   // w.operator->()->show() called
}
