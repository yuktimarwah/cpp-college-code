#include<iostream>
using namespace std;
class student{
    public:
    void test(string sub){
cout<<"my subject: "<<sub<<endl;
    }
     void test(string sub,int marks){
cout<<"i get: "<<marks<<endl;
    }
     void test(string sub,int marks,int credit){
cout<<"credit: "<<credit<<endl;
    }
};
int main(){
    student s;
    s.test("c++");
    s.test("c++",90);
    s.test("dbms",95,4);
    return 0;
}