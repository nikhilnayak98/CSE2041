/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To compute and display both the range of values in the
data collection and the standard deviation of the data collection.
*/
#include "stdio.h"
#include "math.h"
void main()
{
	int n, i, t;
	double average, standard_deviation, sum = 0, sum_squares = 0;
	printf("\nEnter number of inputs - ");
	scanf("%d\n", &n);
	for(i = 0; i < (n - 1); i++)
	{
		scanf("%d\n", &t);
		sum += t;
		sum_squares += (t * t);
	}
	
	average = sum / n;
	standard_deviation = sqrt((sum_squares / n) - (average * average));
	printf("\nStandard Deviation - %f\n", standard_deviation);
}
