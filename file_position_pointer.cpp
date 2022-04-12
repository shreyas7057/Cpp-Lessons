// seekg() tellg() seekp() tellp()


// seekg(): syntax: 1) istream&seekg(streampos position);  2) istream&seekg(streamoff offset, ios_base::seekdir dir);

// ios_base::beg();
// ios_base::cur();
// ios_base::end();


// seekg() function demonstration

#include<iostream>
#include<fstream>

using namespace std;


int main(int argc, char** argv) {

    fstream myFile("readthis1.txt",ios::in|ios::out|ios::trunc);

    myFile<<"Hello world";

    myFile.seekg(6,ios::beg);
    char A[6];
    myFile.read(A,5);
    A[5] = 0;
    cout<<A<<endl;
    myFile.close();

    

}


