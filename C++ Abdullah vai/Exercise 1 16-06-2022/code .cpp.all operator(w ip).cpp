//this is all operator  code
#include<iostream>
using namespace std;
int main()
{
    //this is 1st variable
    int num1;
    //this is 2nd  variable
    int num2;
    //this 3rd variable
    int sum,sub,multiply,division,divisible;
    //this is enter number1 line
    cout<<"enter num1=";
    //this is user input1 line
    cin>>num1;
    //this is value1 display line
    cout<<"this is num1="<<num1<<endl;
    //this is enter number2 line
    cout<<"enter num2=";
    //this is user input2 line
    cin>>num2;
    //this is value2 display line
    cout<<"this is num2="<<num2<<endl;
    //this is Math term line
    sum=num1+num2;
    sub=num1-num2;
    multiply=num1*num2;
    division=num1/num2;
    divisible=num1%num2;
    //this is  result line
    cout<<"sum="<<sum<<endl<<"sub="<<sub<<endl<<"multiply="<<multiply<<endl<<"division="<<division<<endl<<"divisible="<<divisible<<endl;

    return 0;

}
