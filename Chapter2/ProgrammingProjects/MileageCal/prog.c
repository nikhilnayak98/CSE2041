/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - mileage Calculator
*/
#include "stdio.h"
int main()
{
	double beg,end,total,rate = 0.35,fare;
	printf("\n Enter beginning odometer reading ");
	scanf("%lf", &beg);
	printf("\n Enter ending odometer reading ");
	scanf("%lf", &end);
	total = end - beg;
	fare = rate*total;
	printf("You traveled %f miles. At $ %0.2f per mile, your reimbursement is %f",total, rate,fare);
}
