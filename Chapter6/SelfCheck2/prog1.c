/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Sum and Average
*/
#include <stdio.h>
void sum_n_avg(double, double, double, double*, double*);
void main()
{
	double one, two, three, sum_of_3, avg_of_3;
	printf("Enter three numbers - ");
	scanf("%lf %lf %lf", &one, &two, &three);
	sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);
	printf("\nSum - %lf", sum_of_3);
	printf("\nAverage - %lf\n", avg_of_3);
}

void sum_n_avg(double one, double two, double three, double *sum_of_3, double *avg_of_3)
{
	*sum_of_3 = (one + two + three);
	*avg_of_3 = *sum_of_3 / 3.0;
}
