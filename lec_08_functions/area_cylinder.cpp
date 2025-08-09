#include <iostream>
using namespace std;
const float pie=3.14;
float area_of_cylinder(float r,float h){
    return 2*pie*r*h+2*pie*r*r;
}
int main(){
    
    float r,h;
    cin>>r;
    cin>>h;
    cout<<"cicle area"<<area_of_cylinder(r,h)<<endl;
    return 0;
}