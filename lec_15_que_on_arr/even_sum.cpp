#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
        sum+=arr[i];
        }
        else{
            continue;
        }
    }

    cout<<"sum = "<<sum<<endl;
    return 0;
    
}