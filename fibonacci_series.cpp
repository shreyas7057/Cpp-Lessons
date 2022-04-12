// fibonacci series till n no. of times

#include <iostream>

using namespace std;


int main() {

    int n,t1=0,t2=1,nextTerm = 0;

    cout<<"Enter number of terms: ";
    cin>>n;

    cout<<"Fibonacci series: ";

    for(int i=1;i<=n;++i) {

        if(i==1) { //this will print 1st 2 terms
            cout<<" "<<t1;
            continue;
        }

        if(i==2) {
            cout<<t2<<" ";
            continue;
        }
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;

        cout<<nextTerm<<" ";
    }

    return 0;

}