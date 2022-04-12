#include <iostream>
// print hello world n number of times
using namespace std;

int main() {

    int i = 0,n;

    cout<<"How many times you want to print: ";
    cin>>n;

    while(i<n) {
        cout<<"Hello World"<<endl;
        i++;
    }

    return 0;

}