// bank app simple

// protected: access specifier


#include<iostream>
#include<cstdlib>
#include<string>


using namespace std;


class Bank {

    char name[15];
    char acc_type;
    long int acc_no;
    double bal;

    public:
        void getValue();
        double dep();
        void wid();
        void display();

};


void Bank::getValue() {

    cout<<"Enter your name"<<endl;
    cin.getline(name,15);

    cout<<"Enter account type: Saving(S) Current(C)"<<endl;
    cin>>acc_type;


    // geneate random acc no
    acc_no = rand();
    cout<<"Your acc no is: "<<acc_no<<endl;


    if(acc_type == 'S') {
        bal = 1000;
    }
    else {
        bal = 10000;
    }


}



void Bank:: display() {

    cout<<""<<name;
    cout<<"\n Your balance is: "<<bal;

}


double Bank::dep() {

    int temp;

    cout<<"Enter amount you want to deposit"<<endl;
    cin>>temp;

    

    bal = bal+temp;

    cout<<"Your updated bal is: "<<bal<<endl;
}


void Bank:: wid() {

    int temp;

    cout<<"Enter amount you want to withdraw"<<endl;
    cin>>temp;

    if(temp<bal) {
        bal = bal-temp;
    }
    else {
        cout<<"Insufficient balance";
    }

    cout<<"Your updated bal is: "<<bal<<endl;

}


int main() {


    int ch;

    Bank b1[10];

    for(int i=1;i<=10;i++) {
        b1[i].getValue();

        cout<<"\n Enter your choice: \n 1) Deposit\n2) Withdraw\n3) Display Balance";
        cin>>ch;

        switch(ch) {
            case 1:
                b1[i].dep();
                break;

            case 2:
                b1[i].wid();
                break;

            case 3:
                b1[i].display();
                break;

            default:
                cout<<"Invalid input";
        }
    }

    return 0;
}