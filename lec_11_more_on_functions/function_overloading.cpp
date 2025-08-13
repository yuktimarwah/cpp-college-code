#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"sum1 ="<<sum(10,20)<<endl;
    cout<<"sum2 ="<<sum(10,20,30)<<endl;
    
}