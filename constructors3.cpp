// all constructors used here


#include<iostream>
#include<iomanip>

using namespace std;


class time {

    int hr,min,sec;

    public:
        
        // default constructor
        time() {
            hr = 0;
            min = 0;
            sec = 0;
        }


        // paramterrize constructor
        time(int a,int b,int c) {
            hr = a;
            min = b;
            sec = c;
        }

        // member func

        void add(time x,time y) {
            hr = x.hr+y.hr;
            min = x.min+y.min;
            sec = x.sec+y.sec;
        }

        // member func
        void display() {

            cout<<std::setw(2)<<std::setfill('0')<<hr<<":"<<min<<":"<<sec;
        }

};

int main() {

    int h,m,s;

    cout<<"Enter time in hr//min//sec";

    cin>>h>>m>>s;

    // create obj
    time obj1(h,m,s);

    cout<<"Enter time in hr/min/sec";

    cin>>h>>m>>s;

    time obj2(h,m,s);

    time obj3;

    obj3.add(obj1,obj2);

    obj3.display();

    return 0;
}