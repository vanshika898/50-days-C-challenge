#include <iostream>
using namespace std;

class Constructor {
public:
    Constructor() {
        cout << "My name is Vanshika" << endl;
    }

    Constructor(int a) {
        cout << a << endl;   // Print the value of the parameter 'a'
        cout << "My name is Tanisha" << endl;
    }
};

int main() {
    Constructor c(2);
   // constructor ;
    return 0;
}