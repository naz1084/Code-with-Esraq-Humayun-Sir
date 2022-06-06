#include<stdio.h>
int main()
{
    double selling_price,total_profit,cost_price_of_one_item;
    printf("enter the total selling price of 15 items and total profit=");
    scanf("%lf%lf",&selling_price,&total_profit);

    cost_price_of_one_item=(selling_price-total_profit)/15;

    printf("one item=%.2lf\n",cost_price_of_one_item);
    return 0;

}
