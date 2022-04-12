// sum of number

#include <iostream>

using namespace std;

int main() {

    int number,sum=0;

    cout<<"Enter number: ";
    cin>>number;

    while(number>=0) {
        sum+= number;
        cout<<"Enter number: ";
        cin>>number;
    }

    cout<<"\n Sum is "<<sum<<endl;

    return 0;


}