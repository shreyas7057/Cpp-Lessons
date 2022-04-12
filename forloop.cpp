// raise number m by n and take default value 2 if m not entered

#include<iostream>

using namespace std;

void power(double base,int exp=2) {

    double ans = 1;

    for (int i = 0; i <= exp; i++)
    {
        ans = ans*base;
    }
    cout<<ans;
    
}

int main() {

    int n;
    double m;   
    char ch;


    cout<<"Enter base value: ";
    cin>>m;

    cout<<"Do you want to input exponent value: "<<endl;

    cin>>ch;

    if(ch=='Y' || ch == 'y') {

        cout<<"Enter exponent value: ";
        cin>>n;

        // calling func
        power(m,n);
    }

    else {
        power(m);
    }

    return 0;
}

