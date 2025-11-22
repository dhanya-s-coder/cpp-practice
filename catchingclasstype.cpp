#include <iostream>
using namespace std;

// Custom Exception class
class MyException {
public:
    string message;

    MyException(string msg) {
        message = msg;
    }
};

int main() {
    try {
        // Exception throw kar rahe hain
        throw MyException("Ye ek error message hai!");
    }
    catch (MyException e) {
        // Exception catch kar rahe hain
        cout << "Exception caught: " << e.message << endl;
    }
}
