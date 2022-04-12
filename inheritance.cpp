// types of inheritance:
// Single,multiple,multilevel,hierarchical,multipath

// single inheritance

#include<iostream>

using namespace std;


class vehicle {

    public:

        // constructor
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};

// single inhertiance declare here
class car:public vehicle {

    // content is kept empty so that it will inherit from parent class 

};


int main() {

    car c1;

    return 0;
}