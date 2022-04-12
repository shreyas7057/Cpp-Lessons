#include<iostream>

// sum of +ve numbers

using namespace std;


int main() {

    int number=0,sum=0;

    do {
        sum +=number;
        cout<<"Enter number: ";
        cin>>number;
    }
    while (number>=0);
        cout<<"\n the sum is "<<sum<<endl;

    return 0;
}