#include<iostream>

using namespace std;

class Box {

    public:
        Box() {
            cout<<"Default constructor"<<endl;

        }

        ~Box() {

            cout<<"Destructor is called"<<endl;
        }
};


int main() {

    Box * myBoxArry = new Box[4];
    delete [] myBoxArry;

    return 0;

}