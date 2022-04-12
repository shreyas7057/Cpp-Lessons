#include<iostream>


using namespace std;

class Base {

    int x;
    public:

        virtual void func() = 0; //pure virtual func since 0 is declared 

        int getx() {

            return 0;
        }

};


class Derived: public Base {

    int y;
    public:
        void func() {

            cout<<"Function is called";
        }
};

int main() {

    Derived d;
    d.func();

    return 0;
}