#include<iostream>
using namespace std;
class bank{
    public:
 virtual void interest(){
        cout<<"interst is 10%"<<endl;
    }
};
class sbi:public bank{
    public:
    void interest ()override{
        cout<<"interst is 9%"<<endl;
    }
};
class hdfc:public bank{
    public:
    void interest () override{
        cout<<"interst is 8%"<<endl;
    }
};
int main(){
    bank *ptr;
    sbi s;
    ptr=&s;
ptr->interest(); // Calls SBI's interest method
hdfc h;
    ptr=&h;
    ptr->interest(); // Calls HDFC's interest method
    return 0;
}