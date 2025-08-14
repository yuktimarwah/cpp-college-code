// recursion => when a function call itself with different parameter, than its known as recursion.
/* types:-
1. head recursion                     1. backtracking
2. tail recursion                     2. binary tree
                                      3. BST
                                      4. Graphs
                                      5. Dynamic Programming
                                      */
#include <iostream>
using namespace std;
void print_1_to_5(int n){
    if(n>5){
        return;
    }
    cout<<n<<endl;
    print_1_to_5(n+1);
}
int main(){
    print_1_to_5(1);
    return 0;
}

// this was tail recursion.
