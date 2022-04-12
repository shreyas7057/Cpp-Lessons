// destructors does not have return type and paramters


#include<iostream>

using namespace std;


class Hello_World {

    public:

        // constructor
        Hello_World() {

            cout<<"Constructor is called"<<endl;
        }

        // destructor
        ~Hello_World() {
            cout<<"Destructor is called"<<endl;
        }

        // member func
        void display() {
            cout<<"Hello world";
        }
};


int main() {

    Hello_World obj;

    obj.display();


    return 0;

    
}