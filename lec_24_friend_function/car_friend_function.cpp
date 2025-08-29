#include <iostream>
using namespace std;
class car{
    private: string brand,model;
    public: friend void set_data(car & c1,string brand,string model);
    friend void get_data(car & c1);
};

void set_data(car & c1,string brand,string model){
    c1.brand = brand;
     c1.model = model;
}
void get_data(car & c1){
    cout<<"brand = "<<c1.brand<<endl<<"model = "<<c1.model<<endl;
}
int main(){
    car c1;
    set_data(c1,"toyota","fortuner");
    get_data(c1);
    return 0;
}
