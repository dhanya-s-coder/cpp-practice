#include <iostream>
using namespace std;

void show(int x) {
    cout << "Integer: " << x << endl;
}

void show(double y) {
    cout << "Double: " << y << endl;
}
int main() {
    // Pointer to function taking int
    void (*ptr1)(int) = &show;
    ptr1(5);   // calls show(int)

    // Pointer to function taking double
    void (*ptr2)(double) = &show;
    ptr2(3.14);   
    cout<<ptr1<<" "<<ptr2<<"\n";
    cout << (const void*)ptr1 << " " << (const void*)ptr2;

}
