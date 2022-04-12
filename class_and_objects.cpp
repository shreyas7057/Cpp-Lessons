// #include<iostream>

// using namespace std;



// class cars {

//     // adding access specifier(private,public,protected)
//     // by default access specifier are private

//     // add data members

//     // add member functions()

// };

// int main() {


//     // create object
//     // classname objectname---syntax
//     cars obj;
//     cars obj2;

//     // calling member funct

//     // obj1.memeberfunctionNmae();

//     // access data members
//     // obj1.variableName;

// }



// eg: find cost of iphone and number of physical sim card slot

#include<iostream>

using namespace std;


class Phone {

    public:
        double cost;
        int slots;


};


int main() {

    // create obj
    Phone obj1;
    Phone obj2;

    // access variables
    obj1.cost = 1000.00;
    obj1.slots = 1;

    obj2.cost = 2000.00;
    obj2.slots = 2;

    cout<<"Cost of Iphone 12: "<<obj1.cost<<" Sim slots count is: "<<obj1.slots<<endl;
    cout<<"Cost of Iphone 12 promax: "<<obj2.cost<<" Sim slots count is: "<<obj2.slots;


    return 0;
    
}