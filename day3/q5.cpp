#include <iostream>
using namespace std;
//previous function using constructor
class billboard{
    private:
    string title;
    public:
    billboard(string b){
        setTitle(b);
    }
    void setTitle(string a){
        title =a;
    }
    string getTitle(){
        return title;
    }
    
};
int main(){
    billboard bill("top 5 songs");
    cout<<bill.getTitle();
    return 0;
}