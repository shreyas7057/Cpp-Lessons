// tellg() func demonstration


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main() {

    string str = "C++";
    istringstream in(str);

    string word;

    in>>word;
    cout<<"After reading word: "<<in.tellg()<<"\n";
}
