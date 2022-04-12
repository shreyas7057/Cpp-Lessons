#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


void drawLine(int n,char symbol);
void rules();


int main() {

    string playerName;
    int amount;
    int bettingAmount;
    int guess;
    int dice;
    char choice;

    srand(time(0));
    
    drawLine(60,'_');
    cout<<"\n *****CASINO GAME*****";
    drawLine(60,'_');

    cout<<"\n Enter name: ";
    getline(cin,playerName);
    cout<<"\n\n";

    cout<<"\n ENter amount to play: ";
    cin>>amount;

    do {
        system("cls");
        rules();
        cout<<"\n Your current balance is: "<<amount<<endl;

        do {

            cout<<playerName<<", enter money to bet: ";
            cin>>bettingAmount;

            if(bettingAmount>amount) 
                cout<<"Your betting amount is more than current balance"<<"\n Re-enter datan";
        }

        while(bettingAmount>amount);

        do {
            cout<<"Guess your number to bet between 1 to 10: ";
            cin>>guess;

            if(guess<=0||guess>10)
                cout<<"Please check number \n";
             
        }
        while(guess<=0||guess>10);

        dice = rand()%10+1;

        if(dice==guess) {
            cout<<"\n Good luck!!! You won"<<bettingAmount*10;
            amount = amount+bettingAmount*10;

        }

        else {

            cout<<"Bad luck You lost: "<<bettingAmount<<endl;
            amount = amount-bettingAmount;
        }

        cout<<"\n Wining number was: "<<dice<<"\n";
        cout<<"\n"<<playerName<<", You have "<<amount<<"\n";

        if(amount==0) {
            cout<<"You have no money to play";
            break;
        }

        cout<<"\n \n Do you want to play game(Y/N)";
        cin>>choice;

    }while(choice=='Y'||choice=='y');

    cout<<"\n\n";

    drawLine(70,'=');
    cout<<"\n\n Thanks for playing game Your balance is: "<<amount;

    drawLine(70,'=');


    return 0;
}



void drawLine(int n,char symbol) {

    for(int i=0;i<n;i++) {

        cout<<symbol;
        cout<<"\n";
    }
}


void rules() {
    system("cls");
    cout<<"\n\n";
    drawLine(80,'-');
    cout<<"\n 1. Choose any number between 1 to 10";
    cout<<"\n 2. If you win you will get 10 times the money you have bet";
    cout<<"\n 3. If you bet on wrong number you will loose betting amount";
    drawLine(80,'-');
}