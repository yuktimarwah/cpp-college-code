#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of terms required:";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int next = a+b;
        a=b;
        b=next;

    }
}