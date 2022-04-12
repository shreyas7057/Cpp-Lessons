#include<iostream>

using namespace std;


class Distance {

    private:
        int feet,inches;

    public:

        Distance() {

            feet = 0;
            inches = 0;
        }

        Distance(int f,int i) {

            feet = f;
            inches = i;
        }

        // assignment opetator overloaidng

        void operator = (const Distance & D) {
            feet = D.feet;
            inches = D.inches;

        }

        void displayDistance() {

            cout<<"F: "<<feet<<"I:"<<inches<<endl;
        }
};

int main() {

    Distance D1(11,10);
    Distance D2(5,11);

    cout<<"First distance: ";
    D1.displayDistance();

    cout<<"Second distance: ";
    D2.displayDistance();

    return 0;
}