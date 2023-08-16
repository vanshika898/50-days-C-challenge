#include <iostream>
using namespace std;
//constructor & destructor
class gambit{
    public:
    gambit(){
        cout<<"hello i am in constructor"<<endl;
    }
    ~gambit(){
        cout<<"hello i am in destructor"<<endl;
    }
    void display(){
        cout<<"hello guys"<<endl;
    }
    };
int main(){
    gambit gam;
    gam.display();
}