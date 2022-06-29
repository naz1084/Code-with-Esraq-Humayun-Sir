//this is a days to weeks and years convert code
#include<iostream>
using namespace std;
int main()
{
    //this is 1st variable
    int days;
    //this is output variable
    int weeks,years;
    //this is enter line
    cout<<"enter the days=";
     //this is user input line
    cin>>days;
    //this is math term line
    weeks=days/7;
    years=days/365;
     //this is output line
    cout<<"this is the result of days weeks and years="<<days<<endl<<weeks<<endl<<years<<endl;

    return 0;
}


