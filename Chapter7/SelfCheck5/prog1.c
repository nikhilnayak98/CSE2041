/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Multiply all elements.
*/
#include <stdio.h>
long int multiply(int[], int);
void main()
{
	int size, i;
	
	printf("\nEnter size of array - \n");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter the elements - ");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nProduct of all the elements are - %ld\n", multiply(arr, size));
}

long int multiply(int arr[], int size)
{
	int i;
	long int product = 1;
	for(i = 0; i < size; i++)
	{
		product *= arr[i];
	}
	return product;
}
