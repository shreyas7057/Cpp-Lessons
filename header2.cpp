// using header1.h file here

#include "header1.h"
#include<iostream>

using namespace std;

int main() {

    cout<<"Welcome here"<<endl;

    int positive_integer;

    cout<<"Enter positive integer: ";
    cin>>positive_integer;

    cout<<"Factorial of integer is: "<<factorial(positive_integer);
    return 0;
}