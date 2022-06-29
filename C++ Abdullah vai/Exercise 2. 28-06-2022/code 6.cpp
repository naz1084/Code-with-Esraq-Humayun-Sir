//this is simple interest code
#include<iostream>
using namespace std;
int main()
{
    //this is input variables 1
    int p,t;
     //this is input variable 2
    double r;
    // //this is output variable
    double si;
     //this is enter line
     cout<<"enter the principle time and rate=";
     //this is user input line
    cin>>p>>t>>r;
    //this is math term line
    si=(p*t*r)/100;
    //this is result of simple interest line
    cout<<"si="<<si<<endl;

    return 0;
}
