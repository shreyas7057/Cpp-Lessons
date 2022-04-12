// eg: find area and volume of room

#include<iostream>

using namespace std;


class Room {

    public:

        double length,breadth,height;


    // member func
    double calculateArea() {
        return length*breadth;
    }

    double calculateVolume() {

        return length*height*breadth;
    }

};


int main() {

    Room obj1;

    obj1.length;
    obj1.breadth;
    obj1.height;


    cout<<"Enter length,breadth and height"<<endl;

    cin>>obj1.length>>obj1.breadth>>obj1.height;

    cout<<"Area is: "<<obj1.calculateArea()<<endl;
    cout<<"Volume is: "<<obj1.calculateVolume()<<endl;
}