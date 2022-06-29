//this is subject average and percentage code
#include<iostream>
using namespace std;
int main()
{

    //this is variable1
    float sub1;
    //this is variable2
    float sub2;
    //this is variable3
    float sub3;
    //this is variable4
    float sub4;
    //this is variable5
    float sub5;
    //this is output variable
    float average,percentage;
     //this is enter line 1
    cout<<"enter the sub1=";
     //this is user input line 1
    cin>>sub1;
    //this is enter line 2
    cout<<"enter the sub2=";
    //this is user input line 2
    cin>>sub2;
    //this is enter line 3
    cout<<"enter the sub3=";
    //this is user input line 3
    cin>>sub3;
    //this is enter line 4
    cout<<"enter the sub4=";
    //this is user input line 4
    cin>>sub4;
    //this is enter line 5
    cout<<"enter the sub5=";
    //this is user input line 5
    cin>>sub5;
    //this is math term line
    average=(sub1+sub2+sub3+sub4+sub5)/5;
    percentage=((sub1+sub2+sub3+sub4+sub5)*100)/500;
    //this is output line
    cout<<"this is the average and percentage of five subjects="<<average<<endl<<percentage<<endl;

    return 0;
}
