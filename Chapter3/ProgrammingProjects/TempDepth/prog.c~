/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Compute temperature at depth
*/
#include "stdio.h"
void instruct();
double celsius_at_depth(double);
double fahrenheit(double);
void main()
{
	double depth,farh,celsius;
	instruct();
	scanf("%lf", &depth);
	celsius = celsius_at_depth(depth);
	farh = fahrenheit(celsius);
	printf("\n Temperature at depth %.3f - %.3f C", depth, celsius);
	printf("\n Temperature at depth %.3f  in fahrenheit - %.3f F \n", depth, farh);
}

void instruct()
{
	printf("\n Enter depth in km - ");
}

double celsius_at_depth(double depth)
{
	double celsius = (10 * depth) + 20;
	return celsius;
}

double fahrenheit(double celsius)
{
	double farh = (1.8 * celsius) + 32;
	return farh;
}


