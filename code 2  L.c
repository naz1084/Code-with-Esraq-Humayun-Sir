#include<stdio.h>
int main()
{
    float km,meter,feet,inches,centimeter;
    printf("enter a distance Mirpur to Asulia=");
    scanf("%f",&km);

    meter=km*1000;//1km=1000meter
    feet=km*3280.8399; //1km=3280.8399 feets
	inches=km*39370.078; //1km=39370.078 inches
	centimeter=km*100000; //1km=100000 centimeter

	printf("distance in meter=%.2f\n",meter);
	printf("distance in feet=%.2f\n",feet);
	printf("distance in inches=%.2f\n",inches);
	printf("distance in centimeter=%.2f\n",centimeter);

	return 0;

}
