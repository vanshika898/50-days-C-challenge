#include <iostream>
using namespace std;

class Employee {
private:
    int provident_fund = 3000;
    
protected:
    string name, post, address, type;
    int Employee_ID, password;
    long mobile_number;

public:
    void create_account() {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your post in the company (engineer or manager): ";
        cin>>post;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your mobile number: ";
        cin>>mobile_number;
        cout<<"Enter your Employee ID: ";
        cin>>Employee_ID;
        cout<<"Set your password for your information: ";
        cin>>password;
        cout<<"-------------------------------------------------------------------------" << endl;
        cout<<"Congratulations! Your account is created" << endl;
        cout<<"--------------------------------------------------------------------------" << endl;
      
    }

    void set_fund(int provident) {
        provident_fund=provident;
    }

    int get_fund() {
        return provident_fund;
    }
     void delete_account() {
        cout<<"Are you sure you want to delete your account? (yes/no): ";
        string confirmation;
        cin>>confirmation;

        if (confirmation=="yes") {
            cout<<"Account deleted successfully!" << endl;
            name="";
            post="";
            address="";
            mobile_number=0;
            Employee_ID=0;
            password=0;
            provident_fund=0; 
        } else {
            cout<<"Account not deleted."<< endl;
        }
    }


};

class Manager : public Employee {
public:
    void display_info(string name,string post,long mobile_number,int Employee_ID) {
        cout<<"Name: "<<name << endl;
        cout<<"Post: "<<post<<endl;
        cout<<"Mobile number: " << mobile_number<<endl;
        cout<<"Employee ID: "<<Employee_ID<<endl;}

    int bonus_of_the_manager(int salary) {
        int bonus = salary * 0.1;
        return bonus;
    }
    void edit_info(){
        cout << "Editing manager Information:" << endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Enter new post: ";
        cin>>post;
        cout<<"Enter new mobile number: ";
        cin>>mobile_number;
        cout<<"Information updated successfully!" << endl;
    }
    void employee_under_working(string name,string post){
        int a;
        cout<<"Enter your peassword to see further details:"<<endl;
        cin>>a;
        if (a==password){
            cout<<"Now you can see the number of engineers working under you"<<endl;
            cout<<"Total 7 engineers working under you"<<endl;
            cout<<"employee name"<<name<<endl;
            cout<<"post:"<<post<<endl;
        }else{
            cout<<"Give the correct password"<<endl;
        }
    }
};

class Engineer : public Employee {
public:


    void display_info(string name,string post,long mobile_number,int Employee_ID,string specialization){
        cout<<"Name: "<<name<<endl;
        cout<<"Post: "<<post<<endl;
        cout<<"Mobile number: "<<mobile_number << endl;
        cout<<"Employee ID: "<<Employee_ID<<endl;
        cout<<"Specialization: "<<specialization<<endl;
    }

    int bonus_of_the_engineer(int salary) {
        int bonus=0;
        bonus = salary*0.08;
        return bonus;
        
    }
    void edit_info(){
        cout<<"Editing engineer Information:" << endl;
        cout<<"------------------------------------"<<endl;
        cout<<"Enter new post: ";
        cin>>post;
        cout<<"Enter new mobile number: ";
        cin>>mobile_number;
        cout<<"Information updated successfully!" << endl;
    }
    
};


int main() {

    cout << "-----------------------------------------------------------------------" << endl;
    cout << "                Welcome to  our Employee management system                         " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    Employee e;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"Creating account "<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    e.create_account();
    Engineer eg;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Information of engineer "<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    eg.display_info("vanshika_nigam","engineer",8989537765,890,"web developer");
    cout<<"bonus :"<<eg.bonus_of_the_engineer(70000)<<endl;
    eg.edit_info();
    Manager mg;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Information of manager "<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    mg.display_info("vanshika_nigam","manager",975536789,800);
    cout<<"bonus :"<<eg.bonus_of_the_engineer(80000)<<endl;
    mg.edit_info();
    
    mg.employee_under_working("tanisha","web developer");
    cout<<"------------------------------------------------------------------------" << endl;
    cout<<"Options:" << endl;
    cout<<"1. Delete Account" << endl;
    cout<<"2. Exit" << endl;
    cout<<"Choose an option: ";
    int option;
    cin>>option;

    if (option == 1) {
        e.delete_account(); 
        
    } else if (option == 2) {
        cout<<"Exiting the program."<<endl;
    } else {
        cout<<"Invalid option."<<endl;
    }

    cout << "------------------------------------------------------------------------" << endl;
    
    
    cout<<"------------------------------------------------------------------------"<<endl;
    return 0;
}
    
