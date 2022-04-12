#include<iostream>
#include<string>
#include<fstream>
#include<unistd.h>


using namespace std;


class one {

    public:
        void menu1();
};

void one::menu1() {

    cout<<"\n\n ==================Welcome to Food Ordering App============"<<endl;

    cout<<"\n\n============Start your order============"<<endl;
    cout<<"\n\n=========================================="<<endl;
    cout<<"\t [1] Paneer Masala (Rs.480)\t\t[2] Dry Masala (Rs.280)\t\t[3] Paneer Butter Masala (Rs.440)\t\t[4] Paneer Tikka Masala (Rs.420)\t\t[5] Paneer Bhurji (Rs.180)\t\t[6] Exit\t\t"<<endl;

}

class two:public one {

    protected:
        int pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
        string y,ye;

    public:
        void menu2() {
            ofstream write;
            write.open("order.txt");
            if(!write) {

                cout<<"File cannot open"<<endl;
                exit(-1);
            }

            a:
                b:
                    c:
                        cout<<"\n Enter your order: ";
                        cin>>ch;
                        cout<<"\n\n Do you want to update your order";
                        cin>>ye;

                        if(ye=="Y"||ye=="y") {
                            goto b;
                        }

                        else {
                            switch(ch) {

                                case 1:
                                    cout<<"\n How many pizza you want";
                                    cin>>pizza;

                                    a = 480;
                                    s = s+a*pizza;
                                    write<<"You ordered veggie supreme: 480";
                                    write<<"\n";
                                    write<<"Number of pizza is: "<<pizza;
                                    write<<"\n";
                                    cout<<"\n You ordered veggie supreme "<<endl<<"\t your order successfully saved"<<endl;
                                    break;

                                case 2:
                                    cout<<"\n HOw many pizza you want ";
                                    cin>>pizza;

                                    b = 440;
                                    s = s+b*pizza;
                                    write<<"You ordered paneer";
                                    write<<"\n";
                                    write<<"number of pizza is "<<pizza;
                                    write<<"\n";
                                    cout<<"\n\nYou ordered paneer"<<endl<<"\t your order ssuccessfully saved";
                                    break;

                                case 3:
                                    cout<<"\n HOw many paneer masala you want ";
                                    cin>>pizza;

                                    b = 580;
                                    s = s+b*pizza;
                                    write<<"You ordered paneer";
                                    write<<"\n";
                                    write<<"number of pizza is "<<pizza;
                                    write<<"\n";
                                    cout<<"\n\nYou ordered paneer"<<endl<<"\t your order ssuccessfully saved";
                                    break;

                                
                                case 4:
                                    cout<<"\n HOw many paneer tikka masala you want ";
                                    cin>>pizza;

                                    b = 420;
                                    s = s+b*pizza;
                                    write<<"You ordered paneer";
                                    write<<"\n";
                                    write<<"number of pizza is "<<pizza;
                                    write<<"\n";
                                    cout<<"\n\nYou ordered paneer"<<endl<<"\t your order ssuccessfully saved";
                                    break;

                                case 5:
                                    cout<<"\n HOw many paneer burji you want ";
                                    cin>>pizza;

                                    b = 180;
                                    s = s+b*pizza;
                                    write<<"You ordered paneer";
                                    write<<"\n";
                                    write<<"number of pizza is "<<pizza;
                                    write<<"\n";
                                    cout<<"\n\nYou ordered paneer"<<endl<<"\t your order ssuccessfully saved";
                                    break;

                                case 6:
                                    exit(0);
                                    break;

                                default:
                                    cout<<"invalid choice";


                            }

                            cout<<"\n Do you want another order(Y/N)";
                            cin>>y;

                            if(y=="Y"||y=="y") {
                                goto a;
                            }

                            else {
                                cout<<"\n Thank you for your order";
                            }

                            for(int a=1;a<0;a++) {
                                Sleep(500);
                                cout<<"....";
                            }
                            cout<<"\n\n\t";
                            system("PAUSE");
                        }
                        
        system("cls");
        cout<<"\n\t\t ========================"<<endl;
        cout<<"---------Food Ordering App---------------"<<endl;
        cout<<"\n\t\t ========================"<<endl;

        cout<<endl;
        cout<<endl;
        cout<<"\t\t Bill No:CP51        Order No:NP1353"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\tCaheri:Ashish"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Your total bill is: "<<s<<endl;

        write<<"\t\t\t\t TOTAL BILL IS: "<<s;
        cout<<"\n\t\t\t\t================="<<endl;

        write.close();
    }

    void show1() {

        menu1();
        menu2();
    }
};


class three:public one,public two {
    public:

        void total() {

            long int userId;
            d:
                cout<<"\n\t\t---------------------------------";
                cout<<"\n\nEnter Login Id=";
                cin>>userId;
                
                if(userId!=1353) {
                    cout<<"\n enter correct user id";
                    goto d;
                }

                else {
                    z:
                        string pwd="pass";
                }

                string pass = "";
                char c;
                cout<<"\n\n\n\t\t\t\t Password=";
                p:
                    c=_getch();
                    cout<<"*";

                    if(c!=13) {
                        pass = pass+c;
                        goto p;
                    }
                    if(pass==pwd) {
                        cout<<"\n\n\t\tAccess Granted"<<endl;
                        system("PAUSE");
                        system("cls");
                        show1();
                    }
                    else {
                        cout<<"Wrong Passowrd";
                        goto x;
                    }
        }

};


int main() {

    three obj1;
    obj1.total();
    _getch();
}