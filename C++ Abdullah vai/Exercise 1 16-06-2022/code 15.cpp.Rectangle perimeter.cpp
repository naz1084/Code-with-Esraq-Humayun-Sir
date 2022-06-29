//This is rectangle perimeter code
#include<iostream>
using namespace std;
int main()
{

    //this is 1st variable
    float length;
    //this is 2nd variable
    float width;
     //this is output variable
    float perimeter;
     //this is enter line 1
    cout<<"enter the length=";
     //this is user input line 1
    cin>>length;
    //this is enter line 2
    cout<<"enter the width=";
    //this is user input line 2
    cin>>width;
    //this is math term line
    perimeter=2*(length+width);
    //this is output line
    cout<<"this is the perimeter of the rectangle="<<perimeter<<endl;

    return 0;

}
