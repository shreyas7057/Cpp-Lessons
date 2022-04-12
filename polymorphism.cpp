// method overloading

#include<iostream>

using namespace std;


class A {

    float a,b;
    public:

        void display(int x,int y) {
            a = x;
            b = y;
            cout<<a<<" "<<b<<endl;
        }

        // method overrloading
        void display(double x,double y) {
            a = x;
            b = y;
            cout<<a<<" "<<b<<endl;
            
        }
};

int main() {

    A obj;
    obj.display(2.8,3.7);

    return 0;

}