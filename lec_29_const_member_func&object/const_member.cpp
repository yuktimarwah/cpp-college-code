#include <iostream>
using namespace std;
class counter{
    string name;
    public:
    counter(string n){
        name = n;
    }
    void display() const{
        cout<<"name = "<<name<<endl;
    }
    void setname(string s){
        name = s;
    }
};

int main(){
    const counter c1("counter1");
    c1.display(); // displays "counter name = counter"
    return 0;

}