#include <iostream>
using namespace std;
int main(){
    char o;
    float num1,num2;
    cout<<"Enter operator from: +, -, *, / "<<endl;
    cin>>o;
    cout<<"Enter two operands :"<<endl;
    cin>>num1>>num2;
    switch(o){
        case '+':
           cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2;
           break;
        case '-':
           cout<<"Difference between "<<num1<<" and "<<num2<<" is "<<num1-num2;
           break;
        case '*':
           cout<<"Product of "<<num1<<" and "<<num2<<" is "<<num1*num2;
           break;
        case '/':
           cout<<"Quotient of "<<num1<<" and "<<num2<<" is "<<num1/num2;
           break;
        default:
           //if other operator is being input
           cout<<"Error! Incorrect operator";
           break;
    }
    return 0;
}