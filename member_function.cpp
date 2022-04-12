// to enter and display student details


#include<iostream>

using namespace std;


// member fucntion declare inside the class

class student {

    public:
        char name[30],clas[20];
        int rol,age;

        
        // declare member func
        void enter() {
            cout<<"Enter student name: "<<endl;
            cin.getline(name,30);

            cout<<"Enter student age: "<<endl;
            cin>>age;

            cout<<"Enter student roll: "<<endl;
            cin>>rol;

            cout<<"Enter student class: "<<endl;
            cin.getline(clas,20);
        }

        void display() {

            cout<<"\n Age\tName\tRoll No\t Class"<<endl;
            cout<<"\n"<<age<<"\t"<<name<<"\t"<<rol<<"\t"<<clas;
        }

};


int main() {

    student obj;

    obj.enter();
    obj.display();

    return 0;
}