// to demonstrate working of exception

#include<iostream>

using namespace std;

int test(int a) {

    try {

        if(a>0) {
            throw a;
        }
        else {
            throw 'a';
        }
    }
    catch(int a) {
        cout<<"Exception caught"<<endl;
    }

    catch(char a) {
        cout<<"Caught character"<<a<<endl;
    }

    return 0;
}

int main() {


    cout<<"Multiple catches"<<endl;

    test(10);
    test(-1);
       

    return 0;
}