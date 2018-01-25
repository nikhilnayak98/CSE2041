/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - annual population.
*/
#include "stdio.h"
void main()
{
	int pop = 9870, year = 1; 
	printf("\nYear %10c Population", ' ');
	while(pop <= 30000)
	{
		printf("\nYear %d %10c %d", year, ' ', pop);
		pop += (0.1 * pop);
		year++;
	}
	printf("\nIn year %d,the population will cross %d.\n", year, 30000);
}
