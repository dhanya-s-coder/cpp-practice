#include <iostream>
using namespace std;

class B; // forward declaration

class A {
private:
    int data;

    A(int x) {   // private constructor
        data = x;
    }

public:
    void show() {
        cout << "Data = " << data << endl;
    }

    friend class B; // B can access A’s private members and constructor
};

class B {
public:
    A* create_A(int val) {    // create and return a pointer to A
        return new A(val);    // allowed because B is a friend of A
    }
};

int main() {
    B b1;
    A* a1 = b1.create_A(100);   // create object of A through class B
    a1->show();

    delete a1; // cleanup (since we used new)
    return 0;
}
