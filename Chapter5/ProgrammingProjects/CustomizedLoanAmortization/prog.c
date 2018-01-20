/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To create an output file containing a customized loan amortization table.
*/
#include "stdio.h"
#include "math.h"
double payment_cal(double, double, int);
void main()
{
	int n;
	double principal, annual_interest_rate;
	printf("\nEnter amount borrowed (princpal) - ");
	scanf("%lf", &principal);
	printf("\nEnter annual interest rate - ");
	scanf("%lf", &annual_interest_rate);
	printf("\nEnter number of payments - ");
	scanf("%lf", &n);
}

double payment_cal(double principle, double annual_interest, int total_payments)
{
	double payment = (((double)annual_interest / 1200) * principle)/(1 - pow((1 + annual_interest / 1200), -1 * total_payments));
	return payment; 
}

