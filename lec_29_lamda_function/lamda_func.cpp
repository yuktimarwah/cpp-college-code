#include <iostream>
using namespace std;
int main(){
    auto sum = [](int a,int b,int c){
        return a+b+c;
    };
    cout<<"sum ="<<sum(10,20,10)<<endl;
    return 0;
}