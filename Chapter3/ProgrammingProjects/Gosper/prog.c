/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Gosper’s formula to approximate n!
*/
#define PI 3.14159265
#include "stdio.h"
#include "math.h"
double approximate(double);
void main()
{
	double n, result;
	int i;
	printf("\nEnter a number - ");
	scanf("%lf", &n);
	result = approximate(n);
	printf("\n %.0f! equals approximately %.5f \n", n, result);
	
	for(i = 1; i < 8; i++)
	{
		result = approximate(i);
		printf("\n %d ! equals approximately %.5f \n ------", i, result);
	}
}

double approximate(double n)
{
	double result, inter1, inter2;
	
	// intermediate 1
	inter1 = (2*n) + (double)1/3;
	printf("\n 2n + 1/3 - %f\n", inter1);
	
	// intermediate 1
	inter2 = sqrt(inter1 * PI);
	printf("\n sqrt((2n + 1/3) * PI) - %f\n", inter2);
	result = pow(n, n) * exp(-1*n) * inter2;
	return result;
}
