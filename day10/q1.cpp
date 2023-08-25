#include <iostream>
using namespace std;
class Base{
    private:
    void sum(int a,int b,int c){
        int summ = a+b+c;
        cout<<"sum is :"<<summ<<endl;
        
    }
    virtual void function(int a,int b,int c)=0;
};
class derived:public Base{
    public :
    virtual void function(int a,int b,int c){
        int average =(a+b+c)/3;
        cout<<"average is:"<<average<<endl;
    }
};
int main(){
    derived d;
    d.sum(1,2,3);
    d.function(2,3,4);
    Base *c=&d;
   c->function(2,3,4);
}