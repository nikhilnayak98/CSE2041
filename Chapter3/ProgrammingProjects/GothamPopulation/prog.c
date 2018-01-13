/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Predicts Gotham’s population in the year
*/
#include "stdio.h"
void instruct();
void main()
{
	double t, total_pop;
	instruct();
	scanf("%lf", &t);
	total_pop = population(t);
	printf("%f", total_pop);
}

void instruct()
{
	printf("\n Enter a year after 1990 - ");
	printf("\n Predicted Gotham City population for - ");
}

int population(double t)
{
	double pop = 52.966 + (2.184*(t - 1990));
	return pop;
}
