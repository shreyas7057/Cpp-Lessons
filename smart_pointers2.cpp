// weak pointer


#include<iostream>
#include<memory>

using namespace std;

class B;

class A {

    public:
        int a;

        shared_ptr<B> ptr;
        A(int value=250) {
            a = value;
        }

        ~A() {
            cout<<"Destructure for A."<<endl;
        }

};


class B {

    public:

        int a;

        shared_ptr<A> ptr;

        B(int value=250) {
            a = value;
        }

        ~B() {

            cout<<"Destrctor for B"<<endl;
        }
};

int main() {

    shared_ptr<A> ptr_A = make_shared<A>(500);
    shared_ptr<B> ptr_B = make_shared<B>(500);

    ptr_A->ptr = ptr_B;
    ptr_B->ptr = ptr_A;
    
    return 0;

}