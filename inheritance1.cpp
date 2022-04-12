// multiple inhertiance


#include<iostream>

using namespace std;

class vehicle {

    public:

        // constructor
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};


class fourWheeler {

    public:

        // constructor
        fourWheeler() {

            cout<<"this is 4 wheeler vehicle.";
        }
};


// multiple inherticance (derived class)

class car:public vehicle,public fourWheeler {

};


int main() {

    car c;

    return 0;
}