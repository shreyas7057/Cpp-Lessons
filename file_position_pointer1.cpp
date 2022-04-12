// seekp() function demonstration

#include<iostream>
#include<fstream>

using namespace std;

class student {

    int rno;
    char name[20] = "shreyas";

    public:
        void getdata() {

            // name = 'Shreyas';
            rno = 1;
        }

        void putdata() {

            cout<<rno<<" "<<name<<endl;
        }

        void DisplayRecordAtPosition(int);
};


void student::DisplayRecordAtPosition(int n) {

    ofstream ofs;
    ofs.open('readthis1.dat',ios::out|ios::binary);
    cout<<"Size of record: "<<sizeof(*this)<<endl;
    ofs.seekp((n-1)*sizeof(student));
    ofs.write((char*)this,sizeof(student));
    ofs.close();

    ifstream ifs;

    ifs.open('readthis1.dat',ios::in|ios::binary);
    ifs.seekg((n-1)*sizeof(student));
    ifs.read((char*)this,sizeof(student));
    putdata();
    ifs.close();
}


int main() {

    student s;
    int pos = 1;

    s.getdata();
    cout<<"record no: "<<pos<<"(position int file "<<pos-1<<")"<<endl;

    s.DisplayRecordAtPosition(pos);

    return 0;

}