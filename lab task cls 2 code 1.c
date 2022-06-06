#include<stdio.h>
int main()
{
    double cost_price,selling_price,profit,loss;
    printf("enter a cost_price of an item=");
    scanf("%lf",&cost_price);

    printf("enter a selling_price of an item=");
    scanf("%lf",&selling_price);

    if(cost_price>selling_price)
    {
        loss=cost_price-selling_price;
        printf("loss=%.2lf\n",loss);
    }
    else
        profit=selling_price-cost_price;
    printf("profit=%.2lf\n",profit);

    return 0;
}
