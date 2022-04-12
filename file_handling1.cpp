#include<fstream>
#include<iostream>


using namespace std;


int main() {

    char data[100];

    ofstream outfile; //open file here in write mode

    outfile.open("readthis.txt");

    cout<<"Writing to file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data,100);

    outfile<<"Writing to file"<<endl;
    cout<<"Enter your age: "<<endl;

    cin>>data;

    cin.ignore();
    outfile<<data<<endl;
    outfile.close();

    ifstream infile;

    infile.open("readthis.txt");
    cout<<"Reading from file: "<<endl;
    infile>>data;
    cout<<data<<endl;

    infile>>data;

    cout<<data<<endl;

    infile.close();

    return 0;
}