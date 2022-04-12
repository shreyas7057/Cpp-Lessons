// to find roots of quadratic equation



#include <iostream>
#include <cmath>

using namespace std;


int main() {

    float a,b,c,x1,x2,d,rp,ip;

    cout<<"Enter coefficients a,b,c: "<<endl;
    cin>>a>>b>>c;


    d = b*b-4*a*c;

    if(d>0) {

        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;

        cout<<"Roots are real and different"<<endl;
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2<<endl;
    }

    else if(d==0) {

        cout<<"Roots are real and same"<<endl;

        x1 = -b/(2*a);
        
        cout<<"X1=X2="<<x1<<endl;
    }

    else {
        
        rp = -b/(2*a);
        ip = sqrt(-d/(2*a));
        cout<<"Roots are complex and different"<<endl;
        cout<<"X1="<<rp<<"+"<<ip<<"i"<<endl;
    }

    return 0;

    
}