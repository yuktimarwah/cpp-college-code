#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<"  "; //here 2 spaces are given so as to visualize the pattern in output correctly.
        }
        for(int j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    return 0;