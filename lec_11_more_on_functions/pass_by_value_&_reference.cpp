#include <iostream>
using namespace std;
void pass_by_value(int a,int b){
        a=20;b=10;
}
void pass_by_reference(int &a , int &b){
    a=20;b=10;
}
int main(){
    int a=10,b=20;
    cout<<"before pass by value ="<<a<<" "<<b<<endl;
    pass_by_value(a,b);
    cout<<"after pass by value ="<<a<<" "<<b<<endl;
    pass_by_reference(a,b);
    cout<<"after pass by reference ="<<a<<" "<<b<<endl;
    }