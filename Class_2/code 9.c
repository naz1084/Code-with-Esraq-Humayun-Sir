#include<stdio.h>
int main()
{
    char a;
    printf("enter a single letter,digit,special symbol=");
    scanf("%c",&a);

    if(a>=65 && a<=97)
    {
        printf("you entered a capital letter\n");
    }
    else if(a>=97 && a<=122)
    {
       printf("you entered a small case  letter\n");
    }
    else if(a>=48 && a<=57)
    {
        printf("you entered a digit\n");
    }
    else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
    {
        printf("you entered a special symbol\n");
    }
    else
        printf("invalid");

    return 0;
}

