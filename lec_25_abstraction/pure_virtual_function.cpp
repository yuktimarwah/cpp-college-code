// how do u achieve abstraction..?
//=> by making pure virtual function.
/*


*/
#include <iostream>
using namespace std;
class car{
    public:
    //pure virtual function
    virtual void speed();
    virtual void colour();
};
class bmw: public car{
    public:
    void colour(){
        cout<<"car colour will be white"<<endl;
    }
    void speed(){
        cout<<"top speed of bmw = 450 km/h"<<endl;
    }
};
int main(){
    bmw b1;
    b1.speed();
    b1.colour();

    return 0;
}