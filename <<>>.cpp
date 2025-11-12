#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex() {}  // default constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // 🔹 Friend functions for stream operators
    friend ostream& operator<<(ostream &out, const Complex &c);
    friend istream& operator>>(istream &in, Complex &c);
};

// 🔸 Overload << (output)
ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

// 🔸 Overload >> (input)
istream& operator>>(istream &in, Complex &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    cout << "\nYou entered:\n";
    cout << "C1 = " << c1 << endl;
    cout << "C2 = " << c2 << endl;

    return 0;
}

