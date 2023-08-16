#include <iostream>
using namespace std;

class Second_year {
public:
    int a, b, tsum, av;
    void sum();
    void average();
};

void Second_year::sum() {
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    tsum = a + b;
}

void Second_year::average() {
    av = tsum / 2;
}

int main() {
    Second_year O;
    O.sum();
    cout << "Sum: " << O.tsum << endl;
    O.average();
    cout << "Average: " << O.av << endl;
    return 0;
}