#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    public:
    student(string name,int age){
        this->name = name;
        this->age = age;
     }
     public:
     friend void show_data(student s1);
};
void show_data(student s1){
    cout<<"name ="<<s1.name<<endl<<"age "<<s1.age<<endl;
}
int main(){
    student s1("superman",100);
    show_data(s1);
}