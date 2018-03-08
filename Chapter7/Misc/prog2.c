/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Increment all elements by 2.
*/
#include <stdio.h>
void increment_by_2(double[], int);
void display_array(double[], int);
int main()
{
	int size, i;
	double arr[20];
	
	printf("\nEnter number of elements to be entered - \n");
	scanf("%d", &size);
	
	if(size > 20)
	{
		printf("\nOverflow\n");
		return 0;
	}
	printf("\nEnter the elements - \n");
	for(i = 0; i < size; i++)
	{
		scanf("%lf", &arr[i]);
	}
	
	printf("\nElements before increment - \n");
	display_array(arr, size);
	
	increment_by_2(arr, size);
	
	printf("\nElements after increment - \n");
	display_array(arr, size);
	
	printf("\n");
	
	return 0;
}

void increment_by_2(double arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		arr[i] += 2;
	}
}

void display_array(double arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("\n%lf", arr[i]);
	}
}
