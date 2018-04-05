/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Binary Search
*/
#include <stdio.h>
int binary_search(int[], int, int, int);
void main()
{
	int A[] = {14, 22, 34, 47, 53, 61, 70, 81, 90}, loc, key;
	printf("\nEnter number to be searched - ");
	scanf("%d", &key);
	
	loc = binary_search(A, 0, 8, key);
	
	if(loc == -1)
		printf("\nNot found\n");
	else
		printf("\nFound at position %d\n", (loc + 1));
}

int binary_search(int A[], int low, int high, int key)
{
	if(low < high)
	{
		int mid = (low + high) / 2;
		if(A[mid] == key)
			return mid;
		else if(key > A[mid])
			binary_search(A, mid + 1, high, key);
		else if(key < A[mid])
			binary_search(A, low, mid - 1, key);
		else
			return -1;
	}
	else
		return -1;
}
