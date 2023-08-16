#include <iostream>
using namespace std;
class print{
    
   public: 
   void sum(int a,int b){
       cout<<"sum is :"<<a+b<<endl;
    }
    
     void  aveg(int a,int b){
        
        cout<<"average is:"<<(a+b)/2;
    }
    
    
};
int main(){
    print o,x;
    o.sum(3,6);
    x.aveg(3,6);
    return 0;
    
}