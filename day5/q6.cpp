#include <iostream>
using namespace std;
int main(){
    string food="pizza";
    string *ptr=&food;
    cout<<food<<endl;
    cout<<ptr<<endl;
    *ptr="hamgur";
    cout<<*ptr<<endl;
    cout<<food;

}