// hybrid interitance


#include<iostream>

using namespace std;

class vehicle {

    public:

        // constructor
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};


class fare{
    public:

        fare() {

            cout<<"Fare of vehicles is: ";
        }
};


class car:public vehicle {


};

class bus:public vehicle,public fare {


};


int main() {

    bus b;
    

    return 0;
}