#include <iostream>
using namespace std;
class franchise{
    public:
    void kfc(){
        cout<<"here is the code of print stars"<<endl;
        cout<<"---------------------------------"<<endl;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cout<<"*";
            }
        cout<<endl;    
        }
        
    }
    
};
int main(){
    franchise o;
    o.kfc();
    
}