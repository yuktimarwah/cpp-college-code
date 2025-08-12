#include <iostream>
#include <cmath>
using namespace std;
const float PI= 3.14;
const float USD_TO_IND = 83.00;
float addition(float num1,float num2){
    return num1 + num2;
}
float subtraction(float num1,float num2){
    return num1 - num2;
}
float multiplication(float num1,float num2){
    return num1 * num2;
}
float division(float num1,float num2){
    if(num2!=0){
        num1/num2;
    }
    else{
        cout<<"cant divide my 0";
    }
}
float area_circle(float p,float r){
    return p*r*r;
}
float area_rectangle(float l,float b){
    return l*b;
}
float area_triangle(float l,float b){
    return 0.5*l*b;
}
float vol_cylinder(float r,float h){
    return 2*PI*r*h;
}
float vol_shere(float r){
    return (4/3)*PI*r*r*r;

}
float sq_root(float num){
    return sqrt(num);
}
float power_of(float base,float exponent){
    return pow(base,exponent);
}
float ind_to_usd(float ind){
    return ind / USD_TO_IND;
}
float usd_to_ind(float usd){
    return usd*USD_TO_IND;
}
float celcius_to_farenheit(float c){
    return (c*(9/5))+32;
}
float farenheit_to_celcius(float f){
    return (f-32)*(5/9);
}

int main(){
    int main_choice;
    cout<<"1. calculator"<<endl;
    cout<<"2. unit conversions"<<endl;
    cout<<"3. geometry calculations"<<endl;
    cout<<"4. miscellaneous"<<endl;
    cin>>main_choice;
    switch(main_choice){
        case 1:{
            



            break;
        }
        
        case 2:{
            break;

        }
        
        case 3:{

            break;
        }
        
        case 4:{
            break;

        }
        
        default: cout<<"invalid main choice";
    }
 return 0;
}


float num1,num2;
    char oper;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    cout<<"enter operator(+,-,*,/)";
    cin>>oper;
    int result;
    switch(oper){
        case '+': result =addition(num1,num2);
        break;
        case '-': result =subtraction(num1,num2);
        break;
        case '*':  result =multiplication(num1,num2);
        break;
        case '/':  result =division(num1,num2);
        break;
        
        default: cout<<"invalid operator"<<endl;
}
cout<<"final answer:"<<result;