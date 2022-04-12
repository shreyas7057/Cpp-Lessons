#include<iostream>

using namespace std;


class implementAbstraction {

    int a,b;

    public:

        void setValue(int x,int y) {
            a = x;
            b = y;
        }

        void display() {

            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;

        }
};



int main() {

    implementAbstraction obj;
    obj.setValue(10,20);
    obj.display();

    return 0;

}