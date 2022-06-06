#include<stdio.h>
int main()
{
    double cgpa,ielts_score;
    printf("enter the cgpa=");
    scanf("%lf",&cgpa);
    printf("enter the ielts_score=");
    scanf("%lf",&ielts_score);

    if(cgpa>=3.60)
    {
        if(ielts_score>=6.5)
        {
            printf("you will get the scolarship\n");
        }
    }

    else
    {
        printf("you will not get the scolarship");
    }

    return 0;
}
