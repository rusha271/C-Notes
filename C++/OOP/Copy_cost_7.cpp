#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;

    MyClass(int val) {
        ptr = new int(val);
    }

    // Custom copy constructor for deep copy
    MyClass(const MyClass& other) {
        ptr = new int(*(other.ptr));  // Allocates new memory and copies the value
    }  

    ~MyClass() {
        delete ptr;
    }
};

int main() {
    MyClass obj1(5);       // obj1 has a pointer to dynamically allocated memory
    MyClass obj2 = obj1;    // Default copy constructor does shallow copy (copies the pointer address)

    cout << *obj1.ptr << endl; // Output: 5
    cout << *obj2.ptr << endl; // Output: 5

    return 0;
}


/*

Both obj1 and obj2 have a pointer ptr that point to the same memory location.
If obj1 or obj2 is destroyed (e.g., when they go out of scope), the destructor will free the memory.
If you try to use the other object, you’ll get a problem (e.g., a crash) because both objects think they own the same memory.


*/