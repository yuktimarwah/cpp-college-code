#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    
    int result =fib(4);
    cout<<result<<endl;
    return 0;
}