// check no as even or odd or neither both

#include<iostream>

using namespace std;

int main() {

    int num;

    cout<<"Enter number: ";
    cin>>num;


    if(num!=0) {

        if (num%2==0) {
            cout<<num<<" is even number";
        }
        else {
            cout<<num<<" is odd number";
        }
    }

    else {
        cout<<num<<" is zero which is not even or odd";
    }

    return 0;

}