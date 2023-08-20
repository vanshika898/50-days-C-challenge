#include <iostream>
using namespace std;
int main(){
   int fact =1,i;
   cout<<"enter the number:";
    cin>>i;
    while(i>0){
        fact=fact*i;
        i--;
    }
    cout<<fact;
}