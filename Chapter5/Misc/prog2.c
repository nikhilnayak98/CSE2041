/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Function as a parameter.
*/
#include "stdio.h"
#include "math.h"
void evaluate(double f(double), double, double, double);
void main()
{
	evaluate(sqrt, 0.25, 25.0, 100.0);
	evaluate(sin, 0.0, 3.14159, 0.5 * 3.14159);
}
void evaluate(double f(double f_arg), double pt1, double pt2, double pt3)
{
	printf("f(%.5f) = %.5f\n", pt1, f(pt1));
	printf("f(%.5f) = %.5f\n", pt2, f(pt2));
	printf("f(%.5f) = %.5f\n", pt3, f(pt3));
}
