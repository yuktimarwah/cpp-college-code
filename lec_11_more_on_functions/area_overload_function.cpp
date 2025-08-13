#include <iostream>
using namespace std;
const float PI=3.14;
float area(float radius){
    return PI*radius*radius;
}
float area(float l,float b){
    return l*b;
}
int main(){
    float radius,l,b;
    cin>>radius>>l>>b;
    cout<<"area of circle="<<area(radius)<<endl;
    cout<<"area of rectangle="<<area(l,b)<<endl;

}