/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate average of n numbers
*/
#include "stdio.h"
void main()
{
	int n, total;
	double average;
	printf("\nEnter n - ");
	scanf("%d", &n);
	printf("\nEnter total sum - ");
	scanf("%d", &total);
	if(n > 0)
	{
		average = (double)total / n;
		printf("\nAverage - %f", average);
	}
	else
		printf("\nn should be greater than 0";)
}
