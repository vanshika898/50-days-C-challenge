#include <iostream>
using namespace std;

class Base {
private:
    int a;

public:
    Base() : a(0) {}

    void increment() {
        ++a;
    }

    void display() {
        cout << "printt: " << a;
    }
};

int main() {
    Base b; 
    b.increment(); 
    b.display(); 
    return 0;
}