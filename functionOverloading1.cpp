#include<iostream>

using namespace std;


// program to compute absoulte value which works for int and float data type


// function here
float absolute(float var) {

    if(var<0.0) {
        var = -var;
        return var;
    }

    
}


int absolute(int var) {

    if(var<0) {

        var = -var;
        return var;
    }

    
}


int main() {

    // call func
    cout<<"Absolute value for -5 is: "<<absolute(-5)<<endl;
    cout<<"Absolute value for 5.5 is: "<<absolute(5.5f)<<endl;

    return 0;
}