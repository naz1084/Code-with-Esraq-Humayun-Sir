#include<stdio.h>
int main()
{
    char ch;
    printf("enter any operation=");
    scanf("%c",&ch);

    double num1,num2,add,sub,multi,division;
    printf("enter the two number=");
    scanf("%lf%lf",&num1,&num2);

    switch (ch)
    {
    case '+':
        add=num1+num2;
        printf("addition=%.2lf\n",add);
        break;
    case '-':
        sub=num1-num2;
        printf("substraction=%.2lf\n",sub);
        break;
    case '*':
        multi=num1*num2;
        printf("multiplication=%.2lf\n",multi);
        break;
    case '/':
        division=num1/num2;
        printf("division=%.2lf\n",division);
        break;
    default:
        printf("invalid");
    }
    return 0;
}
