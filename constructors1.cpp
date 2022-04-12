// parametrized constructors

// display 2 numbers


#include<iostream>

using namespace std;


class ParaA {
    int b,c;

    public:
        ParaA(int b1,int c1) {
            b = b1;
            c = c1;
        }

    int getX() {
        return b;
    }

    int getY() {
        return c;
    }
};

int main() {

    ParaA obj(10,5);

    cout<<obj.getX();
    cout<<obj.getY();


}