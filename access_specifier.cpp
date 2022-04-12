// calc area of circle
// by default data types are private so no need to write private keyword
// private: access specifier


#include<iostream>

using namespace std;

class Circle {

    
    double radius;

    public:
        double compute_area(double r) {

            radius = r;
            double area;

            area =  3.14*radius*radius;

            cout<<"Area is: "<<area;
        }

};

int main() {

    Circle obj;


    obj.compute_area(13);

    
    return 0;
    
}