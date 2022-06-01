#include<stdio.h>
int main()
{
    int Arif,Fahmid,Joy;
    printf("enter the age of three members=");
    scanf("%d%d%d",&Arif,&Fahmid,&Joy);

    if (Arif>Fahmid && Arif>Joy)
    {
        printf("Arif is youngest\n");
    }
    else if (Fahmid>Arif && Fahmid>Joy)
    {
        printf("Fahmid is youngest\n");
    }
    else
        printf("Joy is youngest\n");
    return 0;

}
