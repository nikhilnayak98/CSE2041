/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To approximate the value of PI using the formula.
*/
#include "stdio.h"
void main()
{
	int i, t = -1;
	double PI = 0;
	for(i = 1; i <= 99 ; i += 2)
	{
		t *= -1;
		PI = PI + (double)1/(t * i);
	}
	PI *= 4;
	printf("\nPI - %f\n", PI);
}
