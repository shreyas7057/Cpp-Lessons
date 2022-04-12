// tellp() func demo


#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;


int main() {

    fstream file;

    file.open("readthis2.dat",ios::out);
    file<<"C++";

    cout<<"The current position of pointer is: "<<file.tellp()<<endl;

    file.close();
}