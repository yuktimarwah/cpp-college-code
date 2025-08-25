//Anagram:- 
//string length should be same.
//occurence of each character in both strings shd be same.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    int l1 = str1.length();
    int l2 = str2.length();
    if(l1!=l2){
        cout<<"NOT anagrams";
    }
    else{
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1==str2){
            cout<<"yes,Anagram";
        }
        else{
            cout<<"NOT anagrams";
        }
    }

}