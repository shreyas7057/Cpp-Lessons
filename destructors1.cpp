#include<iostream>

using namespace std;


class students {

    public:

        int rol_no;


        // destructor
        ~students() {

            cout<<"Destructor is called for roll no."<<rol_no<<endl;
        }
};


int main() {

    students obj;

    obj.rol_no = 4;

    int i = 0;

    while(i<5) {

        students obj2;
        obj2.rol_no = i;
        i++;
    }

    return 0;
}