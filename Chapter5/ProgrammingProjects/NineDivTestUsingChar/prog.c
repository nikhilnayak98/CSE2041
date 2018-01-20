/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - 9 divisibility test of a number using char data type.
*/
#include "stdio.h"
void divisibility(int);
void main()
{
	int n;
	printf("\nEnter a number - ");
	scanf("%d", &n);
	
	divisibility(n);
	divisibility(154368);
	divisibility(621594);
	divisibility(123456);
}

void divisibility(int n)
{
	char digit;
	int r, sum = 0;
	printf("\n");
	while(n != 0)
	{
		r = n % 10;
		n = n / 10;
		digit = (char)r;
		printf("%d", ((int)digit - (int)'0'));
		sum += digit;
	}
	printf("\n%d\n", sum);
}
