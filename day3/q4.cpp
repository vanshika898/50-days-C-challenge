#include <iostream>
using namespace std;
//get value of private variable in get&set value
class billboard{
    private:
    string title;
    public:
    void setTitle(string x){
        title=x;
    }
    string getTitle(){
        return title;
    }
};
int main(){
    billboard r;
    r.setTitle("top 5 songs");
    cout<<r.getTitle();
    return 0;
}