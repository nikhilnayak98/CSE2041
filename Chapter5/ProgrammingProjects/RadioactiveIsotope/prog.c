/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To compute and print in table form the amount of this isotope that remains after each year for 5 years.
*/
#include "stdio.h"
#include "math.h"
#define HALF_LIFE 5.272
void main()
{
	int i;
	double amount;
	printf("\nEnter the initial amount of Cobalt - ");
	scanf("%lf", &amount);
	
	printf("\nYear %8c Amount Remains", ' ');
	for (i = 1; i <= 5; i++)
	{
		amount -= (amount * exp(-0.0693 * (i / HALF_LIFE)));
		printf("\n %d %10c %.4f g", i, ' ', amount);
	}
	printf("\n");
}
