//this is compound interest code
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //this is input variables 1
    int p,t;
     //this is input variable 2
    double r;
    // //this is output variable
    double ci;
     //this is enter line
     cout<<"enter the principle time and rate=";
     //this is user input line
    cin>>p>>t>>r;
    //this is math term line
    ci=p*(pow((1+(r/100)),t));
    //this is result of compound interest line
    cout<<"ci="<<ci<<endl;

    return 0;
}
