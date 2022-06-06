#include<stdio.h>
int main()
{
    double basic_salary,dearness_allowance,house_rent,gross_salary;
    printf("enter a basic_salary=");
    scanf("%lf",&basic_salary);

    dearness_allowance=.4*basic_salary;
    house_rent=.2*basic_salary;
    gross_salary=basic_salary-(dearness_allowance+house_rent);

    printf("gross_salary=%.2lf\n",gross_salary);
    return 0;
}
