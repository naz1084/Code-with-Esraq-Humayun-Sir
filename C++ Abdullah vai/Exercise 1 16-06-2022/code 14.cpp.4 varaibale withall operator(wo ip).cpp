//this is all operator  code
#include<iostream>
using namespace std;
int main()
{
    //this is 1st variable
    int num1=5;
    //this is 2nd  variable
    int num2=4;
    //this 3rd variable
    int num3=6;
    //this is 4th variable
    int num4=3;
    //this is some output variable
    int sum,sub,multiply,division,divisible;

    //this is value1 display line
    cout<<"this is num1="<<num1<<endl;

    //this is value2 display line
    cout<<"this is num2="<<num2<<endl;

    //this is value3 display line
    cout<<"this is num3="<<num3<<endl;

    //this is value4 display line
    cout<<"this is num4="<<num4<<endl;
    //this is Math term line
    sum=num1+num2+num3+num4;
    sub=num1-num2-num3-num4;
    multiply=num1*num2*num3*num4;
    division=num1/num2/num3/num4;
    divisible=num1%num2%num3%num4;
    //this is  result line
    cout<<"sum="<<sum<<endl<<"sub="<<sub<<endl<<"multiply="<<multiply<<endl<<"division="<<division<<endl<<"divisible="<<divisible<<endl;

    return 0;

}
