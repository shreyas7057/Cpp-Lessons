#include<iostream>
#include<string>

using namespace std;

class Animal {

    string type;

    public:
        Animal():type("Animal") {}
            virtual string getIype(){
            
                return type;
            }
};

class Dog:public Animal {

    string type;

    public:
        Dog():type("Dog") {

        }

        string getIype() override{
            
                return type;
            }
};


class Cat: public Animal {

    string type;

    public:
        Cat():type("Cat") {

        }

        string getIype() override{
            
                return type;
            }

};


void print(Animal * ani) {

    cout<<"Animal: "<<ani ->getIype()<<endl;
}


int main() {

    Animal* animal = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal);
    print(dog1);
    print(cat1);


    return 0;
}