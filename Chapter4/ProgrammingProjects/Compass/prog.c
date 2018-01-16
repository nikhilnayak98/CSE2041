/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Transforms compass headings in degrees (0 to 360) to compass bearings.
*/
#include "stdio.h"
void transform(double);
void main()
{
	double headings;
	printf("\n Enter compass headings in degrees (0 to 360) - ");
	scanf("%lf", &headings);
	if((headings > 360) || (headings < 0))
		printf("\n Invalid Input");
	else
		transform(headings);
}

void transform(double headings)
{
	double deg;
	if((headings >= 0) && (headings <= 90))
	{
		deg = 90 - headings;
		printf("\nthe bearing is East %f degrees North\n", deg);
	}
	else if((headings > 90) && (headings <= 180))
	{
		deg = 180 - headings;
		printf("\nthe bearing is South %f degrees East\n", deg);
	}
	else if((headings > 180) && (headings <= 270))
	{
		deg = 270 - headings;
		printf("\nthe bearing is West %f degrees South\n", deg);
	}
	else if((headings > 270) && (headings <= 360))
	{
		deg = 360 - headings;
		printf("\nthe bearing is North %f degrees West\n", deg);
	}
}
