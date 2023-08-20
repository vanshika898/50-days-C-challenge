#include <iostream>
using namespace std;
class classB;
class classA{
    private:
    int numA;
    friend classB;
    public :
    classA():numA(12){}

};
class classB{
    private :
    int numB;
    public:
    classB():numB(1){}


    int  add(){
    classA objA;
    return objA.numA+numB;
}
};
int main(){
    classB objB;
    cout<<"sum is :"<<objB.add()<<endl;
    return 0;
}

