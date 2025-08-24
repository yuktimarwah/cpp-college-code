// strings:-
// is a sequence of character or the collections of characters that is the 
//declaration:-
//string company = "google";
//cout<<company;
// string index also starts from 0.


/*
string functions:-

1). length of string:-
string str = "google";
cout<<str.length();

2). acces the character of the string:-
string str = "google";
cout<<str[0];           output=>g

3). find el in string:-
string str= "apple";
cout<<str.find(p);

4). append the string:-
string str = "ram";
cout<<str.append("siya");

5.) substring:-
string str = "microsoft";
cout<<str.substr(1,4);
*/
#include <iostream>
using namespace std;
int main(){
    string str = "google";
    cout<<str.length();
    cout<<endl;
    cout<<str[0];
    cout<<endl;
    string s= "apple";
    cout<<s.find("p");
    cout<<endl;
    string name = "ram ";
    cout<<name.append("siya");
    cout<<endl;
    string str1 = "microsoft";
    cout<<str1.substr(1,4);
    cout<<endl;


}