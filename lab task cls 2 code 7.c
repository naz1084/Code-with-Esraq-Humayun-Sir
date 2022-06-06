#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("enter the points of (x1,y1)\n");
    scanf("%f%f",&x1,&y1);
    printf("enter the points of (x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("enter the points of (x3,y3)\n");
    scanf("%f%f",&x3,&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1==m2)
    {
        printf("All three points fall on one straight line\n");
    }
    else
       printf("All three points not fall on one straight line\n");

        return 0;



}
