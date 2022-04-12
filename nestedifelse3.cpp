// check student is passed or fail if marks is 100 then output is perfect

#include<iostream>

using namespace std;


int main() {


    int marks;

    cout<<"Enter marks";
    cin>>marks;

    if(marks>=50) {

        cout<<"You passed with "<<marks<<endl;

        if(marks==100) {
            cout<<"Perfect you got"<<marks<<endl;
        }
    }

    else {
        cout<<"You failed and got"<<marks<<endl;
    }


}