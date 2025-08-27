#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,34,54,90};
    int *ptr = arr;
    for(int i =0;i<5;i++){
        cout<<*ptr<<endl;
       *(ptr+=1);
    }
    return 0;
}