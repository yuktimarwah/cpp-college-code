/*
pointers:-

pointer is a special type of variable that store the memory address of any other variable.

declaration:-
int n=10;
int *ptr=&n;               & => address of variable
cout<<*ptr<<endl;

why use pointer?
=> 
*/
#include <iostream>
using namespace std;
int main(){
    int n=10;
    int *ptr = &n;
    cout<<n<<endl;      // value in n.
    cout<<ptr<<endl;    // address of n.
    cout<<*ptr<<endl;   //original value at n.
    *ptr +=20;                                // adds 20 in the original value.
    cout<<endl;
    cout<<n<<endl;      
    cout<<ptr<<endl;    
    cout<<*ptr<<endl;
    cout<<endl;

    //types of pointers =>

//1). integer to integer:-
int q=10;
int *p1 = &q;
cout<<*p1<<endl;

//2). float to float =>
float balance =2.3;
float *a = &balance;
cout<<a<<endl;
cout<<*a<<endl;
*a-=1;            // value mei kmm hoga 1.
cout<<a<<endl;
cout<<*a<<endl;

//3). char to char =>
char ch='@';
char *p = &ch;
cout<<*p<<endl;
cout<<endl;

// 4). pointers with array:-
int arr[] = {10,20,30,40,50};
int *ptr7 = arr;
cout<<*ptr7<<endl;
cout<<ptr7<<endl;
cout<<*(ptr7+1)<<endl;;
cout<<(ptr7+1)<<endl;;

}