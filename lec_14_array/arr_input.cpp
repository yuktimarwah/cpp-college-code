#include <iostream>
using namespace std;
int main(){
    
    int roll_no[6];
    for(int i=0;i<6;i++){
        cin>>roll_no[i];
    }
    for(int i=0;i<6;i++){
        cout<<roll_no[i] ;
    }
    cout<<endl;
    cout<<"total size of array = "<<sizeof(roll_no)<<endl;
    cout<<"size of element = "<<sizeof(roll_no[0])<<endl;
    int n = sizeof(roll_no)/sizeof(roll_no[0]);
    cout<<"array length = "<<n<<endl;

}