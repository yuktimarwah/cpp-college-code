#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max_el=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max_el){
            max_el=arr[i];
        }
        
    }
    cout<<"maximum element of array is:"<<max_el<<endl;
}



