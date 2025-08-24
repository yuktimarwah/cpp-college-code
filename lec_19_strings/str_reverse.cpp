#include <iostream>
using namespace std;
string reverse(string str){
    int n = str.length();
    for( int i=0;i<n/2;i++){
        char temp = str[i];
        str[i]= str[n-i-1];
        str[n-i-1]  = temp;
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    string result = reverse(str);
    cout<<result;

}