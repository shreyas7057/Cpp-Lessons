#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;


class account_query {

    private:
        char account_number[20];
        char firstName[10];
        char lastName[10];
        float total_balance;

    public:
        void read_data();
        void show_data();
        void write_rec();
        void read_rec();
        void search_rec();
        void edit_rec();
        void delete_rec();

};


void account_query::read_data(){

    cout<<"\n Enter account number: ";
    cin>>account_number;
    cout<<"\n Enter first name: ";
    cin>>firstName;
    cout<<"\n Enter last name: ";
    cin>>lastName;
    cout<<"Enter balance: ";
    cin>>total_balance;
    cout<<endl;

}

void account_query::show_data() {

    cout<<"Account number: "<<account_number<<endl;
    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"Current Balance: "<<total_balance<<endl;
    cout<<"--------------------------------"<<endl;
}

void account_query::write_rec() {

    ofstream outfile;
    outfile.open("record.bank",ios::binary|ios::app);
    read_data();
    outfile.write(reinterpret_cast<char *>(this),sizeof(*this));
    outfile.close();
}


void account_query::read_rec() {

    ifstream infile;
    infile.open("record.bank",ios::binary);

    if(!infile) {
        cout<<"Error in opening file or file not found"<<endl;
        return;
    }
    cout<<"\n ***Data From file***"<<endl;

    while(!infile.eof()) {

        if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0) {

            show_data();
        }
    }
    infile.close();
}


void account_query::search_rec() {
    int n;

    ifstream infile;
    infile.open("record.bank",ios::binary);

    if(!infile) {

        cout<<"Error in opening file or file not found"<<endl;
        return;
    }

    infile.seekg(0,ios::end);

    int count = infile.tellg()/sizeof(*this);

    cout<<"\n There are"<<count<<" record in the file";
    cout<<"\n Enter record number to search: ";
    cin>>n;

    infile.seekg((n-1)*sizeof(*this));
    infile.read(reinterpret_cast<char*>(this),sizeof(*this));

    show_data();
}


void account_query::edit_rec() {

    int n;

    fstream iofile;
    iofile.open("record.bank",ios::in|ios::binary);

    if(!iofile) {
        cout<<"Error in opening file or file not found"<<endl;
        return;

    }

    iofile.seekg(0,ios::end);

    int count=iofile.tellg()/sizeof(*this);

    cout<<"\n There are "<<count<<" record in the file";
    cout<<"\n Enter record number to edit: ";
    cin>>n;

    iofile.seekg((n-1)*sizeof(*this));
    iofile.read(reinterpret_cast<char*>(this),sizeof(*this));
    
    cout<<"Record "<<n<<" has following data"<<endl;

    show_data();
    iofile.close();
    iofile.open("record.bank",ios::out|ios::in|ios::binary);
    iofile.seekp((n-1)*sizeof(*this));

    cout<<"\n Enter data to modify "<<endl;
    read_data();

    iofile.write(reinterpret_cast<char *>(this),sizeof(*this));

}


void account_query::delete_rec() {

    int n;

    ifstream infile;
    infile.open("record.bank",ios::binary);

    if(!infile) {
        cout<<"Error in opening file or file not found"<<endl;
        return;
    }
    infile.seekg(0,ios::end);
    int count = infile.tellg()/sizeof(*this);

    cout<<"\n There are "<<count<<" record in the file"<<endl;
    cout<<"\n Enter record number to delete: "<<endl;
    cin>>n;

    fstream tmpfile;

    tmpfile.open("tmpfile.bank",ios::out|ios::binary);

    infile.seekg(0);

    for(int i=0;i<count;i++) {

        infile.read(reinterpret_cast<char *>(this),sizeof(*this));

        if(i==(n-1)) 
            continue;

        tmpfile.write(reinterpret_cast<char*>(this),sizeof(*this));
    }

    infile.close();
    tmpfile.close();

    remove("record.bank");
    rename("tmpfile.bank","record.bank");
}

int main() {

    account_query A;

    int ch;

    cout<<"Account Management system\n"<<endl;

    while(true) {

        cout<<"Select one option";
        cout<<"\n \t1--> Add record";
        cout<<"\n \t2--> Show record";
        cout<<"\n \t3--> Search record";
        cout<<"\n \t4--> Update record";
        cout<<"\n \t5--> Delete record";
        cout<<"\n \t6--> Quit record";

        cout<<"\nEnter choice: ";
        cin>>ch;



        switch(ch) {

            case 1:
                A.write_rec();
                break;
            
            case 2:
                A.show_data();
                break;

            case 3:
                A.search_rec();
                break;

            case 4:
                A.edit_rec();
                break;

            case 5:
                A.delete_rec();
                break;

            case 6:
                exit(0);
                break;

            default:
                cout<<"Wrong choice!!!";
                exit(0);


        }
    } 

    system("pause");
    return 0;
    
}