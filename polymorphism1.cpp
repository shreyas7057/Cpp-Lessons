// method overriding

#include<iostream>

using namespace std;


class A {

    public:
        // by adding virtual in front of void then it will not inherit any methods
        void display() {
            cout<<"This is parent class"<<endl;
        }
};


class B:public A {

    public:
        void display() {
            cout<<"This is child class"<<endl;
        }
};


int main() {

    // making pointer
    A *p;

    // obj for B
    B obj;

    p = &obj;
    p->display();

    return 0;
}