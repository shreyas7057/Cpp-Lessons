// one member func inside class and other outside class

// enter and display student details


#include<iostream>
#include<string>

using namespace std;


class student {
    public:
        string name;
        int rol_no;

        void printName(); //not defined inside class

        void printRoll() {

            cout<<"Enter roll no: "<<rol_no;
        }

};


void student::printName() {

    cout<<"Student name is: "<<name;
}

int main() {


    student obj;

    cout<<"Enter student name: ";
    cin>>obj.name;

    cout<<"Enter roll no: ";
    cin>>obj.rol_no;

    obj.printName();
    obj.printRoll();

    return 0;
}