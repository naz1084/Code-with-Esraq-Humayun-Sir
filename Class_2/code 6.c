#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter the three angles of traingle=");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;

    if(sum==180)
    {
        printf("Traingle is \n");

    }
    else
        printf("Traingle is invalid\n");

    return 0;
}
