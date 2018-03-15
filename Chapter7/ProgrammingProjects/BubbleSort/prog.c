/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Bubble Sort 
*/
#include <stdio.h>
void bubble_sort(int[], int);
void main()
{
	int n, i;
	printf("\nEnter size : ");
	scanf("%d", &n);
	
	int A[n];
	printf("\nEnter elements : ");
	for(i = 0; i < n; i++)
		scanf("%d", &A[i]);
	
	printf("\nBefore Swapping : ");
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	
	bubble_sort(A, n);
	printf("\nAfter Swapping : ");
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	
	printf("\n");
}

void bubble_sort(int A[], int n)
{
	int i, j, temp;
	
	for(i = 0; i < (n - 1); i++)
	{
		for(j = 0; j < (n - i - 1); j++)
		{
			if(A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}
