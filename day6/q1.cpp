#include <iostream>
using namespace std;
class parent{
    public:
    int method(int x,int y){
        int z =x+y;
        return z;
        
    }
};
int main(){
    parent o;
    int z=o.method(2,4);
    cout<<"sum is :"<<z<<endl;
}