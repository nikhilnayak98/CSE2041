/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Sum of n numbers.
*/
#include "stdio.h"
void main()
{
	int n , temp, sum = 0;
	printf("\nEnter n - ");
	scanf("%d", &n);
	temp = n;
	while(n > 0)
	{
		sum += n;
		n--;
	}
	printf("\nSum - %d", sum);
	if(((temp * (temp + 1)) / 2) == sum)
		printf("\nEqual\n");
	else
		printf("\nNot Equal");
}
