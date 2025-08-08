#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=1;
        }
    }
    if(count==0){
    cout<<"prime";
    }
    else{
    cout<<"not prime";
    }
    return 0;
}