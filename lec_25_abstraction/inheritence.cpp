// inheritence =>
/*
aquiring the property from the parent class.
isme define krna pdta hai function ko...
syntax=>
class A{
    public:void show();}
class B: public A{
    public: display();
}
*/
#include <iostream>
using namespace std;
class car
{
public:            //agar yha "protected" krenge toh vo sirf aapne child ko allow krega function calling.....or "private" mei kisi ko bhi nhi
    void speed()
    {
        cout << "top speed = 450 km/h" << endl;
    }
};
class bmw : public car
{
public:
    void color()
    { 
        cout << "car color = red" << endl;
    }
};

int main()
{
    bmw b1;
    // b1.speed();
    b1.color();
    return 0;
}
