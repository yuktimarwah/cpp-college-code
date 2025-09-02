#include <iostream>
using namespace std;
class engine{
    public:
    void start(){
        cout<<"engine started"<<endl;
}
};
class gps{
    public:
    void location(){
        cout<<"location shared"<<endl;
    }
};
class car:public engine,public gps{
    public:
    void drive(){
        cout<<"driving the car";
    }
};
int main(){
    car c1;
    c1.start();
    c1.location();
    c1.drive();
    
    }