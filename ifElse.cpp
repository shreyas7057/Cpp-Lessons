// check number is +ve or not

#include <iostream>

using namespace std;

int main() {
    int n;

    cout<<"Enter number: ";

    cin>>n;

    if(n>0) {
        cout<<n<<" is positive number"<<endl;
    }
    else {
        cout<<n<<" is negative number"<<endl;
    }
    return 0;
}