//OOPS:-
/*4 pillers:-
encapsulation
abstraction
polymorphism
inheritance
*/
#include <iostream>
using namespace std;
class student{
    public:;
    string name; //data members
    int age;
    float fees;

    void display(){   // member method
        cout<<"name = "<<name<<endl;
        cout<<"fees = "<<fees<<endl;
        cout<<"age = "<<age<<endl;
    }
};
int main(){
    student s1;
    s1.name = "ram";
    s1.age = 25;
    s1.fees = 10;
    s1.display();

    return 0;
}