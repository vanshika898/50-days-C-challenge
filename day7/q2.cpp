#include <iostream>
using namespace std;
class wall{
    private:
    int lenght;
    int breadth;
    public:
    wall(int len,int brd){
        lenght=len;
        breadth=brd;}
    wall(wall &w){
        lenght=w.lenght;
        breadth=w.breadth;
    }
    void add(){
        int c = lenght*breadth;
        cout<<"area is :"<<c<<endl;
    }
    
};
int main(){
    wall q(2,4);
    q.add();

}