#include<stdio.h>
int main()
{
	double base,breadth,height,length,area,perimeter;

	printf("Enter the base of the traingle=");
	scanf("%lf",&base);
	printf("Enter the height of the traingle=");
	scanf("%lf",&height);
	printf("Enter the breadth of the traingle=");
	scanf("%lf",&breadth);
	printf("Enter the length of the traingle=");
	scanf("%lf",&length);

	area=.5*base*height;
	perimeter=(length+breadth+height);


	if(area>perimeter){

		printf("Area is greatar than perimeter\n");

	}
	else

	printf("Perimeter is greater than area");

	return 0;
}
