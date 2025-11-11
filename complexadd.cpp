#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.2, 4.8);
    c1.display();
    c2.display();
    Complex c3;
    c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    (c1+c2+c3).display();
    return 0;
}
