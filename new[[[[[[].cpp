#include <iostream>
#include <cstdlib> // for malloc() and free()
using namespace std;

class Location {
    int latitude;
    int longitude;

public:
    // Default constructor for array creation
    Location() {
        latitude = 0;
        longitude = 0;
        cout << "📍 Default constructor called.\n";
    }

    // Parameterized constructor
    Location(int lat, int lon) {
        latitude = lat;
        longitude = lon;
        cout << "📍 Parameterized constructor called.\n";
    }

    // 🔹 Overload new[]
    void* operator new[](size_t size) {
        cout << "🧠 Custom new[] called. Allocating " << size << " bytes.\n";
        void* ptr = malloc(size);
        if (!ptr) throw bad_alloc();
        return ptr;
    }

    // 🔹 Overload delete[]
    void operator delete[](void* ptr) {
        cout << "🧹 Custom delete[] called. Freeing memory.\n";
        free(ptr);
    }

    void display() {
        cout << "Latitude: " << latitude << ", Longitude: " << longitude << endl;
    }
};

int main() {
    Location* p2 = new Location[5]; // 5 objects created

    for (int i = 0; i < 5; i++) {
        p2[i].display();
    }

    delete[] p2; // calls custom delete[]

    return 0;
}
