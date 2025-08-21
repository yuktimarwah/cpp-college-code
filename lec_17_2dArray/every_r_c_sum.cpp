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
    int row_sum[3]={0};
    int col_sum[3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            row_sum[i]+=matrix[i][j];
            col_sum[j]+=matrix[i][j];
        }
    }
    cout<<"row sum"<<" ";
    for(int i=0;i<3;i++){
        cout<<row_sum[i]<<" ";
    }
    cout<<endl;
    cout<<"column sum"<<" ";
    for(int j=0;j<3;j++){
        cout<<col_sum[j]<<" ";
    }
    return 0;

}