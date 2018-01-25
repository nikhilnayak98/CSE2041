/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - centimeters-to-inches conversion table.
*/
#include "stdio.h"
double convert(double);
void main()
{
	double smallest, largest, interval;
	printf("\nEnter smallest - ");
	scanf("%lf", &smallest);
	printf("\nEnter largest - ");
	scanf("%lf", &largest);
	printf("\nEnter interval - ");
	scanf("%lf", &interval);
	printf("\nCm %14c Inches", ' ');
	while(smallest <= largest)
	{
		
		printf("\n%f %7c %f", smallest, ' ', convert(smallest));
	
		smallest += interval;
	}
	printf("\n");
}

double convert(double cm)
{
	return (cm * 0.393701);
}
