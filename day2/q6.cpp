#include<iostream>
using namespace std;

class parent {
protected:
    string name;
    public:
     parent()
    { 
        cout<<"My name is tanisha";
        cin>>name;
        cout<<"My name is: "<<name<<endl;
}};

class child : public parent{
    
};
int main()
{ 
    parent P1;
    child C1;
    return 0;
}