/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Circle area and circumference
*/
#define PI 3.14
#include "stdio.h"
void instruct(double);
double calc_area(double);
double calc_circum(double);
void main()
{
	double area, circum;
	
	// get radius
	instruct(rad);
	
	// calculate & displa area, circumference 
	area = calc_area(rad);
	circum = calc_circum(rad);
	printf("\n Area - %f - ", area);
	printf("\n Circumference - %.2f \n", circum);
}

void instruct(double rad)
{
	printf("\n Enter radius - ");
	scanf("%lf", &rad);	
}

double calc_area(double rad)
{
	// return area
	return (PI*rad*rad);
}

double calc_circum(double rad)
{
	// return circumference
	return (2*PI*rad);
}
