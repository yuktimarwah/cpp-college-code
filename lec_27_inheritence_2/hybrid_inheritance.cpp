//hybrid = hierarical + multiple
#include <iostream>
using namespace std;
class vehicle{
    public:void start(){cout<<"starting the vehical"<<endl;}
};
class bike:virtual public vehicle{
    public: void ride(){cout<<"riding the bike"<<endl;}
};
class car:virtual public vehicle{
    public:void drive(){cout<<"driving the car"<<endl;}
};
class transport:public bike,public car{
    public:void travel(){cout<<"travelling"<<endl;}
};
int main(){
    transport t;
    t.start(); t.drive();t.travel();

    return 0;
}