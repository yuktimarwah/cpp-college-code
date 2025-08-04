#include <iostream>
using namespace std;
int main(){
    // day=1 => monday
    // day=2 => tuesday
    // day=3 => wednesday
    // day=4 => thursday
    // day=5 => friday
    // day=6 => saturday
    // day=7 => sunday
    int day;
    cout<<"enter the day"<<endl;
    cin>>day;
    switch(day){
        case 1: cout<<"monday"<<endl;
        break;
        case 2: cout<<"tueday"<<endl; 
        break;
        case 3: cout<<"wednesday"<<endl; 
        break;
        case 4: cout<<"thursday"<<endl; 
        break;
        case 5: cout<<"friday"<<endl;
        break;
        case 6: cout<<"saturday"<<endl;
        break; 
        case 7: cout<<"sunday"<<endl; 
        break;
        default: cout<<"invalid"<<endl;
    }

}