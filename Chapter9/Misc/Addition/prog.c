/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Addition using recursion
*/
#include <stdio.h>
int add(int, int);
void main()
{
	int a, b, sum;
	printf("\nEnter a - ");
	scanf("%d", &a);
	printf("\nEnter b - ");
	scanf("%d", &b);
	sum = add(a, b);
	printf("\nSum - %d\n", sum);
}

int add(int a, int b)
{
	if(b == 0)
		return a;
	else
		return (1 + add(a, b - 1));
}
