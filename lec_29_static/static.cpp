#include <iostream>
using namespace std;
class counter{
    public:
    static int count;
    counter(){
        count++;
    }
};
int counter :: count=0;
int main(){
    counter c1,c2,c3,c4;
    cout<<"couter value = "<<counter::count<<endl;
    return 0;

}