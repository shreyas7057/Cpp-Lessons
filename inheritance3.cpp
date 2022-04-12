// hierarchical inheritance


#include<iostream>

using namespace std;

class vehicle {

    public:

        // constructor
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};


class car:public vehicle {

};


class bus:public vehicle {

};


int main() {

    car c;
    bus b;
    return 0;
}