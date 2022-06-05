#include<stdio.h>
int main()
{
    int amount,ten,fifty,hundred;
    printf("enter the amount to be withdrawn=");
    scanf("%d",&amount);

    ten=amount/10;
    fifty=amount/50;
    hundred=amount/100;

    printf("ten=%d\n",ten);
    printf("fifty=%d\n",fifty);
    printf("hundred=%d\n",hundred);

    return 0;
}
