#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=20;i++){
        if(i%2==0){
            continue;
        }
        else{
            sum+=i;
        }
        
    }
    cout<<sum<<endl;

    return 0;
}