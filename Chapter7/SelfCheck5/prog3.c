/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Negate all elements.
*/
#include <stdio.h>
void negate_values(double[], int);
void main()
{
	int size, i;
	
	printf("\nEnter size of array - \n");
	scanf("%d", &size);
	
	double arr[size];
	printf("\nEnter the elements - \n");
	for(i = 0; i < size; i++)
	{
		scanf("%lf", &arr[i]);
	}
	negate_values(arr, size);
}

void negate_values(double arr[], int size)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		arr[i] *= -1;
	}
	
	printf("\nElements after negation are - ");
	for(i = 0; i < size; i++)
	{
		printf("\n%f", arr[i]);
	}
	printf("\n");
}
