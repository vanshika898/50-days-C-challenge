#include<iostream>
using namespace std;

class parent {
protected:
    string name;
    public:
     parent()
    { 
        cout<<"My name is vanshika";
        cin>>name;
        cout<<"My name is: "<<name<<endl;
}};
int main()
{ 
    parent P1;
    return 0;
}