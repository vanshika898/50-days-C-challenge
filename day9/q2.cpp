#include <iostream>
using namespace std;
class A{
    public:
     virtual void print(){
         cout<<"class A";
     }
};
class B:public A{
    public:
    virtual void print(){
        cout<<"class B";
    }};
int main(){
    B d;
    A*a1 = &d;
    a1 ->print();
   
}