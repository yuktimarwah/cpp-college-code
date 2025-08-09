#include <iostream>
using namespace std;
float area(float p,int r){
    return p*r*r;
}
int main(){
    int r;
    float p =3.14;
    cin>>r;
    cout<<"cicle area"<<area(p,r)<<endl;
    return 0;
}