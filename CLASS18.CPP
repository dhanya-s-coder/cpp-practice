#include <iostream>
using namespace std;

// 🔹 Base class
class Base {
public:
    virtual void show() {
        cout << "This is Base class function" << endl;
    }
};

// 🔹 Derived class 1
class Derived1 : public Base {
public:
    void show() { // same function name
        cout << "This is Derived1 class function" << endl;
    }
};

// 🔹 Derived class 2
class Derived2 : public Base {
public:
    void show() { // same function name
        cout << "This is Derived2 class function" << endl;
    }
};

int main() {
    Base *p=new Base;
    Derived1 *d1=new Derived1;
    Derived2 *d2=new Derived2;
    Base *b[3]={p,d1,d2};
    for(int i=0;i<3;i++){
        b[i]->show();
    }
// p=&b;
// p->show();
// p=&d1;
// p->show();
// p=&d2;
// p->show();
  

    return 0;
}
