#include<stdio.h>
int main()
{
    int fact=1,count=0,number,i,choice;
    printf("choices are given below=\n");
    printf("1:Factorial\n");
    printf("2:Prime or not\n");
    printf("3:Odd or Even\n");
    printf("4:Exit\n");
    printf("enter a choice=");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:

            printf("enter a number=");
            scanf("%d",&number);
            for(i=1;i<=number;i++)
            {
                fact=fact*i;
            }
            printf("factorial=%d\n",fact);
            break;
    case 2:
        printf("enter a number=");
        scanf("%d",&number);
        for(i=2;i<number;i++)
        {
            if(number%i==0)
                {
                count++;
            }

        }
        if(count==0)
        {
            printf("this is a prime number\n");

        }
        else
            printf("this is not a prime number\n");
        break;
    case 3:
        printf("enter a number=");
        scanf("%d",&number);
        if(number%2==0)
        {
            printf("this is a even number\n");
        }
        else
            printf("this is a odd number\n");
        break;
    default:
        printf("no case\n");

    }
    return 0;
}
