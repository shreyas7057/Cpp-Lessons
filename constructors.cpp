// default constructor

// display 2 numbers

#include<iostream>

using namespace std;

class DemoDC {

    int num1,num2;

    public:
        // default constructor
        DemoDC() {
            num1 = 10;
            num2 = 20;
        }

        void display() {
            cout<<num1<<" "<<num2;
        }
};

int main() {

    DemoDC obj;

    obj.display();

    return 0;
}