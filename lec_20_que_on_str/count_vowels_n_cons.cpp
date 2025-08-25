#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    int vowels=0,consonants=0;
    for(char ch:str){
         if(isalpha(ch)){
            ch = tolower(ch);
            if(ch=='a'||ch=='u'||ch=='i'||ch=='o'||ch=='e'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    cout<<"vowels = "<<vowels<<endl;
    cout<<"consonants = "<<consonants;
   
}