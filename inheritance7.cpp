// office app


#include<iostream>
#include<string>

using namespace std;


class person {

    public:

        int code;
        string name;

        // constructor
        person() {

            name = "user";
            code = 0;
        }

        void getdata() {

            cout<<"Enter name: ";
            cin>>name;
        }

        void showdata() {

            cout<<name<<endl;
        }
};


class account:virtual public person {

    public:

        int pay;

        account() {

            pay = 1000;
        }

        void getdata() {

            person::getdata();
            cout<<"Enter your pay"<<endl;
            cin>>pay;
        }

        void showdata() {
            person::showdata();
            
            cout<<pay;
        }
};

class admin:virtual public person {

    public:
        int experience;

        admin() {

            experience = 1;
        }

        void getdata() {

            person::getdata();
            cout<<"Enter your experinece: "<<endl;
            cin>>experience;
        }

        void showdata() {

            person::showdata();

            cin>>experience;
        }
};


class master:public account, public admin {

    public:
        void getdata() {

            cout<<"Enter name: "<<endl;
            cin>>name;

            cout<<"Enter code: "<<endl;
            cin>>code;

            cout<<"Enter pay: "<<endl;
            cin>>pay;

            cout<<"Enter experience: "<<endl;
            cin>>experience;
        }

        void showdata() {

            cout<<name<<endl;
            cout<<code<<endl;
            cout<<pay<<endl;
            cout<<experience<<endl;
        }

};


int main() {

    // master obj;
    // obj.getdata();
    // obj.showdata();

    int ch,chq;

    cout<<"Choose anyone option 1) Create 2) Update 3) Display"<<endl;

    cin>>ch;

    switch (ch)
    {
    case 1:
        master obj;
        obj.getdata();
        break;

    case 2:
        cout<<"Which data member you want to update: 1)name 2)code 3) pay 4) experience"<<endl;

        cin>>chq;

        
        switch (chq)
        {
        case 1:
            cout<<"Enter name: "<<endl;
            cin>>obj.name;
            break;

        case 2:
            cout<<"Enter code: "<<endl;
            cin>>obj.code;
            break;

        case 3:
            cout<<"Enter pay: "<<endl;
            cin>>obj.pay;
            break;

        case 4:
            cout<<"Enter experience: "<<endl;
            cin>>obj.experience;
            break;
        }
        break;
    
    case 3:
        obj.showdata();
        break;

    
    default:
        break;
    }

    return 0;
}