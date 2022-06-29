//this is subject total average and percentage code
#include<iostream>
using namespace std;
int main()
{

    //this is input variables
    double sub1,sub2,sub3,sub4,sub5;
    //this is output variables
    double total,average,percentage;
     //this is enter line
    cout<<"enter the five subjects number=";
     //this is user input line1
    cin>>sub1;
    //this is user input line 2
    cin>>sub2;
    //this is user input line 3
    cin>>sub3;
    //this is user input line 4
    cin>>sub4;
    //this is user input line 5
    cin>>sub5;
    //this is math term line
    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;
    percentage=((total)*100)/500;
    //this is result line
    cout<<"this is total and average and percentage of five subjects="<<total<<endl<<average<<endl<<percentage<<endl;

    return 0;
}
