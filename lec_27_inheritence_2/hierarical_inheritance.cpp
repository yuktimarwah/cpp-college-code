#include <iostream>
using namespace std;
class employee{
    public :
    void work(){
        cout<<"working at google as SDE."<<endl;
    }
};
class developer : public employee{
        public:void react(){cout<<"i am a pro react developer"<<endl;}
    };
    class tester:public employee{
        public: void test(){cout<<"testing the react application"<<endl;}
    };
int main(){
    developer d; tester t;
    d.work();d.react();
    t.work();t.test();
    
}