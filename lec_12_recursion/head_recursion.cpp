#include <iostream>
using namespace std;
void print_1_to_5(int n){
    if(n>5){
        return;
    }
    
    print_1_to_5(n+1);
    cout<<n<<endl;
}
int main(){
    print_1_to_5(1);
    return 0;
}

// this is also known as backtracking.