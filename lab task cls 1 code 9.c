#include<stdio.h>
int main()
{
    int number,sum,a,b,c,d,e,d1,d2,d3,d4;
    printf("enter the four digit of number=");
    scanf("%d",&number);

    a=number/10;
    d4=number%10;
    b=a/10;
    d3=a%10;
    c=b/10;
    d2=b%10;
    d=c/10;
    d1=c%10;


    sum=d1+d4;

    printf("sum=%d\n",sum);
    return 0;
}

