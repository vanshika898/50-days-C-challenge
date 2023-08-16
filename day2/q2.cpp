#include <iostream>
using namespace std;

class Second_year {
public:
    string name;  
    void getdata(); 
};

void Second_year::getdata() {
    cout << "Enter your name: ";
    cin >> name;
}

int main() {
    Second_year O;
    O.getdata();
    return 0; 
}