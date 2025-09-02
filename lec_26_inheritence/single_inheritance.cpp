#include <iostream>
using namespace std;
class car{
    public:void wheels(){
        cout<<"Car has 4 wheels"<<endl;
    }
};
class BMW:public car{
    public:void drive(){
        cout<<"driving the car";
    }
};
int main(){
    BMW b1;
    b1.wheels();
    b1.drive();
}