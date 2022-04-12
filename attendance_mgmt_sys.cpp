#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<cstdlib>

using namespace std;


int admin_view();
int student_view();
int student_login();
int check_student_credentials(string username,string password);
int get_all_students_by_name();
int get_all_students_by_rollno();
int delete_all_students();
int delete_student_by_rollno();
int check_list_of_students_registered();
int check_presence_count_by_rollno();
int get_list_of_students_with_there_presence_count();
int register_student();
int admin_login();
int register_student();
int mark_my_attendance(string username);
int count_my_attendance(string username);
int check_list_of_all_students_registered();


int dealy() {

    for(int i=0;i<=3;i++) {
        for(int j=0;j<20000;j++) {
            for(int k=0;k<20000;k++) {

            }
        }
    }

    cout<<"\n Exiting Now...";

    for(int i=0;i<=3;i++) {
        for(int j=0;j<20000;j++) {
            for(int k=0;k<20000;k++) {

            }
        }
    }
    return 0;

}


int admin_view() {

    int goBack = 0;

    while(1) {

        system("cls");
        cout<<"\n 1 Register Student";
        cout<<"\n 2 Delete All Student name registered";
        cout<<"\n 3 Delete Student by Roll no.";
        cout<<"\n 4 Check list of student registerd by username";
        cout<<"\n 5 Check presence count of any student by roll no";
        cout<<"\n 6 Get List of student with there attendance count";
        cout<<"\n 0 Go Back<-\n";

        int ch;

        cout<<"Enter your choice\n";
        cin>>ch;

        cout<<"Enter choice: ";
        cin>>ch;


        switch(ch) {

            case 1: 
                register_student();
                break;

            case 2:
                delete_all_students();
                break;

            case 3:
                delete_student_by_rollno();
                break;

            case 4:
                check_list_of_students_registered();
                break;

            case 5:
                check_presence_count_by_rollno();
                break;

            case 6:
                get_list_of_students_with_there_presence_count();
                break;

            case 7:
                goBack = 1;
                break;

            default:
                cout<<"Invalid choice selected...";
                getchar();
        }

        if(goBack==1) {
            break;
        }

    }

    return 0;
}



// function definition

int student_login() {

    system("cls");
    cout<<"\n-----------Student Login----------";
    student_view();
    dealy();
    return 0;
}

int admin_login() {

    system("cls");
    cout<<"\n-----------Admin Login----------";
    string username,password;
    cout<<"\n Enter username: ";
    cin>>username;
    cout<<"\n Enter password: ";
    cin>>password;

    if(username=="admin" && password=="admin") {
        admin_view();
        getchar();
        dealy();
    }

    else {

        cout<<"Invalid Credentails!!!!!!!";
        cout<<"\n Press any key for main menu";
        getchar();
        getchar();
    }

    return 0;
    
}


int check_student_credentials(string username,string password) {
    ifstream read;

    read.open("db.dat");

    if(read) {

        int recordFound = 0;
        string line;
        string temp = username+password+".dat";

        cout<<"\n File name is: "<<temp;

        while(getline(read,line)) {

            if(line==temp) {

                recordFound = 1;
                break;
            }
        }

        if(recordFound == 0)
            return 0;
        else 
            return 1;
    }

    else {

        return 0;
    }
}


int get_all_students_by_name() {

    cout<<"\n Student list by there name: ";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();
    return 0;
}


int get_all_students_by_rollno() {

    cout<<"\n Student list by there roll no: ";
    cout<<"\n Please press any key to continue...";
    getchar();
    getchar();

    return 0;
}


int delete_student_by_rollno() {

    cout<<"\n Delete any student by there roll no: ";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}


int check_presence_count_by_rollno() {

    cout<<"\n Check presence count of any student by roll no: ";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}


int check_list_of_all_students_registered() {

    cout<<"\n Check presence count of all student by roll no: ";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}



int student_view() {

    cout<<"\n -------------STUDENT LOGIN----------";
    string username,password;

    cout<<"Enter username: ";
    cin>>username;

    cout<<"Enter password: ";
    cin>>password;

    int res = check_student_credentials(username,password);

    if(res==0) {

        cout<<"\nInvalid credentials";
        cout<<"\n Press any key for main menu...";

        getchar();
        getchar();

        return 0;
    }

    int goBack = 0;

    while(1) {

        system("cls");
        cout<<"\n 1 Mark Attendance for today";
        cout<<"\n 2 Count my attendance";
        cout<<"\n 0 Go back";
        

        int ch;

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch) {

            case 1:
                mark_my_attendance(username);
                break;

            case 2: 
                count_my_attendance(username);
                break;

            
            case 0:
                goBack = 1;
                    break;

            default:
                cout<<"Invalid choice selected...";
                getchar();
        }

        if(goBack == 1) {
            break;
        }
    }

    return 0;
}


int mark_my_attendance(string username) {

    cout<<"\n Mark attendance for today";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}


int count_my_attendance(string username) {

    cout<<"\n Count attendance for today";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}


int delete_all_students() {


    cout<<"\n Delete all students";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;
}


int check_list_of_students_registered() {

    cout<<"\n List of all registered students";
    cout<<"\n Press any key to continue: ";
    getchar();
    getchar();

    return 0;

}

int get_list_of_students_with_there_presence_count() {

    cout<<"\n CheckList of all registered students by username";
    
    ifstream read;

    read.open("db.dat");

    if(read) {

        int recordFound = 0;
        string line;

        while(getline(read,line)) {
            char name[100];
            strcpy(name,line.c_str());
            char onlyname[100];
            strncpy(onlyname,name,(strlen(name)-4));
            cout<<"\n"<<onlyname;
        }

        read.close();
    }

    else {

        cout<<"\n No record found";
    }

    cout<<"\n Press any key to continue";
    getchar();
    getchar();

    return 0;
}


int register_student() {

    cout<<"\n --------Register student------------";
    string name,username,password,rollno,address,father,mother;
    cout<<"\n Enter your name";
    cin>>name;
    cout<<"\n Enter your username";
    cin>>username;
    cout<<"\n Enter your password";
    cin>>password;
    cout<<"\n Enter your rollno";
    cin>>rollno;

    getchar();
    char add[100];

    cout<<"\n Enter your address";
    cin.getline(add,100);
    cout<<"\n Enter your father";
    cin>>father;
    cout<<"\n Enter your mother";
    cin>>mother;


    ifstream read;
    read.open("db.dat");

    if(read) {

        int recordFound=0;
        string line;

        while(getline(read,line)) {

            if(line==username+".dat") {

                recordFound = 1;
                break;
            }
        }

        if(recordFound==1) {

            cout<<"\n Username is already registered.";
            getchar();
            getchar();
            dealy();
            read.close();
            return 0;
        }
    }

    read.close();
    ofstream out;

    out.open("db.dat",ios::app);
    out<<username+".dat"<<"\n";
    out.close();

    ofstream out1;
    string temp = username+".dat";
    out1.open(temp.c_str());
    out1<<name<<"\n";
    out1<<username<<"\n";
    out1<<password<<"\n";
    out1<<rollno<<"\n";
    out1<<add<<"\n";
    out1<<father<<"\n";
    out1<<mother<<"\n";
    out1.close();

    cout<<"\n Student registere successfully";
    cout<<"\n Press any key to continue";
    getchar();
    getchar();
    return 0;

}


int main(int argc, char ** argv) {

    while (1) {

        system("cls");
        cout<<"\n Attendance Management System";
        cout<<"\n------------------------------------\n";
        cout<<"\n 1 Student Login";
        cout<<"\n 2 Admin Login";
        cout<<"\n 0 Exit";
        
        int ch;

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch) {

            case 1:
                student_login();
                break;

            case 2:
                admin_login();
                break;

            case 0:

                while(1) {

                    system("cls");
                    cout<<"Are you sure you want to exit(Y/N)";

                    char ex;

                    cin>>ex;

                    if(ex=='y' || ex=='Y' ) {
                        exit(0);
                    }
                    else if(ex=='n' || ex== 'N') {
                        break;
                    }

                    else {

                        cout<<"Invalid choice";
                        getchar();
                    }
                }
                break;

            default:
                cout<<"Invalid choice....";
                getchar();
        }
    }

    return 0;
} 