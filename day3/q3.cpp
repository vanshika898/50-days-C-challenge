#include <iostream>
using namespace std;
class result{
    public:
    int maths_marks;
    int english_marks;
    int hindi_marks;
    void number (){
       cout<<"enter your marks in maths:";
       cin>>maths_marks;
       cout<<"enter your marks in english:";
       cin>>english_marks;
       cout<<"enter your marks in hindi:";
       cin>>hindi_marks;
       float percentage=((english_marks+maths_marks+hindi_marks)/300.0)*100.0;
       
        cout<<"percentage is:"<<percentage<<"%";
       
    }
    
};
int main(){
    result o;
    o.number();
    return 0;
    
} 