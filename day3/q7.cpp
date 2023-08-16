#include <iostream>
using namespace std;
class beverage{
    public:
    void drinks(){
        cout<<"here are drinkes"<<endl;
    }
};
class coffee:public beverage{
    public:
    void cold_coffee(){
        cout<<"most famous cold_coffee";
    }
};

int main(){
    coffee e;
    e.drinks();
    e.cold_coffee();
}