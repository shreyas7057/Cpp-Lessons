// create simple calculator

#include<iostream>

using namespace std;


int main() {

    char oper;
    float num1,num2;

    cout<<"Enter your operation(+,-,/,*)"<<endl;
    cin>>oper;

    cout<<"Enter 2 nums";
    cin>>num1>>num2;

    switch(oper) {

        case '+': 
            cout<<"Addition is: "<<num1+num2<<endl;
            break;

        case '-': 
            cout<<"Subtraction is: "<<num1-num2<<endl;
            break;

        case '/':
            cout<<"Division is: "<<num1/num2<<endl;
            break;


        case '*':
            cout<<"Multiplication is: "<<num1*num2<<endl;
            break;

        default:
            cout<<"Operator is wrong";
    }

}