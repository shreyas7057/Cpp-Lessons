#include<iostream>

using namespace std;

class Base {

    public:

        virtual void print() {

            cout<<"Base function"<<endl;
        }
};


class Derived:public Base {

    public:

        void print() {

            cout<<"Derived Function"<<endl;
        }
};

int main() {

    Derived obj;

    Base * base1 = &obj; //pointer of base type points to obj
    base1 -> print(); //calls member function of derived class

    return 0;
}