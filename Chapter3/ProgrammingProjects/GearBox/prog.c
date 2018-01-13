/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Gear Box
*/
#include "stdio.h"
#include "math.h"
double speeds_ratio(double,double);
void instruct();
void main()
{
	double max, min, ratio;
	instruct();
	scanf("%lf", &max);
	scanf("%lf", &min);
	
	ratio = speeds_ratio(max,min);
	
	printf("\n The ratio between successive speeds of a six-speed gearbox with maximum speed %.2f rpm and minimum speed %.2f rpm is %.2f. \n", max, min, ratio);
}

void instruct()
{
	printf("\n Enter maximum speed - ");
	printf("\n Enter minimum speed - ");
}

double speeds_ratio(double max, double min)
{
	double ratio = pow((max/min),1/5);
	return ratio;
}
