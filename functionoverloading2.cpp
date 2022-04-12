#include<iostream>

using namespace std;

// overloading using different no of parameters


void display(int var1,double var2) {

    cout<<"Integer number="<<var1<<endl;
    cout<<"double number is: "<<var2<<endl;
}


void display(double var) {

    cout<<"double number= "<<var<<endl;
}

void display(int var) {

    cout<<"integer number: "<<var<<endl;
}


int main() {

    int a= 5;
    double b=5.5;

    display(a);
    display(b);
    display(a,b);

    return 0;
}