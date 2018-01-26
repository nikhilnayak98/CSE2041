/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To create an output file containing a customized loan amortization table.
*/
#include "stdio.h"
#include "math.h"
void main()
{
	int n, i;
	double principal, annual_interest_rate, monthly_interest_rate, monthly_payment, balance, principal_monthly, each_interest;
	printf("\nEnter amount borrowed (princpal) - ");
	scanf("%lf", &principal);
	printf("\nEnter annual interest rate - ");
	scanf("%lf", &annual_interest_rate);
	printf("\nEnter number of payments(months) - ");
	scanf("%d", &n);
	
	monthly_interest_rate = annual_interest_rate / 1200;
	monthly_payment = principal * monthly_interest_rate / (1 - 1 / pow(1 + monthly_interest_rate, n));
	
	printf("\nTotal Payment - %.2f", monthly_payment * n);

	balance = principal;
		
	printf("\nPayment %8c Interest %8c Principal %8c Balance", ' ', ' ', ' ');
	
	for(i = 0; i < n; i++) 
	{
		each_interest = monthly_interest_rate * balance;
		principal_monthly = monthly_payment - each_interest;
		balance = balance - principal_monthly;
		
		printf("\n %d %13c %.2f %13c %.2f %13c %.2f", (i + 1), ' ', each_interest, ' ', principal_monthly, ' ', balance);
	}
	printf("\nFinal Payment - %.2f\n", monthly_payment);
}
