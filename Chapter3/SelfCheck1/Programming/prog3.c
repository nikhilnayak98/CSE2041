/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Salary Calculator
*/
#include "stdio.h"
void main()
{
	double no_hours,hourly_rate,overtime,ns,es,gs,temp;
	printf("\n Enter number of hours worked - ");
	scanf("%lf", &no_hours);
	printf("\n Enter hourly rate - ");
	scanf("%lf", &hourly_rate);
	printf("\n Enter number of hours worked overtime - ");
	scanf("%lf", &overtime);
	ns =  no_hours*hourly_rate;
	temp = overtime*hourly_rate
	es = 1.5*temp;
	printf("\n Gross Salary - %f", gs);
}
