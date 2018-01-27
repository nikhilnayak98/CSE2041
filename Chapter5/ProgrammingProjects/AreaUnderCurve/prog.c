/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To calculate area under curve.
*/
#include "stdio.h"
#include "math.h"
void trap(double, double, int, double);
double func(double);
void main()
{
	double a, b;
	int n;
	
	for(n = 2; n <= 128; n *= 2)
	{
		printf("\nFor n = %d", n);
		trap(-2, 2, n, 0);	// for sqrt(4 − x^2)
		//trap(0, 3.14159, n, 0);	// for x^2sin(x)
	}
}

void trap(double a, double b, int n, double f)
{
	double h, T = 0, temp = a;
	int i;
	
	f = 0;
	h = (b - a) / n;
	
	for(i = 1; i < n; i++)
	{
		temp += h;
		f += func(temp);
	}
	
	T = (h / 2) * (func(a) + func(b) + (2 * f));
	printf("\nT = %f\n", T);
}

// h(x) = sqrt(4 − x^2)
double func(double x)
{
	return sqrt(4 - (x * x));
}

// g(x) = x^2 * sin(x)
double func1(double x)
{
	return (x * x * sin(x));
}
