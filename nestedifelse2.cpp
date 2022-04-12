// to check greater num from 3 nums


#include<iostream>

using namespace std;


int main() {

    int a,b,c;

    cout<<"Enter 3 numbs: ";
    cin>>a>>b>>c;

    if(a>b) {
        if(a>c) {
            cout<<a<<" is greater";
        }
        else {
            cout<<c<<" is greater";
        }
    }
    else {
        
        if(b>c) {
            cout<<b<<" is greater";
        }
        else {
            cout<<c<<" is greater";
        }
    }
}