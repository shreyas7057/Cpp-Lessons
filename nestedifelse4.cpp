// check user is adult,child or teen


#include<iostream>

using namespace std;

int main() {

    int age;

    cout<<"Enter you age: ";
    cin>>age;

    if(age>13) {
        if(age>=18) {
            cout<<"You are adult";
        }
        else {
            cout<<"You are teen";
        }
    }
    else {

        if(age>0) {
            cout<<"You are child";
        }
        else {
            cout<<"You entered wrong age";
        }
    }



    return 0;
}