// check num is +ve,-ve,0

#include <iostream>

using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    if(n==0) {
        cout<<n<<" number is zero"<<endl;
    }
    else if (n>0) {
        cout<<n<<" number is positive"<<endl;
    }

    else {
        cout<<n<<" number is negative"<<endl;
    }
    

    return 0;
}