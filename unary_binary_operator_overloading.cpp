// unary operator overloading

// overloading ++ operator 

#include<iostream>

using namespace std;


class number {

    int x;

    public:

        number() {
            x = 0;
        }

        void display() {

            cout<<"Value of x is: "<<x;
        }

        void operator ++() {

            x = ++x;
        }
};


int main() {

    number obj;

    ++obj;
    obj.display();

    return 0;
}