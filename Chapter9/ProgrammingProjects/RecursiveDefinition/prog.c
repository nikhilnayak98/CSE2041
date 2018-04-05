/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Recursive definition of a function
*/
#include <stdio.h>
int func(int);
void main()
{
	int x, result;
	printf("\nEnter value of x - ");
	scanf("%d", &x);
	result = func(x);
	printf("\nResult - %d\n", result);
}

int func(int x)
{
	if(x == 0)
		return 0;
	else
	 return (2 + func(x - 1));
}
