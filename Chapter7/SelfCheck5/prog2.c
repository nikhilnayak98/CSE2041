/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Find absolute values of all elements.
*/
#include <stdio.h>
#include <math.h>
void abs_table(double[], int);
void main()
{
	int size, i;
	
	printf("\nEnter size of array - \n");
	scanf("%d", &size);
	
	double arr[size];
	printf("\nEnter the elements - ");
	for(i = 0; i < size; i++)
	{
		scanf("%lf", &arr[i]);
	}
	abs_table(arr, size);
}

void abs_table(double arr[], int size)
{
	int i;
	printf("\nX %8c |X|", ' ');
	for(i = 0; i < size; i++)
	{
		printf("\n%f %6c %f", arr[i], ' ', fabs(arr[i]));
	}
	printf("\n");
}
