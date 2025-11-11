#include <iostream>
#include <cstdlib> // for malloc() and free()
using namespace std;

class Location {
    int latitude;
    int longitude;

public:
    Location(int lat, int lon) {
        latitude = lat;
        longitude = lon;
        
    }

    

    // 🔹 Overloading new
    void* operator new(size_t size) {
        cout << "🧠 Custom new called. Allocating " << size << " bytes.\n";
        void* ptr = malloc(size);
        if (!ptr) throw bad_alloc();
        return ptr;
    }

    // 🔹 Overloading delete
    void operator delete(void* ptr) {
        cout << "🧹 Custom delete called. Freeing memory.\n";
        free(ptr);
    }

    void display() {
        cout << "Latitude: " << latitude << ", Longitude: " << longitude << endl;
    }
};

int main() {
    // 🔸 Create object using overloaded new
   Location *p1,*p2;
   p1=new Location(10,20);
   p2= new Location(20,30);
   p1->display();
   p2->display();
   delete p1;
   return 0;

    return 0;
}
