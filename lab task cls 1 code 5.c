#include<stdio.h>
int main()
{
    double length,breadth,radius,area_of_rectengle,perimeter,area_of_circle,circumference,pi=3.1416;
    printf("enter the lenth and breadth of rectengle=");
    scanf("%lf%lf",&length,&breadth);
    printf("enter the radius of circle=");
    scanf("%lf",&radius);

    area_of_rectengle=length*breadth;
    perimeter=2*(length+breadth);
    area_of_circle=pi*radius*radius;
    circumference=2*pi*radius;

    printf("area of rectengle=%.2lf\n",area_of_rectengle);
    printf("perimeter of rectengle=%.2lf\n",perimeter);
    printf("area of circle=%.2lf\n",area_of_circle);
    printf("circumference of circle=%.2lf\n",circumference);

    return 0;

}
