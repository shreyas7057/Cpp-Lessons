// calc area of circle

// public: access specifier


#include<iostream>

using namespace std;

class Circle {

    public:
        double radius;
        double calculate_area() {

            return 3.14*radius*radius;
        }
};


int main() {

    Circle obj1;

    obj1.radius = 4;

    cout<<"Area of circle is: "<<obj1.calculate_area();

    return 0;
}