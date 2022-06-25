#include<stdio.h>
int main()
{
    char ch;
    printf("enter a operator=");
    scanf("%c",&ch);
    double num1,num2,add,sub,multiply;
    printf("enter the two number=");
    scanf("%lf %lf",&num1,&num2);

    switch(ch)
    {
    case '+':
        add=num1+num2;
        printf("addition = %.2lf\n",add);
        break;
    case '-':
        sub=num1-num2;
        printf("subtraction = %.2lf\n",sub);
        break;
    case '*':
        multiply=num1*num2;
        printf("multiplication = %.2lf\n",multiply);
        break;
    default:
        printf("No case\n");

    }
    return 0;
}
