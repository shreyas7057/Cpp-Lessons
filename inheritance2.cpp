// multilevel inhertiance

#include<iostream>

using namespace std;


class vehicle {

    public:

        // constructor
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};



class fourWheeler:public vehicle {

    public:

        // constructor
        fourWheeler() {

            cout<<"Objects with 4 wheeler vehicles";
        }
};



class car:public fourWheeler {

    public:

        car() {

            cout<<"car has 4 wheelsl";
        }

};

int main() {

    car c;

    return 0;

}