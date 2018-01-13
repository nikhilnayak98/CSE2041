/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Compute speed of sound
*/
#include "stdio.h"
#include "math.h"
void instruct();
double compute(double);
void main()
{
	double temp,speed;
	instruct();
	scanf("%lf",&temp);
	speed = compute(temp);
	printf("\n Speed of sound - %f \n", speed);
}

void instruct()
{
	printf("\n Enter temperature in fahrenheit - ");
}

double compute(double temp)
{
	double a = (double)1086 * sqrt(((5 * temp) + 297)/247);
	return a;
}
