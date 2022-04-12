#include<iostream>

using namespace std;

class Adder {
    int total;
    public:

        Adder(int i=0) {
            total = i;

        }

        void addNum(int number) {
            total += number;
        }

        int getTotal() {

            return total;
        }
};


int main() {

    Adder obj;
    obj.addNum(2);
    obj.addNum(10);
    obj.addNum(20);

    cout<<"Total is: "<<obj.getTotal();



    return 0;

}