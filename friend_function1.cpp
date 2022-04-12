#include<iostream>

using namespace std;


class ClassB; //forward declaration 

class ClassA {

    int numA;

    friend int add(ClassA,ClassB);
    public:

        ClassA():numA(12) {}
};


class ClassB {
    
    public:

        ClassB():numB(1) {}

    private:
        int numB;
        friend int add(ClassA,ClassB);
};

int add(ClassA obj1,ClassB obj2) {

    return (obj1.numA+obj2.numB);
}


int main() {

    ClassA obj1;
    ClassB obj2;

    cout<<"Sum: "<<add(obj1,obj2);

    return 0;

}