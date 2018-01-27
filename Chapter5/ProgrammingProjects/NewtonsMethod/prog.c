/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Newtons method to find approximate roots.
*/
#include "stdio.h"
#include "math.h"
double next_approx(double, double, double);
double func(double, double, double);
double derivative(double, double);
void main()
{
	double x0, n, c, x1, i, temp;
	printf("\nEnter c - ");
	scanf("%lf", &c);
	printf("\nEnter n - ");
	scanf("%lf", &n);
	
	x0 = c / 2;
	x1 = x0 - (func(x0, n, c) / derivative(x0, n));
	
	for(i = 0; i < 100; i++)
	{
		printf("\n%.6f \n", x1);
		x1 = next_approx(x1, n, c);
	}
}

double next_approx(double temp, double n, double c)
{
	double next_approx = temp - (func(temp, n, c) / derivative(temp, n));
	return next_approx;
}

double func(double x, double n, double c)
{
	return ((pow(x, n)) - c);
}

double derivative(double x, double n)
{
	return (x * pow(x, n - 1));
}
