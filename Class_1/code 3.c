#include<stdio.h>
int main()
{
    float sub_1,sub_2,sub_3,sub_4,sub_5,aggregate_marks,percentage_marks;
    printf("enter the 5 marks subjects=");
    scanf("%f%f%f%f%f",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);

    aggregate_marks=sub_1+sub_2+sub_3+sub_4+sub_5;
    percentage_marks=(aggregate_marks/500)*100;

    printf("aggregate marks=%.2f\n",aggregate_marks);
    printf("percentage marks=%.2f\n",percentage_marks);
     return 0;
}
