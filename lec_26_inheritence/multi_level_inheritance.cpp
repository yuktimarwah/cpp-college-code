#include <iostream>
using namespace std;
class person{
    public :
    void intro(){
        cout<<"personal details"<<endl;
    }
};
class student:public person{
    public:
    void skills(){
        cout<<"i am a pro react developer"<<endl;
    }
};
class developer :public student{
    public:
    void salary(){
        cout<<"30LPA"<<endl;
    }
};
int main(){
    developer d;
    d.intro();
    d.skills();
    d.salary();
}