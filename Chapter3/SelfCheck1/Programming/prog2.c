/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Salary Calculator
*/
#include "stdio.h"
void main()
{
	double no_hours,hourly_rate,ns;
	printf("\n Enter number of hours worked - ");
	scanf("%lf", &no_hours);
	printf("\n Enter hourly rate - ");
	scanf("%lf", &hourly_rate);
	ns =  no_hours*hourly_rate;
	printf("\n Gross Salary - %f", ns);
}
