// macros with argument

#include<iostream>
#define AREA(l,b)(l*b)

using namespace std;

int main() {

    int L1=10,L2 = 5,area;

    area = AREA(L1,L2);

    cout<<area<<endl;

    return 0;
}