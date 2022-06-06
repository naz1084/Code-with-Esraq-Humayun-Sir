#include<stdio.h>
int main()
{
    double men_population,women_population,men_literacy,women_literacy,total_literacy,iliterate_men,iliterate_women,population=80000;


    men_population=population*.52;
    women_population=population-men_population;
    total_literacy=population*.48;
    men_literacy=population*.35;
    women_literacy=total_literacy-men_literacy;
    iliterate_men=men_population-men_literacy;
    iliterate_women=women_population-women_literacy;

    printf("iliterate-men=%.2lf\niliterate_women=%.2lf\n",iliterate_men,iliterate_women);
    return 0;
}
