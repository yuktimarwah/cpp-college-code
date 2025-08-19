#include <iostream>
using namespace std;
int main(){
    int marks[5]={10,20,30,40,50};
    int n = sizeof(marks)/sizeof(marks[0]);
    cout<<"total size of array = "<<sizeof(marks)<<endl;
    cout<<"size of element = "<<sizeof(marks[0])<<endl;
    cout<<"array length = "<<n<<endl;
    /*for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }*/

    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;*/
}