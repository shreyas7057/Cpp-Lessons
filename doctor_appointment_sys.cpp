#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;


int bookAppointment() {

    system("cls");

    cout<<"\n------Book Doctor Appointment-----\n";
    cout<<"\n------Available Slots-----\n";

    ifstream read;

    read.open("appointment.dat");

    int hoursbook = 8;
    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int recordFound = 0;

    if(read) {

        string line;
        char key = 'A';
        int i = 9;

        while(getline(read,line)) {
            char temp = line[0];
            int index = (temp-65);
            arr[index] = 1;

        }

        if(recordFound == 1) {
            cout<<"\n Appointment summary by hours: ";
            char key = 'A';
            int hours = 9;
            
            for(int i=0;i<=12;i++) {
                if(i==0) {

                    if(arr[i]==0) {
                        cout<<"\n"<<key<<"-> 0"<<hours<<"- Available";
                    }
                    else {
                        cout<<"\n"<<key<<"-> 0"<<hours<<"- Booked";
                    }
                }
                else {
                    if(arr[i]==0) {
                        cout<<"\n"<<key<<"-> "<<hours<<"- Available";
                    }
                    else {
                        cout<<"\n"<<key<<"-> "<<hours<<"- Booked";
                    }
                }
                hours++;
                key++;
            }


        }

        read.close();
    }

    if(recordFound==0) {

        cout<<"\n Appointment Available for following hours: ";
        char key = 'A';

        for(int i=9;i<=21;i++) {

            if(i==9) {
                cout<<"\n"<<key<<"-> "<<i<<"- Available";
            }
            else {
                cout<<"\n"<<key<<"-> "<<i<<"- Booked";
            }
            key++;
        }
    }

    char choice;
    cout<<"\n Enter your choice: ";
    cin>>choice;

    if(!(choice>='A' && choice<='Z')) {

        cout<<"\n Error: Invalid section";
        cout<<"\n Please select correct value from menu";
        cout<<"\n Press any key to continue";

        getchar();
        getchar();

        system("cls");
        bookAppointment();
    }

    int index = (choice-65);
    int isBooked = 1;
    if(arr[index]== 0)  {
        isBooked = 0;
    }

    if(isBooked == 1) {
        cout<<"\n Error: Appointment is already booked.";
        cout<<"\n Please select different time";
        cout<<"\n Press any key to continue";
        getchar();
        getchar();
        bookAppointment();
        
    }

    string name;
    cout<<"\n Enter first name: ";
    cin>>name;

    ofstream out;
    out.open("appointment.dat",ios::app);

    if(out) {
        out<<choice<<":"<<name.c_str()<<"\n";

        out.close();
        cout<<"\n Appointment booked for Hours: "<<(choice-65)+9<<"successfully";
    }

    else {
        cout<<"\n Error while saving booking";
    }

    cout<<"\n Please enter any key to continue";
    getchar();
    getchar();

    return 0;
}


int existing_appointment() {

    system("cls");

    cout<<"\n ----------Appointment Summary----------";

    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;
    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int recordFound = 0;


    if(read) {

        string line;
        char key = 'A';
        int i = 9;

        while(getline(read,line)) {

            char temp = line[0];
            int index = (temp-65);
            arr[index] = 1;
            recordFound = 1;

        }

        if(recordFound == 1) {
            cout<<"\n Appointment summary by hours";

            char key='A';
            int hours = 9;

            for(int i=0;i<=12;i++) {
                if(arr[i]==0)
                    cout<<"\n"<<key<<"->"<<hours<<"-Available";

                else
                    cout<<"\n"<<key<<"->"<<hours<<"-Booked";
                
                hours++;
                key++;
            }
        }

        read.close();
    }

    else {

        char key = 'A';

        for(int i=9;i<=21;i++) {
            if(i==9) {

                cout<<"\n"<<key<<"-> 0"<<i<<"- Available";
            }
            else {
                cout<<"\n"<<key<<"-> "<<i<<"- Available";
            }
            key++;

        }
    }

    cout<<"\n Please enter any key to continue";
    getchar();
    getchar();
    return 0;
    
}


int main(int argc, char** argv) {

    while(1) {

        system("cls");

        cout<<"\n Doctor Appointment System\n";
        cout<<"-----------------------------\n";
        cout<<"\n 1) Book Appointment";
        cout<<"\n 2) Check Existing Appointment";
        cout<<"\n 0) Exit";

        int choice;

        cout<<"\n Enter your choice";
        cin>>choice;

        switch(choice) {

            case 1:
                bookAppointment();
                break;

            case 2:
                existing_appointment();
                break;

            case 0:
                while(1) {
                    system("cls");
                    cout<<"\n Are you sure you want to exit(Y/N)";
                    char ex;
                    cin>>ex;

                    if(ex=='Y'||ex=='y') {
                        exit(0);
                    }
                    else if (ex=='n'||ex=='N'){
                        break;
                    }
                    else {
                        cout<<"\n Invalid Option";
                        getchar();

                    }
                }
                break;

            default:
                cout<<"\n Invalid choice";
                getchar();
        }


    }

    return 0;

}