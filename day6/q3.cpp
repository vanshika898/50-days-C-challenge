#include <iostream>
using namespace std;

class parent {
public:
    int sum(int x, int y, int z) {
        int a = x+y+z;
        return a;
    }
};

class child:public parent {
public:
    void calculateAverage(int x, int y, int z) {
        int sum = parent::sum(x, y, z);
        cout << "Average is: " << sum / 3.0 << endl;
    }
};

int main() {
    child o;
    int x=2, y=3,z=4;

    cout << "Sum: "<< o.sum(x, y, z)<<endl;
    o.calculateAverage(x, y, z);

    return 0;
}
