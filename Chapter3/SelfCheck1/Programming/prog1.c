/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Compute the sum and average of two numbers.
*/
#include "stdio.h"
int main(void)
{
	double one, two, sum, average;
	printf("\n Enter first number - ");
	scanf("%lf", &one);
	printf("\n Enter second number - ");
	scanf("%lf", &two);
	sum = one + two;
	average = sum/2;
	printf("\n Sum - %f \n Average - %f", sum, average);
	return (0);
}
