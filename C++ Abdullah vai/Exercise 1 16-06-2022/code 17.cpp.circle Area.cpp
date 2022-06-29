//this is circles diameter,circumference and area code
#include<iostream>
using namespace std;
int main()
{

    //this is 1st variable
    float radius;
    //this is 2nd variable
    float pi=3.1416;
     //this is output variable
    float diameter,circumference,area;
     //this is enter line
    cout<<"enter the radius=";
     //this is user input line 1
    cin>>radius;

    //this is math term line
    diameter=2*radius;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    //this is output line
    cout<<"this is the diameter circumference and area of the circle="<<diameter<<endl<<circumference<<endl<<area<<endl;

    return 0;

}

