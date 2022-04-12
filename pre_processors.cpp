// demonstrate working of macros

#include<iostream>
#define LIMIT 5

using namespace std;

int main() {

    for(int i=0;i<LIMIT;i++) {
        cout<<i<<endl;
    }

    return 0;
}