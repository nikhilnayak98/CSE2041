/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate GCD
*/
#include "stdio.h"
void main()
{
	int a, b, r, g;
	printf("\ngcd(a, b)");
	printf("\nEnter a - ");
	scanf("%d", &a);
	printf("\nEnter b - ");
	scanf("%d", &b);
	if(a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	
	if((a % b) == 0)
		g = b;
	else
	{	
		r = a % b;
		while(r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		g = b;
	}
	
	printf("\ngcd(a, b) - %d\n", g);
}
