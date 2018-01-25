/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Predicts the billions of dollars of fast food charges U.S. consumers will make in that year
*/
#include "stdio.h"
double fast_food_billion(int);
void main()
{
	int year;
	double charges;
	
	while(year > 2005)
	{
		printf("\nEnter year - ");
		scanf("%d", &year);
		charges = fast_food_billion(year);
		printf("\nCharges for %d - %.1f billions", year, charges);
	}
	printf("\n");
}

double fast_food_billion(int year)
{
	double charges = 33.2 + (16.8 * (double)(year - 2005));
	return charges;
}
