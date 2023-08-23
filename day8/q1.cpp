#include <iostream>
using namespace std;

class Employee {
    private:
    int providant_fund=3000;
public:
    void create_account() {
        string name, post, address,type;
        int  Employee_ID, password;
        long mobile_number;
        
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your are post on company(engineer or manager): ";
        cin>>post;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your mobile number: ";
        cin>>mobile_number;
        cout<<"Enter your Employee ID: ";
        cin>>Employee_ID;
        cout<<"Set your password for your information: ";
        cin>>password;
        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<"Congratulations ! Your account is created"<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;

        }
        int setfund(int providant){
            providant_fund=providant;

        }
        void getfund(){
            return providant_fund; 
        }
};
class manager:public Employee{
    
    void displayinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"post":<<type;
        cout<<"Mobile number:"<<mobile_number<<endl;
        cout<<"Employee ID:"<<Employee_ID<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
    int bonus_of_the_manager(int salary){
    int bonus = salary*0.1;
    return bonus; 
    }


};
class Engineer:public Employee{
    void displayinfo(string specialization){
        cout<<"Name:"<<name<<endl;
        cout<<"post":<<type;
        cout<<"Mobile number:"<<mobile_number<<endl;
        cout<<"Employee ID:"<<Employee_ID<<endl; 
        cout<<"specialization:"<<specialization<<endl;}
    int bonus_of_the_engineer(){
        int bonus=bonus*0.07;
        return bonus;

    } 

};

int main() {
    int purpose;
    string post;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"                        Welcome to our bank system                     "<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    Employee e;
    string customer;
    cout<<"You are engineer or manager:"<<endl;
    cin>>post;
    cout<<"Enter you are old or new emplyee:";
    cin>>customer;
    if (customer=="new"){
        e.create_account();

    }
    if(customer=="old"){
    cout<<"1.To edit information "<<endl<<"2.For transaction purpose"<<endl<<"3.For See the information"<<endl<<"4.To delete account"<<endl;
    cout<<"Enter your purpose of visiting:";
    cin>>purpose;
    if (purpose==1){
        if(post=="manager"){
            displayinfo();
            int a = bonus_of_the_manager();
            cout<<"your bonus of the year is:"<<bonus;

        }
    }
    


    }


    }

   /* int purpose;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"                        Welcome to our bank system                     "<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"1.Account create"<<endl<<"2.To view list"<<endl<<"3.To edit information "<<endl<<"3.For transaction purpose"<<endl<<"4.Deleting the account"<<endl<<"5.For See the information"<<endl;
    cout<<"Enter your purpose of visiting:";
    cin>>purpose;
    Bank b;
    if (purpose==1){
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        b.create_account();
        cout<<"------------------------------------------------------------------------------------"<<endl;
        
    }*/
    
