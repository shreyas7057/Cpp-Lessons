#include<iostream>
// #include<conio.h>
#include<cstdlib>
#include<string.h>
#include<cstdio>

using namespace std;


static int p = 0;


class a {

    private:
        char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];

    public:

        void install();
        void allotment();
        void empty();
        void show();
        void avail();
        void position(int i);
}

bus[10];


void vline(char ch) {

    for(int i=80;i>0;i--) {

        cout<<ch;
    }
}


void a::install() {

    cout<<"ENter bus no: ";
    cin>>bus[p].busn;

    cout<<"\n Enter driver name: ";
    cin>>bus[p].driver;

    cout<<"\n Arrival time: ";
    cin>>bus[p].arrival;

    cout<<"\n Enter departure time: ";
    cin>>bus[p].depart;

    cout<<"\n Enter from place: ";
    cin>>bus[p].from;

    cout<<"\n Enter to place: ";
    cin>>bus[p].to;

    bus[p].empty();

    p++;
}

void a::allotment() {

    int seat;
    char number[5];
    top:
        cout<<"Bus no: ";
        cin>>number;

        int n;

        for(n=0;n<=p;n++) {

            if(strcmp(bus[n].busn,number)==0)
                break;
        }

        while(n<=p) {

            cout<<"\n Seat number: ";
            cin>>seat;

            if(seat>32) {
                cout<<"\n There are only 32 seats available";
            }

            else {

                if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0) {
                    cout<<"Enter passengers name: ";
                    cin>>bus[n].seat[seat/4][(seat%4)-1];
                    break;
                }

                else {

                    cout<<"The seat no is already reserved"<<endl;

                }
            }

        }

        if(n>p) {
            cout<<"Enter correct bus no: \n";
            goto top;
        }
}

void a::empty() {

    for(int i=0;i<8;i++) {

        for(int j=0;j<4;j++) {
            strcpy(bus[p].seat[i][j],"Empty");
        }
    }
}


void a::show() {

    int n;
    char number[5];

    cout<<"Enter bus number: ";
    cin>>number;

    for(n=0;n<=p;n++) {
        if(strcmp(bus[n].busn,number)==0) {

            break;
        }
    }

    while(n<=p) {

        vline('*');

        cout<<"\n Bus no: "<<bus[n].busn;
        cout<<"\n Driver: "<<bus[n].driver;
        cout<<"\n Arrival time"<<bus[n].arrival;
        cout<<"\n Departure time: "<<bus[n].depart;
        cout<<"\n From place: "<<bus[n].from;
        cout<<"\n To place: "<<bus[n].to;
        cout<<"\n";

        vline('*');
        bus[0].position(n);

        int a=1;
        for(int i=0;i<8;i++) {

            for(int j=0;j<4;j++) {
                
                a++;

                if(strcmp(bus[n].seat[i][j],"Empty")!=0) 
                    cout<<"\n Sear number is: "<<(a-1)<<" is reserved for"<<bus[n].seat[i][j]<<".";
            }
        }

        break;

    }

    if(n>p) {

        cout<<"\n Enter correct bus number";
    }
}

void a::position(int l) {
    int s=0,p=0;

    for(int i=0;i<8;i++) {
        cout<<"\n";

        for(int j=0;j<4;j++) {
            s++;
            if(strcmp(bus[l].seat[i][j],"Empty")==0) {
                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.width(10);
                cout.fill(' ');
                cout<<bus[1].seat[i][j];
                p++;
            }

            else {

                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.width(10);
                cout.fill(' ');
                cout<<bus[l].seat[i][j];
            }
        }
    }

    cout<<"\n There are "<<p<<" seats empty in bus number "<<bus[l].busn;
}


void a::avail() {

    for(int n=0;n<p;n++) {

        vline('*');
        cout<<"\n Bus no: "<<bus[n].busn;
        cout<<"\n Driver Name: "<<bus[n].driver;
        cout<<"\n Arrival Time: "<<bus[n].arrival;
        cout<<"\n Departure Time: "<<bus[n].depart;
        cout<<"\n From place: "<<bus[n].from;
        cout<<"\n To place: "<<bus[n].to;
        cout<<"\n";


        vline('*');
        vline('_');

    }
}


int main() {

    system("cls");
    int w;

    while(1) {

        cout<<"\n";
        cout<<"\n 1. Install";
        cout<<"\n 2. Reservation";
        cout<<"\n 3. Show";
        cout<<"\n 4. Bus Available";
        cout<<"\n 5. Exit";


        cout<<"Enter choice: ";
        cin>>w;


        switch(w) {

            case 1:
                bus[p].install();
                break;

            case 2:
                bus[p].allotment();
                break;

            case 3:
                bus[0].show();
                break;

            case 4:
                bus[0].avail();
                break;

            case 5:
                exit(0);

            default:
                cout<<"Invalid choice";
        }

    }


    return 0;
}