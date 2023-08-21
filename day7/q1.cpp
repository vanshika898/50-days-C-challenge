#include <iostream>
using namespace std;
class parent{
    private:
    int length;
    int height;
    public:
    parent(int len,int hgt){
        length =len;
        height=hgt;
    }
    void multi(){
        int c = length*height;
        cout<<"area is :"<<c<<endl;
    }
};
int main(){
    parent p(3,4);
    p.multi();

}