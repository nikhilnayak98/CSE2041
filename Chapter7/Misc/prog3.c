/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Add 2 arrays.
*/
#include <stdio.h>
void add_arrays(double[], double[], double[], int);
void display_array(double[], int);

void main()
{
	int size, i;
	
	printf("\nEnter number of elements to be entered - \n");
	scanf("%d", &size);
	
	double A[size], B[size], C[size];
	
	printf("\nEnter the elements of first array - \n");
	for(i = 0; i < size; i++)
	{
		scanf("%lf", &A[i]);
	}
	
	printf("\nEnter the elements of second array - \n");
	for(i = 0; i < size; i++)
	{
		scanf("%lf", &B[i]);
	}
	
	add_arrays(A, B, C, size);
	
	printf("\nElements after addition -");
	display_array(C, size);
	
	printf("\n");
}

void add_arrays(double A[], double B[], double C[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];
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
