

#include<iostream>


using namespace std;


class students{

    public:

        void func(int x) {

            cout<<"Value of x is: "<<x<<endl;

        }

        void func(int x,int y) {
            cout<<"Value of x and y is: "<<x<<" "<<y<<endl;
        }
};


int main() {

    students obj;
    obj.func(3);
    obj.func(4.1);
    obj.func(4,5);

    return 0;
}