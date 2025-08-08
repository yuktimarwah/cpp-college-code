#include <iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    cout<<sum<<endl;
}