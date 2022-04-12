// nmber is even or odd


#include <iostream>

using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    if(n%2==0) {
        cout<<n<<" number is even number"<<endl;
    }
    else {
        cout<<n<<" number is odd number"<<endl;
    }

    return 0;
}

