#include <iostream>

using namespace std;

int main() {

    int a;

    cout<<"Enter number: ";
    cin>>a;

    if(a%5==0 && a%8==0) {
        cout<<a<<" number is divisible by 8 and 5"<<endl;
    } 

    else if(a%8==0) {
        cout<<a<<" number is divisible by 8 only "<<endl;
    }

    else if(a%5==0) {
        cout<<a<<" number is divisible by 5 only."<<endl;
    }

    else {
        cout<<a<<" number is not divisible by 8 and 5"<<endl;
    }
   
   
    return 0;


}