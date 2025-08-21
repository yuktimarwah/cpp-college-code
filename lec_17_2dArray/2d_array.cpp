/*
//2-d Array
// is a type of array where we store the data into the rows and columns.
//declaration:-
syntax:- int matrix[rows][columns];
ex:- int matrix[3][3];
*/
#include <iostream>
using namespace std;
int main(){
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
           
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix[i][j]<<" ";
           
        }
        cout<<endl;
    }

}