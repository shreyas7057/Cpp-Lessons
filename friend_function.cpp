#include<iostream>

using namespace std;


class Box {

    double width;

    public:

        double length;

        friend void printwidth(Box box);

        void setwidth(double wid);
};

void Box::setwidth(double wid) {

    width = wid;

}

void printwidth(Box box) {

    cout<<"Width of box: "<<box.width<<endl;
}


    return 0;


    Box box;
    box.setwidth(10);
    printwidth(box);

    return 0;

}