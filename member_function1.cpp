// inches to feet
// member func outside class


#include<iostream>

using namespace std;

class DB {

    double ft,inch;

    public:
        // declare memeber func
        double convert();
        void display();
};

// adding context of func
double DB::convert() {

    cout<<"Enter the value in feet: "<<endl;
    cin>>ft;

    inch = ft*12;
}   

void DB::display() {

    cout<<"The value in inches is: "<<inch;
}

int main() {

    DB obj;

    obj.convert();
    obj.display();

    return 0;
}

