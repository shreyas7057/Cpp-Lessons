

#include<iostream>

using namespace std;


class Box {

    private:
            double length;
            double breadth;
            double height;

    public:
        double getVolume() {

            return length*breadth*height;
        }

        void setlength(double len) {

            length = len;
        }

        void setBreadth(double br) {

            breadth = br;
        }

        void setHeight(double he) {

            height = he;
        }


        Box operator+(const Box& b) {//overloading + operator to add 2 box objects

            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;

            return box;

        }

        
};


int main() {

    Box box1;
    Box box2;
    Box box3;

    double volumne = 0.0;

    box1.setlength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    box2.setlength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);

    volumne = box1.getVolume();
    cout<<"Volume of box 1 is: "<<volumne<<endl;

    volumne = box2.getVolume();
    cout<<"Volume of box 2 is: "<<volumne<<endl;

    box3 = box1+box2;

    volumne = box3.getVolume();
    cout<<"Volume of box 3 is: "<<volumne<<endl;

    return 0;
}