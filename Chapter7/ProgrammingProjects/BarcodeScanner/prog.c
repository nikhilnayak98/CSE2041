/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Barcode Scanner.
*/
#include <stdio.h>
#define MAX 12
int sum_odd(int[]);
int sum_even(int[]);
void main()
{
	int i, sum, check_digit;
	int codes[] = {0, 1, 1, 1, 1, 0, 8, 5, 6, 8, 0, 7};
	//{0, 2, 4, 0, 0, 0, 1, 6, 2, 8, 6, 0};
	//{0, 1, 1, 1, 1, 0, 8, 5, 6, 8, 0, 7};
	//{0, 7, 9, 4, 0, 0, 8, 0, 4, 5, 0, 1};
	//{0, 5, 1, 0, 0, 0, 1, 3, 8, 1, 0, 1};
	
	/*
	printf("\nEnter the 12 digit barcode - ");
	for(i = 1; i < MAX; i+=2)
	{
		scanf("%d ", &codes[i]);
	}
	*/
	
	printf("\nStep 1 - ");
	sum = sum_odd(codes);
	printf("\nResult - %d", sum);
	
	printf("\nStep 2 - ");
	sum = (sum_odd(codes) * 3) + sum_even(codes);
	printf("\nResult - %d", sum);
	
	if((sum % 10) == 0)
		check_digit = 0;
	else
		check_digit = 10 - (sum % 10);
	
	printf("\n");
	for(i = 0; i < MAX; i++)
	{
		printf("%d ", codes[i]);
	}
	
	if(codes[MAX - 1] == check_digit)
		printf("\nvalidated.\n");
	else
		printf("\nerror in barcode.\n");
}

int sum_odd(int A[])
{
	int i, sum = 0;
	printf("(");
	for(i = 0; i < MAX; i+=2)
	{
		sum += A[i];
		printf("%d ", A[i]);
	}
	printf(") * 3");
	return sum;
}

int sum_even(int A[])
{
	int i, sum = 0;
	printf(" + (");
	for(i = 1; i < MAX - 1; i+=2)
	{
		sum += A[i];
		printf("%d ", A[i]);
	}
	printf(")");
	return sum;
}
