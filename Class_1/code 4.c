#include<stdio.h>
int main()
{
    float farenheit,celcius;
    printf("enter a farenheit degree=");
    scanf("%f",&farenheit);
     celcius=(5*farenheit-160)/9;

     printf("\n celcius degree=%.2f\n",celcius);
     return 0;
}


