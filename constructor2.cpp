// copy constructors

// display 2 numbers

#include<iostream>

using namespace std;

class Point {

    int x,y;

    public:

        Point(int x1,int y1) {
            x = x1;
            y = y1;
        }
        Point(const Point & p2) { //it is copy construtors
            x = p2.x;
            y = p2.y;
        }

        int getx() {

            return x;
        }

        int gety() {
            return y;
        }

};


int main() {


    Point obj(10,10); //normal constructor is called
    Point obj1 = obj; // copy constructor is called

    cout<<obj.getx();
    cout<<obj.gety();

    cout<<obj1.getx();
    cout<<obj1.gety();
}