# include <iostream>
using namespace std;
int main(){
    char adharcard;
    cout<<"enter y or n: ";
    cin>>adharcard;
    char pan_card;
    cout<<"enter y or n: ";
    cin>>pan_card;

    if(adharcard == 'y' && pan_card == 'y'){
        cout<<"u can open account"<<endl;
    }
    else{
        cout<<"u can not open account"<<endl;
    }
    return 0;
}