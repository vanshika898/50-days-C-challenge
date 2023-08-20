#include <iostream>
using namespace std;
class parent{
    private:
    int meter;
    friend int add(parent);
    public:
    parent ():meter(0){}

};
int  add (parent d){
    d.meter+=5;
    return d.meter;
}
int main(){
    parent p;
    cout<<"distance:"<<add(p);
    return 0;
}


